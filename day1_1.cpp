#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a num";
    cout<<endl;
    cin>>a;


    int cont = 0;

    for (int i = 1; i<=a; i++)
    {
        if (a%i == 0)
        {
            cont ++;
        }
    }

    if (cont == 2)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not";
    }

    cout<<endl;
    system("pause");
    return 0;
}
