#!/usr/bin/env python3

def is_palindrome(val):
    return str(val) == str(val)[::-1]

print('Python:\n\t', end='')

largest = 0

for a in range(100, 1000):
    for b in range(100, 1000):
        c = a * b
        if is_palindrome(c) and c > largest:
            largest = c

print(largest)
