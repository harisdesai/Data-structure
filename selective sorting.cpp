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
				for(i=j+1;i<=n;i++)
				{
					if(a[j]>a[i])
				{	
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
