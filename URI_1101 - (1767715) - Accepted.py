linha=raw_input().split()
linha=map(int,linha)
a=linha[0]
b=linha[1]

while (a>0) and (b > 0):
     if a>b:
          aux=a
          a=b
          b=aux
     soma=0
     for i in range(a,b+1):
          soma +=i
          print i,
     print "Sum=%d" % soma
     linha=raw_input().split()
     linha=map(int,linha)
     a=linha[0]
     b=linha[1]