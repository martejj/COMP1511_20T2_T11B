# Tutorial 5 Notes

## More notes at https://cgi.cse.unsw.edu.au/~cs1511/20T1/tut/05/questions

## Noteworthy points

* RECORD
* New lab partners this week somehow
* Today we will cover pointers, memory and some misc bits

## Q3) Which of the following functions would be possible to write? If they are not possible to write, discuss what you could to to make them work.


## Q3a) `int array_length(int nums[])`

Write a function with the prototype `int array_length(int nums[])` that returns the length of the inputted array.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible for a C function to determine the length of an array it has been passed.

Programmers usually do one of 3 things.

* Pass the array length as another parameter to the function.
* Use a special value in an array element to mark the finish of the array - e.g. 0 if the array need contain only positive ints
* Pass an array of a specific length to the function - e.g. always pass arrays of 20 elements
For functions you write in this course, you should opt for option (a).
</details>

## Q3b) `int test_all_positive(int nums[])`

Write a function with the prototype `int test_all_positive(int nums[])` that returns 1 if all elements are positive and 0 otherwise.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible for a C function to determine the length of an array it has been passed, so thus it cannot know how many to loop over.

Programmers usually do one of 3 things.

* Pass the array length as another parameter to the function.
* Use a special value in an array element to mark the finish of the array - e.g. 0 if the array need contain only positive ints
* Pass an array of a specific length to the function - e.g. always pass arrays of 20 elements
For functions you write in this course, you should opt for option (a).
</details>

## Q3c) `int test_all_initialized(int length, int nums[])`

Write a function with the prototype `int test_all_initialised(int n, int nums[n])` that returns 1 if all elements of array nums are initialized, otherwise returns 0.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible at runtime in C to determine if a variable has been initialized

C programmers must take care to ensure that all variables, including array elements, are appropriately initialized.
</details>

## Q3d) `int test_all_positive(int length, int nums[])`

Write a function with the prototype `int test_all_positive(int n, int nums[n])` that returns 1 if all elements are positive and 0 otherwise.

## Q4) scalar_multiply.c

Write a function that takes in a 2d array of ints and multiplies every value in the array by a given int.
It will have this prototype `void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar)`

## What is a pointer?

<details>
<summary>
Answer
</summary>

The address of another variable in the computer.

</details>

## How do we make a pointer?

<details>
<summary>
Answer
</summary>

Similar to how we use the square brackets for an array except in this case we use a star *.

</details>

## What do & and * do?

<details>
<summary>
Answer
</summary>

Ampersand gets the address of a variable in memory.

Star depends 

- If it used when a variable is being created then it indicates it is a pointer (stores an address not an int etc.) and it is a part of the type.

- If it is used in an expression/statement then it is the dereferencer, it gets the value that the pointer is pointing to.

</details>

## Q5) What will happen when each of the following statements is executed (in order)?

```c
    int n = 42;
    int *p, *q;
    p = &n;
    *p = 5;
    *q = 17;
    q = p;
    *q = 8;
```

## Q6) Continue on webcms notes.

## Q7) 

This C code:
```c
    int x;
    int a[6];

    x = 10;
    a[3 * 2] = 2 * 3 * 7;
    printf("%d\n", x);
```

mysteriously printed 42. 

How could this happen when x is clearly assigned only the value 10?
How does the output change if we create a another int after the array?
How can you easily detect such errors before they have mysterious effects?

## Q8) sum_nums.c

Write a void function which places the sum of two numbers inside a variable passed in by reference. It should have the following prototype `void sum_nums(int a, int b, int *sum);`

## Q9) max()

Write a void function which returns the address of the greater of two integers passed by reference with the prototype `int *max(int *a, int *b);`


# Bonus/past questions

## Q10) quadratic.c

Write a program that reads in a quadratic and prints out its solutions. Use a function to solve the quadratic.

```c
$ ./solve_quadratic
    Enter a quadratic of the form a*x^2 + b*x + c = 0\n
    a: 1
    b: 2
    c: 1
    The roots are x1 = -1 and x2 = -1
```