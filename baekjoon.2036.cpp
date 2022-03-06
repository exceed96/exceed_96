/*https://www.acmicpc.net/problem/2036*/
// ������ �̿��� �׸��� ����
// 1���� ū ���, ����, 1 �� �������� �����Ͽ��� 1���� ū ����� ������������ �����Ͽ��� ���� ���ϰ� ������ ������������ �ؼ� ���� ���ϰ�
// 1�� ����Ƚ����ŭ �����ش�. �̷��� �ִ� ������ ���´�. 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

vector <ll> arr;
vector <ll> arr2;

int main(void)
{
	int n, number, count_z = 0;
	ll sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number > 1) // 1���� ū ���
		{
			arr.push_back(number);
		}
		else if (number < 1) // 1���� ���� ��
		{
			arr2.push_back(number);
		} 
		else // 1�� ���ö����� ī��Ʈ ���ش�,(���߿� �ѹ��� �����ֱ� ���Ͽ�)
		{
			count_z++;
		}
	}

	sort(arr.begin(), arr.end(), greater<int>()); // ����� ������������ ���� ex) 5,5,4,3,1
	sort(arr2.begin(), arr2.end()); // 1���� ���� ���� ������������ ���� ex) -4,-3,-2,-1,0

	if (arr.size() % 2) // ����� ���� ������ ������ ������ Ȧ���� ��� ���� 1���� �������� �����ش�.
	{
		for (int i = 0; i < arr.size() - 1; i += 2)
		{
			sum += arr[i] * arr[i + 1];
		}
		sum += arr[arr.size() - 1];
	}
	else  
	{
		for (int i = 0; i < arr.size(); i += 2)
		{
			sum += arr[i] * arr[i + 1];
		}
	}

	if (arr2.size() % 2)
	{
		for (int i = 0; i < arr2.size() - 1; i += 2)
		{
			sum += arr2[i] * arr2[i + 1];
		}
		sum += arr2[arr2.size() - 1];
	}
	else
	{
		for (int i = 0; i < arr2.size(); i += 2)
		{
			sum += arr2[i] * arr2[i + 1];
		}
	}

	cout << sum + count_z << "\n"; //1�� ������ 1�� �������� ���� ���ͷ� �������� ���� �����ش�.
	return 0;
}