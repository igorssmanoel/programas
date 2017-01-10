linha = input()
linha = linha.split()
n = linha[0]
num = linha[1]
while (n != "0" and num != "0"):
    string = '0'
    for i in linha[1]:
        if i!=n:
            string+=i
    print(int(string))
    linha = input()
    linha = linha.split()
    n = linha[0]
    num = linha[1]

