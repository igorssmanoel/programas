linha=map(int,raw_input().split())
HI=linha[0]
HF=linha[1]
MI=0
MF=0
t1=HI*60 + MI
t2=HF*60 + MF
if t1<t2:
    print "O JOGO DUROU %d HORA(S)" % ((t2-t1)/60)
else:
    print "O JOGO DUROU %d HORA(S)" % ((24*60 + (t2-t1))/60)
