#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int *argc, char **argv)
{
	int fd;
	int counter = 0;
	int old_counter = 0;

	fd = open("/dev/second",O_RDONLY);
	if(-1 != fd){
		while(1){
			read(fd, &counter, sizeof(unsigned int));
			if(counter != old_counter){
				printf("seconds after open /dev/second :%d\n",counter);
				old_counter = counter;
			}
		}
	}else{
		printf("Device open failure\n");
	}

	return 0;
}
