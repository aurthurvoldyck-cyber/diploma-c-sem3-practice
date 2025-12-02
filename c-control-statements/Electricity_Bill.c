#include <stdio.h>

int main() {
    int units;
    float bill;

    scanf("%d", &units);
    if(units>=500){
        bill=5.50*units;
    }
    else if(units>=200&&units<=499){
        bill=3.50*units;
    }
    else if(units>=100&&units<=199){
        bill=2.50*units;
    }
    else{
        bill=1.50*units;
    }

    //implement your code here
    
    printf("Electricity bill: %.2f\n", bill);

    return 0;
}

