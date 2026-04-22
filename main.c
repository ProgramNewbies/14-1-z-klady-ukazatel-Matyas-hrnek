#include <stdio.h>

int main() {

int a = 0;
int b = 0;
int c = 0;
int max = 0;

int *p_a = &a;
int *p_b = &b;
int *p_c = &c;

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if(*p_a = max) {
    max = *p_a;
}

if(*p_b > max) {
    max = *p_b;
}

if(*p_c > max) {
    max = *p_c;
}

printf("Soucet: %d\n",*p_a + *p_b + *p_c);
printf("Maximum: %d\n", max);


if((*p_a + *p_b + *p_c )% 2 == 0) {
    printf("Soucet je sudy");

}
else{
    printf("Soucet je lichy");
}

    
}