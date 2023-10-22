#include <bits/stdc++.h>
using namespace std;

int calculate_length(string s){
	int length=0;
	int i=s.length() - 1;

	while(i>=0 and s[i]==' '){
		i--;
	}

	while(i>=0  and s[i]!=' '){
		length++;
		i--;
	}
	return length;
}


int main(){
    string str_input;
    cout<<"Enter the string: ";
	getline(cin,str_input);

	int result = calculate_length(str_input);
	cout<<"The length of the last word of the string is: "<<result<<endl;
}