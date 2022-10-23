import datetime
import random
my_list=[str(x) for x in range(10000)]
a=random.choice(my_list)
print(len(a))
a=datetime.datetime.now()
for item in my_list:
    print(len(item))
b=datetime.datetime.now()
t1=((b-a).total_seconds())
print(t1)
a=datetime.datetime.now()
length=len
for item in my_list:
    print(length(item))
b=datetime.datetime.now()
t2=((b-a).total_seconds())
print(t2)
if t1>t2:
    print("Expected Result.....")
else:
    print("Unexpected Result....")

