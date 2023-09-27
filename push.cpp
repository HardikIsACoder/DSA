#include<iostream>
using namespace std;
int top=-1;
int size;
int stack[100];
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

int main(){
    cin>>size;
    push(2);
}