minimo = 0
maximo = 10
nota = input()
cont = 0
media = 0
while True:
    if nota >= 0 and nota <= 10:
        media += nota
        cont = cont + 1
        if cont==2:
            break
    else:
        print ("nota invalida")
    nota = input()
print "media = %.2f" %(media/2.0)