//
//  challenge2.c
//  c-practice
//
//  Created by JoonYoung on 27/10/2018.
//  Copyright © 2018 sexyjoon. All rights reserved.
//

#include "challenge2.h"

void print_odd_numbers(int array[], int length) {
    
    for (int i = 0; i < length; i++) {
        if ((array[i] % 2) == 1) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
    
}

void print_even_numbers(int array[], int length){
    
    for (int i = 0; i < length; i++) {
        if ((array[i] % 2) == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
    
}

void print_dacimal_to_binary(int number) {
    
    unsigned long position = 1;
    unsigned long binaray_number = 0;
    
    while (number > 0) {
        
        int remain = number % 2;
        
        if (remain == 1) {
            binaray_number += 1 * position;
        }
        
        position *= 10;
        number /= 2;
    }
    
    printf("%lu\n", binaray_number);
    
}

void fill_number_to_array(int array_source[], int length_source) {
    
    int array_destination[length_source];
    
    for (int i = 0; i < length_source; i++) {
        array_destination[i] = 0;
    }
    
    for (int i = 0; i < length_source; i++) {
        if (array_source[i] % 2 == 1) {
            int index = 0;
            while (array_destination[index] != 0) {
                index++;
            }
            array_destination[index] = array_source[i];
        }
        else {
            int index = length_source - 1;
            while (array_destination[index] != 0) {
                index--;
            }
            array_destination[index] = array_source[i];
        }
    }
    
    for (int i = 0; i < length_source; i++) {
        printf("%d ", array_destination[i]);
    }
    printf("\n");
    
}

int is_palindrome(char string[], int length) {
    
    int head = 0, tail = length - 2;

    while (head < tail) {        
        if (string[head++] != string[tail--]) {
            return 0;
        }
    }
    
    return 1;
    
}

void bubble_descend_sort(int array[], int length) {
    
    for (int j = length - 1; j > 0; j--) {
        for (int i = 0; i < j; i++) {
            if (array[i] < array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    
}
