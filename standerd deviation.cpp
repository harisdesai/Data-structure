#include<stdio.h>
#include<math.h>
int main()
{
	int a[50],n,i;
	float var,stdvar,sum=0;
	printf("Enter Value of N :");
	scanf("%d",&n);
	printf("Enter %d numbers :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	float avg=(float)sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+(avg-a[i])*(avg-a[i]);
	}
	avg=(float)sum/n;
	var=avg;
	printf("the varience is %f",var);
	stdvar=sqrt(var);
	printf("\nthe standerd daviation is %f",stdvar);
	
}
