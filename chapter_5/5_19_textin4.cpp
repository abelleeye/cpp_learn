#include <iostream>

int main() {
    using namespace std;
    char ch;
    int count = 0;
    while ((ch = cin.get()) != EOF) {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}
