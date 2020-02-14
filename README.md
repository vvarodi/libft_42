# Libft - @42Born2Code
<img src="https://github.com/vvarodi/libft_42/blob/master/Libft.JPG" />

![Text](https://snipboard.io/DuJ8ON.jpg)

### TOC
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [List of functions](#list-of-functions)  Click to each function to see an explication

### What is libft?

Libft is an individual project at [42][1] that requieres us to re-create some standard C library functions for future projects, and have a deeper understanding of data structures and basic algorithms. At 42 we are not allowed to use some standard libraries on our projects, so we have to keep growing this libary with our own functions as we go farther in the program.

### What's in it?

There are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions that will be useful for later projects
3.  **Bonus Functions:** Functions that will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

### List of functions
Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
[ft_memset](#ft_memset)		|[ft_substr](#ft_substr)    | [ft_lstnew](#ft_lstnew)            | [ft_islower](#ft_islower) 
[ft_bzero](#ft_bzero)		|[ft_strjoin](#ft_strjoin)  | [ft_lstadd_front](#ft_lstadd_front)| [ft_isupper](#ft_isupper) 
[ft_memcpy](#ft_memcpy)		|[ft_strtrim](#ft_strjoin)  | [ft_lstsize](#ft_lstsize)          | [ft_isspace](#ft_isspace)   
[ft_memccpy](#ft_memccpy)	|[ft_split](#ft_split)      | [ft_lstlast](#ft_lstlast)          | [ft_strndup](#ft_strndup)
[ft_memmove](#ft_memmove)	|[ft_itoa](#ft_itoa)       | [ft_lstadd_back](#ft_lstadd_back)  | [ft_strcdup](#ft_strcdup)
[ft_memchr](#ft_memchr)		|[ft_strmapi](#ft_strmapi)  | [ft_lstdelone](#ft_lstdelone)     | 
[ft_memcmp](#ft_memcmp)		|[ft_putchar_fd](#ft_putchar_fd)| [ft_lstclear](#ft_lstclear)    | 
[ft_strlen](#ft_strlen)		|[ft_putstr_fd](#ft_putstr_fd)	| [ft_lstiter](#ft_lstiter)      | 
[ft_strdup](#ft_strdup)		|[ft_putendl_fd](#ft_putendl_fd)| [ft_lstmap](#ft_lstmap)        | 
[ft_strcpy](#ft_strcpy)		|[ft_putnbr_fd](#ft_putnbr_fd)	|				| 
[ft_strlcpy](#ft_strlcpy)	| 	|			| 
[ft_strcat](#ft_strcat)		| 	| | 
[ft_strlcat](#ft_strlcat)	| 	| | 
[ft_strchr](#ft_strchr)		| 	| | 
[ft_strrchr](#ft_strrchr)	| 	| | 
[ft_strstr](#ft_strstr)		|   | | 
[ft_strnstr](#ft_strnstr)	| 	| | 
[ft_strcmp](#ft_strcmp)		| 	| | 
[ft_strncmp](#ft_strncmp)	| 	| | 
[ft_atoi](#ft_atoi)         | 	| | 
[ft_isalpha](#ft_isalpha)	| 	| | 
[ft_isdigit](#ft_isdigit)	| 	| |
[ft_isalnum](#ft_isalnum)	|   | | 
[ft_isascii](#ft_isascii)	|   | | 
[ft_isprint](#ft_isprint)	|   | | 
[ft_toupper](#ft_toupper)   |   | | 
[ft_tolower](#ft_tolower)	|   | | 
[ft_calloc](#ft_calloc)     |   | |

## [ft_memset](libft/ft_memset.c)

`void       *ft_memset(void *s, int c, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Fill with "len" bytes of "c" the memory of "s"| The string on which to operate | Value c (converted to an unsigned char) | The number of bytes | A pointer to the memory area s

## [ft_bzero](libft/ft_bzero.c)

`void       *ft_bzero(void *s,  size_t n)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Erases the data in the "n" bytes of the memory starting at the location pointed by "s" writing zeroes | The string on which to operate | The number of bytes | None

 ## [ft_memcpy](libft/ft_memcpy.c)

`void       *ft_memcpy(void *dst, const void *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area src to memory of dst. The memory  areas  must  not  overlap.  Use [ft_memmove](#ft_memmove) if the memory areas do overlap.| Memory area dst | Memory area src | The number of bytes | A pointer to the memory area dst

 ## [ft_memccpy](libft/ft_memccpy.c)

`void       *ft_memccpy(void *dst, const void *src, int c, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Param. #4 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area  src  to memory  area  dst, stopping when the character c is found, or after n characters are copied, whichever comes first. If copying takes place between objects that overlap, the behavior is undefined.| Memory area dst | Memory area src | A character to search | Number of bytes that memccpy() copied | A pointer to the next character in dst after c, or NULL if c was not found in the first n bytes

## [ft_memmove](libft/ft_memmove.c)

`void       *ft_memmove(void *dst, const void *src, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies len bytes from the memory of src to dst. Memories may overlap. First, the bytes in src are copied into a temporary array and then to dst.| Memory area dst | Memory ares arc | The number of bytes | A pointer to the memory area dst

 ## [ft_memchr](libft/ft_memchr.c)

`void       *ft_memchr(const void *s, int c, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Scans the initial n bytes of s for the first instance of c | Memory area s| A character to search | The number of bytes | A pointer to the matching byte or NULL if the character does not occur in the given memory area

 ## [ft_memcmp](libft/ft_memcmp.c)

`void       *ft_memcmp(void *dst, const void *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Compares byte string s1 against byte string s2 | Memory area s1| Memory area s2 | The number of bytes | < 0 if s1 is less than s2, > 0 if s1 is graeter than s2, = 0 if s1 is equal to s2 

## [ft_strlen](libft/ft_strlen.c) 
`size_t     ft_strlen(const char *s)`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0')	| The string to calculate | Number of characters in the string pointed to by s

## [ft_strdup](libft/ft_strdup.c) 
`char       *ft_strdup(const char *s))`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Duplicate string s1. Memory  for  the new string is obtained with malloc, and can  be  freed with free | The string to duplicate| A pointer   to  the  duplicated  string.  NULL  if  insufficient  memory  was available

## [ft_strndup](libft/ft_strndup.c)

`char       *ft_strndup(const char *s, size_t n)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates a specific amount of memory to copy a string | The string to copy | The maximum amount of characters to copy from the string | A pointer to the new string

## [ft_strcdup](libft/ft_strcdup.c)

`char       *ft_strcdup(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates a specific amount of memory to copy a string until the occurence of c. Example: ft_strcdup("Blue", 'u') -> "Bl"  | The string to copy before c | The character c | A pointer to the new string

## [ft_strchr](libft/ft_strchr.c)

`char		*ft_strchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the first occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the first occurrence of the character c in the string or NULL if the character is not found

## [ft_strrchr](libft/ft_strrchr.c)

`char		*ft_strrchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the last occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the last occurrence of the character c in the string or NULL if the character is not found

## [ft_strcpy](libft/ft_strcpy.c)

`char       *ft_strcpy(char *dst, const char *src)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Copy a string, including the terminating null byte ('\0') | Destination array | String to be copied | A pointer to the destination string dst

## [ft_strlcpy](libft/ft_strlcpy.c)

`size_t     ft_strlcpy(char *dst, const char *src, size_t dstsize)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result| Destination array | String to be copied | Number of characters to be copied from src | Total length of the string to create (length of src)

## [ft_strcat](libft/ft_strcat.c)

`char       *ft_strcpy(char *dst, const char *src)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Concatenate two strings (append s2 to s1), including the terminating null byte ('\0') | Destination array | String to be appended to dst | A pointer to the resulting string dst

## [ft_strlcat](libft/ft_strlcat.c)

`size_t     ft_strlcat(char *dst, const char *src, size_t size)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Concatenate the string src to the end of dst. It will concatenate at most size - strlen(dst) - 1 bytes, NUL-terminating the result | Destination array | String to be appended to dst | Maximum number of characters to be appended | The initial length of dst plus the length of src

## [ft_strstr](libft/ft_strstr.c)

`char       *ft_strstr(const char *haystack, const char *needle)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locate substring. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared | String to be scanned | The small string to be searched in haystack string | A pointer to the beginning of the located substring. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

## [ft_strnstr](libft/ft_strnstr.c)

`char       *ft_strnstr(const char *haystack, const char *needle, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Locate substring, where not more than 'len' characters are searched. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared. | String to be scanned | The small string to be searched in 'haystack' string|The maximum amount of characters to be searched |A pointer to the first character of the first occurrence of little is returned. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

## [ft_atoi](libft/ft_atoi.c)

`int        ft_atoi(const char *str)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Convert a string to a integer | The string to be converted to int | The converted value

## [ft_isalpha](libft/ft_isalpha.c)

`int        ft_isalpha(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a alpabetic character, it is equivalent to ([ft_isupper](#ft_isupper)(c) or [ft_islower](#ft_islower)(c)) | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isdigit](libft/ft_isdigit.c)

`int         ft_isdigit(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a digit (0 through 9) | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isalnum](libft/ft_isalnum.c)

`int        ft_isalnum(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an alphanumeric character; it is equivalent to ([ft_isalpha](#ft_isalpha) or [ft_isdigit](#ft_isdigit))| The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isascii](libft/ft_isascii.c)

`int        ft_isascii(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for an ASCII character, which is any character between 0 and octal 0177 inclusive | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isprint](libft/ft_isprint.c)

`int        ft_isprint(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for any printable character including space| The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_toupper](libft/ft_toupper.c)

`int        ft_toupper(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is a lowercase, convert to upper| The character to convert | If c is a lowercase letter, returns its uppercase equivalent. Otherwise,  it  returns  c.

## [ft_tolower](libft/ft_tolower.c)

`int        ft_tolower(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is an uppercase, convert to lower| The character to convert | If c is a uppercase letter, returns its lowercase equivalent. Otherwise,  it  returns  c.

## [ft_calloc](libft/ft_calloc.c)

`void       *ft_calloc(size_t count, size_t size)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Allocates enough space for count objects that are size bytes of memory each, and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero | Number of elements to be allocated | Size of elements | A pointer to the allocated memory, or NULL if the request fails

## [ft_substr]
`char   *ft_substr(char const *s, unsigned int start, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a substring from the string given in argument. The substring begins at index 'start' and is of maximum size 'len'| The string from which create the substring | The start index of the substring in the string| The maximum length of the substring | The substring. NULL if the allocation fails

## [ft_strjoin]

`char *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a new string, result of the concatenation of s1 and s2 |The prefix string |The suffix string | The new string. NULL if the allocation fails

## [ft_strtrim]

`char *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string|The string to be trimmed |The reference set of character to trim | The trimmed string. NULL if the allocation fails

## [ft_strsplit]

`char **ft_split(char const *s, char c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns  an array of strings obtained by splitting s using the character 'c' as a delimiter. The array must be ended by a NULL pointer|The string to be split |The delimiter character| The array of new strings result of the split. NULL if the allocation fails

## [ft_strmapi]

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function f to each character of the string passed as argument to create a new string (with malloc) resulting from successive applications of f |The string on which to iterate| The function to apply to each character| The string created from the successive applications of f. Returns NULL if the allocation fails

## [ft_atoi]

`char   ft_itoa(int n)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled | The integer to convert | The string representing the integer. NULL if the allocation fails.










## [ft_islower](libft/ft_islower.c)

`int  ft_islower(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a lowercase character | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isupper](libft/ft_isupper.c)

`int ft_isupper(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an uppercase character | The character to test | 0 if the character tests false and 1 if the character tests true

## [ft_isspace](libft/ft_isspace.c)

`int ft_isspace(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
 Checks for white-space characters. These are: space, form-feed ('\f'), newline ('\n'),  carriage  return('\r'), horizontal tab ('\t'), and vertical tab ('\v').| The character to test | 0 if the character tests false and 1 if the character tests true











## ft_capitalize

`char  *ft_capitalize(char *s)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Capitalizes the first letter of every word in a string	| The string to capitalize		| The new string with capitalized words 


[1]: https://www.42madrid.com/ 
[2]:
