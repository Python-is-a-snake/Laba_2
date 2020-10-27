#include <iostream>
using namespace std;

int main()
{
    float rho, alpha, phi, n, x, y, step;
    cout << "Enter count of points(n): ";
    cin >> n;
    cout << "Enter step: ";
    cin >> step;
    cout << "Enter alpha: ";
    cin >> alpha;
    for(int i = 0; i < n; i++){
        phi = i * step;
        rho = alpha * phi;
        x = rho * cos(phi);
        y = rho * sin(phi);
        cout << "x: " << x;
        cout << "y: " << y << endl;
    }

}