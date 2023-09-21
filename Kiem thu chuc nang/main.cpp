#include <iostream>

using namespace std;
const int MAX_1 = 83900;
const int MAX_2 = 86700;
const int MAX_3 = 201400;
const int MAX_4 = 253600;
const int MAX_5 = 283400;

int main()
{
    long price =0;
    int n;
    cin>>n;
    if (n < 0) {
        cout <<"input ko hop le"<<endl;
    } else if (0<= n && n<=50) {
        price = n * 1678;
    } else if (50<n && n<=100){
        price = MAX_1 + (n-50)*1734;
    } else if (100<n && n<=200){
        price = MAX_1 + MAX_2 + (n-100) * 2014;
    } else if (200<n && n<=300){
        price = MAX_1 + MAX_2 + MAX_3 + (n-200) * 2536;
    } else if (300<n && n<=400){
        price = MAX_1 + MAX_2 + MAX_3 + MAX_4 + (n-300) * 2836;
    } else {
        price = MAX_1 + MAX_2 + MAX_3 + MAX_4 + MAX_5 + (n-400) * 2927;
    }
    cout<<price;
}
