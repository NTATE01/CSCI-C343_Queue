// TestQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Queue.hpp"
using namespace std;

#include <iostream>

int main()
{
    cout<<"\nGoal of this main() is to fix the length() function:\n"; 

    int a = 1; 
    int b = 2; 
    int c = 3; 
    int d = 4; 
    int e = 5; 
    int f = 6; 
    int g = 7; 
    int h = 8;
    int i = 9;
    int j = 10;     
    cout <<"Creating 2 Queues, Q1 and Q2 of type int\n" << endl;

    Queue<int> Q1;
    Queue<int> Q2;

    int x = 2;
    int y = 4; 
    int z = 6; 

    cout << "TESTING ENQUEUE\n";

    Q1.enqueue(x);
    cout << "Enqueue x = 2\n";
    Q1.enqueue(y);
    cout << "Enqueue y = 4\n";
    Q1.enqueue(z);
    cout << "Enqueue z = 6\n\n";
    cout << "Output Queue Q1\n"; 
    Q1.outputQueue();
 

    cout << "\n\nTESTING DEQUEUE\n";
    cout << "Dequeue x = 2\n";
    Q1.dequeue(x);
    cout << "Q1 is now: ";
    Q1.outputQueue();

    cout << "\n\nTESTING FRONT\n";
    Q1.outputQueue();
    cout << "\nFront of Q1 is " << Q1.front();

    cout<<"\n\nTESTING REPLACE FRONT\na = 5\n";
    a = 5;
    cout << "Queue before replaceFront: ";
    Q1.outputQueue();
    Q1.replaceFront(a);

    cout<< "\nQueue after replaceFront is now ";
    Q1.outputQueue();

    cout << "\nThe values were swapped and a = " <<a;

    cout << "\n\nTESTING LENGTH\n";
    cout << "Q1 is ";
    Q1.outputQueue();
    cout<< "\nThe length of Q1 is " << Q1.length();

    cout<< "\n\nTESTING TRANFER FROM\n";
    a = 1; 
    Q2.enqueue(a);
    Q2.enqueue(b);
    Q2.enqueue(c);
    cout << "Q2 is "; 
    Q2.outputQueue();
    cout << "\nQ1 is ";
    Q1.outputQueue();

    cout<< "\nQ1.transferFrom(Q2)\n";
    Q1.transferFrom(Q2);
    cout << "Q1 is now ";
    Q1.outputQueue();

    cout << "\nQ2 is ";
    Q2.outputQueue();


    cout <<"\n\nTESTING CLEAR\n";
    Queue<int> Q3;
    Q3.enqueue(x);
    Q3.enqueue(y);
    Q3.enqueue(z);
    Q3.enqueue(a);
    Q3.enqueue(b);
    Q3.enqueue(c);
    cout <<"Q3 is ";
    Q3.outputQueue();
    cout<<"\nAfter clear() \n";
    Q3.clear();
    Q3.outputQueue();

    cout << "\n\nTESTING = OPERATOR\n";
    Q1.clear();Q2.clear();Q3.clear();
    a = 1;
    b = 2;
    c = 3;
    int d = 4;
    Q1.enqueue(a);
    Q1.enqueue(b);
    Q2.enqueue(c);
    Q2.enqueue(d);
    cout << "After clearing previous values and added new ones\nQ1 is now ";
    Q1.outputQueue();
    cout<<"\nQ2 is now ";
    Q2.outputQueue();

    Q2 = Q1;

    cout <<"\n\nAfter Q2 = Q1\nQ2 is now ";
    Q2.outputQueue();


   cout << "\n";
    return 0; 
}
/*
----------------------------------OUTPUT OF MAIN() METHOD------------------------------------------
Creating 2 Queues, Q1 and Q2 of type int

TESTING ENQUEUE
Enqueue x = 2
Enqueue y = 4
Enqueue z = 6

Output Queue Q1
<2, 4, 6, >

TESTING DEQUEUE
Dequeue x = 2
Q1 is now: <4, 6, >

TESTING FRONT
<4, 6, >
Front of Q1 is 4

TESTING REPLACE FRONT
a = 5
Queue before replaceFront: <4, 6, >
Queue after replaceFront is now <5, 6, >
The values were swapped and a = 4

TESTING LENGTH
Q1 is <5, 6, >
The length of Q1 is 4

TESTING TRANFER FROM
Q2 is <1, 2, 3, >
Q1 is <5, 6, >
Q1.transferFrom(Q2)
Q1 is now <1, 2, 3, >
Q2 is Sequence is Empty


TESTING CLEAR
Q3 is <2, 4, 6, 1, 2, 3, >
After clear() 
Sequence is Empty


TESTING = OPERATOR
After clearing previous values and added new ones
Q1 is now <1, 2, >
Q2 is now <3, 4, >

After Q2 = Q1
Q2 is now <1, 2, >
*/
