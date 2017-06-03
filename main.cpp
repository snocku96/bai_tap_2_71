#include <iostream>

using namespace std;

int main()
{
    cout << "Hello HUY!" << endl;
    int password;
    cout <<"Please enter the password\n";
    cin  >>password;
    //if((password==123) || (password=456)){
    if(password==(123 || 456)){
        cout <<"Correct! Access allowed";
    }else
        cout <<"Incorrect! Access denied";
    return 0;
}
