#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define N 1024

int main(){
	char fitxer[N];
        printf("Introdueix el nom del fitxer\n");
        scanf("%s",fitxer);
	if (int fd==-1){
                printf("Error: El fitxer no existeix");}
        else{
		char copia.fi[N];
		int desc=open(copia.fi, O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
	}
	return desc;
}
