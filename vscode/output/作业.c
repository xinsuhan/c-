#include <stdio.h>
int main(void){
    //scanf("%d",&x)
    int x;
    x=6;
    int i;
    int isprime=1;
    for(i=2;i<x;i++){
        if (x%i==0){
        isprime=0;
    }
}

   if (isprime==1){
    printf("是素数\n");
    
   }else{
    printf("不是素数\n");
   }
    return 0;
}
