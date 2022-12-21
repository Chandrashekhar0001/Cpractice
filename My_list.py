l1=[1,2,3,4,5,6,7,8,9,"hello"]
print(l1)
print(l1[3:9])
print(l1[1:9:3])
print(l1[-3])
#print(type(l1))
#print(l1[0])
print(l1[1])
#print(l1[2])
# print(l1[9])
if 8 in l1:
    print("yes")
if "she" in "shekhar":
    print("yes")
# list comprehension
l2=[i for i in range(8) if i%2==0]
print(l2)     #  even numbers printed
l2=[i for i in range(8)]
print(l2)