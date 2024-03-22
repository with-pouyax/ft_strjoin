# ft_strjoin

This repository is dedicated to the `ft_strjoin` function, a custom implementation designed to dynamically concatenate an array of strings using a specified separator. This function is particularly useful for combining multiple strings into a single string with custom separators, showcasing dynamic memory allocation and string manipulation techniques in C programming.

## Overview

The `ft_strjoin` function is supported by several helper functions:
- `str_len`: Calculates the length of a string.
- `calc_size`: Determines the total length required for the concatenated string, including separators.
- `append_str`: Appends a string to the result string at a specified position.
- `concat_strs`: Handles the concatenation logic, including separator insertion.

This set of functions collectively enables the dynamic creation of a single string from multiple substrings, separated by a user-defined string.

### Function Prototype

```c
char *ft_strjoin(int size, char **strs, char *sep);
