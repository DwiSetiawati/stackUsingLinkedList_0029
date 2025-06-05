#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    Node *top; // pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // initialize the stack with a null top pointer
    }

    // push operation: insert an element into the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. set the next pointer of the new node to the current top node
        top = newNode;              // 4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // IsEmpty operation: check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // return true if the top pointer is NULL, indicating an empty stack
    }

    // Pop operation: remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; // if the stack is empty, print a message and return
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // update the top pointer to the next node
    }
};