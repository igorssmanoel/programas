dic={"1":4.00,"2":4.50,"3":5.00,"4":2.00,"5":1.50}
#print dic["1"]
linha=raw_input()
linha=linha.split(" ")
codigo=linha[0]
quantidade=linha[1]
print "Total: R$ %.2f" % (float(quantidade)*float(dic[codigo]))