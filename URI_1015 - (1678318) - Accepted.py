from math import sqrt
linha=raw_input()
linha2=raw_input()
linha=linha.split(" ")
linha=map(float,linha)
linha2=linha2.split(" ")
linha2=map(float,linha2)
calculo1=linha2[0] - linha[0]
calculo1=calculo1*calculo1
calculo2=linha2[1] - linha[1]
calculo2=calculo2*calculo2
print "%.4f" % (sqrt((calculo1) + (calculo2)))
