#include <stdio.h>

long long power(int x, int n) {
    if (n == 0)
        return 1;
    
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%lld", power(x, n));
    return 0;
}
