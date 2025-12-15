#include<stdio.h>

int add (int a , int b){
    return a + b;
}

void greatMorning(){
    printf("good morning");
}
void greatMornig(){
    printf("good moring ");
}

void great(void (*func)()){
    func();
}

int main(){
    int (*ptr)(int , int) = add;
    int result = ptr(5,3);
    printf("Result: %d" , result);
    great(greatMorning);
    great(greatMorning);
    return 0;
}