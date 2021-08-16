#include<stdio.h>
#include<stdlib.h>
int main(){
    int array[20], PositionOfInsert = 11, i, c, n, X, value, PositionOfDelete, SearchElement, found;
    char operator;
 do{
    printf("Please select the desiered function to be performed:\n ----------------\n 1.Insert\n 2.Delete \n 3.Search\n\n X.Quit\n  ----------------\n Enter your option: ");
    scanf("%c", &operator);
    switch(operator)
    {
        case '1':
                printf("Enter 10 elements to array.\n");
                    for(c = 0; c < 10; c++)
                        
                scanf("%d", &array[c]);
                    printf("Enter the value to insert at end: ");
                    scanf("%d", &value);

                        for(c = 10-1; c >= PositionOfInsert-1; c--)
                            array[c+1] = array[c];
                        array[PositionOfInsert - 1] = value;
                        printf("Resultant array is: ");
                            for(c = 0; c <= 10; c++)
                                printf("%d  ", array[c]);
                            printf("\n");
            break;
        case '2':
                printf("Enter 10 elements to array.\n");
                    for(c = 0; c < 10; c++)
                scanf("%d", &array[c]);
                    printf("Enter the location of element you want to Delete: ");
                    scanf("%d", &PositionOfDelete);
                        for (c = PositionOfDelete - 1; c < 10 - 1; c++)
                            array[c] = array[c+1];
                        printf("Resultant array:");
                          for (c = 0; c < 9; c++)
                             printf("%d ", array[c]);
                             printf("\n");
            break;

        case '3':
                printf("Enter 10 elements to array.\n");
                    for(c = 0; c < 10; c++)
                        
                scanf("%d", &array[c]);
                printf("Enter value of element to search: ");
                scanf("%d", &SearchElement);

                found = 0;

                for(c = 0; c < 10; c++)
                {
                    if(array[c] == SearchElement)
                    {
                        found = 1;
                        break;
                    }
                }
                if(found == 1)
                {
                    printf("The element is at %d\n", c+1);
                }
                else
                {
                   printf("Element not found!"); 
                }
            break;
        case 'X':
        printf("Press 0 to exit!\n");
        scanf("%d");
            exit(0);
            break;
    default: printf("\nError encountered by the input values!\n");
             break;
    }
} while (c != X);
    return 0;
}
