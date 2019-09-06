#!/usr/bin/env python3

print('Python:\n\t', end='')

limit = 600851475143
largestFactor = 0

i = 2
while i * i <= limit:
    if limit % i == 0:
        limit //= i
        largestFactor = i
    else:
        i += 1

if limit > largestFactor:
    largestFactor = limit

print(largestFactor)
