
#include <iostream>
using namespace std;


void main()
{
	cout << "Please enter diamond's height: ";
	int h;
	cin >> h;

	int stars = 1;
	int spaces = h - 1;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < stars; j++)
		{
			cout << "*";
		}
		cout << endl;
		stars += 2;
		spaces--;
	}
	
	stars -= 4;
	spaces += 2;

	for (int i = 0; i < h - 1; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < stars; j++)
		{
			cout << "*";
		}
		cout << endl;
		stars -= 2;
		spaces++;
	}

}
