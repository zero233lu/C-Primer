// Chapter2.cpp: 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
//#include<iostream>
//#include<string>

//struct Sales_data
//{
//	/*using std::string;*/
//	std::string BookName;
//	std::string BookNo;
//	unsigned int units_sold = 0;
//	double	renvenue = 0.0;
//	double perprice = 0.0;
//	
//};
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	Sales_data data;
//	cout << "请输入销售记录" << endl;
//	cin >> data.BookName >> data.BookNo>>data.perprice>>data.units_sold;
//	cout << "销售记录分别是：\n" << data.BookName << "   " << data.BookNo << "   " << data.perprice << "   " << data.units_sold;
//	cin.get();
//	return 0;
//}
//int main() {
//	/*std::string b;
//	std::string b1;
//	
//		while(std::cin>>b1) {
//			b += b1;
//			std::cout << b << std::endl;
//		}
//		std::cout << "大萨达"<<std::endl;
//		return 0;*/
//	using namespace std;
//	//string mystring;
//	//string sumstring;
//	//while (getline(cin, mystring))
//	//{
//	//	sumstring += mystring;
//	//	cout << sumstring << endl;
//	//}
//	///*auto &q = mystring;*/
//	/*string s;
//	cin >> s;
//	if (!s.empty()) {
//		cout << s[1];
//	}*/
//	const char* s{ "dsadasdsa" };
//	cout << s;
//}
//int main() {
//	using namespace std;
//	string s("dsadsa");
//	for (auto &a : s ){
//		a = 'x';
//		
//	}
//	std::cout << s;
//}
//int main() {
//	using namespace std;
//	string s("dsaassadasdsa");
//	string::size_type i = 0;
//	while (i < s.size() ) {
//		s[i] = 'X';
//		i++;
//	}
//	cout << s << endl;
//	//for
//	i = 0;
//	for (i; i < s.size(); i++) {
//		s[i] = 'Y';
//
//	}
//	cout << s << endl;
//	return  0;
//}
//int main() {
//	using namespace std;
//	string s;
//	getline(cin, s);
//	for (auto &a : s) {
//		if (!ispunct(a)) {
//			cout << a;
//		}
//	}
//	//cout << "Enter a string of characters including punctuation." << endl;
//	//for (string s; getline(cin, s); cout << endl)
//	//	for (auto i : s)
//	//		if (!ispunct(i)) cout << i;
//
//	//return 0;
//}
//#include <vector>
//int main() {
//	using std::cin;
//	using std::cout;
//	using std::string;
//	using std::vector;
//	vector<string> words;
//	string word;
//	while (cin >> word) {
//		words.push_back(word);
//
//		for (auto i : words)
//			cout << i;
//	}
//	return 0;
//}
//#include<cctype>
//int  main() {
//	std::vector<std::string> words;
//	std::string word;
//	if (std::cin>>word){
//		for (auto &a : word) {
//			
//				a=toupper(a);	
//	}
//	
//	}
//	words.push_back(word);
//	for (std::string::size_type i = 0; i != words.size(); ++i)
//	{
//		if (i != 0 && i % 8 == 0)std:: cout << std::endl;
//		std:: cout << words[i] << " ";
//	}
//	std::cout <<std:: endl;
//	
//		
//		return 0;
//	}
//	
//#include"stdafx.h"
//#include<vector>
//#include<string>
//#include<iostream>
//int main() {
//	using namespace std;
//	vector<int> v1;
//	vector<int> v2(10);
//	vector<int> v3(10, 42);
//	vector<int> v4{ 10 };
//	vector<int> v5{ 10,42 };
//	vector<string> v6{ 10 };
//	vector<string> v7{ 10,"hi" };
//	for (auto it = v3.begin(); it != v3.end(); ++it)
//	{
//		cout << *it;
//	}
//}
//#include"stdafx.h"
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cctype>
//#include<typeinfo>
//int main() {
//	using namespace std;
//	vector<string> s = { "standard you known" };
//	
//	for (auto it = s.begin(); it!= s.cend() && !it->empty(); ++it) {
//		for (auto it2 = it->begin(); it2 != it->cend() && !*it2!=' '; ++it2) {
//			*it2 = toupper(*it2);
//			cout << *it2 << endl;
//		}
//	}
//}
//#include"stdafx.h"
//#include<iostream>
//#include<vector>
//#include<string>
//#include<cctype>
//int main() {
//	using namespace std;
//	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (auto it = vec.begin(); it != vec.end(); ++it) {
//		*it *= 2;
//		cout << *it << " ";
//	}
//	for (auto i : vec) cout << i << " ";
//	return 0;
//}
//#include"stdafx.h"
//#include <vector>
//#include <iostream>
//#include <iterator>
//
//using std::vector; using std::iterator; using std::cout;
//
//int main()
//{
//	vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (auto it = v.begin(); it != v.end(); ++it) *it *= 2;
//	for (auto i : v) cout << i << " ";
//
//	return 0;
//}
//#include"stdafx.h"
//#include <vector>
//#include <iostream>
//
//using namespace std;
//int main() {
//	vector<int> v;
//	int number;
//	for (number; cin >> number; v.push_back(number));
//	if (v.size() < 2)
//	{
//		cout << " please enter at least two integers";
//		return -1;
//	}
//	for (auto it = v.cbegin(); it + 1 != v.cend(); ++it)
//		cout << *it + *(it + 1) << " ";
//	cout << endl;
//
//	for (auto lft = v.cbegin(), rht = v.cend() - 1; lft <= rht; ++lft, --rht)
//		cout << *lft + *rht << " ";
//	cout << endl;
//
//	return 0;
//
//}
#include"stdafx.h"
#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n = 0;
	while (scanf_s("%d", &n) != EOF) {
		cout << n << endl;
	}

	return 0;
}