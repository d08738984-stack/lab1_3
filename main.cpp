#include <iostream>
#include <cmath> // підключення бібліотеки математичних функцій
using namespace std;

int main()
{
    // Integer37. Дано прямокутник довжиною A і шириною B. 
    // Знайти, скільки квадратних плиток зі стороною C можна вмістити 
    // та яка частина прямокутника залишиться незаповненою?
    
    cout << "Integer37." << endl;
    
    int A, B, C; // довжина, ширина прямокутника та сторона плитки
    int tiles_x, tiles_y, total_tiles; // кількість плиток по ширині, довжині та загальна
    int area_rectangle, area_tiles, area_remaining; // площі
    
    // введення даних
    cout << "A (довжина прямокутника) = "; 
    cin >> A;
    cout << "B (ширина прямокутника) = "; 
    cin >> B;
    cout << "C (сторона плитки) = "; 
    cin >> C;
    
    // перевірка на коректність введених даних
    if (A <= 0  B <= 0  C <= 0)
    {
        cout << "Помилка: всі значення повинні бути додатними!" << endl;
        return 1;
    }
    
    // обчислення кількості плиток
    tiles_x = A / C; // кількість плиток по довжині
    tiles_y = B / C; // кількість плиток по ширині
    total_tiles = tiles_x * tiles_y; // загальна кількість плиток
    
    // обчислення площ
    area_rectangle = A * B; // площа прямокутника
    area_tiles = total_tiles * C * C; // площа, зайнята плитками
    area_remaining = area_rectangle - area_tiles; // незаповнена площа
    
    // виведення результатів
    cout << "Кількість плиток: " << total_tiles << endl;
    cout << "Незаповнена площа: " << area_remaining << endl << endl;
    
    
    // Boolean16. Дано ціле додатне число. 
    // Перевірити істинність висловлювання: 
    // «Дане число є парним двозначним».
    
    cout << "Boolean16." << endl;
    
    int number;
    bool result;
    
    // введення даних
    cout << "Введіть ціле додатне число: ";
    cin >> number;
    
    // перевірка істинності висловлювання
    // Число є двозначним: >= 10 та <= 99
    // Число є парним: ділиться на 2 без остачі
    result = (number >= 10) && (number <= 99) && (number % 2 == 0);
    
    // виведення результату
    cout << "Число " << number << " є парним двозначним: " << boolalpha << result << endl << endl;
    
    
    // y = ... (tab.3 N25)
    // Обчислення математичного виразу
    // y = (⁵√(x⁶) + √(2|x|)) / log₃(sin²(|2x| + 29°)) + (π|3tg(x²)|)/5
    
    cout << "Обчислення математичного виразу" << endl;
    
    const double pi = 3.141592653589793; // визначення константи π
    double x, y; // декларація дійсних змінних
    
    // введення даних
    cout << "Дійсний аргумент x = ";
    cin >> x;
    
    // обчислення чисельника першого доданку
    double term1_num = pow(fabs(x), 6.0/5.0) + sqrt(2 * fabs(x));
    
    // обчислення знаменника першого доданку
    double angle_rad = (fabs(2 * x) + 29.0) * pi / 180.0; // переведення градусів у радіани
    double sin_value = sin(angle_rad);
    double log_argument = pow(sin_value, 2);
    double term1_denom = log(log_argument) / log(3.0); // log₃(a) = ln(a)/ln(3)
    
    // перший доданок
    double term1 = term1_num / term1_denom;
    
    // другий доданок
    double term2 = (pi * fabs(3 * tan(pow(x, 2)))) / 5.0;
    
    // підсумковий результат
    y = term1 + term2;
    
    // виведення результату
    cout << "Функція y = " << y << endl << endl;
    
    return 0;
}
