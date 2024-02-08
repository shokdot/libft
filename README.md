# Libft - @42Born2Code
My implementation of some of the Standard C Library functions including some additional ones.

### TOC
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)

### What is libft?
[Libft][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

As you can see from the [Project instructions][1], there are 6 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation

Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I separate them into sub folders.
- I update this list almost every month with new personal functions. If you don't know what a function does, refer to the [Wiki][3], where I document all my personal functions.

My code is not the best, but it passed all the 42 tests successfully.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/shokdot/libft
	cd libft
	make
