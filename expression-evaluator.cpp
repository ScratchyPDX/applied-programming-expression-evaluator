#include <conio.h>  // Needed for _getch()
#include "expression-evaluator.h"

using namespace std;

int main() {
    char choice = 'Y';
    while (toupper(choice) != 'N') {
        system("cls");

        // get expression string from user
        string expression = "";
        cout << "Enter a mathematical expression (example: 4 + 3 * 2 / 1" << endl;
        cout << "Ensure to separate each number and operator with a blank space" << endl;
        cout << "What's the equation? ";
        getline(cin, expression);

        // get a new instance of the evaluator class
        ExpressionEvaluator* eval = new ExpressionEvaluator();

        // break expression string into evaluation parts and place into a queue
        vector<string> tokens = eval->getExpressionTokens(expression);

        // evaluate result of expression and display results
        double result = eval->evaluateExpression(tokens);
        cout << "Result: " << result << endl;
        cout << endl;

        // delete eval class instance
        delete eval;

        // get input from user whether to evaluate another expression
        cout << "Do you want to do another (Y/n)? ";
        choice = _getch();
        cout << choice << endl;
    }

    system("pause");
    return 0;
}