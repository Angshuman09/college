# Fisher-Yates Shuffle.

import random

list = [1,2,3,4,5,6,7,8,9]
n = len(list)

for i in range(n-1, 0, -1):
    j = random.randint(0, i)
    list[i], list[j] = list[j], list[i]

print(list)