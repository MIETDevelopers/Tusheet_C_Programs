

#include<stdio.h>
void search(int a[],int n); //Function Declaration.
void insertion(int a[],int n);
void deletion(int a[],int n);
int main(){
	int arr[100],num=0,ch;

	printf("Enter the number of elements you want to enter in the array: ");
	scanf("%d",&num);

	printf("Enter %d elements in the array\n",num);
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}

	printf("\n*****ENTER*****\n\n");
	printf("1. for Search\n 2. for Insertion\n 3. for Deletion\n 4. To Exit this Program\n");
	scanf("%d",&ch);

	switch(ch){
		case 1:
			search(arr,num); // Function calling.
			break;

		case 2:
			insertion(arr,num);
			break;

		case 3:
			deletion(arr,num);
			break;

		case 4:
			printf("You have exited the program\n");
			break;

		default:
			printf("Invalid Choice! Please enter from the choices above.\n");		
	}
	return 0;

}

void search(int a[],int n){ //Function Defination.
	int number,re=0;
	printf("Enter the number you want to search: ");
	scanf("%d",&number);

	for(int i=0;i<n;i++){
		 if (a[i] == number){
    		printf("%d is present at location %d.\n", number, i+1);
        }
 	else{
    		printf("%d isn't present in the array.\n", number);

		}
	}
}

void insertion(int a[],int n){
	int pos,value;

	printf("Enter the position at which you want to insert the value: ");
	scanf("%d",&pos);

	printf("Enter the value you want to enter at that position: ");
	scanf("%d",&value);

	printf("\n****Before Insertion****\n\n");

	printf("The elements in the array are\n");

	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

	for(int i=n-1;i>=pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1] = value;

	printf("\n****After Insertion****\n\n");

	printf("The elements in the array are\n");
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}	
}

void deletion(int a[],int n){
	int pos;

	printf("Enter the position at which you want to delete a element\n");
	scanf("%d",&pos);

	printf("\n****Before Deletion****\n\n");

	printf("The elements in the array are\n");
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

	for(int i=pos-1;i>n;i++){
		a[i] = a[i+1];
	}

	printf("*****Afer Deletion*****\n");

    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
