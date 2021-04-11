#include <iostream>

using namespace std;

int main()
{
    double a, b;

    beginning:

    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    cout << "What mathematical operation do you want to perform? " << endl;
    cout << "+ : addition" << endl;
    cout << "- : subtraction" << endl;
    cout << "* : multiplication" << endl;
    cout << "/ : division" << endl;

    char operation;
    cin >> operation;

    // Clear console
    system("clear"); // "cls" on windows

    switch(operation)
    {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b)
                cout << a << " / " << b << " = " << a / b << endl;
            else
                cout << "Cannot divide by 0!" << endl;
            break;
        default:
            cout << "That operation is not supported!" << endl;
    }
    
    cout << "Continue calculating? (Y/N) " << endl;
    char keep_going;
    cin >> keep_going;

    if (keep_going == 'y' || keep_going == 'Y')
        goto beginning; // DO NOT USE INSTEAD OF LOOPS

}
