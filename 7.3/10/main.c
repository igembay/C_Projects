#include <stdio.h>
int main(){
    for(int n=1; n<=100; n++){
        if(!(n%3)) printf("Fizz");
        if(!(n%5)) printf("Buzz");
        if(n%3 && n%5)printf("%d",n);
        printf(" ");
    }
    return 0;
}
