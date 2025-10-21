#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;   scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int m, n;
        scanf("%d %d", &m, &n);
        printf("%d\n", gcd(m, n));}
    return 0;
}