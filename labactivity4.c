#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define MAX_opr 50
#define MAX_opnd 50

int stack[20], top = -1, i, n1, n2, n3, num, A, B;

//Infix Starts

int top_opnd = -1;
int top_opr = -1;
int top_operator_precedence = 0;
int operand_stack[20];
char operator_stack[10];

void push_opnd(int);
void push_opr(char);
int pop_opnd();
char pop_opr();
void operand_display();
void operator_display();
int evaluation();
int precedance(char);

int infix_main()
{
    int number;
    char expr[20], digit;
    printf("Enter a expression-> ");
    scanf("%[^\n]s", expr);
    printf("Expression = %s\n", expr);
    for (int i = 0; expr[i] != '\0'; i++)
    {
        digit = expr[i];
        if (isdigit(digit))
        {
            number = digit - '0';
            push_opnd(number);
        }
        else
        {
            push_opr(digit);
        }
    }
    operand_display();
    operator_display();
    printf("\nResult is %d\n", evaluation());
}
void push_opnd(int operand)
{
    if (top_opnd == MAX_opnd - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top_opnd = top_opnd + 1;
        operand_stack[top_opnd] = operand;
    }
}
void push_opr(char digit)
{
    int operand_1, operand_2, result, precedance_op;
    char operator, operator1;
    if (top_opr == MAX_opr - 1)
    {
        printf("Stack Overflow");
    }
    else if (top_opr == -1)
    {
        top_operator_precedence = precedance(digit);
        top_opr = top_opr + 1;
        operator_stack[top_opr] = digit;
    }
    else
    {
        precedance_op = precedance(digit);
        if (precedance_op > top_operator_precedence)
        {
            top_opr = top_opr + 1;
            operator_stack[top_opr] = digit;
        }
        else
        {
            operator= pop_opr();
            operand_2 = pop_opnd();
            operand_1 = pop_opnd();
            if (operator== '+')
            {
                result = operand_1 + operand_2;
            }
            else if (operator== '-')
            {
                result = operand_1 - operand_2;
            }
            else if (operator== '*')
            {
                result = operand_1 * operand_2;
            }
            else if (operator== '/')
            {
                result = operand_1 / operand_2;
            }
            else
            {
                printf("Undefined Operator\n");
            }
            push_opnd(result);
            top_opr = top_opr + 1;
            operator_stack[top_opr] = digit;
        }
    }
}
int precedance(char digit)
{
    if (digit == '+' || digit == '-')
    {
        return 1;
    }
    else if (digit == '*' || digit == '/')
    {
        return 2;
    }
    return -1;
}
int pop_opnd()
{
    int operand;
    if (top_opnd == -1)
    {
        printf("No operand in stack\n");
        exit(0);
    }
    else
    {
        operand = operand_stack[top_opnd];
        top_opnd--;
    }
    return operand;
}
char pop_opr()
{
    char operator;
    if (top_opr == -1)
    {
        printf("No operator in stack\n");
        exit(0);
    }
    else
    {
        operator= operator_stack[top_opr];
        top_opr--;
    }
    return operator;
}
void operand_display()
{
    if (top_opnd == -1)
    {
        printf("No operand in Stack\n");
    }
    else
    {
        printf("Operands in the stack are\n");
        for (int i = top_opnd; i > -1; i--)
        {
            printf("%d\t", operand_stack[i]);
        }
        printf("\n");
    }
}
void operator_display()
{
    if (top_opr == -1)
    {
        printf("No operator in Stack\n");
    }
    else
    {
        printf("Operator in the stack are\n");
        for (int i = top_opr; i > -1; i--)
        {
            printf("%c\t", operator_stack[i]);
        }
        printf("\n");
    }
}
int evaluation()
{
    int operand_1, operand_2, result;
    char operator;
    if (top_opnd == -1)
    {
        printf("no more operator in stack");
        exit(0);
    }
    else
    {
        for (int i = top_opr; top_opr > -1; i++)
        {
            operator= pop_opr();
            operand_2 = pop_opnd();
            operand_1 = pop_opnd();
            if (operator== '+')
            {
                result = operand_1 + operand_2;
            }
            else if (operator== '-')
            {
                result = operand_1 - operand_2;
            }
            else if (operator== '*')
            {
                result = operand_1 * operand_2;
            }
            else if (operator== '/')
            {
                result = operand_1 / operand_2;
            }
            else
            {
                printf("Undefined Operator\n");
            }
            push_opnd(result);
        }
    }
    return operand_stack[0];
}
//Infix Ends

//prefix starts
void push_pre(int val)
{
    top = top + 1;
    stack[top] = val;
}

int pop_pre()
{
    int val;
    val = stack[top];
    top--;
    return val;
}

int pre_main()
{
    char exp[20];
    int opnd;
    printf("Enter the prefix expression you want to evaluate -> ");
    scanf("%s", exp);

    for (i = strlen(exp) - 1; exp[i] > -1; i--)
    {
        if (isdigit(exp[i]))
        {
            opnd = exp[i] - '0';
            push_pre(opnd);
        }
        else
        {
            n1 = pop_pre();
            n2 = pop_pre();
            switch (exp[i])
            {

            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push_pre(n3);
        }
        exp[i]++;
    }
    printf("Result is %d", pop_pre());

    return 0;
}
//prefix ends.

//postfix starts.

void push_post(int val)
{
    top = top + 1;
    stack[top] = val;
}

int pop_post()
{
    return stack[top--];
}

int PostfixMain()
{
    char exp[20];
    char *ch;
    ;
    printf("Enter the expression: ");
    scanf("%s", exp);
    ch = exp;
    while (*ch != '\0')
    {
        if (isdigit(*ch))
        {
            num = *ch - '0';
            push_post(num);
        }
        else
        {
            n1 = pop_post();
            n2 = pop_post();
            switch (*ch)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push_post(n3);
        }
        ch++;
    }
    printf("\nResult is: %d", pop_post());
    return 0;
}
//End of Postfix.

int main()
{
    int inpChoice;
    do
    {
        printf("Choose your mode of Operation\n ----- \n 1.Infix Evaluation. \n 2.Prefix Evaluation. \n 3.Postfix Evaluation. \n 4.Exit\n -----\n Choose an Option: ");
        scanf("%d", &inpChoice);
        switch (inpChoice)
        {
        case 1:
            infix_main();
            break;
        case 2:
            pre_main();
            break;
        case 3:
            PostfixMain();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("\nInvalid option! Please select a valid operation.");
        }
    } while (inpChoice != 4);
}