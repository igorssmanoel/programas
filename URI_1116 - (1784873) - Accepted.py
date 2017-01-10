for i in range(0,input()):
    linha = raw_input()
    linha = linha.split()
    linha = map(float,linha)
    a = linha[0]
    b = linha[1]
    if b==0:
        print "divisao impossivel"
    else:
        print "%.1f" % float(a/b)
