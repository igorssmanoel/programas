lista=raw_input()
lista=lista.split(" ")
lista=map(float,lista)
a=lista[0]
b=lista[1]
c=lista[2]
d=lista[3]
media=(2*a+3*b+4*c+d)/10.0
print "Media: %.1f" % media
if media>=7:
    print "Aluno aprovado."
else:
    if media<5.0:
        print "Aluno reprovado."
    else:
        print "Aluno em exame."
        exame=input()
        print "Nota do exame: %.1f" % exame
        media=(media+exame)/2.0
        if media>=5:
            print "Aluno aprovado."
        else:
            print "Aluno reprovado."
        print "Media final: %.1f" % media