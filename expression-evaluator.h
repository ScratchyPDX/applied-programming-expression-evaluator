#include <iostream> // standard I/O for data input and output
#include <stack>    // data storage for evaluated values
#include <sstream>  // needed for string streaming
#include <vector>   // data storage for expression values
#include <cmath>    // needed for pow() function
#include <conio.h>  // Needed for _getch()

using namespace std;

class ExpressionEvaluator {
public:
    // Default constructor
    ExpressionEvaluator() {}

    // provides a score to determine which operation has precedence during evaluation
    int getPrecedence(string op) {
        if (op == "+" || op == "-") { return 1; }
        if (op == "*" || op == "/") { return 2; }
        if (op == "^") { return 3; }
    }

    // convert expression string to reverse polish notation using Shunting Yard Algorithm
    vector<string> getExpressionTokens(const string& expression) {
        vector<string> tokens;  // output queue
        stack<string> operators;   // operator stack

        istringstream iss(expression); // enable expression string to be streamed as separate values
        string token;

        while (iss >> token) { // stream a value until white space is encountered
            if (isdigit(token[0])) {
                tokens.push_back(token); // push operand to output queue
            }
            else {
                // handle operator precedence
                while (!operators.empty() && getPrecedence(token) <= getPrecedence(operators.top())) {
                    tokens.push_back(operators.top()); // push operator to output queue
                    operators.pop();
                }
                operators.push(token);
            }
        }

        // remove remaining operators from stack and place in output queue
        while (!operators.empty()) {
            tokens.push_back(operators.top());
            operators.pop();
        }

        return tokens;
    }

    // main expression evaluation function
    float evaluateExpression(const vector<string>& tokens) {
        stack<float> value;

        // loop thru each token an in queue
        for (const string& token : tokens) {
            // is current token is a number thenplace it onto the stack
            if (isdigit(token[0])) {
                float num;
                istringstream(token) >> num;
                value.push(num);
            }
            else {
                // evaluate current stack numeric expression
                float n1 = value.top();
                value.pop();
                float n2 = value.top();
                value.pop();

                // perform operation based on operator type
                switch (token[0]) {
                case '+':
                    value.push(n2 + n1);
                    break;
                case '-':
                    value.push(n2 - n1);
                    break;
                case '*':
                    value.push(n2 * n1);
                    break;
                case '/':
                    value.push(n2 / n1);
                    break;
                case '^':
                    value.push(pow(n2, n1));
                    break;
                }
            }
        }
        return value.top();
    }
};