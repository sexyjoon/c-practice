//
//  pointer_and_array.c
//  c-practice
//
//  Created by JoonYoung on 27/10/2018.
//  Copyright © 2018 sexyjoon. All rights reserved.
//

#include "pointer_and_array.h"

/*
 길이가 5인 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화한 다음, 이 배열의 첫 번째
 요소를 가리키는 포인터 변수 ptr을 선언한다. 그 다음 포인터 변수 ptr에 저장된 값을 증가시키는
 형태의 연산을 기반으로 배열요소에 접근하면서 모든 배열요소의 값을 2씩 증가시키고, 정상적으로
 증가가 이뤄졌는지 확인하는 예제를 작성해보자.
 */
void pointer_and_array_1(void) {
    
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    
    for (int i = 0; i < sizeof(arr)/sizeof(typeof(arr[0])); i++) {
        *(ptr++) += 2;
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    
}

/*
 길이가 6인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5, 6으로 초기화한 다음, 배열에 저장된
 값이 순서가 6, 5, 4, 3, 2, 1이 되도록 변경하는 예제를 작성해보자. 단, 배열의 앞과 뒤를 가리키는
 포인터 변수 두 개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다.
 */
void pointer_and_array_2(void) {
    
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr_length = sizeof(arr)/sizeof(typeof(arr[0]));
    int *ptr_head = arr;
    int *ptr_tail = &arr[arr_length - 1];
    
    while (ptr_head < ptr_tail) {
        int temp = *ptr_head;
        *(ptr_head++) = *ptr_tail;
        *(ptr_tail--) = temp;
        
    }
    
    for (int i = 0; i < arr_length; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}
