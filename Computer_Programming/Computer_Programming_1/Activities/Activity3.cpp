#include <iostream>

using namespace std;

int add(int n, int n1) {
    return n + n1;
}

int sub(int n, int n1) {
    return n - n1;
}

int Div(int n, int n1) {
    return n / n1;
}

int mul(int n, int n1) {
    return n * n1;
}

int main() {
    int n, n1, ans;
    char op;
    cout << "======================SIMPLE CALCULATOR======================\n";
    cout << "                         By: Pabunan                         \n";
    cout << "=============================================================\n";
    cout << "Addition = +\n";
    cout << "Subtraction = -\n";
    cout << "Multiplication = *\n";
    cout << "Division = /6\n\n";
    cout << "Enter Two Numbers: ";
        cin >> n >> n1;
    cout << "Enter Operator: ";
        cin >> op;
    switch (op) {
        case '+':
            cout << "The Answer Is " << add(n, n1) << endl;
            break;
        case '-':
            cout << "The Answer Is " << sub(n, n1) << endl;
            break;
        case '*':
            cout << "The Answer Is " << mul(n, n1) << endl;
            break;
        case '/':
            cout << "The Answer Is " << Div(n, n1) << endl;
            break;
        default:
            cout << "Please Input Right Operator!\n";
            break;
    }
    return 0;
}