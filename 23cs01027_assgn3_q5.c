#include <stdio.h>

int main(){
    int d;
    printf("Enter the number of days: ");
    scanf("%d", &d);
    if(d <= 5)
        printf("The fine is Rs.1\n");
    else if(d <= 10)
        printf("The fine is Rs.2\n");
    else if(d <= 30)
        printf("The fine is Rs.5\n");
    else
        printf("Your membership is cancelled\n");
    return 0;
}