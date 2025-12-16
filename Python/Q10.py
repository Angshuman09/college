# Write a program to calculate the age of a person. 


from datetime import date

day = int(input("Enter your birthday day: "))
month = int(input("Enter your birtday month: "))
year = int(input("Enter your birtday year: "))

today = date.today()

age = today.year - year
if((today.day, today.month) < (day, month)):
    age-=1
print(age)