fora=0
dentro=0
n=input()
for i in range(1,n+1):
    numero=input()
    if numero in range(10,20):
        dentro+=1
    else:
        fora+=1
        
print "%s in" % dentro
print "%s out" % fora