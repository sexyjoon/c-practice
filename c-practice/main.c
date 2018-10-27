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
    int num = 3;
    square_by_value(num);
    printf("num(square_by_value) : %d\n", num);
    square_by_reference(&num);
    printf("num(square_by_reference) : %d\n", num);
    
    int num1 = 1, num2 = 2, num3 = 3;
    printf("Before swap3() - num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
    swap3(&num1, &num2, &num3);
    printf("After swap3() - num1 : %d, num2 : %d, num3 : %d\n", num1, num2, num3);
    
    return 0;
}
