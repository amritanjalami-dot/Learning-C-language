// WAP to calculate bill of purchase, if bill>2000 discount is 500 else discount is 200

#include <stdio.h>
int main(){
    float bill, dis, final_bill;
    printf("Enter the bill : ");
    scanf("%f", &bill);
    dis = (bill>2000) ? 500 : 200;
    final_bill = bill-dis;
    printf("Final bill after giving discount : %.1f", final_bill);
    return 0;
}