#include <iostream>
using namespace std;
int front = -1;
int rear = -1;
int max_size = 10;
int queue[10];
void enQueue(int data)
{
    if ((front == rear + 1) || ((front == 0) && (rear == max_size - 1)))
    {
        cout << "Order Limit Reached" << endl;
        return;
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = data;
    }
    else if (rear == max_size - 1 && front != 0)
    {
        rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}
int deQueue()
{
    if (front == -1)
    {
        cout << "No Orders Left" << endl;
        return INT_MIN;
    }
    int data = queue[front];
    queue[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == max_size - 1)
        front = 0;
    else
        front++;
    return data;
}
void displayQueue()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    else
    {
        cout << "-----------------------------" << endl;
        cout << "|  Restaurant Token Display  |" << endl;
        cout << "-----------------------------" << endl;
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout <<"\t\t" << queue[i] << endl;
        }
        else
        {
            for (int i = front; i < max_size; i++)
                cout << "\t\t" << queue[i] << endl;
            for (int i = 0; i <= rear; i++)
                cout << "\t\t" << queue[i] << endl;
        }
        cout << "-----------------------------" << endl;
    }
}
int main() {
    int choice;
    int data;
    int del;
    while (1) {
        cout << "- - - - - - - - - - - - - - " << endl;
        cout << "1. Take Token" << endl;
        cout << "2. Get ur Order " << endl;
        cout << "3. Waiting List " << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter Tokeen No: ";
            cin >> data;
            enQueue(data);
            break;
        case 2:
            del = deQueue();
            cout << "Order Delivered For Token No:" << del << endl;
            break;
        case 3:
            displayQueue();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
