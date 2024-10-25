#include <stdio.h>
#include <string.h>
int main(){
    char name[50];
    printf("Type your first name: \n");
    scanf("%s", &name);
    int total = strlen(name);
    printf("Hello, %s, your name has %d letters\n", name, total);
}