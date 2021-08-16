// C program to illustrate
//call by value
#include<stdio.h>

// Function Prototype
 void swapx(int x,int y);


 // Main function
 int main()
 {
 	int a=20,b=30;

 	// Pass by values
 	swapx(a,b);

 	printf("a=%d b=%d\n", a,b);

 	return 0;
}

// Swap functions that always swap
// two values
void swapx(int x , int y)
{
	int t;

	t = x;
	x = y;
	y = t;

	printf("x=%d y=%d\n", x,y);
}