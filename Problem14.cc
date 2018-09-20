/*
 * The area of a circle is defined as πr^2. Estimate π to 3 decimal places using a Monte Carlo method.
 * Hint: The basic equation of a circle is x2 + y2 = r2.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned n;
    unsigned t;
    cout << "Input Estimate Accuracy :";
    cin >> n;
    cout << "How Many Times : ";
    cin >> t;
    srand((int)time(0));
    int count = 0;
    int base = pow(10,n);
    for (unsigned i = 0; i < t; i++) {
        double x = 2*(double)(rand()%base)/(base)-1;
        double y = 2*(double)(rand()%base)/(base)-1;
        double s = x*x + y*y;
        if (s <= 1) count++;
    }
    cout << (double)count/t*4 << endl;
    return 0;
}
