
def decrypt(word):
    pal=''
    for letra in word:
        if letra.isalpha():
            pal+=chr(ord(letra)+3)
        else:
            pal+=letra
    pal = pal[::-1]
    tam = int(len(pal)/2)
    aux=pal[:tam:]
    for i in range(tam,len(pal)):
        aux+=chr(ord(pal[i])-1)
    return aux
for i in range(0,int(input())):
    print(decrypt(input()))
