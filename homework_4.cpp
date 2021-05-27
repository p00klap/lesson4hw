#include <iostream>

using namespace std;

//1
int main (){

    int a = 12;
    int b = 5;

    bool r;
    r = (a + b) > 10 & (a+b) < 20;

    cout << r << endl;

//3
    r = (a == 10 || b == 10) || (a + b == 10);
    cout << r << endl;

//5
    int y = 2001;
    r = ((y % 4 == 0) & (y % 100 !=0)) || (y % 400 == 0);
    cout << r << endl;

    return 0;
}