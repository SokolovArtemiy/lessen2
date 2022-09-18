#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
                    


int main()
{
	//ened var
	int max, min, n = 0; 
	float mid, sum = 0;
	int mass[10];

	cout << "Elements: "<< endl;
	cout << "введиде количесво элементов";
	cin >> n;
	if (n<=10)
	{

		for (int r = 0; r < n; r++)
		{
			mass[r] = rand() % 99;
			cout << mass[r] << ",";
		}
		cout << endl;

		max = mass[0];
		min = mass[0];
		mid = mass[0];
		for (int r = 1; r < n; r++)
		{
			if (max < mass[r]) max = mass[r];
			if (min > mass[r]) min = mass[r];
		}
		cout << "Min: " << min << endl;
		cout << "Max: " << max << endl;

		for (int i = 0; i < n; i++)
		{
			sum += mass[i];
		}
		mid = sum / n;
		cout << "mid: " << mid << endl;
	}
	else
	{
		cout << "введено не коректное количество элементов" << endl;

	}
	return 0;
}