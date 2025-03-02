#include <iostream>
#include <tchar.h> 

int defaultparm(int a, int b, int c, int d, int e, int x = 8, int y = 9)
{
	return  (a + b + c + d + e + x + y) / 7;
}

int _tmain(int argc, _TCHAR* argv[]) 
{
	int x1 = defaultparm(1, 2, 3, 4, 5);
	int x2 = defaultparm(1, 2, 3, 4, 5, 6, 7);

	std::cout << x1 << std::endl;
	std::cout << x2 << std::endl;

	system("pause");
	return 0;
}