def fibonacci(n):
    if n < 2:
        return n
    else:
        return (fibonacci(n-1) + fibonacci(n-2))


terms = 10

print(fibonacci(terms-1))
print()

for i in range(terms):
    print(fibonacci(i))