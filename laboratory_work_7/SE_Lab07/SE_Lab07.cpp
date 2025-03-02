#include <iostream>
#include<Windows.h>
#include "Call.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 1;

    int rc_cdecl = Call::cdec(1, 2, 3);
    int rc_stdcall = Call::cstd(a, 2, 3);
    int rc_fastcall = Call::cfst(1, 2, 3, 4);

    cout << "rc_cdecl: " << rc_cdecl << endl;
    cout << "rc_stdcall: " << rc_stdcall << endl;
    cout << "rc_fastcall: " << rc_fastcall << endl;
    return 0;
}