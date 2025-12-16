#2. Calculate the sum of all Even numbers in a given range.

# Taking range from user input.

num = int(input("Enter the range you want to sum:"))

sum = 0
while num>=0:
    if num%2==0:
        sum+=num
    num-=1

print("Sum of all even number: ", sum)