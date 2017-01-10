def mdc(a,b):
    while ((a % b) != 0):
        aux = b
        b = a % b
        a = aux
    return b
quant = input()

for i in range(0,quant):
    linha = map(int, raw_input().split(" "))
    a = linha[0]
    b = linha[1]
    print mdc(a,b)