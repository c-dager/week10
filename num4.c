#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main(){
    char firstName[20];
    char lastName[20];
    printf("Type your first name: \n");
    scanf("%s", firstName);
    printf("Type your last name: \n");
    scanf("%s", lastName);

    int len = strlen(lastName);
    char upper[20];
    for(int i =0; i < len; i++){
        upper[i] = toupper(lastName[i]);
    }
    printf("%s %s\n", firstName, upper);
}