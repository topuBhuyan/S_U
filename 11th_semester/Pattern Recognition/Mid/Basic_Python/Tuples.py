tuple1 = ("apple", "banana", "cherry")
tuple2 = (1, 5, 7, 9, 3)
tuple3 = (True, False, False)

print(tuple3)


mytuple = ("apple", "banana", "cherry")
print(type(mytuple))

thistuple = tuple(("apple", "banana", "cherry")) # note the double round-brackets
print(thistuple)


thistuple = ("apple", "banana", "cherry")
y = ("orange",)
thistuple += y

print(thistuple)

print("-------Remove Tuple----------")
thistuple = ("apple", "banana", "cherry")
y = list(thistuple)
y.remove("apple")
thistuple = tuple(y)
print (thistuple)

print("------Unpacking a Tuple-------")
fruits = ("apple", "banana", "cherry")
(green, yello, red) = fruits

print(green)
print(yello)
print(red)


# Using Asterisk*
# যদি ভেরিয়েবলের সংখ্যা মানের সংখ্যার চেয়ে কম হয়, তাহলে আপনি ভেরিয়েবলের নামের সাথে * যোগ করতে পারেন এবং মানগুলি একটি তালিকা হিসাবে ভেরিয়েবলের সাথে সংযুক্ত করা হবে:
print("----Using Asterisk*----------")

fruits = ("apple", "banana", "cherry")
(green, yello, *red) = fruits

print(green)
print(yello)
print(red)

print("-------- Loop Tuples----------")
thistuple = ("apple", "banana", "cherry")
for x in thistuple:
  print(x)

print("--------Print all items by referring to their index number:----------")
thistuple = ("apple", "banana", "cherry")
for i in range(len(thistuple)):
  print(thistuple[i])


