#include<stdio.h>
int search(int a[],int tar,int n)
{ 
	int mid,low,high,i,found;
	low=0;
	high=n-1;
	while(low<=high)
	{	
		mid=(low+high)/2;
		if(a[mid]==tar)
		{
		printf("The index is :%d",mid);
		found=1;
		}
		if(a[mid]>tar)
		high=mid-1;
		else
		low=mid+1;
		
	}
	return -1;
		
}
int main()
{
  int a[50],n,i,tar,j;
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