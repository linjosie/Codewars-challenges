bool is_uppercase(const std::string &s) {
	int len = s.length();
	bool ans = true;
	for(int i = 0 ; i < len; i++){
		if(s[i]>=97 && s[i]<=122){
			ans = false;
		}
	}
	return ans;
}

///////other solutions

#include <string>
#include <algorithm>

using namespace std;

bool is_uppercase(const string &s)
{
    string answer = s;
    transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
    return s == answer;
}


