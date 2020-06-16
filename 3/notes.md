# Tutorial 3 Notes

## More notes at https://cgi.cse.unsw.edu.au/~cs1511/20T2/tut/03/questions

* REMEMBER TO RECORD
* Test 1 is out later this week.

## Any questions from the lectures/past tute?

## Q1) Are these good and valid C variable names?

<details>
<summary>THX1138</summary>

### Not descriptive and either snake_case or camelCase but valid
</details>

<details>
<summary>2for1</summary>

### Possibly good but not valid as it starts with a number.
</details>

<details>
<summary>mr_bean</summary>

### Good if the variable stores something to do with Mr Bean (also example of snake_case) and valid.
</details>

<details>
<summary>my space</summary>

### Good if variable has something to do with My Space but not valid as it contains a space.
</details>

<details>
<summary>event_counter</summary>

### Starts with capital so not really good style
</details>

<details>
<summary>^oo^</summary>

### Not descriptive and not valid as ^ cannot occur anywhere in a variable name.
</details>

<details>
<summary>_MEMLIMIT</summary>

### Does not adhere to a naming convention for variables (snake_case or camelCase) partially valid, the complier will allow it but it may override a system variable called _MEMLIMIT.
</details>

<details>
<summary>return</summary>

### Not valid as return is a keyword along with many others we have seen e.g. void, if, and more.
</details>

## Where/What is the style guide?

## Bonus) C is a typed language. What does this mean? What is the type of truth/false?

<details>
<summary>Answer</summary>

It means each variable has an associated type and thus size. Different operations work on different types.

For example int, double (dont use ~~float~~), boolean??, ~~string~~, ~~char~~, ~~pointer~~, ~~array~~, ~~struct~~. We will cover most of these types in the future, one quick and important question though is:

What values are true and false? How could we test this?

We could test it by printing out the result of a logical expression or by testing what putting different ints into an if statement will do.

</details>

## Bonus) The humble while loop

```c
    initialise counter;
    while (condition) {
        code;
        increment/change counter;
    }
```

For example:

```c
    i = 1;
    while (i < 2) {
        printf("Ah shit, here we go again.");
    }
```
<details>
<summary> Answer </summary>

![Ah shit here we go again](images/awshit.jpg)
</details>

```c
    i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
```
<details>
<summary> Answer </summary>

```c
    5
    4
    3
    2
    1
```
</details>

```c
    i = 5;
    while (i > 0) {
        i--;
        printf("%d\n", i);
    }
```
<details>
<summary> Answer </summary>

```c
    4
    3
    2
    1
    0
```
</details>

```c
    i = 0;
    while (i <= 10) {
        printf("%d\n", i);
        i += 2;
    }
```
<details>
<summary> Answer </summary>

```c
    0
    2
    4
    6
    8
    10
```
</details>

## Q2) count42.c

Print the integers 1..42, one per line. 

For example:

```c
    $ ./count42
    1
    2
    ...
    42
```

## Q4) count_up.c 

Reads an integer **n** and then print the integers 1..**n**, one per line. 

For example:

```c
    $ ./count_up
    Enter finish: 3
    1
    2
    3
    $ ./count_up
    Enter finish: 7
    1
    2
    3
    4
    5
    6
    7
```

## Q5) range.c 

Write a C program range.c which reads integers **n** and **m** and then print the integers **n**..**m**, one per line.

For example:

```c
    $ ./range
    Enter start: 3
    Enter finish: 7
    3
    4
    5
    6
    7
```
## Q3) Discuss the errors in these while loops 

```c
int i;

while (i < 100) {
    printf("%d\n", i);
    i = i + 1;
}
```

<details>
<summary>
Answer
</summary>

```i``` is not initialised so it will take on the value that is already in memory. To fix this initialise ```i```.

</details>

```c
int i = 0;
int j = 0;

while (j = 1 || i < 100) {
    printf("%d\n", i);
    i = i + 1;
}
```

<details>
<summary>
Answer
</summary>

```j``` is never changed. This is a code smell and indicates something is wrong with the code.

</details>

```c
int i = 0;
int n = 10;
while (i < n) {
    printf("%d\n", i);
    n = n + i;
    i = i + 1;
}
```

<details>
<summary>
Answer
</summary>

```n``` grows at a much faster rate than ```i``` meaning that the condition that ```i < n``` will always be true. 

</details>

```c
int i = 0;
while (i < 10)
    printf("%d\n", i);
    i = i + 1;
```

<details>
<summary>
Answer
</summary>

This involves a shorthand for while loops. When curly brackets are omitted the direct next line after the while condition is only run. Therefore this loop will always print 0. To fix it add back in curly brackets.

</details>

## Q6) range_7.c

Read 2 integers **n** and **m**, and then print the integers between **n** and **m** (including **n** and **m**) which are divisible by 7.

Hint: if x is divisible by 7, then x % 7 == 0

For example:

```c
    $ ./range7
    Enter start: 3
    Enter finish: 49
    7
    14
    21
    28
    35
    42
    49
```


## Q8) asterisks_line.c

Write a program that reads in an integer and prints out that many asterisks, each on a new line.

```c
    $ ./asterisks
    Please enter an integer: 5
    *
    *
    *
    *
    *
```

## Q9a) square.c

Write a c program to scan a number and then print a square of ```n``` by ```n``` asterisks

For example:

```c
    $ ./square
    Enter an integer: 5
    *****
    *****
    *****
    *****
    *****
```

## Q9b) diagonal.c

Write a c program to scan a number `n` and then print a diagonal line of asterisks on a square of `n` by `n` underscores

For example:

```c
    $ ./diagonal
    Enter an integer: 10
    *---------
    -*--------
    --*-------
    ---*------
    ----*-----
    -----*----
    ------*---
    -------*--
    --------*-
    ---------*
```

## Q9c) triangle.c

Write a C program to scan in a number `n` and then print two triangles that form a square of `n` by `n`

For example:

```c
    $ ./triangle
    Enter an integer: 5
    *----
    **---
    ***--
    ****-
    *****
```

## Q9d) bars.c

Write a C program to scan in a number `n` and then print a square of `n` by `n` square of vertical bars of alternating hashes and asterisks.

For example:

```c
    ./bars
    Enter an integer: 9
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
```

# Bonus/revision/old questions

## range_divisible.c

Read 3 integers **n**, **m** and **x** then print the integers between **n** and **m** (including **n** and **m**) which are divisible by **x**.

```c
    $ ./range_divisible
    Enter start: 20
    Enter finish: 100
    Enter divisor: 13
    26
    39
    52
    65
    78
    91
    $ ./range_divisible
    Enter start: 80
    Enter finish: 120
    Enter divisor: 5
    80
    85
    90
    95
    100
    105
    110
    115
    120
```

## cm2feet.c

Read a height in centimetres and prints it in feet.

Reminder: there 2.54 centimetres in an inch and 12 inches in a foot.

For example:

```c
    $ ./cm2feet
    Enter your height in centimetres: 183
    Your height in feet is 6
```