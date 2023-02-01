#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char input[5];
    int sum=0;
    for(int i=0;i<5;i++){
    scanf(" %c", &input[i]);
    sum+= input[i];}
    printf("%d", sum);
    return 0;
}

