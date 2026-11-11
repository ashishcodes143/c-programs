// Answer: 17 (comma operator: a++ and b++ run first, then a + b = 6 + 11)
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int x = (a++, b++, a + b);
    printf("%d", x);
    return 0;
}
