#include <stdio.h>

int size;
int stack[100];
int top = -1;

void push(int x)
{
    if (top == size - 1)
    {
        printf("Stack is Full");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

int pop()
{
    if (top == -1)
        printf("Stack is Empty");
    else
    {
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    
    printf("Enter size of the stack: ");
    scanf("%d", &size);
    int x;
    top = -1;
    for (;;)
    {
        printf("\n\n");
        printf("Press 1 to push elements in the stack.\n");
        printf("Press 2 to pop elements from the stack.\n");
        printf("Press 3 to display elements in the stack.\n");
        printf("Press 0 to exit the program.\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter the element to push in the stack: ");
            int a;
            scanf("%d", &a);
            push(a);
            break;

        case 2:
            pop();
            break;

        case 3:
            printf("Stack is: ");
            display();
            break;

        case 0:
            printf("Thanks for using this program.");
            return 0;

        default:
            printf("Invalid response!");
            break;
    
    }
}
}