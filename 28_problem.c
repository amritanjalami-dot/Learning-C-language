#include <stdio.h>
int main(){
    float basic_sal, net_sal, da, hra, pf;
    printf("Enter the basic salary : ");
    scanf("%f", &basic_sal);
    if(basic_sal<0){
        printf("Invalid input");
    }
    else{
        if(basic_sal<=10000){
            da = (50/100.0)*basic_sal;
            hra = (10/100.0)*basic_sal;
            pf = (12/100.0)*basic_sal;
            net_sal = basic_sal + hra + da - pf;
            printf("Net salary : %.1f", net_sal);
        }
        else if(basic_sal>10000 && basic_sal<=20000){
            da = (50/100.0)*basic_sal;
            hra = (15/100.0)*basic_sal;
            pf = (12/100.0)*basic_sal;
            net_sal = basic_sal + hra + da - pf;
            printf("Net salary : %.1f", net_sal);
        }
        else{
            da = (50/100.0)*basic_sal;
            hra = (20/100.0)*basic_sal;
            pf = (12/100.0)*basic_sal;
            net_sal = basic_sal + hra + da - pf;
            printf("Net salary : %.1f", net_sal);
        }
    }
    return 0;
}