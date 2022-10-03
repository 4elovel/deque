#include <iostream>
#include <deque>

using namespace std;

int main()
{

	deque<long long int> dq{ -13, 0, 10, -4, 6, 11, 12, 28, 50, 89, 166, 304 };
	long long int size;

	cout << "write size of deque that you want->\n";
	cin >> size;

	size -= 12;

	if (size <= 0) {
		cout << "\nINVALID SIZE\n";
		return 0;
	}


	for (size_t i = 0, j=9; i <= size/2; i++,j++)
	{
		dq.push_back(dq[j + 2] + dq[j + 1] + (dq[j] - 1));
	}

	for (size_t i = 0, j = 0; i <= size / 2; i++)
	{
		dq.push_front(dq[j + 2] - dq[j + 1] - (dq[j] + 1));
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << dq[i] << endl;
	}
}
