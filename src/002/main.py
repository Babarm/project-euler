#!/usr/bin/env python3

print('Python:\n\t', end='')

a = b = 1
fib = result = 0

while fib < 4000000:
    a = b + fib
    b = a + fib
    result += fib
    fib = a + b

print(result)
