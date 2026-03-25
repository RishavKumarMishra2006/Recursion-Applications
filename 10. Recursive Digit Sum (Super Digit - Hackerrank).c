#include <stdio.h>
#include <string.h>

long long sumDigits(char *n) {
    long long sum = 0;
    for (int i = 0; n[i]; i++) {
        sum += n[i] - '0';
    }
    return sum;
}

long long superDigit(long long n) {
    if (n < 10)
        return n;
    
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return superDigit(sum);
}

int main() {
    char n[1000];
    int k;
    scanf("%s %d", n, &k);

    long long initialSum = sumDigits(n) * k;
    printf("%lld", superDigit(initialSum));

    return 0;
}
