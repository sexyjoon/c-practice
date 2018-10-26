//
//  pointer-basic.c
//  c-practice
//
//  Created by JoonYoung on 27/10/2018.
//  Copyright © 2018 sexyjoon. All rights reserved.
//

#include "pointer_basic.h"

void pointer_basic_print(void) {
    
    int num = 10;
    int *ptr1 = &num;
    int *ptr2 = ptr1;
    
    (*ptr1)++;
    (*ptr2)++;
    
    printf("num : %d\n", num);
    printf("&num : %p (%lu bytes)\n", &num, sizeof(&num));
    printf("ptr1 : %p (%lu bytes)\n", ptr1, sizeof(ptr1));
    printf("ptr2 : %p (%lu bytes)\n", ptr2, sizeof(ptr2));
    
}

void pointer_basic_print2(void) {
    
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2, *temp = NULL;
    
    (*ptr1) += 10;
    (*ptr2) -= 10;
    
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    
    printf("*ptr1 : %d\n", *ptr1);
    printf("*ptr2 : %d\n", *ptr2);
    
}
