#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    char foods[5][10] = {"Pancakes", "Hamburger", "Pizza", "Chocolate", "Banana"};
    int num = (rand() % 5);
    printf("Random food: %s\n", foods[num]);

}