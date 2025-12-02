#include <stdio.h>

int main() {
    float balance;
    int withdraw;
    printf("Initial balance :");
    scanf("%f", &balance);
    printf("Withdrawal amount :");
    scanf("%d", &withdraw);
    
    if(withdraw+5<=balance)
    {
        if(withdraw%100==0){
            printf("Transaction successful.\n");
            balance=balance-(withdraw+5);
        }
        else{
            printf("Transaction failed: Amount must be a multiple of 100.\n");
        }
    }
    else{
        printf("Transaction failed: Insufficient balance.\n");
        
    }
    
    printf("Updated balance: %.2f\n", balance);
    return 0;
}
