#include <iostream>

using namespace std;

// Welcome the user to the calculator program
void welcome_message();
// Asks the user to enter a number, returns the number
int ask_for_num();

main()
{
    welcome_message();

    char calculate = 'Y';
    do 
    {
        double a = ask_for_num(), b;

        cout << "Enter second number: " << endl;
        cin >> b;

        // TODO: On second time around output stops here for some reason...
        cout << "What mathematical operation do you want to perform? " << endl;
        cout << "+ : addition" << endl;
        cout << "- : subtraction" << endl;
        cout << "* : multiplication" << endl;
        cout << "/ : division" << endl;

        char operation;
        cin >> operation;

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
        cin >> calculate;
    } while (calculate == 'Y' || calculate == 'y');
}

void welcome_message()
{
    cout << "##### ----------------- SIMPLE CALCULATOR ---------------- #####" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Welcome! This simple calculator can perform simple calculations." << endl;
    cout << "You will be asked to enter two numbers and then an operation... " << endl;
    cout << "... Lets start!" << endl;
    cout << "" << endl;
}

int ask_for_num()
{
    double a;
    cout << "Enter a number:    ";
    cin >> a;

    return a;
}

