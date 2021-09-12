#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
  int i ;
  int lowValue = -9999 ;
  int N = 0 ;
  srand(time(NULL));
   
 
  printf("변수 개수를 정해주세요");
  scanf("%d", &N);

  int a[9999] = {0,} ; // a[0]~a[9999] 까지 초기화

  for(i = 0 ; i < N ; i++){
     a[i] = rand()%1000 ; // 변수의 범위 설정 0~9999 까지
     printf("(%d) %d\n", i + 1, a[i]);
     
  }
  
  lowValue = a[0] ;
  for(i = 1 ; i < N ; i++){
    if(lowValue > a[i]){
      lowValue = a[i] ;
    }
  }
 
  printf("최소값은: %d", lowValue) ;//


  return 0;
}