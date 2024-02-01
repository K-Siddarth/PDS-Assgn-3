#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the sides: ");
    scanf("%d%d%d", &a, &b, &c);
    if((a + b) >= c && (b + c) >= a && (a + b) >= c)
        printf("It is a triangle\n");
    else
        printf("It is not a triangle\n");
    return 0;
}