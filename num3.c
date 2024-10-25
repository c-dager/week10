#include <stdio.h>
int main(){
    char name1[50];
    int age1;
    char name2[50];
    int age2;

    printf("Type a name: \n");
    scanf("%s", name1);
    printf("Type their age: \n");
    scanf("%d", &age1);

    printf("Type another name: \n");
    scanf("%s", name2);
    printf("Type their age: \n");
    scanf("%d", &age2);

    if(age1 < age2){
        printf("The older person is: %s\n", name2);
    }
    else if (age2 < age1)
    {
        printf("The older person is: %s\n", name1);
    }
    
    else{
        printf("They're the same age\n");
    }

    
}