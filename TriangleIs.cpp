#include<iostream>
using namespace std;

int main(){
    int sideA,sideB,sideC;
    cout <<"Enter side A - ";
    cin >> sideA
    cout <<"Enter side B - ";
    cin >> sideB
    cout <<"Enter side C - ";
    cin >> sideC
    if (sideA == sideB && sideB == sideC && sideA == sideC)
        {
        cout <<"Triangle is Isoscales Tringle";
        }
    else if (sideA == sideB || sideB == sideC ||SideA == sideC)
        {
        cout <<"Triangle is Equilateral Tringle";
        }
        else 
        {
        cout<<"Triangle is Scalen Triangle";
        }
        return 0;
}