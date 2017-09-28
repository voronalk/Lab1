#include <iostream>
#include <math.h>

int main() {
    //1
    double pi = 3.14;
    std::cout << "1) " <<  pi << std::endl;
    //2
    std::cout << "2) " << 1 << ' ' << 13 << ' ' << 49 << std::endl;
    //3
    std::cout << "3) enter a symbol" << std::endl;
    char task3Symbol;
    std::cin >> task3Symbol;
    std::cout << 1 << task3Symbol << 13 << task3Symbol << 49 << std::endl;
    //4
    std::cout << "4) Enter three numbers" << std::endl;
    int task4Number01 = 0;
    int task4Number02 = 0;
    int task4Number03 = 0;
    std::cin >> task4Number01 >> task4Number02 >> task4Number03;
    std::cout << task4Number01 << ' ' << ' ' << task4Number02 << ' ' << ' ';
    std::cout << task4Number03 << std::endl;
    //5.1
    std::cout << "5.1) Enter a for: x=12a^2 + 7a - 12" << std::endl;
    double a = 0;
    std::cin >> a;
    std::cout << "Result:" << 12 * a*a + 7 * a - 12 << std::endl;
    //5.2
    double x = 0;
    std::cout << "5.2) Enter x for: y=3x^3 + 4x^2 - 11x + 1" << std::endl;
    std::cin >> x;
    std::cout << "Result:" << 3 * x*x*x + 4 * x*x - 11 * x + 1 << std::endl;
    //6
    std::cout << "6) Enter V and m " << std::endl;
    double V = 0;
    double m = 0;
    std::cin >> V >> m;
    std::cout << "p = " << V / m << std::endl;
    //7
    std::cout << "7) Enter a, b for: ax + b = 0, a <> 0 " << std::endl;
    double A = 0;
    double B = 0;
    std::cin >> A >> B;
    std::cout << -B / A << std::endl;
    //8
    std::cout << "8) Enter x1, y1, x2, y2" << std::endl;
    double X1 = 0;
    double X2 = 0;
    double Y1 = 0;
    double Y2 = 0;
    std::cin >> X1 >> Y1 >> X2 >> Y2;
    std::cout << "Result: " << sqrt((X2 - X1)*(X2 - X1)) << std::endl;
    //9
    std::cout << "9) Enter A1, A2, H" << std::endl;
    double base1 = 0;
    double base2 = 0;
    double Height = 0;
    std::cin >> base1 >> base2 >> Height;
    std::cout << "Result: " << (base1 + base2)*Height*0.5 << std::endl;
    //10
    std::cout << "10) Enter R1, R2" << std::endl;
    double task10R1 = 0;
    double task10R2 = 0;
    std::cin >> task10R1 >> task10R2;
    std::cout << "Result: " << pi*task10R1*task10R1 - pi*task10R2*task10R2 << std::endl;
    //11
    std::cout << "11) Enter the cube side" << std::endl;
    double cubeSide = 0;
    std::cin >> cubeSide;
    std::cout << "V= " << cubeSide * cubeSide * cubeSide << std::endl;
    std::cout << "S= " << 4 * cubeSide * cubeSide << std::endl;
    //12
    std::cout << "12) Enter the square side" << std::endl;
    double squareSide = 0;
    std::cin >> squareSide;
    std::cout << "P= " << squareSide * sqrt(2) << std::endl;
    //13
    std::cout << "13) Enter R" << std::endl;
    double task13R = 0;
    std::cin >> task13R;
    std::cout << "L= " << task13R *2*pi << std::endl;
    return 0;
}
