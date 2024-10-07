# CDS-experiment-18
c plus plus and data structures experiment 18

Aim:- To study and implement stack operation<br>

Software used:- VS code <br>

Theory:-<br>
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle, meaning the last element inserted is the first one to be removed. It operates like a real-life stack (e.g., plates), where you can only add or remove items from the top.<br>
Key Operations:<br>
Push: Adds an element to the top of the stack. If the stack is full, it causes a stack overflow.<br>
Pop: Removes the top element from the stack. If the stack is empty, it leads to a stack underflow.<br>
Peek/Top: Returns the top element without removing it.<br>
isEmpty: Checks if the stack is empty.<br>
isFull: Checks if the stack is full (if a size limit exists).<br>

Code:-<br>


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

Output:-<br>
![exp18](https://github.com/VandanGupte101727/CDS-experiment-18/blob/main/Screenshot%202024-10-07%20at%201.55.34%20PM.png)<br>

Conclusin:-in this experiment we learnt about stack and its operations 
