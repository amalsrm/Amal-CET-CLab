#include<stdio.h>
#include<stdlib.h>
void insert(int val,int stack[],int top,int n)
{
    if (top<5)
    {
      top++;
      stack[top]=val;  
    }
    else
    {
        printf("Stack is full");
    }
}
void show(int top,int stack[])
{
    int temp=top;
    if(temp==-1)
    {
	printf("Stack is empty");
    }
    while (temp!=-1)
    {
        printf("%d\n",stack[temp]);
        temp--;
    } 
}
void delete(int top,int stack[])
{
    if (top!=-1)
    {
        top--;
    }
    else
    {
        printf("Stack is empty");
    }
    
}
void main()
{
    int stack[6],top=-1,value,val,n,c;
    printf("Enter the size of the stack: \n");
    scanf("%d",&n);
    printf("Enter the values to the stack: \n");
    for (int i = 0; i < n; i++)
    {
        while (top<n-1)
        {
            top++;
            scanf("%d",&value);
            stack[top]=value;
        }
        
    }
    show(top,stack);
    while(1)
    {
    printf("Enter the choice: \n");
    printf("1.insertion\n2.deletion\n3.display\n4.exit\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("Enter the value to insert:\n");
        scanf("%d",&val);
        insert(val,stack,top,n);
        top++;
        show(top,stack);
        break;
    case 2:delete(top,stack);
        top--;
        show(top,stack);
        break;
    case 3:show(top,stack);
        break;
    case 4:exit(1);
	break;
    default:
        break;
    }
    }
}
