/*
* page:86  special symbol
* 20150728
*/

#include <stdio.h>

extern char __executable_start[];
extern char etext[],_etext[], __etext[];
extern char edata[], _edata[];
extern char end[], _end[];

int main()
{
	printf("Executable Start %x\n", __executable_start);
	printf("Text End %x %x %x\n",etext, _etext, __etext);
	printf("Date End %x %x \n",edata,_edata);
	printf("Executable End %x %x\n",end, _end);

	return 0;
}
