import numpy as np
import sys
import time
size=10000000
py_list1=range(size)
py_list2=range(size)
numpy_array=np.arange(size)
start=time.time()
result=[(x+y) for x,y in zip(py_list1,py_list2)]
print(time.time()-start)

print("\n___________*******____________\n")

