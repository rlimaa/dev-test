## Task 3

The main product of solution is the function with the following signature:
```c
bool ConcatRemove(char s[MAX_STR_SIZE], char t[MAX_STR_SIZE], int k)
```

The solution tries to convert one string (s) into another (t) in a specified number of operations (k).

The possible operations are 
* **Concat**: Concatenate a lower case from the alphabet at the end of the string
* **Removal**: Remove a character from the end of string