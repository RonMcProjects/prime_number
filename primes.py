#!/usr/bin/python3
import sys

try:
    number = sys.argv[1]
except IndexError:
    number = input("Primes up to: ")

print("1 2", end=' ')
k = 0
for i in range(3, int(number), 2):
    prime = True
    for j in range(3, int(i/2)+1, 2):
        modulo = i % j
        if (modulo == 0):
            prime = False
            continue
    if (prime == True):
            print(i, end=' ')
            k = k + 1
            if (k % 10 == 0):
                print()

