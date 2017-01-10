x = int(input())
y = int(input())
if x>y:
    aux = x
    x = y
    y = aux
    
for i in range(x+1,y):
    resto = i%5
    if resto == 2 or resto == 3:
        print(i)