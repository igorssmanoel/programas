num = float(input())
if (num <= 2000):
    print("Isento")
elif (num > 2000 and num <= 3000):
    imposto = (num-2000) * 0.08
    print ('R$', '%.2f' % imposto)
elif (num > 3000 and num <= 4500):
    imposto = (num - 3000) * 0.18 + 80.00
    print ('R$', '%.2f' % imposto)
elif (num > 4500):
    imposto = (num - 4500) * 0.28 + 350.00
    print ('R$', '%.2f' % imposto)
