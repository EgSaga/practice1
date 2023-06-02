#include <iostream>
using namespace std;

int main()
{
    int cats;
    int food;
    float uah = 0.2;
    cout << "how many cats do you have?\n", cin >> cats;
    cout << "how many grams does one cat eat in one day?\n", cin >> food;
    cout << "1 kg of feed costs - 200 UAH\n";
    cout << cats * food * uah * 30 << " uah in month\n";
    cout << cats * food * uah * 360 << " uah in year\n";
}
