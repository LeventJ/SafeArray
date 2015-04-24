#include <iostream>
#include<cstdlib>
#include "SafeArray.h"


using namespace std;
void show();


int main()
{
    int size,control;
    bool isPrime = true;

    cout<<"This is a safe array\n"
            <<"and you can enter the size of your array"<<endl;
    cin>>size;

    SafeArray array(size);

    if(size<0)
        cout<<"This is a wrong!"<<endl;
    show();

        while(isPrime)
        {
            cin>>control;
            switch(control)
            {
            case 1:
                cout<<"enter numbers until it's full\n"<<endl;
                cin>>array;
                show();
                break;
            case 2:
                cout<<array<<endl;
                show();
                break;
            case 3:
                system("cls");
                cout<<"END"<<endl;
                isPrime = false;
                break;
            default:
                break;
            }
        }
    return 0;
}

void show(){
    system("pause");
    system("cls");
    cout<<"Enter these number to control:\n"
            <<"1.add number of it\n"
            <<"2.show all of numbers\n"
            <<"3.exit\n"<<endl;
}
