#include <stdio.h>

int strong_var = 1;
int weak = 3;
//__attribute__((weak))weak = 2;
int weak; 

int main(int *argc,char **argv)
{
	printf("test weak %d\n",weak);
}
