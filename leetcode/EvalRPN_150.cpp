#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int evalRPN(vector<string>& tokens) {
	stack<long> numStack;
	long first = 0, second = 0, res = 0;
	for (int i = 0; i < tokens.size(); i++)
	{
		string& token = tokens[i];
		if (tokens[i] == "+" 
			|| tokens[i] == "-" 
			|| tokens[i] == "*" 
			|| tokens[i] == "/") {
			second = numStack.top();
			numStack.pop();
			first = numStack.top();
			numStack.pop();
			switch (token[0])
			{
				case '+':
					numStack.push(first + second);
					break;
				case '-':
					numStack.push(first - second);
					break;
				case '*':
					numStack.push(first * second);
					break;
				case '/':
					numStack.push(first / second);
					break;
			}
		}
		else {
			numStack.push(atoi(token.c_str()));
		}
	}
	cout << numStack.top() << endl;
	return numStack.top();
}

int main() {
	vector<string> tokens = { "-128","-128","*","-128","*","-128","*","8","*","-1","*" };
	evalRPN(tokens);
}