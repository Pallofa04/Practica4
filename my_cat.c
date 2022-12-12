#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define N 1024

int main(){
	char fitxer[N];
	int n;
	printf("Introdueix el nom del fitxer\n");
	scanf("%s",fitxer);
	int fd = open(fitxer,O_RDONLY);
	if (fd==-1){
		printf("Error: El fitxer no existeix");}
	else{
		char buf[N];
		while ((n=read(fd, buf, N) != 0)){
			buf[n]='\0';
			printf("%s",&buf[n]);
		}
	}

	return 0;
}

