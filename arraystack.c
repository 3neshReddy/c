#include <stdio.h>
#define SIZE 10
int stack[SIZE],top=-1;

void push();
void pop();
void display();

void main()
{
   int  choice;

   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1:push();break;
	 case 2: pop();break;
	 case 3: display();break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}

void push ()
{
    int val;
    if (top == SIZE-1 )
    printf("\n ************Overflow, select another option*************");
    else
    {
        printf("Enter the value?");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
    }
}

void pop ()
{
    if(top == -1)
    printf("********** stack is empty : Underflow********");
    else
    top = top -1;
}
void display()
{
    printf("************stack elements are*************** \n ");
    for (int i=top;i>=0;i--)
    {
        printf("%d,",stack[i]);
    }
    if(top == -1)
    {
        printf("OOPS!! a is empty");
    }
}
