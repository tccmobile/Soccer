#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> jerseyNums(5);
    vector<int> ratingNums(5);

    unsigned int i;
    int playerJersy;
    int playerRating;
    char menuOp;

    for (i = 0; i < jerseyNums.size(); ++i) {
        cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
        cin >> playerJersy;
        jerseyNums.at(i) = playerJersy;

        cout << "Enter player " << i + 1 << "'s rating:" << endl;
        cin >> playerRating;
        ratingNums.at(i) = playerRating;
        cout << endl;
    }

    cout << "ROSTER" << endl;
    for (i = 0; i < jerseyNums.size(); ++i) {
        cout << "Player " << i + 1 << " -- Jersey number: "
             << jerseyNums.at(i) << ", Rating: " << ratingNums.at(i) << endl;
    }
    cout << endl;
}