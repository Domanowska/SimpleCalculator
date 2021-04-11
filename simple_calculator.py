import os

if __name__ == "__main__":
    calculate: bool = True

    while calculate:
        a = int(input("Enter first number: "))
        b = int(input("Enter second number: "))

        operation = input(
            'What mathematical operation would you like to perform? \n'
            '+: addition \n'
            '-: subtraction \n'
            '*: multiplication \n'
            '/: division \n'
        )

        # Clear console
        os.system('clear')

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
