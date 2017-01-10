linha=map(int,raw_input().split())
HI=linha[0]
HF=linha[2]
MI=linha[1]
MF=linha[3]

while (HI != 0) or (HF!= 0) or (MI != 0) or (MF!=0):
    t1=HI*60 + MI
    t2=HF*60 + MF
    if t1<t2:
        print (t2-t1)
    else:
        print (24*60 + (t2-t1))
    linha=map(int,raw_input().split())
    HI=linha[0]
    HF=linha[2]
    MI=linha[1]
    MF=linha[3]