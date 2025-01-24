# Push Swap  

Push Swap is a project from the 42 Network curriculum. It involves developing a program to sort a stack of integers using a limited set of operations, with a focus on efficiency in terms of the number of moves.  

## Table of Contents  
- [Overview](#overview)  
- [Features](#features)  
- [Rules](#rules)  
- [Algorithm Details](#algorithm-details)  
- [Installation](#installation)  
- [Usage](#usage)  
- [Operations](#operations)  
- [Bonus](#bonus)  
- [Credits](#credits)  

---

## Overview  
The goal of the `push_swap` project is to write a program that sorts data on a stack using as few operations as possible. The project requires careful optimization and algorithm design to handle various input sizes efficiently.

---

## Features  
- Sorting of a stack of integers using specific allowed operations.  
- Handles varying input sizes (from a few numbers to 500).  
- Provides an efficient solution with minimal moves.  
- Includes error handling for invalid inputs.  

---

## Rules  
1. Two stacks (`a` and `b`) are used to perform the sorting.  
2. You can use the following operations to manipulate the stacks:  
   - `sa`, `sb`, `ss`: Swap the top two elements of a stack.  
   - `pa`, `pb`: Push the top element of one stack to the other.  
   - `ra`, `rb`, `rr`: Rotate a stack upwards.  
   - `rra`, `rrb`, `rrr`: Reverse rotate a stack downwards.  
3. The program must output a sequence of these operations that sorts the stack.

---

## Algorithm Details  
### Approach  
1. **Small Inputs** (3–5 elements):  
   - Use brute force or hard-coded logic.  

2. **Medium Inputs** (up to 100 elements):  
   - Implement a **chunk-based sorting strategy** to divide the stack into smaller sections.  

3. **Large Inputs** (up to 500 elements):  
   - Utilize an optimized algorithm with efficient move calculations and indexing.

### Optimization  
- Assign an **index** to each element in the stack to represent its position in the sorted order.  
- Calculate the **minimum moves** required for each element to reach its position using different movement combinations (e.g., `two_up`, `two_down`, etc.).  

---

### Compile the program using Makefile:

```bash
    make 
```

### Usage
## Run the program with a set of integers as arguments:

```bash
./push_swap [list of integers] 
``` 
## Example:

```bash
    ./push_swap 3 2 5 1 4
```

## To count the number of moves:

```bash
    ./push_swap 3 2 5 1 4 | wc -l
```  
## To check if the output is correct, use the checker program (if implemented):

```bash
./push_swap 3 2 5 1 4 | ./checker 3 2 5 1 4
```

### Bonus
If implemented, the following additional features are included:

`Checker Program`: Validates the correctness of the push_swap output.
`Visualizer`: A script or tool to visualize the sorting process.



## Installation  
Clone the repository:  
```bash  
git clone https://github.com/YOUR_USERNAME/push_swap.git  
cd push_swap  


### Credits
Project developed by `Yhajji` at 42 Network.
For more information, visit the 42 Network Curriculum.
```bash
Feel free to adjust the sections or add specific implementation details for your project. Let me know if you'd like additional help with any section!
``` 

