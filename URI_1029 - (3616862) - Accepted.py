phi = (1 + 5**0.5) / 2

def fibonacci(n):
    return int(round((phi**n - (1-phi)**n) / 5**0.5))
for i in range(int(input())):
    n = int(input())
    soma=0
    for x in range(n):
        soma+=fibonacci(x)
    a = soma*2
    b = fibonacci(n)
    print("fib(%d) = %d calls = %d" %(n,a,b))