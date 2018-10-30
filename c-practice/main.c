//
//  main.c
//  c-practice
//
//  Created by JoonYoung on 27/10/2018.
//  Copyright © 2018 sexyjoon. All rights reserved.
//

#include <stdio.h>
#include "pointer_basic.h"
#include "pointer_and_array.h"
#include "pointer_and_function.h"
#include "challenge2.h"
#include "challenge3.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
     pointer_basic_print();
     pointer_basic_print2();
     */
    /*
     pointer_and_array_1();
     pointer_and_array_2();
     */
    /*
    int num = 3;
    square_by_value(num);
    printf("num(square_by_value) : %d\n", num);
    square_by_reference(&num);
    printf("num(square_by_reference) : %d\n", num);
    
    int num1 = 1, num2 = 2, num3 = 3;
    printf("Before swap3() - num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
    swap3(&num1, &num2, &num3);
    printf("After swap3() - num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
    */
    
    /*
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    print_odd_numbers(array, sizeof(array)/sizeof(array[0]));
    print_even_numbers(array, sizeof(array)/sizeof(array[0]));
    
    print_dacimal_to_binary(541326);
    
    int array2[10] = {1, 1, 4, 4, 4, 4, 3, 3, 2, 2};
    fill_number_to_array(array2, sizeof(array2)/sizeof(array2[0]));
    
    char string[] = "noon";
    printf(is_palindrome(string, sizeof(string)/sizeof(char))?"true\n":"false\n");
    
    int array3[] = {1, 2, 3, 4, 5, 6, 7};
    bubble_descend_sort(array3, sizeof(array3)/sizeof(array3[0]));
    for (int i = 0; i < sizeof(array3)/sizeof(array3[0]); i++) {
        printf("%d ", array3[i]);
    }
    printf("\n");
    */
    
    int array[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    
    rotate_2x2_array(array);
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    print_2x2_snail_array(6);
    return 0;
}
