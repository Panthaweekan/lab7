#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){

	string text,ReverseText,TolowerText,ReverseTolowerText;

    cout << "Input text: ";
	cin >> text;
	ReverseText = func1(text);
	TolowerText = func2(text);
	ReverseTolowerText = func2(ReverseText);
    cout << "Reversed text: " << ReverseText << "\n";

	if(text == ReverseText || TolowerText == ReverseTolowerText)
	{
		cout << "Palindrome: Yes";

	}else{

		cout << "Palindrome: No"; 
	}
	
    return 0;

	// FINISH_640612093

}
