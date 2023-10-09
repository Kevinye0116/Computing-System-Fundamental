//
// Created by Kevin Ye on 10/9/2023.
// Copyright (c) KevinYe on 10/9/2023.


#include <stdio.h>

int main() {
    int decimalNum;
    scanf("%d", &decimalNum);
    for (int i = 31; i >= 0; i--) {
        int bit = (decimalNum >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}
