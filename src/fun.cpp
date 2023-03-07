// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cstring>
#include <iostream>
#include <math.h>

using namespace std;


unsigned int faStr1(const char* str) {
    int count = 0;
    int length = strlen(str);
    bool isWord = false;

    for (int i = 0; i < length; i++) {
        char current = str[i];

        if (current >= '0' && current <= '9') {
            isWord = false;
            break;
        }
        else {
            isWord = true;
        }
        if ((current == ' ' || current == '\0') && isWord) {
            count++;
        }
    }

    return isWord ? count + 1 : count;
}

unsigned int faStr2(const char* str) {
    int count = 0;
    bool wordStarted = false;
    bool validWord = false;

    while (*str != '\0') {
        if (isupper(*str) && !wordStarted) {
            wordStarted = true;
        }
        else if (*str == ' ' && wordStarted) {
            count++;
            wordStarted = false;
        }
        else if (!isalpha(*str) || !islower(*str)) {
            wordStarted = false;
        }
        str++;
    }

    return wordStarted ? count + 1 : count;
}

unsigned int faStr3(const char* str) {
    int length = strlen(str);
    int wordsCount = 0;
    int sum = 0;
    bool inWord = false;

    for (int i = 0; i < length; i++) {
        if (!inWord && str[i] != ' ') {
            inWord = true;
            wordsCount++;
        }
        else if (str[i] == ' ') {
            inWord = false;
        }
        sum++;
    }

    if (wordsCount == 0) {
        return 0;
    }

    double average = (double)sum / wordsCount;
    int rounded = round(average);
    return rounded;
}
