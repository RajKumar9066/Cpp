//pointers are variables that store the address of another variable

//it makes c++ more powerful and flexible by allowing us to directly manipulate memory

#include <iostream>
using namespace std;
int main(){
    int card;
    card = 53;
    int my_card = card;

    int *myp;
    myp = &card; //& is the address of operator

    my_card = *myp; //* is the dereference operator
    //pointer dereferencing is the process of accessing the value of the variable that the pointer is pointing to  

    printf("my_card:%d\n",my_card);
    printf("myp:%p\n",myp);
    printf("my_card:%p\n",&my_card);
    printf("my_card:%d\n",my_card);

    return 0;

}