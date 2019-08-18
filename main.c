#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <math.h>

#include "operations.h"

void string_to_bits(const char* string, unsigned char* number) {
    for (int i = 0; i < BYTESIZE; ++i) {
        if (string[i] == '1') {
            *number |= (unsigned char) pow(2, (7-i));
        }
    }
}

int main(int argc, char** argv) {
    unsigned char first_number = 0x00;
    unsigned char second_number = 0x00;
    char first_number_string[BYTESIZE];
    char second_number_string[BYTESIZE];

    int c;
    char opt;

    while ((c = getopt(argc, argv, "asmdf:i:")) != -1) {
        switch (c) {
            //add
            case 'a':
                opt = 'a';
                break;

            //subtract
            case 's':
                opt = 's';
                break;

            //multiply
            case 'm':
                opt = 'm';
                break;

            //divide
            case 'd':
                opt = 'd';
                break;

            //first number
            case 'f':
                strcpy(first_number_string, optarg);
                break;

            //second number
            case 'i':
                strcpy(second_number_string, optarg);
                break;

            default:
                break;
        }
    }
}