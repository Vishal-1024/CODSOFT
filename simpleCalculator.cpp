#include <iostream>
#include <cctype> // for tolower() function
using namespace std;

int main() {
    char choice;
    do {
        int var1, var2;
        cout << "Enter first number: ";
        cin >> var1;
        cout << "Enter second number: ";
        cin >> var2;

        int n;
        cout << "Choose an Operation between the two numbers('+=1' , '-=2' , '*=3' , '/=4') :" << endl ;
        cin >> n;

        switch (n) {
        case 1:
            int sum;
            sum = var1 + var2;
            cout << "Sum of two numbers is: " << sum << endl;
            break;
        case 2:
            int diff;
            diff = var1 - var2;
            cout << "Difference of two numbers is: " << diff << endl;
            break;
        case 3:
            int product;
            product = var1 * var2;
            cout << "Product of two numbers is: " << product << endl;
            break;
        case 4:
            if (var2 != 0) {
                int div;
                div = var1 / var2;
                cout << "Division of two numbers is: " << div << endl;
            }
            else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }

        cout << "Again? (Y/N): ";
        cin >> choice;
        choice = tolower(choice); // convert user input to lowercase
    } while (choice == 'y');

    return 0;
}