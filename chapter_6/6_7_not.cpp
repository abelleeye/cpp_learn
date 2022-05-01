#include <iostream>
#include <climits>

bool is_int(double);

int main() {
    using namespace std;
    double num;

    cout << "Yom dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num)) {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int(num);
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x) {
    return x <= INT_MAX && x >= INT_MIN;
}


