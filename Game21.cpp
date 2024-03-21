#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int GetRandomNumber() {
   int AINumber = time(0);
    srand(AINumber);
    int rn = 1 + rand() % 5;
    return rn;
}


int main()
{
    int sum = 0;
    bool a = true; 

    while (sum != 21) {
        int num;
        if (a) {
            cout << "Player 1 turn!! Enter a number from 1 to 5: ";
            cin >> num;
        }
        else {
            cout << "Player 2 turn!! Enter a number form 1 to 5: ";
            num = GetRandomNumber();
            cout  << num << endl;
        }

        // ricxvis damateba
        sum += num;
        cout << "Sum is: " << sum << endl;

        // jamis shemowmeba
        if (sum >= 21) {
            cout <<sum <<" is greater than 21!!";
            if (a)
                cout << "player 1 loses!" << endl;
            else
                cout << "player 2 loses!" << endl;
            break;
        }

        //motamasheebis monacvleoba
        a = !a;
    }

    
    
    return 0;
}

