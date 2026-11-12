// Answer: 3 2 1 1 2 3 (prints n, calls f(n - 1), then prints n again while returning)
#include <stdio.h>

void f(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    f(n - 1);
    printf("%d ", n);
}

int main() {
    f(3);
    return 0;
}
