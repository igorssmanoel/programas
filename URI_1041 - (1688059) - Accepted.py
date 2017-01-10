linha=map(float,(raw_input().split()))
x=linha[0]
y=linha[1]
if x==0 and y==0:
    print "Origem"
else:
    if x==0:
        print "Eixo Y"
    elif y==0:
        print "Eixo X"
    else:
        if x>0 and y>0:
            print "Q1"
        elif x>0 and y<0:
            print "Q4"
        elif x<0 and y<0:
            print "Q3"
        elif x<0 and y>0:
            print "Q2"