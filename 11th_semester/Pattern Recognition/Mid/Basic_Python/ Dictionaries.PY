thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict)

print("-------Dictionary Items---------")
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict["brand"])

print("-------The dict() Constructor----------")

thisdict = dict(name = "John", age = 36, country = "Norway")
print(thisdict)

print("--------Add a new item to the original dictionary, and see that the keys list gets updated as well:--------")

car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1946
}

x = car.keys()
print(x) #before the change

car["color"] = "white"
print(x) #after the change

print("-------Adding Items---------")
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict["color"] = "red"
print(thisdict)


thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
thisdict.update({"color": "red"})
