thisset = {"apple", "banana", "cherry"}

for x in thisset:
  print(x)


#Check if "banana" is present in the set:
thisset = {"apple", "banana", "cherry"}

print("banana" not in thisset)

print("----Add sets---------")
thisset = {"apple", "banana", "cherry"}
tropical = {"pineapple", "mango", "papaya"}

thisset.update(tropical)

print(thisset)


print("-------Remove the set Items---------")
thisset = {"apple", "banana", "cherry"}

thisset.remove("banana")
print(thisset)


# Loop through the set, and print the values:

thisset = {"apple", "banana", "cherry"}

for x in thisset:
  print(x)


  print("------------Join set-------------")
set1 = {"a", "b", "c"}
set2 = {1, 2, 3}

set3 = set1 | set2
print(set3)

print("--------Join multiple sets with the union() method:-------")
set1 = {"a", "b", "c"}
set2 = {1, 2, 3}
set3 = {"John", "Elena"}
set4 = {"apple", "bananas", "cherry"}

myset = set1.union(set2, set3, set4)
print(myset)

print("--------Use | to join two sets:--------")

set1 = {"a", "b", "c"}
set2 = {1, 2, 3}
set3 = {"John", "Elena"}
set4 = {"apple", "bananas", "cherry"}

myset = set1 | set2 | set3 |set4
print(myset)



"""
! Frozenset Methods
Being immutable means you cannot add or remove elements. However, frozensets support all non-mutating operations of sets.

Method	     Shortcut	        Description	
copy()	 	            Returns a shallow copy	
difference()	-	    Returns a new frozenset with the difference	
intersection()	&	    Returns a new frozenset with the intersection	
isdisjoint()	 	    Returns whether two frozensets have an intersection	
issubset()	  <= / <	Returns True if this frozenset is a (proper) subset of another	
issuperset()  >= / >	Returns True if this frozenset is a (proper) superset of another	
symmetric_difference()	^	Returns a new frozenset with the symmetric differences	
union()     	|	     Returns a new frozenset containing the union

"""