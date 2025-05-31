/*given two string write a method to decide if one permutation of the other in c language*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool ispermutation(char str1[],char str2[]){
    int count [256] ={0};
    if (strlen(str1)!=strlen(str2)){
        return false;
    }
    for(int i=0;str1[i]!=0;i++){
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    char str1[100],str2[100];
    printf("Enter first string:\n");
    scanf("%s",&str1[0]);
    printf("Enter second string:\n");
    scanf("%s",&str2[0]);

if (ispermutation(str1,str2)) {
printf("The string is permutation\n");
}else{
    printf("The string Not permutation\n");
}
return 0;
}
