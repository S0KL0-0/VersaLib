# find

Searches for the first occurrence of a specified character in a given string and returns its position.

## Input Parameters:
- **str**: The input string in which to search for the target character.
- **target**: The target character to search for.

## Output Parameters:
- Returns an integer representing the position of the first occurrence of the target character in the input string. If the character is not found, returns `-1`.

## Example Use:
```
std::string str = "abcd";
char target = 'b';
int pos = find(str, target); // Returns 1

char target = 'z';
int pos = find(str, target); // Returns -1
```
