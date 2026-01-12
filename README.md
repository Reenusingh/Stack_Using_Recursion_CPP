Recursive Stack Operations
This repository contains implementations of fundamental stack operations using recursion instead of loops. Mastering these problems demonstrates a deep understanding of the call stack and recursive backtracking.

Problems Solved

1. Push at Bottom
Adds an element to the very bottom of a stack without using an auxiliary data structure.
Logic: Pop the top element, recursively call the function until the stack is empty, push the new element, and then push the popped elements back during the unwinding phase.

2. Reverse a Stack
Reverses the entire order of elements in a stack using only recursion.
Logic: This uses a "nested recursion" approach. We hold the top element, reverse the remaining stack, and then use the Push at Bottom function to insert the held element at the base.

3. Sort a Stack
Sorts the stack such that the greatest element is at the top (or bottom) using recursion.
Logic: Similar to reversing, we pop the top element and recursively sort the remaining stack. Once sorted, we use a helper function Sort_Push() to place the popped element back into its correct numerical position.

How it Works (The Recursive Leap of Faith)
All three solutions follow a similar pattern:

1. Base Case: If the stack is empty, stop
2. Recursive Step: Pop the top element and store it in the function's local variable (on the call stack).
3. Self-Call: Call the function again for the remaining $n-1$ elements.
4. Backtracking: After the recursive call returns, push the stored element back or perform a specific insertion logic.

Tech Stack 
Language: CPP
Data Structure: Stack (LIFO)
