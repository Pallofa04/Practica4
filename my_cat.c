#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define N 1024

int main(){
	char name[N];
	int fd;
	int n;
	printf("Introdueix el nom del fitxer: ");
	scanf("%s",name);
	fd = open(name,O_RDONLY);
	if (fd==-1){
		printf("Error: El fitxer no existeix\n");
	}else{
		char buf[N];
		while ((n=read(fd, buf, N))!=0){
			buf[n]='\0';
			printf("%s",buf);
		}
	close(fd);
	}

	return 0;
}

