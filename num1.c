#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf("Type a number: \n");
    scanf("%d", &num1);
    printf("Type another number: \n");
    scanf("%d", &num2);
    int total = num1 + num2;
    printf("The sum is: %d\n", total);

}