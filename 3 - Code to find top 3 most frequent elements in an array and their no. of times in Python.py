# Code to find top 3 elements and their counts

from collections import Counter
 
arr = ['Amit','amit','raj','sita','raj','amit','sita',1,1,3,4,5,1,5,1,3,7,6,5,1,6,8,6,2,3,4]
counter = Counter(arr)
top_three = counter.most_common(3)
print(top_three)#default tuple will come, as, this predifined fun will give
