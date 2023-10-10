//
// Created by Kevin Ye on 10/10/2023.
// Copyright (c) KevinYe on 10/10/2023.

#include <stdio.h>

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (i <= sizeof(str)) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

    printf("%s", str);

    return 0;
}

