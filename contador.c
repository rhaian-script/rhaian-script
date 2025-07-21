#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h> //biblioteca que permite ter o countdown

//CRIE UM ALGORÍTMO QUE IMPRIMA OS NÚMEROS DE 10 ATÉ 0 DE FORMA REGRESSIVA.
int main (){

int i;

for (i=10; i>=0; i--){
    printf("%d...\n", i);
    sleep (1);
}

printf("FIM\n");

system("pause");
return 0;
}
