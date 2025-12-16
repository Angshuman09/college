# 3.FACTORIAL OF A NUMBER

num = int(input("Enter any number:"))

fact = 1

while num>=1:
    fact*=num
    num-=1

print("Factorial of a number is:", fact)
