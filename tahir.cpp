#include<stdio.h>

void readFile("product.txt");
void insertion();
void deletion(int);
void search(int);
void traverse();

struct product{
	int product_id;
	char product_name;
	float product_price;
	float gst;
};

struct product product_list[100];
int count=0;

int main()
{
	int choice,pos,id;
	readFile("product.txt");
	
	while(1)
	{
		printf("\n1.Add Product\n2.Delete Product\n3.Search\n4.Display List\n5.Save in File\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				    insertion();
			case 2:
				    printf("Enter position to delete:");
				    scanf("%d",&pos);
				    pos-=1;
				    deletion(pos);
		    case 3:
		    	    printf("Enter product ID delete:");
				    scanf("%d",&id);
				    search(id);
			case 4:
					traverse();
		}
	}
}

void readFile("product.txt")
{
	FILE *f1;
	*f1=fopen("product.txt","r");
	for(count=0;count<100;count++)
	{
		if(fscanf("%d %s %f %f",&product_list[count].product_id,product_list[count].product_name,
		                        &product_list[count].product_price,&product_list[count].gst)!=4)
		{
			break;
		} 
	}
	fclose(f1);
}

void insertion()
{
	if(count<100)
	{
	printf("Enter product ID:");
	scanf("%d",&product_list[count].product_id);
	printf("Enter product ID:");
	scanf("%s",product_list[count].product_name);
	printf("Enter product ID:");
	scanf("%f",&product_list[count].product_price);
	printf("Enter product ID:");
	scanf("%f",&product_list[count].gst);
    }
	else
		printf("List is full\n");
}

void deletion(int pos)
{
	int i;
    if(count!=0)
    {
    	for(i=pos;i<count;i++)
    	{
    		product_list[i]=product_list[i+1];	
		}
		count--;
	}
	else
	    printf("List is empty\n");
}

void search(int id)
{
	int i;
	if(count!=0)
	{
		for(i=0;i<count;i++)
		{
			if(id==product_list[i].product_id)
			{
			 printf("Id= %d\nName= %s\nPrice= %f\ndGST= %f\n",product_list[i].product_id,product_list[i].product_name,
		                                                      product_list[i].product_price,product_list[i].gst);
			}
			else
				printf("List is empty\n");
		}
	}
}

void traverse()
{
	int i;
	for(i=0;i,i<count;i++)
	{
		printf("PRODUCT %d\n",i+1);
		printf("Id= %d\nName= %s\nPrice= %f\ndGST= %f\n",product_list[i].product_id,product_list[i].product_name,
		                                                      product_list[i].product_price,product_list[i].gst);
	}
}