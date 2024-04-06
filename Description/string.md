## String Functions

### Table of Contents

- [Count](#Count)
- [Extract](#Extract)
- [Find](#Find)




#### Count

Counts the amount of a specific character present in a string.

**count(string, char)**

```
string example = "Hello";
cout << versa::count(example, 'l');
```
```
Output: 2
```

#### Extract

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

#### Find

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