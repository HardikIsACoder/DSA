#include <iostream>
using namespace std;

int rear = -1, front = -1, size = 30;
int arr[30];

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue is: \n";
    for (int j = 1; j <= 3; j++)
    {
        for (int i = front; i < rear + 1; i++)
        {
            if (j == 1)
            {
                cout << "F=" << front << " ";
            }
            if (j == 2)
            {
                cout << "R=" << i << " ";
            }
            if(j==3)
            cout << " "<<arr[i] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty.\n";
        return;
    }
    else
    {
        cout << "Element deleted from the queue is: " << arr[front];
        front++;
    }
}

void enqueue()
{
    if (rear == size - 1)
    {
        cout << "Overflow\n";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        cout << "Enter element to insert in the queue: ";
        cin >> arr[rear];
        cout << endl;
    }
}

int main()
{
    cout << "Enter size of the queue: ";
    cin >> size;

    for (;;)
    {
        cout << "Press 1 to insert element in the queue.\n";
        cout << "Press 2 to delete element from the queue.\n";
        cout << "Press 3 to display all the elements in the queue.\n";
        cout << "Press 0 to exit the program.\n";
        int a;
        cin >> a;

        switch (a)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 0:
            return 0;
        default:
            cout << "Enter valid value.\n";
        }
        cout << endl;
    }
}