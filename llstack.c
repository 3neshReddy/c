#include <stdio.h>
void push();
void pop();
void display();

struct node
{
int data;
struct node *link;
};

struct node *head;

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
    struct node *i = malloc(sizeof(struct node));
    {
        printf("Enter the value:");
        scanf("%d",&val);

            i->data = val;
            i->link = head;
            head=i;
            printf("Item pushed");

    }
}

void pop()
{
    if (head == NULL)
    {
        printf("********** stack is empty : Underflow********");
    }
    else
    {
        head = head->link;
        printf("value deleted");

    }
}
void display()
{
    int i;
    struct node *start;
    start=head;
    printf("Printing Stack elements \n");
    while(start!=NULL)
        {
            printf("%d\n",start->data);
            start = start->link;
        }

}
