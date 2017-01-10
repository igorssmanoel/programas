N=input()
print "NOTAS:"
notas=[100,50,20,10,5,2,1]
moedas=[1,0.50,0.25,0.10,0.05,0.01]
for i in range(0,len(moedas)):
    print "%0.f nota(s) de R$ %.2f" % (N//notas[i],notas[i])
    N=N % notas[i]
print "MOEDAS:"
for i in range(0,len(moedas)):
    print "%0.f moeda(s) de R$ %.2f" % (N//moedas[i],moedas[i])
    N=N % moedas[i]