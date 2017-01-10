linha=map(float,raw_input().split())
linha.sort(reverse=True)
a=linha[0]
b=linha[1]
c=linha[2]
if ((a+b>c) or (a+c>b) or (b+c>a)) and (abs(b-c)<a) and (a<abs(b+c)):
        
    if a*a==b*b+c*c:
        print "TRIANGULO RETANGULO"
    if a*a > b*b + c*c:
        print "TRIANGULO OBTUSANGULO"
    if a*a < b*b + c*c:
        print "TRIANGULO ACUTANGULO"
    if (a==b==c):
        print "TRIANGULO EQUILATERO"
    elif a==b or c==b:
        print "TRIANGULO ISOSCELES"
else:
    print "NAO FORMA TRIANGULO"