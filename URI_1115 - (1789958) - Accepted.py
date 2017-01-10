linha=map(float,(raw_input().split()))
x=linha[0]
y=linha[1]
while x != 0 and y != 0: 
    if x>0 and y>0:
        print "primeiro"
    elif x>0 and y<0:
        print "quarto"
    elif x<0 and y<0:
        print "terceiro"
    elif x<0 and y>0:
        print "segundo"
    linha=map(float,(raw_input().split()))
    x=linha[0]
    y=linha[1]