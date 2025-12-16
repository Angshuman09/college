#1 Lambda Function

arr = [1,2,3,4]

# arr = list(map(lambda x: x*x, arr))
arr = list(filter(lambda x: x%2==0, arr))

print(arr)