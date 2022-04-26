#include <iostream>

using namespace std;

struct antarctica_years_end {
    int year;
};

int main() {
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    s03.year = 2005;
    antarctica_years_end* pa = &s02;
    pa->year = 1999;
    cout << "s01 year: " << s01.year << endl;
    cout << "s02 year: " << s02.year << endl;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << "trio->year: " << trio->year << endl;

    cout << "const antarctica_years_end arr[3] = { s01, s02, s03 };" << endl;
    const antarctica_years_end arr[3] = { s01, s02, s03 };
    cout << "arr[0]->year: " << arr[0].year << endl;
    cout << "arr[1]->year: " << arr[1].year << endl;
    cout << "arr[2]->year: " << arr[2].year << endl;
    cout << "const antarctica_years_end* _arp = &arr[0];" << endl;
    const antarctica_years_end* _arp = &arr[0];
    cout << "_arp[0]->year: " << _arp[0].year << endl;
    cout << "_arp[1]->year: " << _arp[1].year << endl;
    cout << "_arp[2]->year: " << _arp[2].year << endl;
    const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };
    cout << "arp[0]->year: " << arp[0]->year << endl;
    cout << "arp[1]->year: " << arp[1]->year << endl;
    cout << "arp[2]->year: " << arp[2]->year << endl;
    const antarctica_years_end** ppa = arp;
    auto ppb = arp;
    cout << "(*ppa)->year: " << (*ppa)->year << endl;
    cout << "(*(ppa + 1))->year: " << (*(ppa + 1))->year << endl;
    cout << "(*(ppb + 1))->year: " << (*(ppb + 1))->year << endl;
    return 0;
}



