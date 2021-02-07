#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "italian");

	float a, b, c;
	cout << "inserire a \n";
	cin >> a;
	cout << "inserire b \n";
	cin >> b;
	cout << "inserire c \n";
	cin >> c;
	
	float delta;
	float s1;
	float s2;

	delta = b*b-4*a*c;

	system("Color 0C");
	cout << " \n \n" << "Il delta è " << delta << "\n \n";
	
	if (delta >= 0) {
		system("Color 0A");
		float s11 = b * -1 + sqrt(delta);
		float s12 = 2 * a;
		s1 = s11 / s12;

		float s21 = b * -1 - sqrt(delta);
		float s22 = 2 * a;
		s2 = s21 / s22;
		cout << "soluzione x1 è " << s11 << "/" << s12 << " = " << s1 << "\n";
		cout << "soluzione x2 è " << s21 << "/" << s22 << " = " << s2 << "\n";
		}
	system("pause");
}
