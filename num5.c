#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void printInOrder(int a, int b, int c){
    int min = a;
    int mid = b;
    int max = c;
    if (min > mid) { mid = a; min = b; }
    if (mid > max)
    {
        max = mid;
        mid = c;
        if (min > mid)
        {
            mid = min;
            min = c;
        }
    }
    printf("In order: %d %d %d\n", min,mid,max);
}
int main(){
    int one;
    int two;
    int three;
    
    printf("Type a number: \n");
    scanf("%d", &one);
    printf("Type a second number: \n");
    scanf("%d", &two);
    printf("Type a third number: \n");
    scanf("%d", &three);
    printInOrder(one, two, three);
}
