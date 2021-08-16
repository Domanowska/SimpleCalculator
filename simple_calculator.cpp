#include <iostream>

using namespace std;

main()
{
    char calculate = 'Y';
    do 
    {
        cin.clear();
        cout.clear();
        fflush(stdin);
        fflush(stdout);

        double a, b;

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
        system("cls"); // "clear" on MacOS

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
