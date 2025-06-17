fact=1
n=int(input("enter the number:"))
if n==0:
	print("fact=",1)
else:
	for i in range(1,n+1):
		fact=fact*i;
	print("factorial=",fact)
