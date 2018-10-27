//
//  pointer_and_function.c
//  c-practice
//
//  Created by JoonYoung on 27/10/2018.
//  Copyright © 2018 sexyjoon. All rights reserved.
//

#include "pointer_and_function.h"


int square_by_value(int value) {
    
    return value * value;
    
}

int square_by_reference(int *value) {
    
    *value = (*value) * (*value);
    return *value;
    
}

void swap3(int *num1, int *num2, int *num3) {
    
    int temp = *num1;
    
    *num1 = *num3;
    *num3 = *num2;
    *num2 = temp;
    
}
