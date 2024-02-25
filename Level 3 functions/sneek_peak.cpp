#include<iostream>
using namespace std;

    void sayHello(){
       puts("Hello from sayHello");
    }

    int sayTwo(){
        return 2;
    }

    void sayThree(){
        puts("3");
    }

int main(){

    sayHello();
    printf("%d\n",sayTwo());
    sayThree();
    
    return 0;
}