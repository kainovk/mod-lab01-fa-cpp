// Copyright 2022 UNN-IASR
#include <iostream>

#include "fun.h"


int main() {
    const char* str1 =
        "This Is A Test String To Find Number of Words With Capital Letters";
    unsigned int count1 = faStr1(str1);
    std::cout << "faStr1: " << count1 << std::endl;

    const char* str2 = "The quick Brown fox jumps over the lazy Dog";
    unsigned int count2 = faStr2(str2);
    std::cout << "faStr2: " << count2 << std::endl;

    const char* str3 = "Hello, world! This is a test string.";
    unsigned int averageLength = faStr3(str3);
    std::cout << "faStr3: " << averageLength << std::endl;
}
