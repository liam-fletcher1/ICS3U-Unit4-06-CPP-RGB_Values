// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program uses a nested loop to print all rgb values

#include <iostream>
int rgb1 = 0;
int rgb2 = 0;
int rgb3 = 0;

int main() {
    // this function uses a nested loop to print all rgb values

    // process and output

    for  (rgb1 = 0; rgb1 < 256; rgb1++) {
         for (rgb2 = 0; rgb2 < 256; rgb2++) {
            for (rgb3 = 0; rgb3 < 256; rgb3++) {
                std::cout << "RGB (" << rgb1 <<", " << rgb2 << ", " << rgb3 <<
                ")" << std::endl;
            }
        }
    }
    std::cout << "\nDone." << std::endl;
}
