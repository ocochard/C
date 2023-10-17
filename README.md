# C coding

## Ressources

Some ressources online:
 - [C programming a modern approach](http://knking.com/books/c2/index.html)
 - [How to C in 2016](https://matt.sh/howto-c)
 - [A critique of "How to C in 2016"](https://github.com/Keith-S-Thompson/how-to-c-response)
 - [learn-c.org](https://www.learn-c.org/)
 - [Modern C](https://inria.hal.science/hal-02383654v1/file/ModernC.pdf)
 - [Driving compilers](https://fabiensanglard.net/dc/index.php) about how a compiler and linker works
 - All [Beej's Guides](https://beej.us/guide/), like C programming, C Library reference, Network programming
 - [50+ Data Structure and Algorithms Interview Questions for Programmers](https://hackernoon.com/50-data-structure-and-algorithms-interview-questions-for-programmers-b4b1ac61f5b0)
 - [Bit Twiddling Hacks](https://graphics.stanford.edu/~seander/bithacks.html)

## Tips & Tricks

### Default compiler option

[During dev](https://nullprogram.com/blog/2023/04/29/):
```
cc -g3 -Wall -Wextra -Wconversion -Wdouble-promotion -fsanitize=undefined -fsanitize-trap
```

Or:
```
cc -std=c11 -pedantic
```

## Formating

- indent
- clang-format

### Types

Which type is time_t on my OS ?
```
echo | cc -E -xc -include 'time.h' - | grep time_t
```

On x64 FreeBSD it is a int64_t:
```
typedef __int64_t __time_t;
typedef __int64_t __sbintime_t;
typedef __time_t time_t;
(etc.)
```

On 32bit FreeBSD it is a int32_t:
```
typedef __int32_t __time_t;
typedef __time_t time_t;
 time_t tv_sec;
(etc.)
```

On x64 Linux it is a long:
```
typedef long int __time_t;
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
(etc.)
```

