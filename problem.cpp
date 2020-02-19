//
// Created by Administrator on 2020/2/18.
//
#include <iostream>
#include <vector>

using namespace std;
//extern const int i;
class test{
    test(int h):i(h){};
private:
    const int i;
};
int &f(int a);
int main(){
    int a=4;
    int *p=&a;
    std::cout<<"p address:"<<p<<" value:"<<*p<<endl;
    std::cout<<"valid:"<<&p<<endl;
    int **q=&p;
    std::cout<<"point point:"<<*q<<endl;
    return 0;
}
int &f(int a){
    static int b=a+4;
    return b;
}