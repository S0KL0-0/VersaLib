#include "versalib.hpp"
#include <iostream>
#include <cassert>

using std::string, std::cout;

void test_reverse() {
    string str1 = "hello";
    string str2 = "olleh";
    string result = versa::reverse(str1);
    cout << "reverse\n";
    cout << "Test 1: " << (result == str2 ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result << std::endl;

    string str3 = "world";
    result = versa::reverse(str3);
    cout << "Test 2: " << (result != str2 ? "Passed" : "Failed") << " , I: " << str3 << " , O: " << result << std::endl;
}

void test_extract() {
    string str4 = "abcdefgh";
    string result = versa::extract(str4, 1, 4);
    cout << "extract\n";
    cout << "Test 3: " << (result == "bcde" ? "Passed" : "Failed") << " , I: " << str4 << ", 1, 4" << " , O: " << result << std::endl;

    result = versa::extract(str4, 's', 3);
    cout << "Test 4: " << (result == "abcd" ? "Passed" : "Failed") << " , I: " << str4 << ", 's', 3" << " , O: " << result << std::endl;

    result = versa::extract(str4, 's', 'e');
    cout << "Test 5: " << (result == "abcdefgh" ? "Passed" : "Failed") << " , I: " << str4 << ", 's', 'e'" << " , O: " << result << std::endl;

    result = versa::extract(str4, 2, 'e');
    cout << "Test 6: " << (result == "cdefgh" ? "Passed" : "Failed") << " , I: " << str4 << ", 2, 'e'" << " , O: " << result << std::endl;
}

void test_find() {
    int result = find("abcd", 'b');
    cout << "find\n";
    cout << "Test 7: " << (result == 1 ? "Passed" : "Failed") << " , I: abcd, 'b'" << " , O: " << result << std::endl;

    result = find("ardf", 'g');
    cout << "Test 8: " << (result == -1 ? "Passed" : "Failed") << " , I: ardf, 'g'" << " , O: " << result << std::endl;
}

void test_count() {
    string str1 = "hello";
    char target1 = 'l';
    int result1 = count(str1, target1);
    cout << "count\n";
    cout << "Test 9: " << (result1 == 2 ? "Passed" : "Failed") << " , I: " << str1 << ", 'l'" << " , O: " << result1 << std::endl;

    string str2 = "world";
    char target2 = 'z';
    int result2 = count(str2, target2);
    cout << "Test 10: " << (result2 == 0 ? "Passed" : "Failed") << " , I: " << str2 << ", 'z'" << " , O: " << result2 << std::endl;
}

void test_replace() {
    string str1 = "hello";
    char target1 = 'l';
    char replacement1 = 'x';
    string result1 = versa::replace(str1, target1, replacement1);
    cout << "replace\n";
    cout << "Test 10: " << (result1 == "hexxo" ? "Passed" : "Failed") << " , I: " << str1 << ", 'l', 'x'" << " , O: " << result1 << std::endl;

    string str2 = "world";
    char target2 = 'o';
    char replacement2 = 'a';
    string result2 = versa::replace(str2, target2, replacement2);
    cout << "Test 11: " << (result2 == "warld" ? "Passed" : "Failed") << " , I: " << str2 << ", 'o', 'a'" << " , O: " << result2 << std::endl;

    string str3 = "hello";
    char target3 = 'l';
    string result3 = versa::replace(str3, target3);
    cout << "Test 12: " << (result3 == "heo" ? "Passed" : "Failed") << " , I: " << str3 << ", 'l'" << " , O: " << result3 << std::endl;

    string str4 = "world";
    char target4 = 'z';
    string result4 = versa::replace(str4, target4);
    cout << "Test 13: " << (result4 == "world" ? "Passed" : "Failed") << " , I: " << str4 << ", 'z'" << " , O: " << result4 << std::endl;
}

void test_upper() {
    string str1 = "abcdefg";
    string result1 = versa::upper(str1);
    cout << "upper\n";
    cout << "Test14: " << (result1 == "ABCDEFG" ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result1 << std::endl;

    string str2 = "abCDefG";
    string result2 = versa::upper(str2);
    cout << "Test15: " << (result2 == "ABCDEFG" ? "Passed" : "Failed") << " , I: " << str2 << " , O: " << result2 << std::endl;


    string str3 = "ABCDEFG";
    string result3 = versa::upper(str3);
    cout << "Test16: " << (result3 == "ABCDEFG" ? "Passed" : "Failed") << " , I: " << str3 << " , O: " << result3 << std::endl;

}

void test_lower() {
    string str1 = "ABCDEFG";
    string result1 = versa::lower(str1);
    cout << "lower\n";
    cout << "Test17: " << (result1 == "abcdefg" ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result1 << std::endl;

    string str2 = "AbCDefG";
    string result2 = versa::lower(str2);
    cout << "Test18: " << (result2 == "abcdefg" ? "Passed" : "Failed") << " , I: " << str2 << " , O: " << result2 << std::endl;


    string str3 = "abcdefg";
    string result3 = versa::lower(str3);
    cout << "Test19: " << (result3 == "abcdefg" ? "Passed" : "Failed") << " , I: " << str3 << " , O: " << result3 << std::endl;

}

void test_flipc() {
    string str1 = "AbcDEFg";
    string result1 = flipc(str1);

    cout << "flipc\n";
    cout << "Test20: " << (result1 == "aBCdefG" ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result1 << std::endl;
}

int main() {
    test_reverse();
    test_extract();
    test_find();
    test_count();
    test_replace();
    test_upper();
    test_lower();
    test_flipc();
    return 0;
}