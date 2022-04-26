#include <iostream>

int main() {
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (42 in hex)" << endl;
    cout << "inseam = " << inseam << " (42 in octal)" << endl;

    return 0;
}

