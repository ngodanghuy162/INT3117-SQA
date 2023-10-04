#include <iostream>

using namespace std;
const int MAX_1 = 83900;
const int MAX_2 = 86700;
const int MAX_3 = 201400;
const int MAX_4 = 253600;
const int MAX_5 = 283400;

int tinhtien(int n) {
    int price = 0;
    if (n < 0) {
        cout << "Input khong hop le" << std::endl;
        return -1;
    } else {
        switch (n) {
            case 0 ... 50:
                price = n * 1678;
                break;
            case 51 ... 100:
                price = MAX_1 + (n - 50) * 1734;
                break;
            case 101 ... 200:
                price = MAX_1 + MAX_2 + (n - 100) * 2014;
                break;
            case 201 ... 300:
                price = MAX_1 + MAX_2 + MAX_3 + (n - 200) * 2536;
                break;
            case 301 ... 400:
                price = MAX_1 + MAX_2 + MAX_3 + MAX_4 + (n - 300) * 2836;
                break;
            default:
                price = MAX_1 + MAX_2 + MAX_3 + MAX_4 + MAX_5 + (n - 400) * 2927;
        }
    }
    return price;
}

int main()
{
    int n;
    cin>>n;
    cout<<price(n);
}
