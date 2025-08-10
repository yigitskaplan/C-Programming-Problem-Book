#include <stdio.h> /*library -> function (printf, scanf) */
#include <stdlib.h>

int main(void) {
    int x, y;
    
    printf("ENTER TWO NUMBERS: ");
    scanf(" %d%d", &x, &y);
    
    printf("THE SUM IS %d\n", x + y);
    printf("THE DIFFERENCE IS %d\n", x - y);
    printf("THE PRODUCT IS %d\n", x * y);
    printf("THE QUOTIENT IS %d\n", x / y);
    printf("THE MODULUS IS %d\n", x % y);
    
    system("PAUSE");
    return(0);
}
