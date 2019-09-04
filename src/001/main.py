#!/usr/bin/env python3

print('Python:\n\t', end='')

result = 0

n = 999 // 3
mult3 = n * (n + 1) // 2
mult3 *= 3

n = 999 // 5
mult5 = n * (n + 1) // 2
mult5 *= 5

n = 999 // 15
mult15 = n * (n + 1) // 2
mult15 *= 15

result = mult3 + mult5 - mult15

print(result)
