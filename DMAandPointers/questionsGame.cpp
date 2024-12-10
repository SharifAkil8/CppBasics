#include <iostream>
#include <string>
using namespace std;

class node{
    bool isAnswer;      // true if an answer node, false if a question node
    string text;        // answer for an answer node, question otherwise
    node* falseAnswer;
    node* trueAnswer;

public:
    node(){
        isAnswer = true;
        text = "rock";
        falseAnswer = NULL;
        trueAnswer = NULL;
    }

    node(string s){
        isAnswer = true;
        text = s;
        falseAnswer = NULL;
        trueAnswer = NULL;
    }

    ~node(){
        if (!isAnswer){
            delete falseAnswer;
            delete trueAnswer;
        }
    }

    bool askQuestion(){
        if (isAnswer){
            // This is an answer node.
            // Guess the answer, and if it is wrong, generate new nodes
            cout << "Is it " << text << "? (Answer Yes or No): ";
            string answer;
            cin >> answer;
            if ((answer == "Yes") || (answer == "yes") || (answer == "y") || (answer == "Y")){
                return true;
            }
                else{
                    cout << "What were you thinking of?";
                    cin >> answer;
                    cout << "Help me learn. What is a question that would help me distinguish " 
                        << text << " from " << answer << "? " << endl;
                    cout << " (The answer to the question should be Yes for " << answer
                        << " and No for " << text << ".)" << endl;
                    string question;
                    getline(cin,question);
                    getline(cin,question);
                    trueAnswer = new node(answer);
                    falseAnswer = new node(text);
                    text = question;
                    isAnswer = false;
                    return false;
                }
        }
            else{
                // This is a question node. Ask the question, get the answet, and go to a child.
                cout << text;
                cout << " (Answer Yes or No): ";
                string answer;
                cin >> answer;
                if ((answer == "Yes") || (answer == "yes") || (answer == "y") ||
                    (answer == "Y")){
                    return trueAnswer->askQuestion();
                }
                    else{
                        return falseAnswer->askQuestion();
                    }
            }
    }
};

int main(){
    node firstNode;

    cout << "Would you like to play 20 questions? ";
    string answer;
    cin >> answer;
    while ((answer == "Yes") || (answer == "yes") || (answer == "y") ||
            (answer == "Y")){
        if (firstNode.askQuestion()){
            cout << endl << "I won!" << endl;
        }
            else{
                cout << endl << "I lost..." << endl;
            }
        cout << "Would you like to play again? ";
        cin >> answer;
    }   
}