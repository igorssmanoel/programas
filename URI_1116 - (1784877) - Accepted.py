for i in range(0,input()):
    linha = map(float,raw_input().split())
    a = linha[0]
    b = linha[1]
    if b==0:
        print "divisao impossivel"
    else:
        print "%.1f" % float(a/b)