#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    printf("1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division");
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(n==1){
        printf("Sum= %d",a+b);
    }
    else if(n==2){
        printf("Difference= %d"abs(a-b));
    }
    else if(n==3){
        printf("Product= %d",a*b);
    }
    else if(n==4){
        printf("Quotients= %d, %d",a/b,b/a);
    }
    else{
        printf("Wrong choice")
    }
    return 0;
} 