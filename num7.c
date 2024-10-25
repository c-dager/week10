#include <stdio.h>

void generateRand(int num){
    for(int i = 0; i < num; i++){
        double val = (double)rand() / (double)RAND_MAX;
        printf("%d ", val);
    }
    printf("\n");
}

int main(){
    int num;
    printf("Type a number: \n");
    scanf("%d", &num);
    generateRand(num);
}