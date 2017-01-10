from math import sqrt
linha=map(float,raw_input().split())
a=linha[0]
b=linha[1]
c=linha[2]
delta=((b*b)-(4*a*c))
if (a==0) or delta<0:
    print "Impossivel calcular"
else:
    delta>=0
    x1=(-b+sqrt(delta))/(2*a)
    x2=(-b-sqrt(delta))/(2*a)
    print "R1 = %.5f" % (x1)
    print "R2 = %.5f" % (x2)