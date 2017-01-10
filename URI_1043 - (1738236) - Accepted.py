linha=map(float,raw_input().split())
a=linha[0]
b=linha[1]
c=linha[2]
perimetro=a+b+c
if ((a+b>c) or (a+c>b) or (b+c>a)) and (abs(b-c)<a) and (a<abs(b+c)):
        print "Perimetro = %.1f" % perimetro
else:
    print "Area = %.1f" % (((a+b)*c)/2)