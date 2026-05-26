#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main() {
    stack <string> undoStack;
    stack <string> redoStack;
    int choice;
    string value , temp;
    do{
        cout << "1. Type Text" << endl;
        cout << "2. Undo Text" << endl;
        cout << "3. Redo Text" << endl;
        cout << "4. Current Text" << endl;
        cout << "0. EXIT" << endl;
        cout << "Choose choice:-" << endl;
        cin >> choice; 
        switch(choice) {
        case 1: cout << "Enter value to push" << endl;
                cin.ignore();
                getline(cin,value);
                undoStack.push(value);
                break;
        case 2: temp=undoStack.top();
                undoStack.pop();
                redoStack.push(temp);
                break;
        case 3: temp=redoStack.top();
                redoStack.pop();
                undoStack.push(temp);
                break;
        case 4: cout << undoStack.top() << endl;
    } 
    }while(choice!=0);
    return 0;
}
