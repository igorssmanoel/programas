while True:
    try:
        linha = input()
        linha = linha.split()
    
        print(int(linha[0]) ^ int(linha[1]))
    except:
        break