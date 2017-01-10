linha=map(int,raw_input().split())
HI=linha[0]
HF=linha[2]
MI=linha[1]
MF=linha[3]
if HI >= HF:
  HD = HF - HI + 24
else:
  HD = HF - HI
if MI > MF:
  HD = HD - 1
  MD = MF - MI + 60
else:
  MD = MF - MI
print "O JOGO DUROU %d HORA(S) E %d MINUTO(S)"% (HD,MD)