/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>

int main(){
     
    int n,i=0,i2 = 2;
    printf("Enter number: ");
    scanf("%d", &n);

    int num = n;
    int is_prime = 1;
    do{
        num--;
        if (num <= 1) {
            is_prime = 0;
        }
        else {
            i2 = 2 ;
            while (i2 * i2 <= num){
               if (num % i2 == 0) {
                    is_prime = 0;
                    break;
                }
                i2++;
            }
            
        }
        
        if (is_prime) {
            printf("%d ", num);
        }
        is_prime = 1;
    } while (num >= 2);
   
    
    

    return 0;
}