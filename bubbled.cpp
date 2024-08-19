#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter value of N :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m=n;
	
		for(j=0;j<m;j++)
	{
			for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
