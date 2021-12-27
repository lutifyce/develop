#include <iostream>
using namespace std;

int main()
{
	int h, m, s;

	cout<<"Hours:";
	cin >> h;
	cout<< "Minuts:";
	cin >> m;
	cout<< "Seconds";
	cin>> s;
	if (s > 59||m>59)
	{
		cout << "Error";
		return(0);
	}
	cout<< "Time in seconds: "<<(h * 3600) + (m * 60) + s;
}