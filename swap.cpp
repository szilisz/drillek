#include "std_lib_facilities.h"

void swap_v(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    cout <<"elso."<< a <<" "<< b<<endl;
}
void swap_r(int& a, int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    cout <<"masodik."<< a <<" "<< b<<endl;
}
void swap_cr(const int& a, const int& b)
{
    int temp1;
    int temp2;

    temp1=a;
    temp2=b;

    swap_r(temp1,temp2);
}

int main()
{
    int x = 7;
    int y = 9;
    swap_v(x, y);
    swap_v(7, 9);
    const int cx = 7;
    const int cy = 9;
    // swap_r(cx, cy);
    //swap_r(7.7, 9.9);
    double dx = 7.7;
    double dy = 9.9;
    swap_cr(dx, dy);
    swap_cr(7.7, 9.9);
}