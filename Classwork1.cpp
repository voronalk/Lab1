#include<iostream>  
#include<math.h>



int main1() {
	double pi = 3.14;
	int k = 0;
	int n = 0;
	int h = 0;
	char b;
	std::cout << pi << std::endl;
	////////////////////////////////////////////////

	std::cout << 1 << ' ' << 13 << ' ' << 49 << std::endl;
	////////////////////////////////////////////////

	std::cin >> b;
	std::cout << 1 << b << 13 << b << 49 << std::endl;
	////////////////////////////////////////////////
	std::cout << "Enter numbers" << std::endl;
	std::cin >> k >> n >> h;
	std::cout << k << ' ' << ' ' << n << ' ' << ' ' << h << std::endl;
	////////////////////////////////////////////////

	double x = 0;
	double a = 0;
	std::cout << "Enter a for: x=12a^2 + 7a - 12" << std::endl;
	std::cin >> a;
	std::cout << "Result:" << 12 * a*a + 7 * a - 12 << std::endl;
	////////////////////////////////////////////////

	std::cout << "Enter x for: y=3x^3 + 4x^2 - 11x + 1" << std::endl;
	std::cin >> x;
	std::cout << "Result:" << 3 * x*x*x + 4 * x*x - 11 * x + 1 << std::endl;
	////////////////////////////////////////////////

	double V = 0;
	double m = 0;
	std::cout << "Enter V and m " << std::endl;
	std::cin >> V >> m;
	std::cout << "p = " << V / m << std::endl;
	////////////////////////////////////////////////

	double A = 0;
	double B = 0;
	std::cout << "Enter a, b for: ax + b = 0, a <> 0 " << std::endl;
	std::cin >> A >> B;
	std::cout << -B / A << std::endl;
	////////////////////////////////////////////////

	double X1 = 0;
	double X2 = 0;
	double Y1 = 0;
	double Y2 = 0;
	std::cout << "Enter x1, y1, x2, y2" << std::endl;
	std::cin >> X1 >> Y1 >> X2 >> Y2;
	std::cout << "Result: " << sqrt((X2 - X1)*(X2 - X1)) << std::endl;
	////////////////////////////////////////////////

	double A1 = 0;
	double A2 = 0;
	double H = 0;
	std::cout << "Enter A1, A2, H" << std::endl ;
	std::cin >> A1 >> A2 >> H;
	std::cout << "Result: " << (A1 + A2)*H*0.5 << std::endl;
	////////////////////////////////////////////////

	double R1 = 0;
	double R2 = 0;
	std::cout << "Enter R1, R2" << std::endl;
	std::cin >> R1 >> R2;
	std::cout << "Result: " << pi*R1*R1 - pi*R2*R2 << std::endl;
	////////////////////////////////////////////////

	double A0 = 0;
	std::cout << "Enter A" << std::endl;
	std::cin >> A0;
	std::cout << "V= " << A0*A0*A0 << std::endl;
	std::cout << "S=" << 4 * A0*A0 << std::endl;
	////////////////////////////////////////////////
	double A01 = 0;
	std::cout << "Enter A" << std::endl;
	std::cin >> A01;
	std::cout << "P= " << A01*sqrt(2) << std::endl;
	////////////////////////////////////////////////

	double R01 = 0;
	std::cout << "Enter R" << std::endl;
	std::cin >> R01;
	std::cout << "L= " << R01*2*pi << std::endl;
	////////////////////////////////////////////////

	return 0;
}

