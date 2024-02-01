#include <stdio.h>

int main(){
    int m, n, k;
    printf("Enter the values of marks, classes attended, total classes respectively: ");
    scanf("%d%d%d", &m, &n, &k);
    float f = m * (float)(n/k);
    printf("Final Score: %.0f\n", f);
    printf("Grade is = ");
    if(f >= 90)
        printf("Ex\n");
    else if(f >= 80)
        printf("A\n");
    else if(f >= 70)
        printf("B\n");
    else if(f >= 60)
        printf("C\n");
    else if(f >= 50)
        printf("D\n");
    else if(f >= 40)
        printf("P\n");
    else 
        printf("F\n");
    return 0;
}