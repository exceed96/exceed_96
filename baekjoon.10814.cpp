/*https://www.acmicpc.net/problem/10814*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool Sort(const pair<int, string> &a, const pair<int, string> &b)
{
	return a.first < b.first;
}

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	vector <pair<int, string>> arr; //2���� ���͸� ���ؼ� ����,�̸��� �޴´�
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string a;
		int n;
		cin >> n >> a;
		arr.push_back(make_pair(n, a)); //arr 2���� ���Ϳ� ���̿� �̸��� �Է�
	}

	stable_sort(arr.begin(), arr.end(), Sort); //stable_sort�� ���ؼ� ����
	// �׳� sort�� �ϸ� �� ���Ҹ� ���� �� ������ ���������شٴ� ������ ����
	// �׷��� stable_sort�� ���ؼ� �Է� ���� �����ϸ鼭 ����
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
	return 0;
}