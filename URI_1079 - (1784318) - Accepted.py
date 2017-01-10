for i in range(input()):
    linha = map(float,raw_input().split(" "))
    v1 = linha[0]
    v2 = linha[1]
    v3 = linha[2]
    print "%.1f" % ((v1*2 + v2*3 + v3*5)/10.0)
