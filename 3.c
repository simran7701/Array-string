/*given a string write the function to check if it solution of palindrome of palindrome is equal to face that is same forward and backward
a palindrome is rearranged of letter the palindrome does not need to limit to just dictionary*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canFormPalindrome(char str[]) {
    int count[256] = {0};  
    int length = strlen(str);
    int oddCount = 0;

    
    for (int i = 0; i < length; i++) {
        count[(unsigned char)str[i]]++;
    }

   
    for (int i = 0; i < 256; i++) {
        if (count[i] % 2 != 0) {
            oddCount++;
        }
        
        if (oddCount > 1) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    if (canFormPalindrome(str)) {
        printf("The string can be rearranged to form a palindrome.\n");
    } else {
        printf("The string cannot be rearranged to form a palindrome.\n");
    }

    return 0;
}
