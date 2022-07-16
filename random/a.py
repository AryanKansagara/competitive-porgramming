def g1(x):
    return int(''. join(sorted(str(x))[::-1]))
def g2(x):
    return int(''.join(sorted(str(x))))
def f(x):
    return g1(x)-g2(x)

n,k = map(int,input().split())
for i in range(k):
    n  = f(n)
print(n)

