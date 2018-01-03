#include "iostream"
#include "string"
#include "stack"
using namespace std;

int main(){
	string s;
	cin >> s;
	stack<char> left;
	
	int len = s.length();
	for(int i=0; i<len; i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			left.push(s[i]);
			continue;
		}
		if(!left.empty()){
			if((s[i]==')'&&left.top()=='(')||(s[i]=='}'&&left.top()=='{')||(s[i]==']'&&left.top()=='[')){
			continue;
			}else{
				cout << "false" << endl;
				return 0;
			}
		}else{
			cout << "false" <<endl;
			return 0;
		}
	}

	return 0;
}
