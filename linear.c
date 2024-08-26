#include<stdio.h>
void search(int a[],int tar,int n)
{ int i,j,found=0;
  for(i=0;i<n;i++)
  {
  	if(a[i]==tar)
  	{
  		printf("The Index of elements is %d\n",i);
  		found=1;
  	}
  }
	if(found==0)
  	{
  		printf("Element Not Found\n");
  	}
}
int main()
{
  int a[50],n,i,tar;
  printf("Enter Size Of Array :");
  scanf("%d",&n);
  printf("Enter Elements In Array :");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  printf("Enter Target :");
  scanf("%d",&tar);
  search(a,tar,n);
}