#include "versalib.hpp"
#include <iostream>
#include <cassert>

using std::string, std::cout;

void test_reverse() {
    string str1 = "hello";
    string result = versa::reverse(str1);
    cout << "reverse\n";
    cout << "Test 1: " << (result == "olleh" ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result << std::endl;

    string str3 = "world";
    result = versa::reverse(str3);
    cout << "Test 2: " << (result != "world" ? "Passed" : "Failed") << " , I: " << str3 << " , O: " << result << std::endl;
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
    int result = versa::find("abcd", 'b');
    cout << "find\n";
    cout << "Test 7: " << (result == 1 ? "Passed" : "Failed") << " , I: abcd, 'b'" << " , O: " << result << std::endl;

    result = versa::find("ardf", 'g');
    cout << "Test 8: " << (result == -1 ? "Passed" : "Failed") << " , I: ardf, 'g'" << " , O: " << result << std::endl;
}

void test_count() {
    string str1 = "hello";
    char target1 = 'l';
    int result1 = versa::count(str1, target1);
    cout << "count\n";
    cout << "Test 9: " << (result1 == 2 ? "Passed" : "Failed") << " , I: " << str1 << ", 'l'" << " , O: " << result1 << std::endl;

    string str2 = "world";
    char target2 = 'z';
    int result2 = versa::count(str2, target2);
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
    cout << "Test 14: " << (result1 == "ABCDEFG" ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result1 << std::endl;

    string str2 = "abCDefG";
    string result2 = versa::upper(str2);
    cout << "Test 15: " << (result2 == "ABCDEFG" ? "Passed" : "Failed") << " , I: " << str2 << " , O: " << result2 << std::endl;


    string str3 = "ABCDEFG";
    string result3 = versa::upper(str3);
    cout << "Test 16: " << (result3 == "ABCDEFG" ? "Passed" : "Failed") << " , I: " << str3 << " , O: " << result3 << std::endl;

}

void test_lower() {
    string str1 = "ABCDEFG";
    string result1 = versa::lower(str1);
    cout << "lower\n";
    cout << "Test 17: " << (result1 == "abcdefg" ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result1 << std::endl;

    string str2 = "AbCDefG";
    string result2 = versa::lower(str2);
    cout << "Test 18: " << (result2 == "abcdefg" ? "Passed" : "Failed") << " , I: " << str2 << " , O: " << result2 << std::endl;


    string str3 = "abcdefg";
    string result3 = versa::lower(str3);
    cout << "Test 19: " << (result3 == "abcdefg" ? "Passed" : "Failed") << " , I: " << str3 << " , O: " << result3 << std::endl;

}

void test_flipc() {
    string str1 = "AbcDEFg";
    string result1 = versa::flipc(str1);

    cout << "flipc\n";
    cout << "Test 20: " << (result1 == "aBCdefG" ? "Passed" : "Failed") << " , I: " << str1 << " , O: " << result1 << std::endl;
}

void test_shift() {
    string str = "abcdefg";
    string result = versa::shift(str);

    cout << "shift\n";
    cout << "Test 21: " << (result == "bcdefga" ? "Passed" : "Failed") << " , I: " << str << " , O: " << result << std::endl;

}

void test_factorial() {
    int integer = 12;
    long long result = versa::factorial(integer);

    cout << "factorial\n";
    cout << "Test 22: " << (result == 479001600 ? "Passed" : "Failed") << " , I: " << integer << " , O: " << result << std::endl;

}

void test_round() {
    float fpn1 = 19.435;
    int result1 = versa::round(fpn1);

    cout << "round\n";
    cout << "Test 23: " << (result1 == 19 ? "Passed" : "Failed") << " , I: " << fpn1 << " , O: " << result1 << std::endl;

    float fpn2 = 25;
    int result2 = versa::round(fpn2);
    cout << "Test 24: " << (result2 == 25 ? "Passed" : "Failed") << " , I: " << fpn2 << " , O: " << result2 << std::endl;
}

void test_ixtract() {
    string str = "a1b2c3d4e5f6g7h8";
    string result = versa::ixtract(str);

    cout << "ixtract\n";
    cout << "Test 25: " << (result == "12345678" ? "Passed" : "Failed") << " , I: " << str << " , O: " << result << std::endl;

    string str2 = "abcdefg";
    string result2 = versa::ixtract(str2);
    cout << "Test 26: " << (result2 == "" ? "Passed" : "Failed") << " , I: " << str2 << " , O: " << result2 << std::endl;

}

void test_insert() {
    string str1 = "abcgh";
    string str2 = "def";
    int pos = 3;
    string result = versa::insert(str1, pos, str2);
    cout << "insert\n";
    cout << "Test 27: " << (result == "abcdefgh" ? "Passed" : "Failed") << " , I: " << str1 << ", " << pos << ", " << str2 << " , O: " << result << std::endl;

}

void test_cut() {
    string str = "abcdefgh";
    int pos1 = 4;
    string result1 = versa::cut(str, pos1);

    cout << "cut\n";
    cout << "Test 28: " << (result1 == "abcd" ? "Passed" : "Failed") << " , I: " << str << ", " << pos1 << " , O: " << result1 << std::endl;

}

void test_shuffle() {
    string str = "abcdefgh";
    int mode = 1;
    string result = versa::shuffle(str, mode);

    cout << "shuffle\n";
    cout << "Test 29: " << (result == "ahbgcfde" ? "Passed" : "Failed") << " , I: " << str << ", " << mode << " , O: " << result << std::endl;
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
    test_shift();
    test_ixtract();
    test_factorial();
    test_round();
    test_insert();
    test_cut();
    test_shuffle();
    return 0;
}
