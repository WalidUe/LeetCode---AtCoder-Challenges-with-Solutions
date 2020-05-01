#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

/*
Sample Input

23,4,56
Sample Output

23
4
56
*/

vector<int> parseInts(string str)// breaking input into word using string stream
{
	vector<int> integers;
	 
	stringstream ss(str); // Used for breaking words
	int number; // to store individual words
	char ch;//to store the comma
	
	while (ss>> number)
	{
		integers.push_back(number);
		ss >> ch;

	}

	return  integers;
}


int main() {
	
	string str;
	cin >> str;
	
	vector<int> integers = parseInts(str);

	for (int i = 0; i < integers.size(); i++)
	{
		cout << integers.at(i) << "\n";
	}
	

	return 0;
}