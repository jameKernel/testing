#include<stdio.h>

int main(){
    for (int i = 1; i <= 9; i++){
        for (int s = 9; s > i; s--){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ", j);
            
        }
        for (int k = 1; k < i; k++) {
            printf("* ");
        }
        printf("\n");
        // for (int k = 9; k > i; k--){
        //     printf("%d ", k);
        // }
        
    }
}
/*
                * 
              * * * 
            * * * * * 
          * * * * * * * 
        * * * * * * * * * 
      * * * * * * * * * * * 
    * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * * 
*/