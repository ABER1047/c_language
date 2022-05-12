#include <iostream>
#include <stdio.h>

int draw_text(int value, int num_of_spacing)
{
	using namespace std;
	cout << value;
	
	for(int i = 0; i < num_of_spacing; i++)
	{
	cout << "\n";
	};
	return value+num_of_spacing;
};

int main(void)
{
	using namespace std;	
	cout << "a���� �Է����ּ���." <<endl;	
	
	int a = 0;
	cin >> a;

	draw_text(a,5);

	return 0;
};