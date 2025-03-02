#include "Varparm.h"
#include <iostream>
#include <cstdarg>

using namespace std;

namespace Varparm
{
    int ivarparm(int count, ...) {
        if (count < 1) {
            return 0;
        }
        va_list args; 
        va_start(args, count);
        int result = 1; 
        for (int i = 0; i < count; ++i) { 
            result *= va_arg(args, int); 
        }
        va_end(args); 
        return result;
    }

    int svarparm(short count, ...) {
        if (count < 1) {
            return 0;
        }
        va_list args; 
        va_start(args, count); 
        int max = SHRT_MIN; 
        for (short i = 0; i < count; ++i) { 
            int val = va_arg(args, int); 
            if (val > max) 
                max = val; 
        }
        va_end(args); 
        return max;
    }

    double fvarparm(float max, ...) {
        va_list args;
        va_start(args, max);
        double sum = 0;
        double val = max;
        while (val != (double)FLT_MAX) {
            sum += val;
            val = va_arg(args, double);
        }
        va_end(args);
        return sum;
    }

    double dvarparm(double max, ...) {
        va_list args;
        va_start(args, max);
        double sum = 0;
        double val = max;
        while (val != (double)DBL_MAX) {
            sum += val;
            val = va_arg(args, double);
        }
        va_end(args);
        return sum;
    }
}

int main()
{
	setlocale(LC_ALL, "rus");

    int ivarparm1 = Varparm::ivarparm(0);
    int ivarparm2 = Varparm::ivarparm(1, 1);
    int ivarparm3 = Varparm::ivarparm(2, 1, 2);
    int ivarparm7 = Varparm::ivarparm(6, 1, 2, 3, 4, 5, 6);


    int svarparm1 = Varparm::svarparm(0);
    int svarparm2 = Varparm::svarparm(1, 1);
    int svarparm3 = Varparm::svarparm(2, 1, 2);
    int svarparm7 = Varparm::svarparm(6, 1, 2, 3, 4, 5, 6);


    double fvarparm1 = Varparm::fvarparm(FLT_MAX);
    double fvarparm2 = Varparm::fvarparm(1.1f, FLT_MAX);
    double fvarparm3 = Varparm::fvarparm(1.1f, 2.2f, FLT_MAX);
    double fvarparm7 = Varparm::fvarparm(1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, FLT_MAX);


    double dvarparm1 = Varparm::dvarparm(DBL_MAX);
    double dvarparm2 = Varparm::dvarparm(1.1, DBL_MAX);
    double dvarparm3 = Varparm::dvarparm(1.1, 2.2, DBL_MAX);
    double dvarparm7 = Varparm::dvarparm(1.1, 2.2, 3.3, 4.4, 5.5, 6.6, DBL_MAX);



    cout << "Результат ivarparm 1 параметр: " << ivarparm1 << endl;
    cout << "Результат ivarparm 2 параметра: " << ivarparm2 << endl;
    cout << "Результат ivarparm 3 параметра: " << ivarparm3 << endl;
    cout << "Результат ivarparm 7 параметров: " << ivarparm7 << endl;

    cout << endl;

    cout << "Результат svarparm 1 параметр: " << svarparm1 << endl;
    cout << "Результат svarparm 2 параметра: " << svarparm2 << endl;
    cout << "Результат svarparm 3 параметра: " << svarparm3 << endl;
    cout << "Результат svarparm 7 параметров: " << svarparm7 << endl;

    cout << endl;

    cout << "Результат fvarparm 1 параметр: " << fvarparm1 << endl;
    cout << "Результат fvarparm 2 параметра: " << fvarparm2 << endl;
    cout << "Результат fvarparm 3 параметра: " << fvarparm3 << endl;
    cout << "Результат fvarparm 7 параметров: " << fvarparm7 << endl;

    cout << endl;

    cout << "Результат dvarparm 1 параметр: " << dvarparm1 << endl;
    cout << "Результат dvarparm 2 параметра: " << dvarparm2 << endl;
    cout << "Результат dvarparm 3 параметра: " << dvarparm3 << endl;
    cout << "Результат dvarparm 7 параметров: " << dvarparm7 << endl;

    cout << endl;

    system("pause");
    return 0;
}