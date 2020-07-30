# Week 9 Tutorial Notes

## Any Questions from the lectures/lab/assignment?

* RECORD
* myExperience is now open - we will give you time to do this next weeks lab.
* This week we will go over lots of linked list questions.
* Ask us questions about the assignment/ass1 marking if you want.

## Feedback on assignment/Common Issues

* #defines
* Comments (Aim for one per function, one per complex part of code, and a header comment)
<details>
<summary>Answer</summary>

![Dont comment like this](images/image.jpg)

</details>

## Q3) What does malloc() do?

<details>
<summary>Answer</summary>

    If we answer this with a diagram, we can show that the memory allocated using malloc is outside the memory for any function, so it lasts beyond the functions themselves.
    Malloc() will always return a pointer that will give us the address of this memory. This means we will have a pointer to a variable that won't be cleaned up automatically and we can pass that around between functions etc.

    The input to malloc() will be the number of bytes needed to store the variable. We will nearly always use sizeof() to find out this value.

    The code below can be useful, but there's not much there. It's more useful to think about what "allocating memory" means. It's basically the idea that we're creating a new variable, except it's only accessible by a pointer and it lasts after the function that created it has returned.

    // a generic linked list node (we could use any struct we want here)
    struct node {
        int data;
        struct node * next;
    };

```c
    struct node *makeNode(int inputData) {
        struct node *n;
        n = malloc(sizeof (struct node));
        return n;
    }
```

</details>

## Q4) What does free() do?

<details>
<summary>Answer</summary>
    
    Free will return allocated memory to the computer. This means it will follow the pointer (which it is given as input) to a memory location and free as much memory as the pointer has allocated to it. free knows how much memory to free based on the information stored when malloc is called as these two functions are from the same library.

</details>

## Q5) What is a use after free error?

<details>
<summary>Answer</summary>
    
    A use after free error occurs when memory which has deallocated with free is subsequently used. Here is a very simple example:
    free(p);
    printf("%d\n", p->data);
    Students often incorrectly believe that it is must be safe to access p->data because nothing can have changed.
    Commonly free will change the contents of the memory it is given (back) to record its internal housekeeping information.

    More generally in a threaded program a malloc could be called in another thread between the free and the printf.

    In more complex programs its common mistake for programmers to free some memory, for example holding a struct, but forget that it is still being used elsewhere in their code (probably via different pointer).

    As their code keeps executing if malloc is called again to store another struct it is likely to be allocated the recently freed memory.

    This means what are meant to be two structs containing different values are now occupying the one piece of memory.

    This has disastrous results as assignments to one struct change the other.

    Not only is this is very difficult to debug, but malicious users exploit these error (in extremely convoluted ways) to bypass security.

    So essentially:

    you malloc some memory
    1) you free that memory
    2) you forget you've freed it, and try to use it again e.g. dereference fields in a struct
    3) somewhere between steps 2 and 3, I malloced memory which ended up in the same memory as yours was
    4) I put whatever I want in that memory; when you try to use it, you get whatever I've put there
    (this might not sound so bad in the scope of COMP1511 code, but it's very dangerous when it comes to things like function pointers, wherein UAF means you can have arbitrary code execution. yay security.)

</details>

## Q6) What is a memory leak? What does --leak-check do?

<details>
<summary>Answer</summary>
    
    A memory leak is when a program doesn't free memory allocated with malloc.

    This is (generally) not important in the programs we write in COMP1511 because they run only for short periods of time and allocate small amounts of memory.

    But if, for example, a web browser allocates memory (calls malloc) every time a user visits a page but doesn't free the memory (call free) when they leave the page, the web browser's memory use will steadily grow, eventually causing performance problems and then if it exhausts available memory, termination.

    So we want you to practice free-ing memory in lab exercises.

    dcc --leak-check warns you when you haven't freed your memory. It uses an underlying tool named valgrind. It translates valgrind output into something hopefully a COMP1511 student can understand.

    Note, the operating system reclaims all memory when a program exits.

</details>

## Q7)  List Appending

Implement a function list_append which appends its second argument to its first. Treat both inputs as if they are lists and may have more than one node. It should have this prototype: `struct node *list_append(struct node *list1, struct node *list2)`


## What is the difference between a .h file and a .c file?

## Q9-11) Complete list.c
