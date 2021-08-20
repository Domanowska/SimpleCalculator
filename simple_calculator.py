import os


def welcome_message():
    print('''
##### ----------------- SIMPLE CALCULATOR ---------------- #####
----------------------------------------------------------------
Welcome! This simple calculator can perform simple calculations.
You will be asked to enter two numbers and then an operation... 
... Lets start!
    ''')


def ask_for_num() -> int:
    return int(input("Enter a number: "))


def ask_for_op() -> str:
    print('''
Available mathematical operations:    
+: addition
-: subtraction
*: multiplication
/: division
    ''')
    return input("Enter an operation: ")


if __name__ == "__main__":
    calculate: bool = True

    welcome_message()

    while calculate:
        a, b = ask_for_num(), ask_for_num()

        operation: str = ask_for_op()

        if operation == '+':
            print(f"{a} + {b} = {a + b}")
        elif operation == '-':
            print(f"{a} - {b} = {a - b}")
        elif operation == '*':
            print(f"{a} * {b} = {a * b}")
        elif operation == '/':
            if b:
                print(f"{a} / {b} = {a / b}")
            else:
                print("Cannot divide by zero!")
        else:
            print(f"The operation: '{operation}', is not supported!")

        # CHECK IF USER WANTS TO EXIT
        decision = input("Keep calculating? (Y/N) ")
        if decision == 'n' or decision == 'N':
            calculate = False
        elif decision == 'y' or decision == 'Y':
            continue
        else:
            print(f"'{decision}' is not valid input! Exiting...")
            break
