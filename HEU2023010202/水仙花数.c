#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int num, originalNum, remainder, result = 0;  
  
      
  
    for (num = 100; num < 1000; num++) {  
        originalNum = num;  
        while (originalNum != 0) {  
            remainder = originalNum % 10;  
            result += pow(remainder, 3);  
            originalNum /= 10;  
        }  
  
        if (result == num)  
            printf("%d\n", num);  
  
        result = 0; // ����result�Ա������һ����  
    }  
  
    return 0;  
}
