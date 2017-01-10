j=7
i=1
index=5
while i<=10:
    print "I=%s J=%s" % (i,j)
    if j!=index:
        j=j-1
    else:
        index=index+2
        j=j+4
        i+=2