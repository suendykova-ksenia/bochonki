#include <iostream> // ��� �����/������
#include <ctime> // ��� ����, ����� ���������� ��������� ����� ��� ������ ����� ������� ���������
#include <random> // ��� rand()
#include <vector> // ��� ����� � �������� vector <>; ������ begin(), end(), find(), push_back()
using namespace std;
int main()
{
	int n;
	vector <int> v;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� �����: ";
	cin >> n;
	int i = 0;
	int number = 0;
	string d;
	while (i < n) {
		cout << "����� �������� �������, ������� ����� ������: ";
		cin >> d;
		do {
			number = rand() % n;
		} while (find(v.begin(), v.end(), number) != v.end());
		v.push_back(number);
		cout << "������� � ������: " << number + 1 << endl;
		i++;
	}
	cout << "�������� ��� �������!";
}