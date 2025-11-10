// q2 Write a program to implement  a srtack  using an array with the following operation 

// .Push 
// .pop 
// .display


#include <iostream>
using namespace std;

#define SIZE 5   
class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if(top == SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        }
        else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if(top == -1) {
            cout << "Stack Underflow! No element to pop." << endl;
        }
        else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }

   
    void display() {
        if(top == -1) {
            cout << "Stack is empty." << endl;
        }
        else {
            cout << "Stack elements are: ";
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

// Main Function
int main() {
    Stack s;
    int choice, value;

    while(true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid Choice!" << endl;
        }
    }
}
