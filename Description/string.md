## String Functions

### Table of Contents

- [Count](#Count)
- [Extract](#Extract)
- [Find](#Find)
- [Lower](#Lower)
- [Upper](#Upper)
- [FlipC](#FlipC)
- [Replace](#Replace)
- [Reverse](#Reverse)
- [Shift](#Shift)

# Count

Counts the amount of a specific character present in a string.

**count(string, char)**

```
string example = "Hello";
cout << count(example, 'l');
```
```
Output: 2
```

# Extract

Extracts a string from another string based on start and end index.
Can use 's' for starting from the begginng and 'e' to go till the end.

**extract(string, int, int)**

```
string example = "abcdefg";
cout << extract(example, 2, 4);
```
```
Output: cde
```
```
cout << extract(example, 's', 4);
```
```
Output: abcde
```
```
cout << extract(example, 2, 'e');
```
```
Output: cdefg
```

# Find

Find the first occurence of a character in a string.
Returns -1 if not found.

**find(string, char)**

```
string example = "Hello";
cout << find(example, 'l');
```
```
Output: 2
```
```
cout << find(example, 'z');
```
```
Output: -1
```

# Lower

Convert all upper case characters to lower case in a string.

**lower(string)**

```
string example = "HeLLo";
cout << lower(example);
```
```
Output: hello
```

# Upper

Convert all lower case characters to upper case in a string.

**lower(string)**

```
string example = "HeLLo";
cout << upper(example);
```
```
Output: HELLO
```

# FlipC

Converts all characters in a string to the opposite case.
Lower case -> Upper case.
Upper case -> Lower case.

**flipc(string)**

```
string example = "HeLLo";
cout << flipc(example);
```
```
Output: hEllO
```

# Replace

Replaces all target characters with the replacement characters in a string.
If replacement character is not provided it removes the target character.

**replace(string, char, char)**

```
string example = "hello";
cout << replace(example, 'l', 'x');
```
```
Output: hexxo
```
```
string example = "hello";
cout << replace(example, 'l');
```
```
Output: heo
```

# Reverse

Reverses a string.

**reverse(string)**

```
string example = "hello";
cout << reverse(example);
```
```
Output: olleh
```

# Shift

Moves the first character to the back of the string

**shift(string)**

```
string example = "hello";
cout << shift(example);
```
```
Output: elloh
```