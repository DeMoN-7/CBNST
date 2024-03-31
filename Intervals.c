#include<stdio.h>
float eq(float x){
    float f=(x*x*x)-(4*x)-9;
    return(f);
}
void main(){
    int i;
    float f1,f2;
    for(i=0;i>=0;i++){
        f1=eq(i);
        f2=eq(i+1);
        if((f1>0 &&f2<0)|| (f1<0&&f2>0)){
            printf("intervals are: %d ,%d",i,i+1);
            break;
        }
    }
}