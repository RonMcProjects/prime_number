# Prime number generator

This is a simple program designed to print out prime numbers in increasing order.

It's been optimized to skip even numbers and only calculate up to half the number sought, since beyond that division would end up being a fraction.  There are certainly better algorithms out there, however this made for an interesting exercise.

Two versions are available.  Originally in pyton, I found it a bit slow so I also include a C version.

If a numerical argument is passed in, it will print out prime numbers up to that value.
If no arguments are passed in, then it prompts the user for a value.

e.g.
```bash
$ ./primes.py 100
1 2 3 5 7 11 13 17 19 23 29 31
37 41 43 47 53 59 61 67 71 73
79 83 89 97
```

