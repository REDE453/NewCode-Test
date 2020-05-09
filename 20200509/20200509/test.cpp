#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string str, res;
	while (cin >> str >> res)
	{
		bool sta = true;
		map<char, int> strdata, resdata;
		for (auto c : str)
			strdata[c]++;
		for (auto c : res)
			resdata[c]++;
		for (map<char, int>::iterator it = resdata.begin(); it != resdata.end(); it++)
		{
			if (strdata[it->first] < it->second)
			{
				sta = false;
				break;
			}
		}
		if (true == sta)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}