print("Hello")
print('Hello')
print("--------------")

print("------ Quotes Inside Quotes --------")
print(" It's alright")
print("He is called 'Johnny' ")
print('He is called "Johnny" ')


print("------ Assign String to a Variable --------")
a = "Hello\n"
print(a)

print("-----Multiline Strings-----")
## You can assign a multiline string to a variable by using three quotes:
a = """Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."""
print(a)

print("-------Strings are Arrays----------")
"""অন্যান্য অনেক জনপ্রিয় প্রোগ্রামিং ভাষার মতো, পাইথনের স্ট্রিংগুলি ইউনিকোড অক্ষরের অ্যারে।
যাইহোক, পাইথনের কোনও অক্ষর ডেটা টাইপ নেই, একটি একক অক্ষর কেবল 1 দৈর্ঘ্যের একটি স্ট্রিং।
স্ট্রিংয়ের উপাদানগুলি অ্যাক্সেস করতে বর্গাকার বন্ধনী ব্যবহার করা যেতে পারে। """

a = "Hello, World!"
print(a[1])

for x in "Banana":
    print(x)

print ("-----------string Length--------")
a = "Hello, world!"
print(len(a))

print("--------Check String----------")
txt = "The best things in life are free!" ## ans will be True or False
print("life" in txt)

## Print only if "free" is present
txt = "The best things in life are free!"
if "life" in txt:
    print("Yes, 'life' is Present.")


txt = "The best things in life are free!"
if "expensive" not in txt:
  print("No, 'expensive' is NOT present.")


print("-------Slicing Strings--------")
"""
স্লাইস সিনট্যাক্স ব্যবহার করে আপনি বিভিন্ন ধরণের অক্ষর ফেরত দিতে পারেন।

স্ট্রিংয়ের একটি অংশ ফেরত দেওয়ার জন্য কোলন দ্বারা পৃথক করা শুরু সূচক এবং শেষ সূচক নির্দিষ্ট করুন।

"""
b = "Hello, World!"
print(b[2:5]) # output: llo

b = "Hello, World"
print(b[:5]) # output: Hello

b = "Hello, World"
print(b[2:]) # output: llo, World

b = "Hello, World"
print(b[-5 : -2])

print("-------Modify String-----------")
a = "Hello, World"
print(a.upper())

a = "Hello, World"
print(a.lower())

print("-----Remove Whitespace-------")
a = " Hello, World! "
print(a.strip())

## Replace
a = "Hello, World!"
print(a.replace("H", "J"))  

## Split String
a = "Hello, World!"
print(a.split(","))

print("------String Concatenation---------")
a = "Hello"
b = "World"
c = a + b
print(c)

a = "Hello"
b = "World"
c = a + " " + b
print(c)

print("-------------Format String----------")
"""
age = 36
#This will produce an error:
txt = "My name is John, I am " + age
print(txt)

"""

age = 36
txt = f"My name  is John, I'am {age}"
print(txt)

price = 59
txt = f"The price is {price:.2f} dollars"
print(txt)

txt = f"The Price is {20 * 59} dollars"
print(txt)

# Escape Characters
txt = "We are the so-called \"Vikings\" from the north."


print("-------print Methods-------------")

"""
capitalize() ----------------->	Converts the first character to upper case
casefold()   ----------------->	Converts string into lower case
center()	 -----------------> Returns a centered string
count()	    -----------------> Returns the number of times a specified value occurs in a string
encode()	-----------------> Returns an encoded version of the string
endswith()	-----------------> Returns true if the string ends with the specified value
expandtabs()-----------------> Sets the tab size of the string
find()	    -----------------> Searches the string for a specified value and returns the position of where it was found
format()	-----------------> Formats specified values in a string
format_map()-----------------> Formats specified values in a string
index()	    -----------------> Searches the string for a specified value and returns the position of where it was found
isalnum()	-----------------> Returns True if all characters in the string are alphanumeric
isalpha()	-----------------> Returns True if all characters in the string are in the alphabet
isascii()	-----------------> Returns True if all characters in the string are ascii characters
isdecimal()	-----------------> Returns True if all characters in the string are decimals
isdigit()	-----------------> Returns True if all characters in the string are digits
isidentifier()-----------------> Returns True if the string is an identifier
islower()	-----------------> Returns True if all characters in the string are lower case
isnumeric()	-----------------> Returns True if all characters in the string are numeric
isprintable()-----------------> Returns True if all characters in the string are printable
isspace()	-----------------> Returns True if all characters in the string are whitespaces
istitle()	-----------------> Returns True if the string follows the rules of a title
isupper()	-----------------> Returns True if all characters in the string are upper case
join()	    -----------------> Joins the elements of an iterable to the end of the string
ljust()	    -----------------> Returns a left justified version of the string
lower()	    -----------------> Converts a string into lower case
lstrip()	-----------------> Returns a left trim version of the string
maketrans()	-----------------> Returns a translation table to be used in translations
partition()	-----------------> Returns a tuple where the string is parted into three parts
replace()	-----------------> Returns a string where a specified value is replaced with a specified value
rfind()	    -----------------> Searches the string for a specified value and returns the last position of where it was found
rindex()	-----------------> Searches the string for a specified value and returns the last position of where it was found
rjust()	    -----------------> Returns a right justified version of the string
rpartition()-----------------> Returns a tuple where the string is parted into three parts
rsplit()	-----------------> Splits the string at the specified separator, and returns a list
rstrip()	-----------------> Returns a right trim version of the string
split()	    -----------------> Splits the string at the specified separator, and returns a list
splitlines()-----------------> Splits the string at line breaks and returns a list
startswith()-----------------> Returns true if the string starts with the specified value
strip()	    -----------------> Returns a trimmed version of the string
swapcase()	-----------------> Swaps cases, lower case becomes upper case and vice versa
title()	    -----------------> Converts the first character of each word to upper case
translate()	-----------------> Returns a translated string
upper()	    -----------------> Converts a string into upper case
zfill()	    ----------------->              Fills the string with a specified number of 0 values at the beginning

"""


