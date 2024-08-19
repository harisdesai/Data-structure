#include<stdio.h>
int insert(int z[],int n)
{	int in,j,pos,i;
		printf("\nEnter the number to insert :");
		scanf("%d",&in);
		printf("\nEnter the position :");
		scanf("%d",&j);
		pos=j-1;
	for(i=n+1;i>=pos;i--)
	{	
		if(i==pos)
		{
			z[i]=in;
		}
		else
		{
			z[i]=z[i-1];
		}
	}
	printf("\nThe Array after modification :");
			for(i=0;i<n+1;i++)
			{
				printf("\t%d",z[i]);
			}
}
void remove(int z[],int n)
{	int j,pos,i;	
	printf("\nEnter the position to delete:");
			scanf("%d",&j);
			pos=j-1;
	for(i=0;i<n;i++)
	{
		if(i>=pos)
		z[i]=z[i+1];
	}
	printf("\nThe Array after modification :");
			for(i=0;i<n-1;i++)
			{
				printf("\t%d",z[i]);
			}
}
void search(int a[],int n)
{
	int i,found=0,in;
	printf("\nEnter Element to search");
	scanf("%d",&in);
	for(i=0;i<n;i++)
	{
		if(a[i]==in)
		{
			printf("the index of element is %d",i);
			found=1;			
		}
	}
	if(found==0)
	{
		printf("Element Not Found");
	
	}
}
int main()
{
	int i,j,n,pos,in,choice;
	printf("enter size of array :");
	scanf("%d",&n);
	printf("enter elements in array :");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Choose Action (1-4) :\n\t1.insert element\n\t2.delete element\n\t3.search element\n\t4.print array");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: insert(a,n);
			break;
			
	case 2: remove(a,n);
			break;
			
	case 3: search(a,n);
			break;
			
	case 4: for(i=0;i<n;i++)
			{
				printf("\t%d",a[i]);
			}
			break;
			
	default: printf("Invalid Option!,Choose correct Option");
	}
}
