#include <stdio.h>

int func(int);
float func(float);

class C{
	int func(int);
	class C2 {
		int func(int);
	};
};

namespace N{
	int func(int);
	class C {
		int func(int);
	};
};

int test;

int main()
{
	return 0;
}
