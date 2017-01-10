string = raw_input()
while string != "":
    try:
        abriu=0
        fechamento = False
        for item in string:
            if item == "(":
                abriu+=1
            if abriu == 0 and item == ")":
                fechamento = True
                break
                
            if item == ")":
                abriu-=1
        if abriu == 0 and fechamento==False:
            print "correct"
        else:
            print "incorrect"
        string = raw_input()
    except:
        break
