def mu(x,n):
	if n==1:
		return x
	z=mu(x,n//2)
	if n==0:
		return 1
	if n%2==0:
		return z*z
	else:
		return z*z*x
print(mu(1036,100000))