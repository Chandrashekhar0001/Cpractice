#  tuple do changable//  tuple are immutable
tup=(1,2,3,4,"red")
print(type(tup),tup)
print(tup[0])
print(tup[1])
print(tup[2])
if 4 in tup:
    print("yes")
# tuple slicing
tup1=tup[:4]
print(tup1)
