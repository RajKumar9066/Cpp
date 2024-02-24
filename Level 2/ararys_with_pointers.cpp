#include<iostream>
using namespace std;
int main(){

    int integer_array[4] = {1, 2, 3, 4};
    cout<<integer_array<<endl;
    cout<<integer_array[0]<<endl;

    int another_array[4];
    another_array[0] = 9;
    another_array[1] = 19;

    cout<<another_array[0]<<endl;

    *another_array = 10; //here *another_array is same as another_array[0] 
    cout<<another_array[0]<<endl;

    cout<<another_array[1]<<endl;
    int *ap = another_array; //pointer to the first element of the array.
    ap++;
    *ap = 200;
    cout<<another_array[1]<<endl;


    return 0;
}

//pointers work with arrays in a very interesting way.

//when we declare a pointer to an array, the pointer points to the first element of the array.

//we can use the pointer to access the elements of the array.eg. *ap = 200; changes the value of another_array[1] to 200.for element at index 2, we can use ap++ and then *ap = 300; will change the value of another_array[2] to 300.

//we can also use the pointer to access the elements of the array using the pointer notation.eg. ap[0] = 400; will change the value of another_array[2] to 400.