x=input()
y=input()
if x>y:
    direcao=-1
    soma=0
    for i in range(x,y-1,direcao):
        if i % 13 != 0:
            soma+=i
else:
    direcao=1
    soma=0
    for i in range(x,y+1,direcao):
        if i % 13 != 0:
            soma+=i
print soma