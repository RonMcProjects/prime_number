#!/usr/bin/python3
import sys

try:
    number = sys.argv[1]
except IndexError:
    number = input("Primes up to: ")

k = 0
for i in range(1, int(number)):
    prime = True
    for j in range(2, int(i/2)+1):
        modulo = i % j
        if (modulo == 0):
            prime = False
    if (prime == True):
            print(i, end=' ')
            k = k + 1
            if (k % 10 == 0):
                print()

