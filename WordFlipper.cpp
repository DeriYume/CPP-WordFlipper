#include "iostream"
#include "stack"
#include "string"

using namespace std;

int main()
{
	string input; // a word that user has to input
	stack <char> output; // the word displayed backwards

	cout << "Type a word: ";
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		output.push(input[i]);
	}

	cout << "The word backwards: ";
	while (!output.empty())
	{
		cout << output.top();
		output.pop();
	}
	cout << endl;

	return 0;
}