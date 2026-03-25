def super_digit(n):
    if n < 10:
        return n
    
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    
    return super_digit(s)

n, k = input().split()
k = int(k)

initial_sum = sum(int(d) for d in n) * k
print(super_digit(initial_sum))
