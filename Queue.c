#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void traverse();
int rear=-1;
int front=-1;
int queue[10];
int main()
{
int choice;
while (1)
{
printf("1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
traverse();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
void insert()
{
    int val;
    if (rear>=9)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (front<=rear)
        {
            if(front==-1)
            {
             front=0;
            }
            rear++;
            printf("Enter the value to insert: \n");
            scanf("%d",&val);
            queue[rear]=val;
        }
        
    }
}
void delete()
{
    if (front==-1||front>rear)
    {
        printf("Queue is empty:\n");
        return;
    }
    else
    {
        if (front<=rear)
        {
            front++;

        }
    }
}
void traverse()
{
    int i;
    if (rear==-1||front>rear)
    {
        printf("Queue is empty: \n");
    }
    else
    {
        for ( i = front; i <=rear; i++)
        {
            printf("%d\n",queue[i]);
        }
        
    }
}
