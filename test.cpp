#include "versalib.hpp"
#include <iostream>
#include <string>

using namespace std;

int test_counter = 1;

template<typename T, typename U>
void test(const T& Expected, const U& Got) {
    cout << test_counter << ": ";
    if (Got == Expected) {
        cout << "Passed";
    } else {
        cout << "Failed";
    }
    cout << " | Expected: " << Expected << " | Got: " << Got << endl;
    test_counter++;
}

void testReverse() {
    cout << "reverse:\n";

    test<string, string>("olleh", versa::reverse("hello"));
    test<int, int>(54321, versa::reverse(12345));
}

void testExtract() {
    cout << "extract:\n";

    test<string, string>("bcde", versa::extract("abcdefgh", 1, 4));
    test<string, string>("abcd", versa::extract("abcdefgh", 's', 3));
    test<string, string>("cdefgh", versa::extract("abcdefgh", 2, 'e'));
    test<string, string>("abcdefgh", versa::extract("abcdefgh", 's', 'e'));
}

void testFind() {
    cout << "find:\n";

    test<int, int>(1, versa::find("abcd", 'b'));
    test<int, int>(-1, versa::find("ardf", 'g'));
}

void testCount() {
    cout << "count:\n";

    test<int, int>(2, versa::count("hello", 'l'));
    test<int, int>(0, versa::count("world", 'z'));
}

void testReplace() {
    cout << "replace:\n";

    test<string, string>("hexxo", versa::replace("hello", 'l', 'x'));
    test<string, string>("warld", versa::replace("world", 'o', 'a'));
    test<string, string>("heo", versa::replace("hello", 'l'));
    test<string, string>("world", versa::replace("world", 'z'));
}

void testUpper() {
    cout << "upper:\n";

    test<string, string>("ABCDEFG", versa::upper("abcdefg"));
    test<string, string>("ABCDEFG", versa::upper("abCDefG"));
    test<string, string>("ABCDEFG", versa::upper("ABCDEFG"));
}

void testLower() {
    cout << "lower:\n";

    test<string, string>("abcdefg", versa::lower("ABCDEFG"));
    test<string, string>("abcdefg", versa::lower("AbCDefG"));
    test<string, string>("abcdefg", versa::lower("abcdefg"));
}

void testFlipC() {
    cout << "flipc:\n";

    test<string, string>("aBCdefG", versa::flipc("AbcDEFg"));
}

void testShift() {
    cout << "shift:\n";

    test<string, string>("bcdefga", versa::shift("abcdefg"));
}

void testFactorial() {
    cout << "factorial:\n";

    test<long long, long long>(479001600, versa::factorial(12));
}

void testRound() {
    cout << "round:\n";

    test<int, int>(19, versa::round(19.435));
    test<int, int>(25, versa::round(25.0));
}

void testIXtract() {
    cout << "ixtract:\n";

    test<string, string>("12345678", versa::ixtract("a1b2c3d4e5f6g7h8"));
    test<string, string>("", versa::ixtract("abcdefg"));
}

void testInsert() {
    cout << "insert:\n";

    test<string, string>("abcdefgh", versa::insert("abcgh", 3, "def"));
}

void testCut() {
    string str = "abcdefgh";
    int pos1 = 4;
    string result1 = versa::cut(str, pos1);

    cout << "cut\n";
    cout << "Test 28: " << (result1 == "abcd" ? "Passed" : "Failed") << " , I: " << str << ", " << pos1 << " , O: " << result1 << std::endl;

}

int main() {
    testReverse();
    testExtract();
    testFind();
    testCount();
    testReplace();
    testUpper();
    testLower();
    testFlipC();
    testShift();
    testIXtract();
    testFactorial();
    testRound();
    testInsert();
    testCut();
    return 0;
}
