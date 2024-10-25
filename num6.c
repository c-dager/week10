#include <stdio.h>
#include <string.h>
int main(){
    char *fullName;
    printf("Type your first and last name: \n");
    fgets(fullName, 40, stdin);

    char *name = strtok(fullName, " ");
    int nameSpot = 1;
    while(name != NULL){
        if(nameSpot == 1){
            printf("First name: %s\n", name);
        }
        else{
            printf("Last name: %s\n", name);
        }
        name = strtok(NULL, " ");
        nameSpot++;
    }


}