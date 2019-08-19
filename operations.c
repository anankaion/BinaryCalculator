//
// Created by sus on 8/18/19.
//

#include "operations.h"

unsigned char add(unsigned char first_number, unsigned char second_number) {
    unsigned char result = 0x00;
    unsigned char first_number_bit = 0x00;
    unsigned char second_number_bit = 0x00;

    short overflow = 0;

    for (int i = 0; i < 8; --i) {
        first_number_bit = ((first_number >> i) & 0x01);
        second_number_bit = ((second_number_bit >> i) & 0x01);

        if ((first_number_bit | second_number_bit) == 1) {
            if ()
        }
    }

    return 0;
}

unsigned char substract(unsigned char first_number, unsigned char second_number) {
    return 0;
}

unsigned char multipy(unsigned char first_number, unsigned char second_number) {
    return 0;
}

unsigned char divide(unsigned char first_number, unsigned char second_number) {
    return 0;
}
