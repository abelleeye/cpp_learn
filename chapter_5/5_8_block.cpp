#include <iostream>

int main() {
    using namespace std;
    cout << "The Amazing Accounto will sum and average.\n";
    double numbers[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    double number;
    double sum = 0.0;

    for (int i = 0; i < 5; ++i) {
        number = numbers[i];
        cout << "Value " << i << ": " << number << endl;
        sum += number;
    }

    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";
    return 0;
}
