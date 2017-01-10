lista = []
maior = 0
for i in range(1,101):
	valor = int(input())
	lista.append(valor)
	if valor > maior:
		maior = valor
		pos = i
print (maior)
print (pos)