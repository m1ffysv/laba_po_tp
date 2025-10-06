#include <stdio.h>

int main(){

    int numb1;
    int numb2;
    printf("Hello, world!\n");
    printf("Введите число A, затем число B:\n");
    scanf("%d", &numb1);
    scanf("%d", &numb2);
    int plus;
    plus = numb1 + numb2;
    printf("%d + %d = %d\n", numb1, numb2, plus);
    return 0;



}