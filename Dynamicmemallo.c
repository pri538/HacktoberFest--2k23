#include<stdio.h>
#include<malloc.h>

void sort(int *a,int n);
main()
{
	int *s,i,num;
	printf("How Many Numbers?\n");
	scanf("%d",&num);
	
	s = (int *)malloc(num* sizeof(int));
	if(s==NULL)
	{
		printf("Error in Allocation\n");
		exit (1);
	}
	printf("Enter the Numbers:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",s);
		s++;
	}
	s =s-num;
	sort(s,num);
	printf("Sorted data\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",*s);
		s++;
	}
	
}
void sort(int*a, int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp = *(a+i);
				*(a+i)= *(a+j);
				*(a+j)= temp;
			}
		}
	}
}
