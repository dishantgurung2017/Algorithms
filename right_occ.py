//Given a sorted array A in ascending order and an element x, determine whether x belongs to A.
//If x does belong to A, determine the rightmost occurrence of x in A. Make sure to use ONLY a WHILE loop and NO recursion.

import numpy as np
import math

array = np.array([0,1,1,2,3,10,12,17,17,17,20,20])
l,r = 0,array.size - 1

x = int(input("Enter an integer: "))

while l != r:
    m = l + math.ceil((r - l)/2)
    if array[m] > x:
        r = m - 1
    else: l = m
if array[l] == x:
    print(f'The rightmost index of {x} is {l}')
else: print('Element is not present')
