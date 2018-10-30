//
//  challenge3.c
//  c-practice
//
//  Created by JoonYoung on 29/10/2018.
//  Copyright © 2018 sexyjoon. All rights reserved.
//

#include "challenge3.h"


void rotate_2x2_array(int (*array)[4]) {
    
    int temp_array[4][4];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            temp_array[i][j] = array[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            array[j][3 - i] = temp_array[i][j];
        }
    }
    
}

void print_2x2_snail_array(int n) {
    
    int **array = (int **)malloc(n *  sizeof(int *));
    for (int i = 0; i < n; i++) {
        array[i] = (int *)malloc(n * sizeof(int));
    }
    int count = 1;
    int process_amount = n;
    int process_direction = 1;
    int row = 0, col = 0;
    
    while (count <= n * n) {
        for (int i = 0; i < process_amount; i++) {
            array[row][col + (i * process_direction)] = count++;
        }
        col = col + ((process_amount - 1) *process_direction);
        row = row + process_direction;
        process_amount -= 1;
        for (int i = 0; i < process_amount; i++) {
            array[row + (i * process_direction)][col] = count++;
        }
        row = row + ((process_amount - 1) * process_direction);
        process_direction *= -1;
        col = col + process_direction;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
