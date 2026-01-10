"""
ভেরিয়েবল হলো ডেটা মান সংরক্ষণের জন্য ধারক।

ভেরিয়েবল তৈরি করা
ভেরিয়েবল ঘোষণা করার জন্য পাইথনের কোনও কমান্ড নেই।

আপনি যখন প্রথম কোনও মান নির্ধারণ করেন তখনই একটি ভেরিয়েবল তৈরি হয়।
"""
x = 5
y = "john" # x and y is variable
print(x)
print(y)

x = 4       # x is of type int
x = "Sally" # x is now of type str
print(x)

print("---------")


x = str(3) # x will be 3
y = int(5) # y will be 3
z = float(3) # z will be 3.0

## Get the Type

x = 5
y = "John"
print(type(x))
print(type(y))
print("---------")


## Assign Multiple Values

#  def হল Python-এ "define" বা "সংজ্ঞায়িত করা"-এর সংক্ষিপ্ত রূপ। এটি ব্যবহার করা হয় ফাংশন তৈরি করার জন্য।

x, y, z = "Orenge", "Mango", "Banana"
print(x, y, z)

print("---------")
# x = y = z = "Orange"
# print(x)
# print(y)
# print(z)

fruits = [ "apple", "banana", "cherry"]
x, y, z = fruits
print(x)
print(y)
print(z)
print("---------")

### Global Variable

x = "awsome"

def myFunc():
    print("Python is " + x)  
myFunc()
print("---------")


x = "awsome"

def myFunc():
    x = "fantastic"
    print("Python is " + x)
myFunc()

print("Python is " + x)
print("---------")

## global Keyword
def myFunc():
    global x
    x = "fantastic"
myFunc()

print("Python is " + x)
print("---------")

x = "awsome"
def myFunc():
    global x
    x = "fantastic"  
myFunc()

print("Python is " + x)



