n=int(input("enter the range:"));
n1=1
n2=0
if n==0:
	print("no series:")
else:
	print(0)
	for i in range(1,n):
		fib=n1+n2
		if fib>n:
			break
		print(fib)
		n2=n1
		n1=fib

	
	 
