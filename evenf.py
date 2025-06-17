def even(n):
	if(n%2==0):
		return True
	else:
		return False
n=int(input("enter the number:"))

if(even(n)):
	print(n,"is an even number")
else:
	print(n,"is an odd  number")

