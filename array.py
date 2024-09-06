# Creating an array (list) of integers
numbers = [10, 20, 30, 40, 50]

# Displaying the array
print("Array elements:", numbers)

# Accessing elements in the array
print("First element:", numbers[0])
print("Last element:", numbers[-1])

# Adding an element to the array
numbers.append(60)
print("Array after adding an element:", numbers)

# Removing an element from the array
numbers.remove(30)
print("Array after removing an element:", numbers)

# Finding the length of the array
print("Length of the array:", len(numbers))

# Iterating through the array and printing each element
print("Array elements:")
for num in numbers:
    print(num)

# Slicing the array (getting a sub-array)
sub_array = numbers[1:4]
print("Sub-array (elements from index 1 to 3):", sub_array)
