#include <iostream>
#include <stdlib.h>

int main() {
    printf("%5c\n", '*');
    printf("%4c%2c\n", '*', '*');
    printf("%3c%4c\n", '*', '*');
    printf("%2c%6c\n", '*', '*');
    printf("%c%c%c%c %c%c%c%c\n", '*', '*', '*', '*', '*', '*', '*', '*');
    printf("%4c%2c\n", '*', '*');
    printf("%4c%2c\n", '*', '*');
    printf("%4c%c%c\n", '*', '*', '*');

    system("PAUSE");
    return 0;
}