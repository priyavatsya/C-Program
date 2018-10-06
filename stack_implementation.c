/*
// [implementation of stack using array]

#include <stdio.h>
#include <stdlib.h>
#define maxsize 10

int stack[maxsize];
void push();
void pop();
void display();
int top = -1;

void main()
{
    int i;
    while(1)
    {
        printf("Enter your choice:\n1-Insert\n2-Delete\n3-Display\n4-Quit\n");
        scanf("%d",&i);
        switch (i)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            case 4:exit;
            default:printf("Wrong choice.");
        }
    }
}

void push()
{
    int v;
    printf("Enter element:\n");
    scanf("%d",&v);
    if (top == maxsize - 1)
    {
        printf("Overflow");
        return;
    }
    else
    {
        top = top + 1;
        stack[top]=v;
    }
}

void pop()
{
    if (top == -1)
        printf("Stack is empty.");
    else
    {
        printf("Deleted element is %d.",stack[top]);
        top = top - 1;
    }
}

void display() {
    int i = 0;
    if (top == -1)
        printf("Stack is empty.");
    else {
        printf("%d\n\n", stack[i]);
    }
}

*/