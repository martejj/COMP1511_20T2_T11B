# Week 8 Tutorial Notes

## Any Questions from the lectures/lab/assignment?

* This week we will go over lots of structs, pointers to structs and linked list stuff (including malloc), ending with a conversation on assignment 2
* Assignment 1 performance marks are out. We are now marking them and you should get feedback by next week.

## Q6) What is a struct? How does it compare to an array? What would a struct for a student look like?

<details>
<summary>Answer</summary>

|    | Arrays | Structs |
|---:|:------:|:--------|
| Create | `int array[SIZE];`     | `struct student harrison;` |
| Set    | `array[6] = 10;`       | `harrison.ass1 = 100;`      |
| Get    | `int val = array[6];`  | `int score = harrison.ass1;` |

We also need to 'prototype' our structs

```c
    struct student {
        char name[MAX];
        int zid;
        int ass1;
    };
```

</details>

## Q8) Create a struct student

Create a struct student with
    
    - name "Harrison"
    - zid of 5214808
    - assignment 1 mark of 99

In the main function (hint, you do not need functions or malloc).

## Q9) Create a function, createStudent, that returns a pointer to a struct student.

Create a function that creates students. Make it take a zid, a name, and a ass1 mark and return a pointer to the new struct.

## Q10) What happens if we run this with --leak-check ?

<details>
<summary>Answer</summary>

It will determine if there are unfree'd memory. For every malloc there must be an equal and opposite free. Never use a pointer after it has been freed. - possible security flaw.

</details>

## Q11) What is the difference between the . operator and the -> operator?

<details>
<summary>Answer</summary>

The . is used to access the fields in a struct (struct student).

The -> is used to access the fields when we have a pointer to a struct (struct student *).
It is also just shorthand for (*variable). . 

</details>

## Q12) Edit the existing struct student, to be able to point to another struct student.'. What is a linked list?

Update your function which creates an instance of a student to account for this new pointer.

## Q13) Make a linked list to represent a class of students

## Q14) Create another struct definition and instance to represent the class.

# Assignment 2 overview

# Old questions/ Revision Questions

## Tutorial Question 3 - What does malloc() do?

<details>
<summary>Answer</summary>

If we answer this with a diagram, we can show that the memory allocated using malloc is outside the memory for any function, so it lasts beyond the functions themselves.
Malloc() will always return a pointer that will give us the address of this memory. This means we will have a pointer to a variable that won't be cleaned up automatically and we can pass that around between functions etc.

The input to malloc() will be the number of bytes needed to store the variable. We will nearly always use sizeof() to find out this value.

The code below can be useful, but there's not much there. It's more useful to think about what "allocating memory" means. It's basically the idea that we're creating a new variable, except it's only accessible by a pointer and it lasts after the function that created it has returned.

```c
    // a generic linked list node (we could use any struct we want here)
    struct node {
        int data;
        struct node * next;
    };

    struct node *makeNode(int inputData) {
        struct node *n;
        n = malloc(sizeof (struct node));
        return n;
    }
```

</details>

## Tutorial Question 4 - What does free() do?

<details>
<summary>Answer</summary>

Free will return allocated memory to the computer. This means it will follow the pointer (which it is given as input) to a memory location and free as much memory as the pointer has allocated to it, using the pointer's type to decide exactly how much memory that is.

It is not the same as removing it from the linked list!! (As you will see in this lab)

</details>

## Tutorial Question 5 - Why bothing free()ing?

<details>
<summary>Answer</summary>

A use after free error occurs when memory which has deallocated with free is subsequently used. Here is a very simple example:

```c
    free(p);
    printf("%d\n", p->data);
```

Students often incorrectly believe that it is must be safe to access p->data because nothing can have changed.
Commonly free will change the contents of the memory it is given (back) to record its internal housekeeping information.

More generally in a threaded program a malloc could be called in another thread between the free and the printf.

In more complex programs its common mistake for programmers to free some memory, for example holding a struct, but forget that it is still being used elsewhere in their code (probably via different pointer).

As their code keeps executing if malloc is called again to store another struct it is likely to be allocated the recently freed memory.

This means what are meant to be two structs containing different values are now occupying the one piece of memory.

This has disastrous results as assignments to one struct change the other.

Not only is this is very difficult to debug, but malicious users exploit these error (in extremely convoluted ways) to bypass security.

So essentially:

1. you malloc some memory
2. you free that memory
3. you forget you've freed it, and try to use it again e.g. dereference fields in a struct
4. somewhere between steps 2 and 3, I malloced memory which ended up in the same memory as yours was
5. I put whatever I want in that memory; when you try to use it, you get whatever I've put there

(this might not sound so bad in the scope of COMP1511 code, but it's very dangerous when it comes to things like function pointers, wherein UAF means you can have arbitrary code execution. yay security.)

</details>

## Tutorial Question 6 - What is a memory leak? What does dcc --leak-check do?

<details>
<summary>Answer</summary>

A memory leak is when a program doesn't free memory allocated with malloc.

This is (generally) not important in the programs we write in COMP1511 because they run only for short periods of time and allocate small amounts of memory.

But if, for example, a web browser allocates memory (calls malloc) every time a user visits a page but doesn't free the memory (call free) when they leave the page, the web browser's memory use will steadily grow, eventually causing performance problems and then if it exhausts available memory, termination.

So we want you to practice free-ing memory in lab exercises.

dcc --leak-check warns you when you haven't freed your memory. It uses an underlying tool named valgrind. It translates valgrind output into something hopefully a COMP1511 student can understand.

Note, the operating system reclaims all memory when a program exits.

</details>

