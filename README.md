# 🃏 Templates-CPP07 ![Static Badge](https://img.shields.io/badge/Barcelona-black?style=for-the-badge&logo=42&logoColor=%23FFFFFF)
![Static Badge](https://img.shields.io/badge/C++-blue?style=flat&logo=cplusplus)
![Static Badge](https://img.shields.io/badge/Makefile-green?style=flat&logo=AnkerMake)
![Static Badge](https://img.shields.io/badge/status-completed-green?style=flat)

This project introduces **C++ templates**, allowing functions and classes to work with different data types without duplicating code.

It is divided into three exercises, each exploring a different use of templates.

## Exercises

### ex00 — Function Templates

This exercise implements generic functions that can operate on different data types.

**Functions:**
- **swap():** Swaps the values of two variables.
- **min():** Returns the smaller of two values.
- **max():** Returns the larger of two values.

These function templates allow the same operations to be used with different types, as long as the types support the required operations.

### ex01 — Iter

This exercise introduces templates for iterating over arrays.

**Functions:**
- **iter():** Applies a function to each element of an array.
- **printElement():** A function template used to print each element.
- **ft_print():** Prints an integer passed as an argument.

The `iter()` function receives an array, its length, and a function to apply to every element. This makes it possible to reuse the same iteration logic with different functions.

### ex02 — Array

This exercise implements a generic array class using templates.

**Class:**
- **Array:** A template class that manages an array of elements of a specified type.

The class supports:
- Creating arrays with a specified size.
- Copying arrays.
- Accessing and modifying elements using the `[]` operator.
- Checking the array size with `size()`.
- Throwing an exception when an index is out of bounds.

The example also demonstrates that copying an array creates an independent copy, so modifying one array does not change the other.

## How the Concepts Work Together

Each exercise explores a different application of templates:

- **Function templates** allow operations such as swapping and comparing values to work with different types.
- **Function templates with callbacks** allow `iter()` to apply different functions to array elements.
- **Class templates** allow `Array` to manage arrays of different data types while providing useful features such as copying and bounds checking.

Together, these exercises demonstrate how templates make C++ code more reusable and flexible.

## Instructions

Each exercise has its own directory and should be compiled separately using its corresponding Makefile.

Navigate to the exercise directory and compile:

```bash
make
```

Run the generated executable. The executable name depends on the exercise's Makefile.

Clean the object files:

```bash
make clean
```

Remove the object files and executable:

```bash
make fclean
```

The project is written in **C++98** and uses **Makefiles** for compilation.
