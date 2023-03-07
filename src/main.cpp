// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

using namespace std;


int main() {
    const char* str1 =
        "This Is A Test String To Find Number of Words With Capital Letters";
    unsigned int count1 = faStr1(str1);
    cout << "faStr1: " << count1 << endl;

    const char* str2 = "The quick Brown fox jumps over the lazy Dog";
    unsigned int count2 = faStr2(str2);
    cout << "faStr2: " << count2 << endl;

    const char* str3 = "Hello, world! This is a test string.";
    unsigned int averageLength = faStr3(str3);
    cout << "faStr3: " << averageLength << endl;
}
