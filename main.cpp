#include <iostream>
using namespace std;

// Прототипи функцій
void task_if36();
void task_if16();
void task_geom16();

int main() 
{
    int menu;
    cout << "Task number (36, 16, or 3 for geom): ";
    cin >> menu;

    switch (menu) 
    {
        case 36: task_if36(); break;
        case 16: task_if16(); break;
        case 3:  task_geom16(); break;
        default: cout << "Wrong task number! (Only 36, 16, 3)" << endl;
    }

    system("pause");
    return 0;
}

// ===================== If36 =====================
void task_if36() 
{
    cout << "************* If 36 *****************" << endl;
    double x, t;
    cout << "Enter x: ";
    cin >> x;

    if (!cin) 
    {
        cout << "Invalid input!" << endl;
        return;
    }

    if (x <= -1)
        t = x - 2;
    else if (x < 2)
        t = x * x + x;   
    else
        t = 6;

    cout << "t(x) = " << t << endl;
}

// ===================== If16 =====================
void task_if16() 
{
    cout << "************* If 16 *****************" << endl;
    double A, B, C;
    cout << "Enter A, B, C: ";
    cin >> A >> B >> C;

    if (!cin) 
    {
        cout << "Invalid input!" << endl;
        return;
    }

    if (A < B && B < C) 
    {
        A = A * 2;
        B = B * 2;
        C = C * 2;
    } 
else 
    {
        A = -A;
        B = -B;
        C = -C;
    }

    cout << "New values: A = " << A << ", B = " << B << ", C = " << C << endl;
}

// ===================== Geom16 =====================
void task_geom16() 
{
    cout << "************* Geometry (variant 16) *****************" << endl;
    double x, y, r;
    cout << "Enter radius r: ";
    cin >> r;
    cout << "Enter coordinates x, y: ";
    cin >> x >> y;

    if (!cin || r <= 0) 
    {
        cout << "Invalid input!" << endl;
        return;
    }

    // Область варіанта 16: жовта частина
    // 1) Коло з центром (r, -r)
    double dx = x - r;
    double dy = y + r;
    bool inCircle = dx * dx + dy * dy <= r * r;

    // 2) Трикутник у І квадранті: y <= -x + 2r
    bool inTriangle = (x >= 0 && y >= 0 && y <= (-x + 2 * r));

    if (inCircle || inTriangle)
        cout << "Точка належить жовтій області (варіант 16)." << endl;
    else
        cout << "Точка НЕ належить жовтій області (варіант 16)." << endl;
}
