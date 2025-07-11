#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char ch;
	while (cin.get(ch) && ch != '@'){
		if (isdigit(ch))
			continue;
		if (islower(ch))
			cout<<(char)toupper(ch);
		else
			cout<<(char)tolower(ch);
	}
}