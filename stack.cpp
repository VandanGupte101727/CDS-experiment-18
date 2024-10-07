#include<iostream>
using namespace std;

#define MAX 5  
class Stack {
    int top;      
    int arr[MAX]; 

public:
    Stack() { top = -1; }  
    
    void push(int val) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = val;
            cout << "Pushed " << val << " into the stack.\n";
        }
    }

   
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
        } else {
            cout << "Popped " << arr[top--] << " from the stack.\n";
        }
    }

   
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, val;

    do {
        cout << "\nStack Operations: \n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, try again!\n";
        }
    } while (choice != 4);

    return 0;
}
