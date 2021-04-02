#include <stdio.h>

int main()
{
  int Number, Reminder, Sum=0;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);//This will scan(read)the number enetered by the user.

  while(Number > 0)//Using while loop.
  {
    //This is the formula to calculate the sum of digits.
     Reminder = Number % 10;
     Sum = Sum+ Reminder;
     Number = Number / 10;
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);

  return 0;
}
