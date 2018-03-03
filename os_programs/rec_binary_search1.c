//Program for Binary Search using Recursion
#include<stdio.h>
int binary(int a[],int,int,int);
int main()
{
 int a[20];
 int i,n,f,s,e,m;
 printf("\n How many elements ?");
 scanf("%d",&n);
 for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
 printf("\n Which Elements ?");
 scanf("%d",&f);
 s=0;
 e=n-1;
 m=binary(a,s,e,f);
 if(m!=-1)
 printf("\n Element found at %d",m);
 return 0;
}

int binary(int *a,int start,int end,int ele)
{
 int res;
 int mid=(start+end)/2;
 if (start <= end)
 {
 if(a[mid]==ele)
   {return mid;}
 else if(a[mid]>ele)
    {
     end=mid-1;
     res=binary(a,start,end,ele);
    }
 else if(a[mid] < ele)
    {
     start=mid+1;
     res=binary(a,start,end,ele);
    }
 }
 else
    {
     printf("\n Element Not found ");
     res=-1;
    }
 return res;
}
