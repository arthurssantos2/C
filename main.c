#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio(int min, int max) {

    srand(time(NULL));

    int num = rand() % (max - min + 1) + min;
    printf("%d\n" , num);
    return num;
}

void checarParIpmar(int num){
    if(num % 2 == 0){
        printf("%d Par\n" , num);
    }

    else{
        printf("%d Impar \n", num);
    }
}

int main(){
    return 0;
}