# replace

Replaces occurrences of a specified character in a string with another character or deletes them if the replacement character is not provided.

## Input Parameters

- **str**: The input string to be modified.
- **target**: The character to search for and replace.
- **replacement (optional)**: The character to replace occurrences of the target with. If not provided, occurrences of the target character will be deleted.

## Output Parameters

- Returns the modified string after performing the replacement.

## Example Use

```cpp
std::string str1 = "hello";
char target1 = 'l';
char replacement1 = 'x';
std::string result1 = replace(str1, target1, replacement1); // Returns "hexxo"

std::string str2 = "hello";
char target2 = 'l';
std::string result3 = replace(str2, target2); // Returns "heo"

std::string str3 = "world";
char target3 = 'z';
std::string result3 = replace(str3, target3); // Returns "world"
