N=input()
print "NOTAS:"
notas=[100.00,50.00,20.00,10.00,5.00,2.00]
moedas=[1.00,0.50,0.25,0.10,0.05,0.01]
for i in range(0,len(moedas)):
    print "%s nota(s) de R$ %.2f" % (int((N/notas[i])),notas[i])
    N=N % notas[i]
print "MOEDAS:"
for i in range(0,len(moedas)-1):
    print "%s moeda(s) de R$ %.2f" % (int(N/moedas[i]),moedas[i])
    N=N % moedas[i]
print "%.0f moeda(s) de R$ %.2f" % (float(N/moedas[5]),moedas[5])