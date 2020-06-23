# Tutorial 4 Notes

## More notes at https://cgi.cse.unsw.edu.au/~cs1511/20T2/tut/04/questions

## Noteworthy points

* RECORD
* Weekly tests
* Assignment 1 is out - we will cover it
* Help sessions
* Today we will skip code review due to time constraints
* Today we will cover a lot - functions, arrays, scanning in while loops

## Q1) Look at code.c and lets improve it

<details>
<summary>
Answer
</summary>

* Indentation
* Changing the structure of the if statements
* Variable names
* Using #defines instead of variables
* Comments

</details>

## Q2) What is an array?

<details>
<summary>
Answer
</summary>

An array is a collection of elements with the same data type. Each element is accessed providing the name of the array and an index. The index range is from 0 through to N-1, where N is the number of elements in the array. This is also known as zero-based indexing.

</details>


## Q3) Create an array called zeroes of size 7 and initialise all the elements to 0

## Q4a) What is a function?

<details>
<summary>
Answer
</summary>

Functions are code that is "called" and "returns". Each function will have an output type (that could be void) as well as some input parameters. The input parameters will be declared just like variables and the function will receive values for these when it is called.
It's important to remember that variables will be passed to a function by value, which means that the function itself will not be able to make changes to the variables that are passed to them and also that the input parameters are created when the function is called and will be destroyed when the function ends.

We use functions to separate code so that we don't have to write it repeatedly and we also don't have long or deep nested code clogging up our main.

</details>

## Q4b) What is the syntax/structure of a function?

<details>
<summary>
Answer
</summary>

```c
    returnType name(parameter1, parameter2, ..., parameterN) {
        // code
        return value;
        // Where value is of type returnType
    }
```

</details>

## Q5a) Create a function called is_even which takes in an integer and returns 1 if it is an even number, and 0 if it is not.

<details>
<summary>
Answer
</summary>

```c
    int is_even(int num) {
       int even_or_odd = 1;
       if (num % 2 == 1) {
          even_or_odd = 0;
       }
       return even_or_odd;
    }
```

</details>

## Q5b) Why do we prototype functions in c?

<details>
<summary>Answer</summary>
It's a legacy feature of c from decades ago. It allows the C compiler to go through the code exactly once, saving time as what now takes milliseconds to compile would have used to take hours. It is similar to asking why we need to declare a variable before we use it. Whenever the C compiler goes past a name like string it either decides it is a variable or whether the programmer has made a mistake, but C needs to check that the variable already exists so we define our variables before we use them. Prototyping works in the same way.
</details>

## Q10) scanf is a function - does it have a return type? How could we find out?

<details>
<summary>Answer</summary>

```c

    int inputs[1000] = {0};
    int i = 0;
    while (scanf("%d", &inputs[i]) == 1) {
          // successfully read an integer into inputVar
          i++;
    }

```

</details>

## Q11) Edit the code written in the previous question so that the integers scanned in are placed into an array called inputs of size 1000. You can assume no more than 1000 numbers will be entered.

<details>
<summary>Answer</summary>

```c

    void array_print(int length, int array[]){
       int i = 0;
       while (i < length) {
          printf("%d ", array[i]);
          i++;
       }
    }

```

</details>

## Q12) Write a function called array_print to print out the array created in the previous question.

<details>
<summary>Answer</summary>

```c

    void array_print(int length, int array[]){
       int i = 0;
       while (i < length) {
          printf("%d ", array[i]);
          i++;
       }
    }

```

</details>

## Q13) Write a function called firstPlusThird that sums the first and third element of an array called numbers and returns the answer.

<details>
<summary>Answer</summary>

```c

    int firstPlusThird(int numbers[]) { return numbers[0] + numbers[2]; }

```

</details>

## Q14) If an array is declared as int numbers[20]; and your program assigns a value to each element in the array, what is the problem with the statement x = numbers[20]; ?

<details>
<summary>Answer</summary>

Because arrays use zero-based indexing, accessing the element indexed 20 is accessing the 21st item in the array. This will access a value that is not within the boundaries of the array.
Behaviour of a program that does this is undefined and it is possible, for example, that it will cause the program to terminate. Sometimes it will retrieve the value of another variable

</details>

## Q15) How would you declare a variable squares to be an array of integers with 15 elements?

<details>
<summary>Answer</summary>

```c

    // Squares Array - writing the square of the indexes
    // into an integer array.
    
    // Modified by Marc Chee, March 2020
    
    #include <stdio.h>

    #define ELEMENTS    15
    
    void write_squares(int squares[ELEMENTS]);
    
    int main(void) {
        int squares[ELEMENTS];
    
        write_squares(squares);
    
        int i = 0;
        while (i < ELEMENTS) {
            printf("squares[%d] has the value %d\n", i, squares[i]);
            i = i + 1;
        }
        return 0;
    }
    
    void write_squares(int squares[ELEMENTS]) {
        int i = 0;
        while (i < ELEMENTS) {
            squares[i] = i * i;
            i = i + 1;
        }
    }

```

</details>

# Past Questions/ Extra Questions

## Past question - read_ints.c

Write a program that repeatedly reads in integers until a non-integer is read in and then prints the number of integers read in. For example:

```c
    $ ./read_ints
    Please enter some integers:
    10 -90 100 999 78hello
    You entered 5 integers

    $ ./read_ints
    Please enter some integers:
    1 2 3 4 5 6 7 8 9
    10 11 12 hello
    You entered 12 integers
    
    $ ./read_ints
    Please enter some integers:
    1 2 3 4 5 6 7 8 9
    10 11 Control-D
    You entered 11 integers
```

How could we modify it to now fill an array? What about so it is in a function?

## Past Question - array_length.c

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

## Past Question - test_initialised.c

Write a function with the prototype `int test_initialised(int n, int nums[n])` that which returns 1 if all elements of array nums are initialized, otherwise returns 0.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible at runtime in C to determine if a variable has been initialized

C programmers must take care to ensure that all variables, including array elements, are appropriately initialized.
</details>