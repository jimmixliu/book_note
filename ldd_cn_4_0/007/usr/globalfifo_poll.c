#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <sys/epoll.h>
#include <sys/types.h>
#include <fcntl.h>
#include <strings.h>
#include <signal.h>


static void signalio_handler(int signum)
{
	printf("receive a signal from globalfifo, signalnum:%d\n",signum);
}


int main(int *argc,char **argv)
{
	int fd, oflags;

	fd = open("/dev/globalfifo", O_RDWR, S_IRUSR |S_IWUSR);
	if(fd != -1){
		signal(SIGIO, signalio_handler);
		fcntl(fd, F_SETOWN, getpid());
		oflags = fcntl(fd,F_GETFL);
		fcntl(fd, F_SETFL, oflags | FASYNC);
		while(1){
			sleep(100);
		}
	}else{
		printf("device open failure\n");
	}
}
