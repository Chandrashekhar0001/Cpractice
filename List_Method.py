# to add an one element in list at the end we use append
l=[1,34,67,2,3,4,5,6]
print(l)
l.append(7)
print(l)
l.sort() #  sort is used to set in ascending order
print(l)
l.sort(reverse=True)   #  reverse is used to set in descending order
print(l)
print(l.index(6))
# to insert an element at particular index
l.insert(2,54)
print(l)
m=[7,5,3]
l.extend(m)
print(l)
k=l+m
print(k)