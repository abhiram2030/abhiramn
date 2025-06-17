n=int(input("enter the range:"))
sum1=0
sum2=0
for i in range(0,n+1):
	if  i%2==0:
		sum1=sum1-i
	else:
		sum2=sum2+i
print("sum:",sum1+sum2)
