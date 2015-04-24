#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include<iostream>
using namespace std;
class SafeArray
{
    public:
        SafeArray(int size);
        virtual ~SafeArray();
        void check(int index);
        int &operator[](int index);
        friend  istream& operator>>(istream &is,SafeArray &array);
        friend ostream& operator<<(ostream &os,const SafeArray &array);
    protected:
    private:
        int size;
        int *number;
};

#endif // SAFEARRAY_H
