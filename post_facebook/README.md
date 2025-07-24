# Dynamic Array Append in C

This project demonstrates a simple way to **append an integer to an existing array in C** by tracking the size of the array manually.

Since C does not support dynamic arrays natively like some other languages, this example shows how to simulate appending values using a fixed-size array and a pointer to its current size.

## 🧠 How It Works

- The `append` function adds a new value to the array at the index of the current size, and then increases the size by 1.
- The `print_array` function prints all elements in the array in a clean `[1, 2, 3]` format.
- The array `y` starts with two values `{3, 2}` and the third value `1` is appended using `append`.

## 💻 Code Overview

int y[10] = {3, 2};   // Initial array with capacity for 10 elements
int size = 2;         // Current size of the array
int x = 1;            // Value to append
append(y, &size, x);  // Append the value
print_array(y, size); // Output: [3, 2, 1]

## 🧪 Output
[3, 2, 1]

## 🚀 How to Run
clang -o array_dynamic_append array_dynamic_append.c
./array_dynamic_append
```c