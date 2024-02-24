#include<iostream>
using namespace std;

int main(){

    int score = 200;
    int *myp = &score;

    printf("Valuse of score is %d\n",score);
    printf("Valuse of ponter myp is %p\n",myp);

    int &another_score = score;
    another_score = 500;

    printf("value of score is %d\n",score);
    printf("valuse of pointer myp is %p\n",myp);


    return 0;
}

//rferences are similar to pointers, but they are not variables that store the address of another variable

//references are aliases for other variables
//change the value of the reference, and the value of the original variable will change as well.

