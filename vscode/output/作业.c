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
    printf("������\n");
    
   }else{
    printf("��������\n");
   }
    return 0;
}
