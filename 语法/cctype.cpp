#include <iostream>
#include <cctype>

using namespace std;
int main(){
	char ch;
	int space{};
	int digits{};
	int chars{};
	int punct{};
	int others{};
	cin.get(ch);
	while (!cin.eof()){
		if (isalpha(ch))
			chars++;
		else if (isdigit(ch))
			digits++;
		else if (isspace(ch))
			space++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout<<chars<<" 个字母, "
		<<space<<" 个空格, "
		<<digits<<" 个数字, "
		<<punct<<" 个标点, "
		<<others<<" 个其它. \n";
}