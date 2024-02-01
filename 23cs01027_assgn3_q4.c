#include <stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the coordinates of the 3 points: ");
    scanf("%d%d%d%d%d%d", &x1, &x2, &x3, &y1, &y2, &y3);
    if((x2-x1)*(y3-y2) == (y2-y1)*(x3-x2)){
        printf("They are on the same line\n");
    }
    else
        printf("They are not in a line\n");
    return 0;
}