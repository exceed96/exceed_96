/*https://www.acmicpc.net/problem/2920*/
#include <iostream>

using namespace std;

int main(void)
{
	int arr[8] = {}, count = 0, count2 = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] + arr[7-i] == 9) // �Ǿհ� �ǵ��� ���� 9�̰�
		{
			if (arr[i] < arr[i + 1]) // ���� ���Ұ� ���� ���Һ��� ũ�ٸ� count++ �� ��������
				count++;
			else
				count2++; // ���� ���Ұ� ���� ���Һ��� �۴ٸ� count2++ �� ��������
		}
	}
	if (count == 4 && arr[0] == 1) // ���������϶�
	{
		cout << "ascending" << "\n";
	} 
	else if (count2 == 4 && arr[0] == 8) // ���������϶�
	{
		cout << "descending" << "\n";
	}
	else // �� �ܿ��� mixed
	{
		cout << "mixed" << "\n";
	}
	return 0;
}