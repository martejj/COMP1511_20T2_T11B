# Tutorial 2 Notes

## More notes at https://cgi.cse.unsw.edu.au/~cs1511/20T2/tut/02/questions

## What did you learn from the lectures? Any burning questions?

## Common problems from the lab:

* Home computing
* Always copy and paste commands
* Read everything
* Pair Programming 
* Challenge exercises

## Tips and tricks

* Tab autocompletion in terminal
* Double tab to show options
* Control-s to save

<details>
<summary></summary>

![SAVE](/images/save.png)

</details>

## Q1) What is a type in C? What are some types and what do they represent?

<details>
<summary>Answer</summary>

Some space to store a variable, each type of variable takes up a different amount of space so it is important that we use the appropriate types so C knows how much space to use

Types include: int, long, double, float (bad), char 

</details>

## Q2) What is the difference between a variable and a constant?

<details>
<summary>Answer</summary>

A variable is a value with a specific type that we've saved in memory and we can change if we want.
A constant is a value that cannot be changed.

</details>

## Q3) What is the difference between a variable and a #define in c?

<details>
<summary>Answer</summary>

Declared variables get given a certain amount of memory to use to store a value. This allows them to be accessed again and changed.
#define actually tells the compiler to replace all instances of the first symbol with the second. This means that it basically acts as a text replacement for the value and it doesn't actually get a specific piece of memory like a variable.

</details>

## Q4) The If Statement

Consider what will be printed out in the following cases

```c
    int a = 10;
    int b = 20;

    if (a < b) {

        printf("A\n");

    }

    printf("B\n");
```

<details>
<summary>Answer</summary>

    A, then B

</details>

```c
    int a = 10;
    int b = 20;

    if (a > b) {

        printf("A\n");

    } else {

        printf("B\n");
    }

    printf("C\n");
```

<details>
<summary>Answer</summary>

    B, then C

</details>

```c
    int a = 10;
    int b = 20;
    int c = 30;

    if (a > b) {

        printf("A\n");

    } else if (c > b) {

        printf("B\n");

    } else {

        printf("C\n");

    }

```

<details>
<summary>Answer</summary>

    B

</details>

```c
    int a = 20;
    int b = 20;

    if (a == b) {
        
        int c = 30;
        
        printf("A\n");

    }
    
    if (c > a) {
        
        printf("B\n");
        
    }
    
```

<details>
<summary>Answer</summary>

    ERROR, The variable C is not in the scope when used.

</details>


## Q5) Leap years

A leap year is a year that has 366 days instead of 365. There is a leap year every year divisible by four except for years which are both divisible by 100 and not divisible by 400.

__Draw a simple flow chart showing the branches of possibilities to decide if a year is a Leap Year.__

```c
    if (year is not divisible by 4) then (it is a common year)
    else if (year is not divisible by 100) then (it is a leap year)
    else if (year is not divisible by 400) then (it is a common year)
    else (it is a leap year)
```

<details>
<summary>Flowchart approach</summary>

![Flowchart](/images/flow.png)

</details>

<details>
<summary>Answer</summary>

![Flowchart](/images/leap.png)

</details>

## Q6) Operations and types of operands

The value of C  arithmetic operations depends on the types of the operand. If the types of the operands differ, C automatically converts the types as appropriate.

__Determine the value of each expression and sub-expression:__

```c
    1 / 2 * 500
```

<details>
<summary>Answer</summary>

```c
    1 / 2 * 500
    
    = 0 * 500
    = 0
```

</details>

```c
    1 / 2.0 * 500
```

<details>
<summary>Answer</summary>

```c
    1 / 2.0 * 500
    
    = 0.5 * 500
    = 250.0
```

</details>

```c
    (17 / 5) * 5 + (17 % 5)
```

<details>
<summary>Answer</summary>

```c
    (17 / 5) * 5 + (17 % 5)
    
    = (17 / 5) * 5 + (17 % 5)
    = (3) * 5 + 2
    = 17
```

</details>

```c
    (12 - 17) % 6 - 4
```

<details>
<summary>Answer</summary>

```c
    (12 - 17) % 6 - 4
    
    = (-5) % 6 - 4
    = -5 - 4
    = -9
    
    Important to note that in c % is not the modulo function instead it is the remainder function
    Read:
    https://stackoverflow.com/questions/13683563/whats-the-difference-between-mod-and-remainder#:~:text=In%20C%20and%20C%2B%2B%20and,remainder%20NOT%20the%20modulus%20operator.&text=console.
```

</details>

## Q7) Conditionals and fail_pass.c 

How do we write and/or in c?

<details>
<summary>Answer</summary>

We use the || operation for or and the && operation for and.

</details>

For example, look at the colour of this dog and consider what the following expressions would evaluate to

![Dog](/images/dog.jpg)

```c
    pink || blue
```

<details>
<summary>Answer</summary>

```c
    true
```

</details>

```c
    pink && blue
```

<details>
<summary>Answer</summary>

```c
    false
```

</details>

```c
    pink && yellow
```

<details>
<summary>Answer</summary>

```c
    true
```

</details>

```c
    orange || green
```

<details>
<summary>Answer</summary>

```c
    false
```

</details>

Write a program pass_fail.c that reads in an integer and prints out "PASS" if the integer is between 50 and 100 inclusive and fail if it is between 49 and 0, inclusive. It should print out ERROR if the number is less than 0, more than 100, or if the user does not enter a number. For example:

```
    $ ./pass_fail
    Please enter your mark: -1
    ERROR
    $ ./pass_fail
    Please enter your mark: 42
    FAIL
    $ ./pass_fail
    Please enter your mark: 50
    PASS
    $ ./pass_fail
    Please enter your mark: 256
    ERROR
```

## Q9) What is a bit?

<details>
<summary>Answer</summary>

A simple way of thinking of it is a box that can contain a 1 or a 0, which is binary as it can only contain 2 possibilities. This is in contrast to decimal where we can have a 0, 1, 2, 3, 4, 5, 6, 7, 8 or 9 per 'box', allowing it to contain 10 possibilities.

</details>

## Q10) What is a byte?

<details>
<summary>Answer</summary>

A byte is 8 bits lined up together. Together they can store 2^8 = 256 combinations/numbers so each byte can count upto 256.

</details>

## Q12 How could we represent integers using 4 bits?

<details>
<summary>Answer</summary>

### Two's Compliment:

Bit Pattern|Integer
-----------|---------
0000	   |0
0001	   |1
0010	   |2
0011	   |3
0100	   |4
0101	   |5
0110	   |6
0111	   |7
1000	   |-8
1001	   |-7
1010	   |-6
1011	   |-5
1100	   |-4
1101	   |-3
1110	   |-2
1111	   |-1

Note: to read binary, the first column is the 8's, the 2nd is the 4's, 3rd -> 2's and 5th -> 1's.

</details>

## Q13) What is a file and what are some examples of file types?

<details>
<summary>Answer</summary>

A file is basically an array (sequence) of bytes stored in a semi-permanent way.


File name      |Contents        |Byte encoding
---------------|----------------|-------
README         |text (English)  |ASCII
a.out          |machine code    |ELF
banner.jpg     |Image           |JPEG
chessboard.bmp |Image           |BMP
main.c         |C program       |ASCII
song.mp3       |Sound (music)   |MP3

</details>

## Q14) What is a directory?

<details>
<summary>Answer</summary>

In effect it is a folder (a set of files)

</details>

## Q8 - bonus) rectangle_area.c

Write a program rectangle_area.c that reads in 2 integers which are the side-length of a rectangle, and then prints the area of the rectangle.
For example:

```
    $ ./rectangle_area
    Please enter rectangle length: 3
    Please enter rectangle width: 5
    Area = 15
    $ ./rectangle_area
    Please enter rectangle length: 42
    Please enter rectangle width: 42
    Area = 1764
```


# Revision/bonus material
## What do the following conditions result in?

```c
    int A = TRUE;
    int B = FALSE;
    int C = TRUE;
    int y = 20;
    int x = 30;

    1) A && B && C
    2) !(A || B || C)
    3) (x > 40) || (y == 20)
    4) (x <= 0) || (x >= 100)
    5) !((x < 0) && (x > 50))
```

<details>
<summary>Answer</summary>

1) FALSE
2) FALSE
3) TRUE
4) FALSE
5) TRUE - an example of a code smell, doing && on two sets that are disjoint.

</details>

```c
    int A = 1;
    int B = 1;
    int C = 0;
    int y = 10;
    int x = 70;

    1) !(A && B && C)
    2) A || B || C
    3) (x > 40) || (y == 20)
    4) !((x < 0) || (x > 100))
    5) (x > 0) && (x < 50)
```

<details>
<summary>Answer</summary>

1) TRUE - 0 is interpreted as false and anything other than 0 is true
2) TRUE
3) TRUE
4) TRUE
5) FALSE

</details>

```c
    int A = 1, B = 3, C = 4, y = 19, x = 70;

    1) !(A && B && C)
    2) !(A || B || C)
    3) (x > 80) || (y == 20)
    4) (x > 0) || (x < 100)
    5) (x < 0) && (x <= 70)
```
<details>
<summary>Answer</summary>

1) FALSE - 3 and 4 are interpreted as TRUE
2) FALSE
3) FALSE
4) TRUE - but poorly written (has no clear intention and always passes)
5) TRUE - example of a code smell (if the second case passes then necessarily the first case will pass, redundant code) 

</details>


## What is short-circuit evaluation?

<details>
<summary>Answer</summary>

It is an optimisation used by C to make code more compact and slightly quicker. 

An example of such is with the 'or' operation:

```c

    int a = 10;
    int b = 20;

    if (a == 10 || b == 20) {
        code;
    }

    if (a == 11 || b == 20) {
        code;
    }

```

As in the first case above the first condition (a == 10) passes, C wont bother checking the second statement.

In the second statement above as the first condition fails, C will check the second statement.

It is also present in 'and' operations:

```c

    int a = 10;
    int b = 20;

    if (a == 10 && b == 20) {
        code;
    }

    if (a == 11 && b == 20) {
        code;
    }

```

In the first statement the first condition passes but as it is an and both must pass so it checks the second statement as well.

In the second statement above as the first condition fails it does not bother checking the second statement.

</details>

## Tutorial question 11 even_or_odd.c

Write a program that reads in an integer and determines if it is even or not. If the number is negative, print "NEGATIVE" instead. For example:

```
    $ ./even_or_odd
    Please enter a number: 42
    EVEN
    $ ./even_or_odd
    Please enter a number: 111
    ODD
    $ ./even_or_odd
    Please enter a number: -2
    NEGATIVE
```