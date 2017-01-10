numero=input()
horas=numero / 3600
numero=numero % 3600
minutos = numero /60
numero = numero % 60
print "%d:%d:%d" % (horas,minutos,numero)