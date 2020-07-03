#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector<int> v;
	v.resize(num);
	for (int i = 0; i < num; ++i) {
		cin >> v[i];
	}
	int max = -1e5;
	long sum = 0;
	for (int i = 0; i < sum; i++) {
		sum += v[i];
		if (sum > max) {
			max = sum;
		}
		if (sum < 0) {
			sum = 0;
		}
	}
	cout << max << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
bool huiwen(string& str) {
	int len = str.size() - 1;
	for (int i = 0; i <= len; i++, len--) {
		if (str[i] != str[len]) {
			return false;
		}
	}
	return true;
}

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int count = 0;
	for (int i = 0; i <= str1.size(); ++i) {
		string tmp = str1;
		tmp.insert(i, str2);
		if (huiwen(tmp) == 1) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string ret;
	while (cin >> str) {
		for (int i = 0; i < str.size(); i++) {
			if (ret.find(str[i]) == -1)
				ret += str[i];
		}
		for (int i = 0; i < ret.size(); i++) {
			cout << ret[i];
		}
		cout << endl;
	}
	return 0;
}

