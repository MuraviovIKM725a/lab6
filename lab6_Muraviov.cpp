
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int a, b;

    cout << "Введіть два натуральних числа: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Числа повинні бути натуральними" << endl;
        return 0;
    }

    int temp;
    do {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    } while (a != 0 && b != 0);

    int gcd = (a == 0 ? b : a);

    cout << "НСД = " << gcd << endl;

    return 0;
}