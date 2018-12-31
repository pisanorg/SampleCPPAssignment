# Sample C++ Assignment

**Name:**

**Student ID Number:**

CSS xxx <Instructor name here>

Using the provided sample files, perform the following tasks:

1. Modify the program so that it prints your full name and student ID to STDOUT.
2. Implement the recursive fibonacci sequence function.

## Build Instructions

In a Linux environment with `g++` installed, run the following command:

```console
g++ hello.cpp --std=c++17 -o hello
./hello
```

With the sample files given, the application should produce this output:

```
$ ./hello
Hello world! My name is Bobby Tables #12341234
terminate called after throwing an instance of 'std::runtime_error'
  what():  Fibonacci function is not implemented yet.
Aborted
```

This is expected when no modifications have been made.

### Valgrind

To check the application for memory leaks, use `valgrind`:

```console
valgrind ./hello
```

# Submission Instructions

Before midnight on the due date, ensure that your changes have been successfully committed to the `master` branch.

If your professor has specified, you may have to turn in your last commit hash into Canvas.
This can be found on GitHub, or you can use the following command:

```console
$ git rev-parse HEAD
c4c3bac64fe3178e5aee4dbe1ec101203a05d4e2
```

In addition, include a copy of your execution output (either from `screen` or copied and pasted) into a file.

**Any code that is pushed after the due date will not be accepted.**