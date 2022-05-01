#include <iostream>

const int ArSize = 20;

int main() {
    using namespace std;
    cout << "Your first name please: ";
    char name[ArSize];
    cin >> name;
    cout << "Here is your name, verticalized and AScIIized:\n";

    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}
