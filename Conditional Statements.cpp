#include <iostream>

using namespace std;

int main()
{
    int n;


    string number[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
     cin>>n;

    if(n>9){

        cout<<number[0];
    }else

    cout<< number[n];

    return 0;
}
