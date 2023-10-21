//
// Created by Kevin Ye on 10/21/2023.
// Copyright (c) Kevin Ye. All rights reserved.

#include <stdio.h>

int main(void) {
    int s0, i, n, t, o, s1 = 0;
    scanf("%d%d%d%d%d", &s0, &i, &n, &t, &o);
    if (s0 == 0) {
        if (o == i) s1 = 1;
        else s1 = 0;
    } else if (s0 == 1) {
        if (o == i) s1 = 1;
        else if (o == n) s1 = 2;
        else s1 = 0;
    } else if (s0 == 2) {
        if (o == i) s1 = 1;
        else if (o == t) s1 = 3;
        else s1 = 0;
    } else if (s0 == 3) {
        if (o == i) s1 = 1;
        else s1 = 0;
    }
    printf("%d", s1);
    return 0;
}
