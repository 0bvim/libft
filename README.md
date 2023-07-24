# Libft
## This is a project that I need to make my own lib replying function of `C`.
## Concatenating with header file `(.h)` and using Makefile to compile lib.

### implemented functions so far:
| Functions |  Details |
| --------- | -------- |
| [`ft_atoi.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_atoi.c) | Converts the initial portion of the string pointed to by str to int representation.
[`ft_isalpha.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_isalpha.c) | Checks for an alphabetic character; in the standard "C" locale,  it  is  equivalent  to (isupper(c)  \|\|  islower(c)). In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.
[`ft_isascii.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_isascii.c) | Checks whether c is a `7‐bit unsigned char` value that fits into the ASCII character set.
[`ft_isdigit.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_isdigit.c) | Checks for a digit (0 through 9).
[`ft_isprint.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_isprint.c) | Checks for any printable character including space.
[`ft_strlen.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_strlen.c) | Calculate the `length` of a string.
[`ft_tolower.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_tolower.c) | Convert to lowercase.
[`ft_toupper.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_toupper.c) | Convert to uppercase.
[`ft_memset.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_memset.c) | The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
[`ft_bzero.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_bzero.c) | The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
[`ft_memcpy.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_memcpy.c) | The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. `Use memmove(3) if the memory areas do overlap.`
[`ft_memmove.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_memmove.c) | The memmove() function copies n bytes from memory area src to memory area dest. `The memory areas may overlap:` copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
[`ft_strlcpy.c`](https://github.com/vinicius-f-pereira/42_libft/blob/main/ft_strlcpy.c) | The strlcpy() function copy a string. This function are designed to be safer, more consistent, and less error prone replacements for strncpy(3). Strlcpy take the full size of the buffer (not just the lenght) and guarantee to NUL-terminate the result.


### Header file
[`libft.h`](https://github.com/vinicius-f-pereira/42_libft/blob/main/libft.h)

### Make
[`Makefile`](https://github.com/vinicius-f-pereira/42_libft/blob/main/Makefile)

