#include <stdio.h>
#include <iostream>
using namespace std;


int plus_both_numbers(int argument0, int argument1) //plus_both_number() ��� �Լ��� ����� 
{
	int a = argument0 + argument1; //plus_both_number()�� ���� ��ȣ �ȿ��ִ� ���� �����ִ� ��������. 
	
	return a; //�� int a��ŭ �����ؾ��� (������ ���� �Ұ���)
	
	///��쿡���� int a�� �����ʰ� �ٷ� return argument0 + argument1;�� ����� ��ũ��Ʈ�� ���������.
	///�� int a������ �ʿ���ٴ°�. (���� ��뷮�� ����) 
}

int p_hello_world() //p_hello_world() ��� �Լ��� ����� (int������ void�� ��������)
{
	cout << "Hello, World!" << endl; //plus_both_number()�� ���� ��ȣ �ȿ��ִ� ���� �����ִ� ��������. 
	
	return 0; //p_hello_world()�Լ��� ��ȣ ���� ��������Ƿ� return 0;�� ����. (return ��ü�� ���� �Ƚᵵ��)
}

int main(void)
{
	int a_1 = 0;
	int a_2 = 0;
	cout << "a���� �Է����ּ���. \n";
	cin >> a_1;
	cout << "b���� �Է����ּ���. \n";
	cin >> a_2;
	cout << "a+b = " << plus_both_numbers(a_1, a_2) << "\n\n\n" << endl;
	p_hello_world(); 	//p_hello_world() �Լ��� �ҷ��� 
}