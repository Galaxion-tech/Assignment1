import numpy as np

A=np.array(([2,3],[5,7]))
B=np.array(([0,4],[-1,7]))
C=np.array(([1,0],[-1,4]))

MyIdentity=np.array(([1,0],[0,1]))

const= -10
result= np.matmul(A,C)+np.matmul(B,B)+const*np.matmul(MyIdentity,C)

for i in range(2):
    for j in range(2):
        print("%3d"%(result[i][j]),end=' ')
    print("\n")
