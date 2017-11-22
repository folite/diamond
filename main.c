#include<stdio.h>
#include<stdlib.h>

void main(void){
    int n = 0;
    printf("請輸入奇數：");
    while (n % 2 == 0){
        scanf("%d", &n);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(abs(i - n / 2) + abs(j - n / 2) <= n / 2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}