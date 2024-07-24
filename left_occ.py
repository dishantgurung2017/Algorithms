//Given a sorted list A in ascending order and an element x, efficiently find the leftmost occurrence of x in A.
import numpy as np

array = np.array([0,1,1,2,3,10,12,17,17,17,20,20])
l,r = 0,array.size - 1

x = int(input("Enter an integer: "))

while l != r:
    m = l + (r - l)//2
    if array[m] < x:
        l = m + 1
    else: r = m
if array[l] == x:
    print(f'The leftmost index of {x} is {l}')
else: print('Element is not present')
