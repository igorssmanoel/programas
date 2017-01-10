s=input()
if s<=400:
    print "Novo salario: %.2f" % (s+(s*15/100.0))
    print "Reajuste ganho: %.2f" % (s*15/100.0)
    print "Em percentual: %.d " % 15 + "%"
elif 400.00<s<=800:
    print "Novo salario: %.2f" % (s+(s*12/100.0))
    print "Reajuste ganho: %.2f" % (s*12/100.0)
    print "Em percentual: %.d " % 12 + "%"
elif 800.00<s<=1200:
    print "Novo salario: %.2f" % (s+(s*10/100.0))
    print "Reajuste ganho: %.2f" % (s*10/100.0)
    print "Em percentual: %.d " % 10 + "%"
elif 1200.00<s<=2000:
    print "Novo salario: %.2f" % (s+(s*7/100.0))
    print "Reajuste ganho: %.2f" % (s*7/100.0)
    print "Em percentual: %.d " % 7 + "%"
elif s>2000:
    print "Novo salario: %.2f" % (s+(s*4/100.0))
    print "Reajuste ganho: %.2f" % (s*4/100.0)
    print "Em percentual: %.d " % 4 + "%"