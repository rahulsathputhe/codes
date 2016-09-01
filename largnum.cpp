#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int myCompare(string X, string Y)
{
	string XY = X.append(Y);

	string YX = Y.append(X);

	return XY.compare(YX) > 0 ? 1: 0;
}

void printLargest(vector<string> a)
{
	sort(a.begin(), a.end(), myCompare);

	for (int i=0; i < a.size() ; i++ )
		cout << a[i];
}
int main()
{
	vector<string> a;

	a.push_back("54");
	a.push_back("546");
	a.push_back("548");
	a.push_back("60");
	printLargest(a);


return 0;
}
