# extract

Extracts a substring from a given string based on specified indices or characters.

## Input Parameters:
- **str**: The input string from which to extract the substring.
- **start**: The starting index or character of the substring extraction.
  - Can use 's' to set start to 0.
- **end**: The ending index or character of the substring extraction.
  - Can use 'e' to set end to max.

## Output Parameters:
- Returns a new string containing the extracted substring.

## Example Use:
```
std::string str = "abcdefgh";
std::string extracted1 = extract(str, 1, 4); // Returns "bcde"
std::string extracted2 = extract(str, 's', 3); // Returns "abcd"
std::string extracted2 = extract(str, 2, 'e'); // Returns "cdefgh"
std::string extracted2 = extract(str, 's', 'e'); // Returns "abcdefgh"
```
