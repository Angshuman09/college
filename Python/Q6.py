# Guess the number game: computer will guess a random number from 1-100.

import random

number = random.randint(1, 100)

attempt = 0

while True:
    num = int(input("Guess the number: "))
    attempt+=1
    if num<number:
        print("Your guess is too small.")
    elif num>number:
        print("Your guess is too big.")
    else:
        print("Congrats you guess the number🎉")
        print("Your total attempt is: ", attempt)
        break