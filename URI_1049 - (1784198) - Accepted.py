input1 = raw_input()
input2 = raw_input()
input3 = raw_input()
if input1 == "vertebrado":
    if input2 == "ave":
        if input3 == "carnivoro":
            print "aguia"
        elif input3 == "onivoro":
            print "pomba"
    elif input2 == "mamifero":
        if input3 == "onivoro":
            print "homem"
        elif input3 == "herbivoro":
            print "vaca"
elif input1 == "invertebrado":
    if input2 == "inseto":
        if input3 == "hematofago":
            print "pulga"
        elif input3 == "herbivoro":
            print "lagarta"
    elif input2 == "anelideo":
        if input3 == "hematofago":
            print "sanguessuga"
        elif input3 == "onivoro":
            print "minhoca"    
