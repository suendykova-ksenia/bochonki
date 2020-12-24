#include <iostream> // для ввода/вывода
#include <ctime> // для того, чтобы изменялось рандомное число при каждом новом запуске программы
#include <random> // для rand()
#include <vector> // для раоты с массивом vector <>; методы begin(), end(), find(), push_back()
using namespace std;
int main()
{
	int n;
	vector <int> v;
	setlocale(LC_ALL, "Russian");
	cout << "Задайте количество бочек: ";
	cin >> n;
	int i = 0;
	int number = 0;
	string d;
	while (i < n) {
		cout << "Чтобы вытащить бочонок, введите любой символ: ";
		cin >> d;
		do {
			number = rand() % n;
		} while (find(v.begin(), v.end(), number) != v.end());
		v.push_back(number);
		cout << "Бочонок с числом: " << number + 1 << endl;
		i++;
	}
	cout << "Вытащили все бочонки!";
}