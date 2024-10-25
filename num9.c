#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rollDice() {
    int num = (rand() % 6)+ 1;
    printf("You rolled a: %d\n", num);
}

int main() {
    char* keepPlaying = "y";
    char userInput[50];
    while(1){
        rollDice();
        printf("Enter y to keep playing\n");
        scanf("%s", userInput);
        if(strcmp(keepPlaying, userInput) == 0){
            continue;
        }
        else{
            break;
        }
    }
    printf("Thanks for playing!\n");

}