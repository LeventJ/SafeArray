#include "SafeArray.h"

SafeArray::SafeArray(int size)
{
    this ->size = size;
    number = new int[size];
}

SafeArray::~SafeArray()
{

}
void SafeArray::check(int index)
{
    if(index<0||index>size)
    {
        cout<<"Warning!"<<endl;
//        exit(0);
    }
}
int& SafeArray::operator[](int index)
{
    check(index);
    return number[index];
}
istream& operator>>(istream &in,SafeArray &a)
{
    int value;
    for(int i=0;i<a.size;i++){
        cin>>value;
        a.number[i] = value;
    }
    return in;
}
ostream& operator<<(ostream &out,const SafeArray &b)
{
    for(int i=0;i<b.size;i++){
        out<<"["<<i<<"]="<<b.number[i]<<" "<<endl;
    }
    return out;
}
