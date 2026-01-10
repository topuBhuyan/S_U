"""
Python Numbers
There are three numeric types in Python:

int
float
complex

"""

x = 1    # int
y = 2.8  # float
z = 1j   # complex

x = 1 
y = 35656222554887711
z = -32555222
print(type(x))
print(type(y))
print(type(z))

print("________________")
x = 1.10
y = 1.0
z = -35.59

print(type(x))
print(type(y))
print(type(z))
print("---------------")

x = 3+5j
y = 5j
z = -5j

print(type(x))
print(type(y))
print(type(z))
print("---------------")

## Random number
import random

print(random.randrange(1, 10))
