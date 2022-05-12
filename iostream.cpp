#include <iostream>
#include <cstdio>

/// iostream
int main(void)
{
	using namespace std; //std::�� �Ƚᵵ �۵��ϰ� ���� 
	
	int a = 621;		// int : ������ ǥ������ 
	
	double b = 0.285631; //double : �Ҽ����� ǥ������ 
	
	std::cout << "a = " << a << std::endl << std::endl; 		//std::cout = printf()			std::endl = \n
	
	std::cout << "b = " << b << std::endl << std::endl;
	std::cout << "a*b = " << a*b << std::endl << std::endl;
	cout << "\a" << endl;  		// \a : ������â �Ҹ��� ���� 
	
	cin >> a; // cin : scanf �� ���������� �� �� cout���� �ٸ��� �ε�ȣ ������ �ݴ��� 
	
	cout << "Your input : " << a;
	return 0;
};
