#include <stdio.h>
#include <limits.h>

void generateRand(int num){
    for(int i = 0; i < num; i++){
        double val = (double)rand() / (double)INT_MAX;
        printf("%f ", val);
    }
    printf("\n");
}

int main(){
    int num;
    printf("Type a number: \n");
    scanf("%d", &num);
    generateRand(num);
}