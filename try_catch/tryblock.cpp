#include<iostream>
using namespace std;
int main(){

    int call_api = 2;
    try{
        cout<<"trying to fetch api\n";
        cout<<"did some testing with api\n";
        throw call_api;
        cout<<"No code will be executed after throw\n";
    }catch(int x){
        cout<<"integer exception handeled"<<endl;
    }
    cout<<"keep on moving with rest of code\n";
    return 0;
}