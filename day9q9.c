#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    // Read input string
    scanf("%s", s);
    
    int left = 0;
    int right = strlen(s) - 1;
    
    // Reverse the string
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        left++;
        right--;
    }
    
    // Print reversed string
    printf("%s", s);
    
    return 0;
}
