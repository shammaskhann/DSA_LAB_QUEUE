//
//#include <iostream>
//using namespace std;
//int front = -1;
//int rear = -1;
//int max_size = 15;
//struct car
//{
//    int car_no;
//    string car_model;
//    int fuel;
//};
//car queue[15];
//
//void enqueue(car c)
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
//        queue[rear] = c;
//    }
//}
//void dequeue()
//{
//    if (front == -1 || front > rear)
//    {
//        cout << "Queue is empty" << endl;
//    }
//    else
//    {
//        cout << "Car no: " << queue[front].car_no << " Car model: " << queue[front].car_model << " Fuel: " << queue[front].fuel << endl;
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
//        for (int i = front; i <= rear; i++)
//        {
//            cout << "Car no: " << queue[i].car_no << " Car model: " << queue[i].car_model << " Fuel: " << queue[i].fuel << endl;
//        }
//    }
//}
//int main()
//{
//    int choice;
//    car c;
//    while (1)
//    {
//        cout << "- - - - - - - - - - - - - - - - - - - - " << endl;
//        cout << "1. Add a car in the queue" << endl;
//        cout << "2. Display all cars in the queue" << endl;
//        cout << "3. Count the total number of cars after dequeue" << endl;
//        cout << "4. Dequeue a car after it is done with the refill" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter car no: ";
//            cin >> c.car_no;
//            cout << "Enter car model: ";
//            cin >> c.car_model;
//            cout << "Enter fuel: ";
//            cin >> c.fuel;
//            enqueue(c);
//            break;
//        case 2:
//            display();
//            break;
//        case 3:
//            cout << "Total number of cars: " << rear + 1 << endl;
//            break;
//        case 4:
//            dequeue();
//            break;
//        case 5:
//            exit(0);
//        default:
//            cout << "Invalid choice" << endl;
//        }
//    }
//    return 0;
//}
//
//
