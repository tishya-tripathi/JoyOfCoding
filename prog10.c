#include<stdio.h>
#define SIZE 5

struct book
{
	int book_ID;
	char book_Name[50];
	char book_Author[50];
	float book_Price;
}

struct stack
{
	int top;
	struct book bk[SIZE];
}

struct stack s;

void push();
void pop();
void display();

void push()
{
	if(s.top == SIZE-1)
	{
		printf("Stack is FULL\n");
		return;
	}
	else
	{
		printf("Enter Book ID, Name, Author and Price\n");
		s.top++;
		scanf("%d %s %s %s %f", );
	}
}

void pop()
{
	if(s.top == -1)
	{
		printf("Stack is EMPTY\n");
		return;
	}
}


void display()
{
	if(s.top == -1)
	{
		printf("Stack is EMPTY\n");
		return;
	}
}

int main()
{
	s.top = -1;
	int ch;
	while(1)
	{
		printf("1 Insert Book\n");
		printf("2 Delete Book\n");
		printf("3 Display Book\n");
		printf("4 EXIT\n");
		printf("Enter Your Choice\n");
		
		scanf("%d", &ch);

		switch(ch)
		{
		case 1:
		push();
		break;

		case 2:
		pop();
		break;

		case 3:
		display();
		break;

		case 4:
		display();
		break;

		default: printf("Invalid Choice. Try Again\n");
	}
}
