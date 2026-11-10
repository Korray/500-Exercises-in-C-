#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
using namespace std;

int main()
{
	double range, massa;
	int time;
	cout << "Write range cm: ";
	cin >> range;
	cout << range / 100 << " m" << "\n"; //exercise 63 2.1

	cout << "Write massa kg: ";
	cin >> massa;
	cout << massa / 100 << " q" << "\n"; //exercise 64 2.2

	cout << "Write massa kg: ";
	cin >> massa;
	cout << massa / 1000 << " t" << "\n"; //exercise 65 2.3

	cout << "Write range cm: ";
	cin >> range;
	cout << range / 1000 << " km" << "\n"; //exercise 66 2.4

	cout << 234 / 7 << " weeks" << "\n"; //exercise 67 2.5

	cout << "Write time s: ";
	cin >> time;
	cout << time / 3600 << " hour" << "\n";
	time = time - time / 3600;
	cout << time << " min" << "\n"; // exercise 68 2.6

	cout << "answer " << 543 / 130 << "\n"; // exercise 69 2.7


}

