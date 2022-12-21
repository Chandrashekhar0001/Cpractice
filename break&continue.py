# break  used to out from the loop
for i in range(12):
    if(i==10):
        break
    print("5 x", i+1, "=", 5*(i+1))

 # continue is used to skip the itration
for i in range(12):
    if(i==10):
        continue
    print("5 x", i, "=", 5*i)