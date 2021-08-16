#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
  
int main(){
    struct employee e1,e2,e3;

    printf("Enter the value of code of the employee 1: ");
    scanf("%d", &e1.code);
    printf("Enter the salary of employee 1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name of employee 1: ");
    scanf("%s", e1.name);

    printf("Enter the code of the employee 2: ");
    scanf("%d", &e2.code);
    printf("Enter the salary of employee 2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name of employee 2: ");
    scanf("%s", e2.name);

    printf("Enter the code of the employee 3: ");
    scanf("%d", &e3.code);
    printf("Enter the salary of employee 3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name of employee 3: ");
    scanf("%s", e3.name);

    return 0;
}
