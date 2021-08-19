#include <iostream>

using namespace std;

// Welcome the user to the calculator program
void welcome_message();
// Asks the user to enter a number, returns the number
int ask_for_num();
// Asks the user to enter an operation, returns the character
char ask_for_op();

main()
{
    welcome_message();

    char calculate = 'Y';
    do 
    {
        double a = ask_for_num(), b = ask_for_num();
        char operation = ask_for_op();

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

char ask_for_op()
{
    char operation;
    cout << "Available mathematical operations:    " << endl;
    cout << "+ : addition" << endl;
    cout << "- : subtraction" << endl;
    cout << "* : multiplication" << endl;
    cout << "/ : division" << endl;
    cout << "Enter an operation:    ";
    cin >> operation;

    return operation;
}

