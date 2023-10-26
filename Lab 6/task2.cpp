//
// a.	Call enQueue(2)                                h.  Call deQueue
// b.	Call enQueue(4)                                i.  Call enQueue(25)
// c.	Call enQueue(6)                                j.  Call deQueue ()
// d.	Call enQueue(8)                                k.  Call deQueue ()
// e.	Call enQueue(10)                              l.   Call deQueue ()
// f.	Call enQueue(12)                              m. Call deQueue ()
// g.	Call Display ()                                   n. Call Display ()
//#include<iostream>
//using namespace std;
//int front = -1, rear = -1;
//int max_size = 6;
//int queue[6];
//void enQueue(int data)
//{
//    if ((front == rear + 1) || ((front == 0) && (rear == max_size - 1)))
//    {
//        cout << "Queue is full"<<endl;
//        return;
//    }
//    else if (front == -1)
//    {
//        front = 0;
//            rear = 0;
//        queue[rear] = data;
//    }
//    else if (rear == max_size - 1 && front != 0)
//    {
//        rear = 0;
//        queue[rear] = data;
//    }
//    else
//    {
//        rear++;
//        queue[rear] = data;
//    }
//}
//int deQueue()
//{
//    if (front == -1)
//    {
//        cout << "Queue is empty"<<endl;
//        return INT_MIN;
//    }
//    int data = queue[front];
//    queue[front] = -1;
//    if (front == rear)
//    {
//        front = -1;
//        rear = -1;
//    }
//    else if (front == max_size - 1)
//        front = 0;
//    else
//        front++;
//    return data;
//}
//void displayQueue()
//{
//    if (front == -1)
//    {
//        cout << "Queue is Empty"<<endl;
//        return;
//    }
//    else{
//    cout << "Elements in Circular Queue are: ";
//    if (rear >= front)
//    {
//        for (int i = front; i <= rear; i++)
//            cout << queue[i] << " ";
//        cout << endl;
//    }
//    else
//    {
//        for (int i = front; i < max_size; i++)
//            cout << queue[i] << " ";
//        for (int i = 0; i <= rear; i++)
//            cout << queue[i] << " ";
//        cout << endl;
//    }
//    }
//}
//int main()
//{
//    int ch, val;
//    
//    do
//    {
//        cout << " - - - - - - - - - - - - - - - - - - - -" << endl;
//        cout << "1) Insert element to queue" << endl;
//        cout << "2) Delete element from queue" << endl;
//        cout << "3) Display all the elements of queue" << endl;
//        cout << "4) Exit" << endl;
//        cout << "Enter your choice : ";
//        cin >> ch;
//        switch (ch)
//        {5
//        case 1:
//            cout << "Enter value to be inserted : ";
//            cin >> val;
//            cout << endl;
//            enQueue(val);
//            break;
//        case 2:
//            val = deQueue();
//                cout << "The number deleted is : " << val << endl;
//            break;
//        case 3:
//            displayQueue();
//            break;
//        case 4:
//            cout << "Exit" << endl;
//            break;
//        default:
//            cout << "Invalid choice" << endl;
//        }
//    } while (ch != 4);
//    return 0;
//}