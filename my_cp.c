#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define N 1024

int main(){
	char fitxer[N];
	int fd,desc,n;
        printf("Introdueix el nom del fitxer: ");
        scanf("%s",fitxer);
	fd = open(fitxer,O_RDONLY);
	if (fd==-1){
                printf("Error: El fitxer no existeix");}
        else{
		char buf[N];
		desc=open("copia.fi", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
		while ((n=read(fd, buf, N-1))!=0) write(desc, buf, n);
	}
	return desc;
}
