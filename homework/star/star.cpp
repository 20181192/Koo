#include <stdio.h>

int main(void) {
  int i, j, num ;
  
  printf("높이(자연수)를 정해주세요");
  scanf("%d", &num);

  for(i = 0; i< num ; i++){

    for(j = 0; j < num - 1 - i ; j++){

      printf(" ");
    }

    for(j = 0; j < 2*i + 1; j++){
      printf("*");
    }

    printf("\n");
  }

  for(i = 0; i < num - 1 ; i++){

    for(j = 0 ; j < i + 1 ; j++){

      printf(" ");

    }


    for(j = 1; j < 2*(num - i - 1) ; j++){
      
      printf("*");

    }

    printf("\n");
  }

  return 0;
}