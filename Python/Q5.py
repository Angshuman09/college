#Given a screen resolution, find the aspect ratio. For example, 640*480 screen has an aspect ratio of 4:3. Other common screen resolution are 800*600(4:3), 1024*768(4:3), 1280*1024(5:4), 1920*1080(16:9) etc. (HINT: you may use Euclid's Algorithm to first find the GCD, to calculate the aspect ratio).

width = int(input("Enter the width:"))
height = int(input("Enter the height:"))

def gcd(a, b):
    while b!=0:
        a,b = b, a%b
    return a

div = gcd(width, height)
w = width // div
h = height // div

print("Aspect ratio is - ",w, ":", h)