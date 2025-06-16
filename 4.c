//Check the number is palindrome or not
#include<stdio.h>
void main(){
    int n,d,reversed=0,original;
    printf("enter a number:\n");
    scanf("%d",&n);
    original=n;
    d=n%10;
    reversed=reversed*10+d;
    n!=10;
    if(reversed=original){
        printf("It is palindrome function");
    }
    else{
        printf("It is not palindrome function");
    }
    return 0;
}

