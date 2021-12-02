#include <stdio.h>
#include "my_mat.h"

int main(){
   char req;
   int matrix[10][10];
   scanf("%c", &req);
   while(req != 'D'){
     if(req == 'A'){
       for(int i=0;i<10; i++){
        for(int j=0;j<10;j++){
            scanf("%d",&matrix[i][j]);
        }  
    }
       scanf(" %c", &req);
     }
     if(req == 'B'){
         int x;
         int y;
        scanf("%d", &x);
        scanf("%d", &y);
        int temp;
      if(x !=  y){
        if(matrix[x][y] < 600){
            temp = 1;
        }
      }else{
        temp = 0;
      }
      if(temp == 1){
         printf("%s", "True\n");
       }
       else{
         printf("%s", "False\n");
         
       }
       scanf(" %c", &req);
     }
     if(req == 'C'){
         int x;
         int y;
        scanf("%d", &x);
        scanf("%d", &y);
       int temp;
       if(x !=  y){
        if(matrix[x][y] < 600){
            temp = 1;
        }
      }else{
        temp = 0;
      }
       printf("%d\n", temp);
       scanf(" %c", &req);
     }
   }
   return 1;
}
