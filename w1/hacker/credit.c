#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    
    
    long l = GetLongLong();   
    int size = log10(l) + 1;
    
    if(size < 13 || size > 16){
        printf("INVALID\n");
        return 0;
    }
    
    long sum1 = 0;
    long sum2 = 0;
    long l2 = l;
    long l3 = 0;
    
    for(int i = 1; i < size + 1;i++){
        l3 = l2;
        l2 = l2 / 10;
        l3 = l3 - (l2*10);
        if(i % 2 == 0){
            long temp = (l3 * 2);
            if(temp > 9){
                long temp2 = temp - (temp / 10) * 10;
                temp = temp/10 + temp2;
            }
            sum1 += temp;
            
        }
        else{
            sum2 += l3;
        }
    }
    
    if((sum1 + sum2) % 10 == 0){
        
        l2 = l / pow(10,size  - 2);
        
        if(l2 >= 34 && l2 <= 37){
            printf("AMEX\n");
        }
        else if(l2 >= 51 && l2 <= 55){
            printf("MASTERCARD\n");
        }
        else if((l2/10) == 4){
            printf("VISA\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else{
        printf("INVALID\n");
    }
    return 0;
}