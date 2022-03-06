/*https://www.acmicpc.net/problem/1124*/
#include <iostream>
#include <vector>

using namespace std;

int number = 100000;
int arr[100001];
vector <int> arr2;

void era() // �����佺�׳׽��� ü �˰���
{
	for (int i = 2; i <= number; i++)
	{
		arr[i] = i;
	}
	for (int i = 2; i * i <= number; i++)
	{
		if (!arr[i])
		{
			continue;
		}
		for (int j = i * i; j <= number; j += i)
		{
			arr[j] = 0;
		}
	}
	for (int i = 2; i <= number; i++) //�����佺�׳׽��� ü �˰����� ���� ���� �Ҽ����� 0��°���� arr2���Ϳ� ����
	{
		if (arr[i])
		{
			arr2.push_back(i);
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int A,B,count = 0, count2 = 0;
	cin >> A >> B;
	era();

	for (int i = A; i <= B; i++)
	{
		int count = 0;
		int n = i;
		for (int j = 0; j <= arr2.size(); j++) //arr2�迭�� �ִ� �Ҽ��� ����
		{
			while(n % arr2[j] == 0) // �������� 0�Ͻ� ������ �� ������ �ѹ��� �ϰ� 0�� �ƴҽÿ��� j�� 1�� ����
			{
				count++;
				n /= arr2[j];
			
			}
			if (n == 1) // �� ���������� �ᱹ 1�� ���� �Ǹ鼭 break
			{
				break;
			}
		}
		if (arr[count]) // ����� ������ �Ҽ��� �� �̸� arr�迭���� ���Ͽ��� count2++
		{
			count2++;
		}
	}

	cout << count2 << "\n";
	return 0;
}