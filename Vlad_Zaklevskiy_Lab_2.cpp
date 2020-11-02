#include <iostream>
#include "cmath"
using namespace std;


void task_1(){
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

void task_2(){
    int A_x, A_y, A_z, A1_x, A1_y, A1_z, B_x, B_y, B_z, B1_x, B1_y, B1_z, C_x, C_y, C_z;
    int C1_x, C1_y, C1_z, D_x, D_y, D_z, D1_x, D1_y, D1_z;
    cout << "The vertices of the cube have coordinates A(x, y, z), B(x, y, z), C(x, y, z), D(x, y, z), A_1(x, y, z), B-1(x, y, z), C-1(x, y, z), D-1(x, y, z)\n";
    cout << "Enter all coordinates one by one: ";
    cout << "   A(x, y, z): ";
    cin >> A_x;
    cin >> A_y;
    cin >> A_z;
    cout << "   B(x, y, z): ";
    cin >> B_x;
    cin >> B_y;
    cin >> B_z;
    cout << "   C(x, y, z): ";
    cin >> C_x;
    cin >> C_y;
    cin >> C_z;
    cout << "   D(x, y, z): ";
    cin >> D_x;
    cin >> D_y;
    cin >> D_z;
    cout << "   A_1(x, y, z): ";
    cin >> A1_x;
    cin >> A1_y;
    cin >> A1_z;
    cout << "   B_1(x, y, z): ";
    cin >> B1_x;
    cin >> B1_y;
    cin >> B1_z;
    cout << "   C_1(x, y, z): ";
    cin >> C1_x;
    cin >> C1_y;
    cin >> C1_z;
    cout << "   D_1(x, y, z): ";
    cin >> D1_x;
    cin >> D1_y;
    cin >> D1_z;


    int mass[3], x, y, z;
    cout << "The axis of rotation is given by the unit vector v(x, y, z)\n";
    cout << "Enter x: ";
    cin >> x;
    mass[0] = x;
    cout << "Enter y: ";
    cin >> y;
    mass[1] = y;
    cout << "Enter z: ";
    cin >> z;
    mass[2] = z;


    float angle;
    cout << "Enter angle: ";
    cin >> angle;

    int matrix[3][3];
        matrix[1][1] = cos(angle) + (1 - cos(angle)*pow(x, 2));
        matrix[1][2] = ((1 - cos(angle))*x*y)-(sin(angle)*z);
        matrix[1][3] = ((1 - cos(angle)))*x*z + sin(angle)*y;
        matrix[2][1] = (1 - cos(angle)*x*y)+(sin(angle)*z);
        matrix[2][2] = cos(angle) + (1 - cos(angle)*pow(y, 2));
        matrix[2][3] = (1 - cos(angle)*y*z)-(sin(angle)*x);
        matrix[3][1] = (1 - cos(angle)*x*z)-(sin(angle)*y);
        matrix[3][2] = (1 - cos(angle)*z*y)+(sin(angle)*x);
        matrix[3][3] = cos(angle) + (1 - cos(angle)*pow(x, 2));

    int new_A_x, new_A_y, new_A_z, new_A1_x, new_A1_y, new_A1_z, new_B_x, new_B_y, new_B_z, new_B1_x, new_B1_y, new_B1_z;
    int new_C_x, new_C_y, new_C_z, new_C1_x, new_C1_y, new_C1_z, new_D_x, new_D_y, new_D_z, new_D1_x, new_D1_y, new_D1_z;

    new_A_x = A_x * matrix[1][1] + A_y * matrix[1][2] + A_z * matrix[1][3];
    new_A_y = A_x * matrix[2][1] + A_y * matrix[2][2] + A_z * matrix[2][3];
    new_A_z = A_x * matrix[3][1] + A_y * matrix[3][2] + A_z * matrix[3][3];
    new_B_x = B_x * matrix[1][1] + B_y * matrix[1][2] + B_z * matrix[1][3];
    new_B_y = B_x * matrix[2][1] + B_y * matrix[2][2] + B_z * matrix[2][3];
    new_B_z = B_x * matrix[3][1] + B_y * matrix[3][2] + B_z * matrix[3][3];
    new_C_x = C_x * matrix[1][1] + C_y * matrix[1][2] + C_z * matrix[1][3];
    new_C_y = C_x * matrix[2][1] + C_y * matrix[2][2] + C_z * matrix[2][3];
    new_C_z = C_x * matrix[3][1] + C_y * matrix[3][2] + C_z * matrix[3][3];
    new_D_x = D_x * matrix[1][1] + D_y * matrix[1][2] + D_z * matrix[1][3];
    new_D_y = D_x * matrix[2][1] + D_y * matrix[2][2] + D_z * matrix[2][3];
    new_D_z = D_x * matrix[3][1] + D_y * matrix[3][2] + D_z * matrix[3][3];
    new_A1_x = A1_x * matrix[1][1] + A1_y * matrix[1][2] + A1_z * matrix[1][3];
    new_A1_y = A1_x * matrix[2][1] + A1_y * matrix[2][2] + A1_z * matrix[2][3];
    new_A1_z = A1_x * matrix[3][1] + A1_y * matrix[3][2] + A1_z * matrix[3][3];
    new_B1_x = B1_x * matrix[1][1] + B1_y * matrix[1][2] + B1_z * matrix[1][3];
    new_B1_y = B1_x * matrix[2][1] + B1_y * matrix[2][2] + B1_z * matrix[2][3];
    new_B1_z = B1_x * matrix[3][1] + B1_y * matrix[3][2] + B1_z * matrix[3][3];
    new_C1_x = C1_x * matrix[1][1] + C1_y * matrix[1][2] + C1_z * matrix[1][3];
    new_C1_y = C1_x * matrix[2][1] + C1_y * matrix[2][2] + C1_z * matrix[2][3];
    new_C1_z = C1_x * matrix[3][1] + C1_y * matrix[3][2] + C1_z * matrix[3][3];
    new_D1_x = D1_x * matrix[1][1] + D1_y * matrix[1][2] + D1_z * matrix[1][3];
    new_D1_y = D1_x * matrix[2][1] + D1_y * matrix[2][2] + D1_z * matrix[2][3];
    new_D1_z= D1_x * matrix[3][1] + D1_y * matrix[3][2] + D1_z * matrix[3][3];

    cout << "New coordinates: \n";
    cout << "   A(x: " << new_A_x << ",y: " << new_A_y << ",z: " << new_A_z <<");\n";
    cout << "   B(x: " << new_B_x << ",y: " << new_B_y << ",z: " << new_B_z <<");\n";
    cout << "   С(x: " << new_C_x << ",y: " << new_C_y << ",z: " << new_C_z <<");\n";
    cout << "   D(x: " << new_D_x << ",y: " << new_D_y << ",z: " << new_D_z <<");\n";
    cout << "   A1(x: " << new_A1_x << ",y: " << new_A1_y << ",z: " << new_A1_z <<");\n";
    cout << "   B1(x: " << new_B1_x << ",y: " << new_B1_y << ",z: " << new_B1_z <<");\n";
    cout << "   C1(x: " << new_C1_x << ",y: " << new_C1_y << ",z: " << new_C1_z <<");\n";
    cout << "   D1(x: " << new_D1_x << ",y: " << new_D1_y << ",z: " << new_D1_z <<");\n";
}

int main()
{   int choice;
    cout << "Choose number of task(1 or 2): ";
    cin >> choice;
    switch (choice) {
        case 1:
            task_1();
            break;
        case 2:
            task_2();
            break;
    }

}
