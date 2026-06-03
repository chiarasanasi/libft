*This project has been created as part of the 42 curriculum by Chiara Sanasi.*

# libft

## Description

`libft` is the first project of the 42 cursus: a custom C library that reimplements a selection of standard libc functions, plus a few extra utilities for strings, memory, and linked lists. The result is a static archive (`libft.a`) that can be linked into any future C project.

## Instructions

Clone the repository and build the library with `make`:

```sh
git clone <repo-url> libft
cd libft
make
```

This produces `libft.a` in the project root, along with the header `libft.h`.

To use it in your own program, include the header and link the archive at compile time:

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strdup("hello");
    ft_putendl_fd(s, 1);
    free(s);
    return (0);
}
```

```sh
cc main.c libft.a -o my_program
./my_program
```

## Resources
- **Peer-to-peer learning** — core to the 42 methodology
- `man` pages — official libc documentation (e.g. `man strlen`)
- [W3Schools](https://www.w3schools.com/c/) and YouTube tutorials for C concepts
- **AI assistance** — used occasionally for testing (test mains, edge cases) and definitions
