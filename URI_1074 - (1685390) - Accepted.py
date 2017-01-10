quantidade=input()
for i in range(0,quantidade):
	numero=input()
	if numero == 0:
		print "NULL"
	else:
		if numero % 2 == 0:
			if numero > 0:
				print "EVEN POSITIVE"
			else:
				print "EVEN NEGATIVE"
		else:
			if numero % 2 != 0:
				if numero < 0:
					print "ODD NEGATIVE"
				else:
					print "ODD POSITIVE"