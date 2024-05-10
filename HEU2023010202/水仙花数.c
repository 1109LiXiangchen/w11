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
  
        result = 0; // 重置result以便计算下一个数  
    }  
  
    return 0;  
}
