n1 = int(raw_input())
n2 = int(raw_input())

max1 = max(n1,n2)
min1 = min(n1,n2)

if((min1 % 2) != 0):
    min1 += 2
else:
    min1 += 1

summ = 0

while(min1 < max1):
    summ+=min1
    min1 += 2
print summ