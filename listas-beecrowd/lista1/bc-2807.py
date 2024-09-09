Fib = [0] * 41

N = int(input())

Fib[0] = 0
Fib[1] = 1

for i in range (2, N + 1):
    Fib[i] = Fib[i-1] + Fib[i-2]

for i in range (N, 0, -1):
    print(Fib[i], end=' ')
