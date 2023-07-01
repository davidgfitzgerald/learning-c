# Description

I am learning C by following the tutorial here: https://www.freecodecamp.org/news/the-c-beginners-handbook/

# C Cheat Sheet

## Built-In Types

- `int`
- `char`
- `short`
- `long`
- `float`
- `double`
- `long double`

## Numbers

### Integers

- `char`

Using `char` can be used to hold integers from `-128` to `127`. Using `char` takes at least 1 byte.

- `int`

Using `int` is most common for storing integers. Using `int` takes at least 2 bytes.

- `short`

Using `short` is never longer than `int`. Using `short` takes at least 2 bytes.

- `long`

Using `long` is never shorted than `int`. Using `long` takes at least 4 bytes.

### Unsigned

Prepending an integer type with `unsigned` will start the range at 0.

- `unsigned char` will range from `0` to at least `255`
- `unsigned int` will range from `0` to at least `65,535`
- `unsigned short` will range from `0` to at least `65,535`
- `unsigned long` will range from `0` to at least `4,294,967,295`

If exceeding the limit, the numbers start from the bottom of the range. So an `unsigned char` at `255` + `1` will = `0`.

### Decimals

- `float`

A `float` can represent a range between `10^-37` and `10^37`. Using `float` is typically `32` bytes. The `32` bits has 
a precision of 24 significant bits and 8 bits are to encode the exponent.

- `double`

A `double` can reresent a bigger set of numbers

- `long double`

A `long double` can represent even more numbers.

# Overflow

For a regular signed integer (i.e. _not_ `unsigned`), the behaviour when exceeding the range is undefined. So if you
have a char at 127 and increment you get a huge number.

# Pointers

If we have a variable:

```c
int age = 37;
```

We can access the memory address of `age` with the `&` operator:

```c
printf("%p", &age); /* 0x7ffeef7dcb9c */
```

# Standard Libraries

- `stdio.h`
- `string.h`
- `stdlib.h`

# Pre-Processor

- `#include`
- `#define`
- `#if`, `#else` & `#endif`
- `#ifdef` & `#ifndef`

## Predefined Symbol Constants

- `__LINE__` translates to the current line in the source code file
- `__FILE__` translates to the name of the file
- `__DATE__` translates to the compilation date, in the `Mmm gg aaaa` format
- `__TIME__` translates to the compilation time, in the `hh:mm:ss` format

# To Do:

- [ ] Fill out [Standard Libraries](#standard-libraries)

