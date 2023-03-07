// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>
#include <math.h>


unsigned int faStr1(const char* str) {
    int count = 0;
    int length = strlen(str);
    bool isWord = false;
    bool numberAppeared = false;

    for (int i = 0; i < length; i++) {
        char current = str[i];

        if (numberAppeared) {
            if (current == ' ') {
                numberAppeared = false;
            }
            continue;
        }

        if (current >= '0' && current <= '9') {
            isWord = false;
            numberAppeared = true;
            continue;
        } else if (current != ' ' && !numberAppeared) {
            isWord = true;
        }
        if ((current == ' ' || current == '\0') && isWord) {
            count++;
            isWord = false;
            numberAppeared = false;
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
        } else if (*str == ' ' && wordStarted) {
            count++;
            wordStarted = false;
        } else if (!isalpha(*str) || !islower(*str)) {
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
        if (str[i] == ' ') {
            inWord = false;
        } else {
            sum++;
        }
    }

    if (wordsCount == 0) {
        return 0;
    }

    double average = (double)sum / wordsCount;
    int rounded = round(average);
    return rounded;
}
