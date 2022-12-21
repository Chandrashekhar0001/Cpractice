#  strings are immutable
a="Chandra shekhar"
print(len(a))
print(a.upper())
print(a.lower())
print(a.rstrip("2")) #mute any special character or any number after string
print(a.replace("Chandra shekhar","shekhar"))
print(a.split(" "))
heading="beginning oF Python"
print(heading.capitalize())#  capitalization of first character
str1="welcome to python"
print(len(str1))
print(len(str1.center(20)))#  shift  string into center
# count of words how many times  which come in string
print(str1.count("welcome"))
#  endswith is used to check string is end with our choice
print(str1.endswith("n", 7,16))
#find is used for find the index of any value
#example
str1="my name is chandrashekhar"
print(str1.find("is"))
#print(str1.index("iss"))
str1="mynameischandrashekhar001"
# it is used to check string is alpha numeric or not
print(str1.isalnum())
str1="welcome"
print(str1.isalpha())#  in is alpha characters A-Z,a-z  are considerd
print(str1.islower())
print(str1.isprintable())
str1="     "
print(str1.isspace())
str1="My Name Is Chandrashekhar"
print(str1.istitle())
print(str1.swapcase())
print(str1.startswith("My"))
str1="my name is chandrashekhar"
print(str1.title())

