#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    if(x==0 || y==0)cout<<"eixos\n";
    else if(x>0 && y>0)cout<<"Q1\n";
    else if(x>0 && y<0)cout<<"Q4\n";
    else if(x<0 && y>0)cout<<"Q2\n";
    else if(x<0 && y<0)cout<<"Q3\n";


    return 0;
}