#include <iostream>
#include <cstdlib>
using namespace std;

// Define the default capacity of a queue
#define SIZE 1000

// A class to store a queue
class Queue
{
    int *arr;     // array to store queue elements
    int capacity; // maximum capacity of the queue
    int front;    // front points to the front element in the queue (if any)
    int rear;     // rear points to the last element in the queue
    int count;    // current size of the queue

public:
    Queue(int size = SIZE); // constructor
    ~Queue();               // destructor

    int dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

// Constructor to initialize a queue
Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

// Destructor to free memory allocated to the queue
Queue::~Queue()
{
    delete[] arr;
}

// Utility function to dequeue the front element
int Queue::dequeue()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    int x = arr[front];
    // cout << "Removing " << x << endl;

    front = (front + 1) % capacity;
    count--;

    return x;
}

// Utility function to add an item to the queue
void Queue::enqueue(int item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    // cout << "Inserting " << item << endl;

    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

// Utility function to return the front element of the queue
int Queue::peek()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}

// Utility function to return the size of the queue
int Queue::size()
{
    return count;
}

// Utility function to check if the queue is empty or not
bool Queue::isEmpty()
{
    return (size() == 0);
}

// Utility function to check if the queue is full or not
bool Queue::isFull()
{
    return (size() == capacity);
}

class Stack
{
    int top;

public:
    int myStack[10]; // stack array

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};
// pushes element on to the stack
bool Stack::push(int item)
{
    if (top >= (10 - 1))
    {
        cout << "Stack Overflow!!!";
        return false;
    }
    else
    {
        myStack[++top] = item;
        // cout << item << endl;
        return true;
    }
}

// removes or pops elements out of the stack
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow!!";
        return 0;
    }
    else
    {
        int item = myStack[top--];
        return item;
    }
}

// check if stack is empty
bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    class Stack stack;
    // create a queue of capacity 10
    Queue q(10);
    int i = 0;
    cout << "Enter N integer values: ";

    do
    {
        int num;
        cin >> num;
        q.enqueue(num);
        i++;
    } while (i < 10);

    i = 0;
    while (i < 10)
    {
        stack.push(q.dequeue());
        i++;
    }

    i = 0;
    while (i < 10)
    {
        q.enqueue(stack.pop());
        i++;
    }

    i = 0;
    cout << "Reverse Queue: ";
    while (i < 10)
    {
        cout << q.dequeue() << " ";
        i++;
    }

        // q.enqueue(1);
    // q.enqueue(2);
    // q.enqueue(3);

    // cout << "The front element is " << q.peek() << endl;
    // q.dequeue();

    // q.enqueue(4);

    // cout << "The queue size is " << q.size() << endl;

    // q.dequeue();
    // q.dequeue();
    // q.dequeue();

    // if (q.isEmpty()) {
    //     cout << "The queue is empty\n";
    // }
    // else {
    //     cout << "The queue is not empty\n";
    // }

    return 0;
}