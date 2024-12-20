#include <iostream>
using namespace std;

void withdraw(int& balance, int amountWithdraw) {
    if (amountWithdraw > balance || amountWithdraw % 100 != 0 || amountWithdraw <= 0) {
        cout << "Amount can't be withdwan." << endl;
        return;
    }

    int arr[] = {2000, 500, 200, 100};
    int counts[4] = {0};
    int originalAmount = amountWithdraw;

    for (int i = 0; i < 4; i++) {
        counts[i] = amountWithdraw / arr[i];
        amountWithdraw %= arr[i];
    }

    cout << "Notes Withdrawn:" << endl;
    for (int i = 0; i < 4; i++) {
        if (counts[i] > 0) {
            cout << arr[i] << " Notes : " << counts[i] << endl;
        }
    }

    balance -= originalAmount;
    cout << "Balance Left : " << balance << endl;
}

int main() {
    int balance, amount;
    char nextWithdraw;

    cout << "Balance in Bank : ";
    cin >> balance;

    do {
        cout << "Cash to Withdraw : ";
        cin >> amount;

        withdraw(balance, amount);

        if (balance <= 0) {
            cout << "Insufficient balance ." << endl;
            break;
        }

        cout << "Next transaction ? : ";
        cin >> nextWithdraw;

    } while (nextWithdraw == 'y' );

    cout << "Final Balance: " << balance << endl;


    return 0;
}
