# String Functions

- [Count](#count)
- [Extract](#extract)
- [Find](#find)
- [Lower](#lower)
- [Upper](#upper)
- [FlipC](#flipc)
- [Replace](#replace)
- [Reverse](#reverse)
- [Shift](#shift)
- [Cut](#cut)
- [Insert](#insert)
- [Ixtract](#ixtract)

## Count

Counts the amount of a specific character present in a string.

`count(string, char)`

```cpp
string example = "Hello";
cout << count(example, 'l');
```
```cpp
2
```

## Extract

Extracts a string from another string based on start and end index.
Can use 's' for starting from the begginng and 'e' to go till the end.

`extract(string, int, int)`

```cpp
string example = "abcdefg";
cout << extract(example, 2, 4);
```
```cpp
cde
```
---
```cpp
cout << extract(example, 's', 4);
```
```cpp
abcde
```
---
```cpp
cout << extract(example, 2, 'e');
```
```cpp
cdefg
```

## Find

Find the first occurence of a character in a string.
Returns -1 if not found.

`find(string, char)`

```cpp
string example = "Hello";
cout << find(example, 'l');
```
```cpp
2
```
---
```cpp
cout << find(example, 'z');
```
```cpp
-1
```

## Lower

Convert all upper case characters to lower case in a string.

`lower(string)`

```cpp
string example = "HeLLo";
cout << lower(example);
```
```cpp
hello
```

## Upper

Convert all lower case characters to upper case in a string.

`lower(string)`

```cpp
string example = "HeLLo";
cout << upper(example);
```
```cpp
HELLO
```

## FlipC

Converts all characters in a string to the opposite case.
Lower case -> Upper case.
Upper case -> Lower case.

`flipc(string)`

```cpp
string example = "HeLLo";
cout << flipc(example);
```
```cpp
hEllO
```

## Replace

Replaces all target characters with the replacement characters in a string.
If replacement character is not provided it removes the target character.

`replace(string, char, char)`

```cpp
string example = "hello";
cout << replace(example, 'l', 'x');
```
```cpp
hexxo
```
---
```cpp
string example = "hello";
cout << replace(example, 'l');
```
```cpp
heo
```

## Reverse

Reverses a string.

`reverse(string)`

```cpp
string example = "hello";
cout << reverse(example);
```
```cpp
olleh
```

## Shift

Moves the first character to the back of the string

`shift(string)`

```cpp
string example = "hello";
cout << shift(example);
```
```cpp
elloh
```

## Cut

Removes a part of a string after pos (including the pos)

`cut(string, int)`

```cpp
string example = "abcdefgh";
int pos = 4;
cout << cut(example, pos);
```
```cpp
abcd
```

## Insert

Inserts 2nd string in the pos

`insert(string, int, string)`

```cpp
string example1 = "abcgh";
int pos = 3;
string example2 = "def";
```
```cpp
abcdefgh
```

## Ixtract

Extracts digits (0 - 9) from a string and returns as string.

`ixtract(string)`

```cpp
string example = "a12b3c25d06";
cout << ixtract;
```
```cpp
1232506
```