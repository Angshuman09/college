# 3). Write a program to search for a given number in a list using the Binary Search method. Do not use any library functions for searching.

nums = [1,2,3,4,5,6,7]
find = 6
st = 0
end = len(nums)-1

while st<=end:
    mid = st + (end - st)//2
    if nums[mid] == find:
        print("Here is index of that element: ", mid)
        break
    elif nums[mid]<find:
        st = mid+1
    else:
        end = mid-1
