#include<stdio.h>
int main ()
{
	struct books
	{
		char title[15];
		char author[15];
		int price;
	};

	struct books book1;
	printf("Enter Book 1 title :\n");
	scanf("%s",&book1.title); 
	printf("Enter Book 1 author:\n");
	scanf("%s",&book1.author);
	printf("Enter Book price 1 prcice:\n");
	scanf("%d" , &book1.price);

	/* print Book1 info */
	printf("Book 1 title : %s\n", book1.title );
	printf("Book 1 author :%s\n", book1.author);
	printf("Book 1 subject : %d\n",book1.price);
}
	