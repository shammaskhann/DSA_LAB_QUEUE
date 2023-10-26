//
//#include <iostream>
//using namespace std;
//int front = -1;
//int rear = -1;
//int max_size = 6;
//int queue[6];
//void enQueue(int data)
//{
//    if (rear == max_size - 1)
//    {
//        cout << "Queue is full" << endl;
//    }
//    else
//    {
//        if (front == -1)
//        {
//            front = 0;
//        }
//        rear++;
//        queue[rear] = data;
//    }
//}
//void deQueue()
//{
//    if (front == -1 || front > rear)
//    {
//        cout << "Queue is empty" << endl;
//    }
//    else
//    {
//        cout << "Element deleted from queue is : " << queue[front] << endl;
//        front++;
//    }
//}
//void display()
//{
//    if (front == -1)
//    {
//        cout << "Queue is empty" << endl;
//    }
//    else
//    {
//        cout << "Queue elements are : ";
//        for (int i = front; i <= rear; i++)
//        {
//            cout << queue[i] << " ";
//        }
//        cout << endl;
//    }
//}
//int main()
//{
//    enQueue(10);
//    enQueue(7);
//    enQueue(4);
//    enQueue(8);
//    enQueue(2);
//    enQueue(15);
//    display();
//    enQueue(25);
//    deQueue();
//    deQueue();
//    display();
//    return 0;
//}
