from sympy import primerange 

x, y = 2, 7  # range [x, y]

primes = list(primerange(x, y + 1))
print(primes if primes else "No")
