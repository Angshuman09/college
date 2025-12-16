# Calculate the first 20 terms of Fibonacci series.

n = 20
a,b = 0, 1
while n>=1:
    print(a," ")
    a,b = b,a+b
    n-=1