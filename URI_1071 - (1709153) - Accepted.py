x=input()
y=input()
soma=0
if x>y:
    for i in range(y+1,x):
        if i % 2 !=0:
            soma+=i
else:
    for i in range(1+x,y):
        if i % 2 !=0:
            soma+=i
print soma