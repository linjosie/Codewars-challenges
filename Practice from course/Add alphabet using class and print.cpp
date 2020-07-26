#include <iostream>
#include <string>
using namespace std;

class Alpha{
private:
	string name;

public:
	Alpha(){
		cout << "Alphabet created"<< endl;
	}
	~Alpha(){
		cout << "Alphabet deleted" <<endl;
	}
	void setAlpha(string name){
		this->name = name;
	}
	void out(){
		cout << "the alphabet is: "<< name <<endl;
	}
	void show(){
			cout << name;
		}

};


int main() {
	Alpha *alpha = new Alpha[26];
	char fit = 'a';
	for (int i=0;i<26;i++,fit ++){
		string add(1,fit);
		alpha[i].setAlpha(add);
		//alpha[i].out();
	}

	for (int i=0;i<26;i++){
		alpha[i].show();
	}
	cout << endl;

	delete [] alpha;

	return 0;
}
