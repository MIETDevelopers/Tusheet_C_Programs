#include<stdio.h>
#include<stdlib.h>
int *arr;
int demo_malloc(int); 
int demo_realloc(int);
int demo_calloc(int);
int main()
{	int size,size2,size3;
	char ch;
	printf("Enter the size of the array --> ");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(arr));
	demo_malloc(size);
	arr=(int*)realloc(arr,size2*sizeof(arr));
	printf("\n\n");
	printf("Enter the new size of the array --> ");
	scanf("%d",&size2);
	demo_realloc(size2);
	printf("\n\n");
	printf("Enter one more size of the array --> ");
	scanf("%d",&size3);
	arr=(int*)calloc(size3,sizeof(arr));
	demo_calloc(size3);
}
int demo_malloc(int size)
{
	int i;
	printf("Enter %d elements in the array --> ",size);
	for(i=0;i<size;i++)
	{
		scanf(" %d",(arr+i));
	}
	printf("Elements in the array are --> ");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(arr+i));
	}
	free(arr);
	arr=NULL;
}
int demo_realloc(int size2)
{
	int j;
	printf("Enter %d elements in the array --> ",size2);		
	for(j=0;j<size2;j++)
	{
		scanf("%d",(arr+j));
	}
	printf("Elements of new array are --> ");
	for(j=0;j<size2;j++)
	{
		printf("%d ",*(arr+j));
	}
	free(arr);
	arr=NULL;
}
int demo_calloc(int size3)
{
	int k;
	printf("Enter %d elements in the array --> ",size3);
	for(k=0;k<size3;k++)
	{
		scanf("%d",(arr+k));
	}
	printf("Elements in the array are --> ");
	for(k=0;k<size3;k++)
	{
		printf("%d ",*(arr+k));
	}
	free(arr);
	arr=NULL;
}
