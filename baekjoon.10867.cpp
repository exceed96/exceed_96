/*https://www.acmicpc.net/problem/10867*/
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

vector <int> arr;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		arr.push_back(n); //arr���Ϳ� ���� �־��ش�.
	}
	sort(arr.begin(), arr.end()); // arr���͸� ������������ ����
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	// arr���͸� ������������ ���� �� unique�� ���ؼ� �ߺ��ϴ� ���� �����ְ� �ڿ� ���� ��ȯ���� erase�� ����

	for (int i = 0; i < arr.size(); i++) //��������� �ߺ��� ������ ���� ���� �ȴ�.
	{
		cout << arr[i] << " "; 
	}
	return 0;
}