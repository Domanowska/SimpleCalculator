#include <iostream>

using namespace std;


// Available math operations
enum mathOperation {add=1,subtract,multiply,divide};

// Welcome the user to the calculator program
void welcome_message();
// Asks the user to enter a number, returns the number
int ask_for_num();
// Asks the user to enter an operation, performs the operation, returns the result
void perform_operation(double, double);

main()
{
    welcome_message();

    char calculate = 'Y';
    do 
    {
        double a = ask_for_num(), b = ask_for_num();
        perform_operation(a, b);
    
        cout << "Continue calculating? (Y? Only Y or y will continue...) " << endl;
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
    cout << endl << endl;
}

int ask_for_num()
{
    double a;
    cout << "Enter a number:    ";
    cin >> a;

    return a;
}

void perform_operation(double a, double b)
{
    int choice;
    cout << "Available mathematical operations:    " << endl;
    cout << "1. + : addition" << endl;
    cout << "2. - : subtraction" << endl;
    cout << "3. * : multiplication" << endl;
    cout << "4. / : division" << endl;
    cout << "Enter the number of an operation:    ";
    cin >> choice;

    mathOperation operation = mathOperation(choice);
    
    switch(operation)
        {
            case add:
                cout << a << " + " << b << " = " << a + b << endl;
                break;
            case subtract:
                cout << a << " - " << b << " = " << a - b << endl;
                break;
            case multiply:
                cout << a << " * " << b << " = " << a * b << endl;
                break;
            case divide:
                if (b)
                    cout << a << " / " << b << " = " << a / b << endl;
                else
                    cout << "Cannot divide by 0!" << endl;
                break;
            default:
                cout << "That operation is not supported!" << endl;
        }
}
