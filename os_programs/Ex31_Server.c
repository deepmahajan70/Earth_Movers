//TWO programs
 //Q31. Reads what is written to a named pipe & writes it tostandard output.
// Q32. Write an informative message to a named pipe
// server
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
//#include "restart.h"
//#include <errno.h>
//#include <unistd.h>
#define BLKSIZE 1024
#define FIFOARG 1
#define FIFO_PERMS (S_IRWXU | S_IWGRP| S_IWOTH)
int main (int argc, char *argv[]) {
int requestfd;
if (argc != 2) { /* name of server fifo is passed on the command
line */
fprintf(stderr, "Usage: %s fifoname > logfile\n", argv[0]);
return 1;
}
/* create a named pipe to handle incoming requests */
if ((mkfifo(argv[FIFOARG], FIFO_PERMS) == -1) && (errno != EEXIST)) {
perror("Server failed to create a FIFO");
return 1;
}
/* open a read/write communication endpoint to the
pipe */
if ((requestfd = open(argv[FIFOARG], O_RDWR)) == -1) {
perror("Server failed to open its FIFO");
return 1;
}
copyfile(requestfd, STDOUT_FILENO);
return 1;
}
int copyfile(int fromfd, int tofd) {
char *bp;
char buf[BLKSIZE];
int bytesread;
int byteswritten = 0;
int totalbytes = 0;
for (
;
;
) {while (((bytesread = read(fromfd, buf, BLKSIZE)) == -1) &&
(errno == EINTR)) ;
/* handle interruption by
signal */
if (bytesread <= 0)
/* real error or end-of-file on
fromfd */
break;
bp = buf;
while (bytesread > 0) {
while(((byteswritten = write(tofd, bp, bytesread)) == -1 ) &&
(errno == EINTR)) ;
/* handle interruption by
signal */
if (byteswritten < 0)
/* real error ontofd */
break;
totalbytes += byteswritten;
bytesread -= byteswritten;
bp += byteswritten;
}
if (byteswritten == -1)
/* real error on
tofd */
break;
}
return totalbytes;
}
