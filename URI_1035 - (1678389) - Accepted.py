lista=raw_input()
lista=lista.split(" ")
lista=map(int,lista)
a=lista[0]
b=lista[1]
c=lista[2]
d=lista[3]
if b>c:
    if d>a:
        if c+d>a+b:
            if c>=0 and d>=0:
                if a % 2 ==0:
                    print "Valores aceitos"
                else:
                    print "Valores nao aceitos"
            else:
                print "Valores nao aceitos"
        else:
            print "Valores nao aceitos"
    else:
        print "Valores nao aceitos"
else:
    print "Valores nao aceitos"
