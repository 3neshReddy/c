#include <stdio.h>
int a[10],top=-1;
int n;
void push();
void pop();
void display();
void main ()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d",&n);
    int choice = 0;
    while(choice != 4)
    {
        printf("\n----------------------------------------------\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice  :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("************Please Enter valid choice*************** ");
            }
        };
    }
}

void push ()
{
    int val;
    if (top == n-1 )
    printf("\n ************Overflow, select another option*************");
    else
    {
        printf("Enter the value?");
        scanf("%d",&val);
        top = top +1;
        a[top] = val;
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

        printf("%d,",a[i]);

    }
    if(top == -1)
    {
        printf("OOPS!! stack is empty");
    }
}
