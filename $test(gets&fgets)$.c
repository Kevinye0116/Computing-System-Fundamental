//
// Created by Kevin Ye on 10/10/2023.
// Copyright (c) KevinYe on 10/10/2023.

#include <stdio.h>

int main(void) {
    char str[5];
    fgets(str, sizeof(str), stdin);
    //gets(str);

    printf("%s\n", str);
    return 0;
}