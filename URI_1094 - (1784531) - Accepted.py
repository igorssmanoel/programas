R,S,C,soma = 0,0,0,0

for i in range(input()):
    linha = raw_input().split()
    quantidade = int(linha[0])
    animal = str(linha[1])
    if animal == "R":
        R+=quantidade
    elif animal == "S":
        S+=quantidade 
    elif animal == "C":
        C+=quantidade
    soma+=quantidade
soma=float(soma)

    
print "Total: %d cobaias" % soma
print "Total de coelhos: %d" % C
print "Total de ratos: %d" % R
print "Total de sapos: %d" % S
print "Percentual de coelhos: %.2f" % ((float(C)/(soma))*100) + " %"
print "Percentual de ratos: %.2f" % ((float(R)/(soma))*100) + " %"
print "Percentual de sapos: %.2f" % ((float(S)/(soma))*100) + " %"