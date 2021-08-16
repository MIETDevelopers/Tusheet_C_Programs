
#include<stdio.h>

int main()

{

    int A,B,C,D,E,F,G,Result;

    printf("enter value of A : ");
    scanf("%d",& A);

    printf("enter value of B : ");
    scanf("%d",& B);

    printf("enter value of C : ");
    scanf("%d",& C);

    printf("enter value of D : ");
    scanf("%d",& D);

    printf("enter value of E : ");
    scanf("%d",& E);

    

    Result=((A -(((B / C) * D) + E)));

    printf("after evaluation Result is :%d ",Result);

}
