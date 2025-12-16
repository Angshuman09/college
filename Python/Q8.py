# Write a program to calculate the sum of digits of a number.

num = int(input("Enter any number: "))

temp = num
sum = 0

while temp!=0:
    rem = temp%10
    sum += rem
    temp//=10

print("Sum of the digits are: ", sum)

