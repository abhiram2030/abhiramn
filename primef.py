def prime(n):
	flag=0
	if n==1:
		flag=1
	else:
		for i in range(2,n): 
			if n%i==0:
				flag=1
	if flag==1:
		print("number is not prime")
	else:
		print("not prime")

n=int(input("enter the number:"))
prime(n)
