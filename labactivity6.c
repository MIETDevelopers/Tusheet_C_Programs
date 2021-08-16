#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int queue_arr[MAX]; 
int front = 0;
int rear = 0;

void enqueue(int val){
    if(rear == MAX-1){
        printf("Queue is full");
    }
    else{
        queue_arr[rear] = val;
        rear++;
    }
}

void dequeue(){
    if(front == rear){
        printf("No elements left in the queue\n");
        return;
    }
    else{
        printf("Deleted element is %d",queue_arr[front]);
        for(int i=0;i<rear-1;i++){
            queue_arr[i] = queue_arr[i+1];
        }
    }
}

void displayqueue(){
    if(front == rear){
        printf("Queue id empty!\n");
    }
    else{
        printf("Queue elements are:\n");
        for(int i=0;i<rear;i++){
            printf("%d,",queue_arr[i]);
        }
    }
}

int main(){
    int ch,ele;
    do{
        printf("\tEnter your choice");
        printf("\nEnter 1. to insert a element in the queue\nEnter 2. to delete a element from the queue\nEnter 3. to display the elements in the queue\nEnter 4. to exit the program\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                printf("Enter the element you want to enter in the queue\n");
                scanf("%d",&ele);
                enqueue(ele);
                break;
            }
            case 2:{
                dequeue();
            }
            case 3:{
                displayqueue();
            }
            case 4:{
                printf("You have sucesfully exited the program\n");
                exit(0);
                break;
            }
            default:
                printf("Please enter a valid choice!\n");
        }
    }while(ch != 4);
    return 0;
}