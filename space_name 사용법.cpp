#include <stdio.h>
#include <limits>
#include <iostream>


//�Ʒ� ��ũ��Ʈó�� �̸��� �ߺ��� ��ũ��Ʈ(   n_s()  )�� 2���� ������� namespace�� �̿��� space1::n_s()��� ��ũ��Ʈ�� ���������. 
//�̶� space1::n_s()�� space1::�� �����ʰ� space1::n_s()�� ����ϰ�������� using namespace space1�� ����� space1::n_s()�� space1::�� ��ŵ�ϰ� ����Ҽ�����. 
namespace space1
{
	int n_s(int a1, int a2)
	{
		using namespace std;
		
		cout << a1 + a2 << endl;
		
		return a1 + a2;
	};
}

namespace space2
{
	int n_s(int a1, int a2)
	{
		using namespace std;
		
		cout << a1 * a2 << endl;
		
		return a1 * a2;
	};
}





int main()
{
	using namespace std;
	
	space1::n_s(1,2);
	space2::n_s(1,2);
	
	cout << "space1, space2�� ������� �ʰ� ���� �� \n\n" << endl;

	
	cout << "using namespace space1;" << endl;
	using namespace space1;
	n_s(1,2);

	cout << "�� using namespace space1; �� �̹� ����Ѱ�� using namespace space2; �� ����Ҽ����� \n using namespace space1;�� ��������ν� n_s�� ����Ҽ��ְԵǾ��µ� �̶� \n using namespace space2; �� ����Ͽ� n_s�� �� �Է°�� �����Ҽ� ���⶧��.";



	
	return 0;
};