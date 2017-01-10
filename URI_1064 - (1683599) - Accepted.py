media=0
cont=0
for i in range(1,7):
    numero=input()
    if numero>0:
        media=media+numero
        cont=cont+1
print str(cont) + " valores positivos"
print "%.1f" % float(media/cont)