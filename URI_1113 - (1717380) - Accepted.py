linha=raw_input().split(" ")
linha=map(int,linha)
a=linha[0]
b=linha[1]
while a<>b:   
    if a>b:
        print "Decrescente"
    else:
        print "Crescente"
    linha=raw_input().split(" ")
    linha=map(int,linha)
    a=linha[0]
    b=linha[1]