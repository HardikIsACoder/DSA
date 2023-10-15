#include <iostream>
using namespace std;

// Step-1: Defining a node using structure
struct node
{
    int data;
    node *next;
};

// Step-2: Initialising nodes
node *head;
node *one = NULL;
node *two = NULL;
node *three = NULL;
node *four = NULL;
node *five = NULL;
node *six = NULL;

int main()
{
    // Step-3: Allocating memory of same size as the struct node
    one = (node *)malloc(sizeof(node));
    two = (node *)malloc(sizeof(node));
    three = (node *)malloc(sizeof(node));
    four = (node *)malloc(sizeof(node));
    five = (node *)malloc(sizeof(node));
    six = (node *)malloc(sizeof(node));

    // Step-4: Checking for succesfull memory allocation.
    if (one == NULL || two == NULL || three == NULL || four == NULL || five == NULL || six == NULL)
        cout << "Malloc Failure\n";

    // Step-5: Assigning data values.
    // one->data = 4;
    // two->data = 5;
    // three->data = 6;
    // four->data = 7;
    // five->data = 9;
    // six->data = 10;

    // Taking input.
    cout << "Enter 6 integers:\n";
    int arr[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    // for(i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }

    // Step-6: Linking the nodes.
    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    // Assigning data values into node entered by the user.
    node *current1 = head;
    i = 0;
    while (current1 != NULL && i < 6)
    {
        current1->data = arr[i];
        i++;
        current1 = current1->next;
    }
    free(current1);

    // Step-7:Displaying the linked list
    cout << "Before reversing:\n";
    node *current2 = head;
    while (current2 != NULL)
    {
        cout << current2->data << "->";
        current2 = current2->next;
    }
    cout << "NULL\n";

    // Reversing the linked list.
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    node *newHead = prev;

    // Displaying the reversed linked list.
    cout << "After reversing:\n";
    current1 = newHead;
    while (current1 != NULL)
    {
        cout << current1->data << "->";
        current1 = current1->next;
    }
    cout << "NULL\n";

    // Step-8: Freeing the allocated memory.
    free(one);
    free(two);
    free(three);
    free(four);
    free(five);
    free(six);
    free(current2);
    free(prev);
    free(curr);
    free(next);
    free(current1);

    // cout<<endl<<one;

    return 0;
}