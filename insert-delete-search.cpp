#include<stdio.h>
int m;
int insert(int z[],int m)
{	int in,j,pos,i;
		printf("\nEnter the number to insert :");
		scanf("%d",&in);
		printf("\nEnter the position :");
		scanf("%d",&j);
		pos=j-1;
	for(i=m;i>=pos;i--)
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
			for(i=0;i<m;i++)
			{
				printf("\t%d",z[i]);
			}
		
		
}
void remove(int z[],int m)
{	int j,pos,i;	
	printf("\nEnter the position to delete:");
			scanf("%d",&j);
			pos=j-1;
	for(i=0;i<m;i++)
	{
		if(i>=pos)
		z[i]=z[i+1];
	}
	printf("\nThe Array after modification :");
			for(i=0;i<m;i++)
			{
				printf("\t%d",z[i]);
			}
}
void search(int a[],int n)
{
	int i,found=0,in;
	printf("\nEnter Element to search");
	scanf("%d",&in);
	for(i=0;i<m;i++)
	{
		if(a[i]==in)
		{
			printf("the index of element is %d\n",i);
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
	
	int count=0;
	printf("enter size of array :");
	scanf("%d",&n);
	m=n;
	printf("enter elements in array :");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(count==0)
	{
	printf("\nChoose Action (1-4) :\n\t1.insert element\n\t2.delete element\n\t3.search element\n\t4.print array\n\t5.EXIT");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: m++;
			insert(a,m);
			break;
			
	case 2: m--;
			remove(a,m);
			break;
			
	case 3: search(a,m);
			break;
			
	case 4: for(i=0;i<m;i++)
			{
				printf("\t%d",a[i]);
			}
			break;
	case 5: count=1;
			break;
			
	default: printf("Invalid Option!,Choose correct Option");
	}
}
}