#include<stdio.h>
int insert(int z[],int x,int y,int n)
{
	int i;
	for(i=n+1;i>=y;i--)
	{	
		if(i==y)
		{
			z[i]=x;
		}
		else
		{
			z[i]=z[i-1];
		}
	}
}
int main()
{
	int i,j,n,pos,in;
	printf("enter size of array :");
	scanf("%d",&n);
	printf("enter elements in array :");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Array before modification :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the number to insert :");
	scanf("%d",&in);
	printf("\nEnter the position :");
	scanf("%d",&j);
	pos=j-1;
	insert(a,in,pos,n);
	printf("\nThe Array after modification :");
	for(i=0;i<n+1;i++)
	{
		printf("\t%d",a[i]);
	}
}
