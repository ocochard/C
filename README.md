# C coding

## Ressources

Some ressources online:
 - [C programming a modern approach](http://knking.com/books/c2/index.html)
 - [How to C in 2016](https://matt.sh/howto-c)
 - [50+ Data Structure and Algorithms Interview Questions for Programmers](https://hackernoon.com/50-data-structure-and-algorithms-interview-questions-for-programmers-b4b1ac61f5b0)

## Tips & Tricks

### Types

Which type it time_t on my OS ?
```
echo | cc -E -xc -include 'time.h' - | grep time_t
```

On x64 FreeBSD it is a int64_t:
```
$ echo | cc -E -xc -include 'time.h' - | grep time_t
typedef __int64_t __time_t;
typedef __int64_t __sbintime_t;
typedef __time_t time_t;
(etc.)
```

On 32bit FreeBSD it is a int32_t:
```
$ echo | cc -E -xc -include 'time.h' - | grep time_t
typedef __int32_t __time_t;
typedef __time_t time_t;
 time_t tv_sec;
```

On x64 Linux it is a long:
```
$ echo | cc -E -xc -include 'time.h' - | grep time_t
typedef long int __time_t;
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
(etc.)
```

