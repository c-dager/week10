#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int first = 0;
    int last = strlen(str) - 1;
    char temp;

    while (first < last) {
    
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;

        first++;
        last--;
    }
}

int main() {
    char str[40];
    printf("Enter a message: \n");
    fgets(str, 40, stdin);
    reverse(str);
    printf("%s\n", str);
    return 0;
}