linha = input().split()
linha = list(map(int,linha))
a,b,c,d = linha
while not(a==0 and b==0 and c==0 and d==0):
    if a == c and b == d:
        print(0)
    elif abs(a-c) == abs(b-d) or (a==c) or (b==d):
        print(1)
    else:
        print(2)
    linha = input().split()
    linha = list(map(int,linha))
    a,b,c,d = linha