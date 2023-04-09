#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char* end;

    cout << "148ax" << " to Unsigned Long Long Int with base-5 = " << strtoll("148ax", &end, 5) << endl;
    cout << "End String = " << end << endl << endl;

    cout << "148ax" << " to Unsigned Long Long Int with base-15 = " << strtoll("148ax", &end, 15) << endl;
    cout << "End String = " << end << endl << endl;

    cout << "148ax" << " to Unsigned Long Long Int with base-35 = " << strtoll("148ax", &end, 35) << endl;
    cout << "End String = " << end << endl << endl;

    _getch();
    return 0;
}