#include<stdio.h>

struct Node
{
   int data;
   struct Node *link;
};

struct Node * front = NULL;
struct Node * rear = NULL;


void main()
{
   int choice;

   printf("\n:: Queue Implementation using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: insert();break;
	 case 2: delete(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void insert()
{
    int value;
    printf("Enter the value to be insert: ");
		 scanf("%d", &value);

   struct Node *i;
   i = malloc(sizeof(struct Node));
   i->data = value;
   i -> link = NULL;
   if(front == NULL)
      front = rear = i;
   else{
      rear -> link = i;
      rear = i;
   }
   printf("\nInsertion is Success!!!\n");
}
void delete()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{

      front = front -> link;
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *i = front;
      while(i->link != NULL){
	 printf("%d--->",i->data);
	 i = i -> link;
      }
      printf("%d--->NULL\n",i->data);
   }
}
