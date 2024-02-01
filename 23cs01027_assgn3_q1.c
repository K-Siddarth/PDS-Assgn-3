#include <stdio.h>

int main(){
    int n;
    printf("Enter Input: ");
    scanf("%d", &n);
    if(n > 0)
        printf("Positve");
    else if(n==0)
        printf("Zero");
    else
        printf("Negative");
    return 0;
}