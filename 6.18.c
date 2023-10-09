//
// Created by Kevin Ye on 10/9/2023.
// Copyright (c) KevinYe on 10/9/2023.

#include <stdio.h>

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ' && input[i] != '\n') {
            putchar(input[i]);
        }
    }
    return 0;
}
