import numpy as np

#input arrays
A=np.array(([2,3],[5,7]))
B=np.array(([0,4],[-1,7]))
C=np.array(([1,0],[-1,4]))

MyIdentity=np.array(([1,0],[0,1]))  # identity matrix of order 2x2

#constant value
const= -10

#calculating expression AC+B^2-10C
result= A @ C + B @ B + const*MyIdentity @ C

# printing the matrix
for i in range(2):
    for j in range(2):
        print("%3d"%(result[i][j]),end=' ')
    print("\n")
