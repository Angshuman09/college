# write a program to find the 20 fibbonaci series using recurssion

def fibbo(num):
    if num == 0 or num == 1:
        return num
    return fibbo(num-1)+fibbo(num-2)

for i in range(20):
    print(fibbo(i))