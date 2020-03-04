#include <iostream>
#include <string>
using namespace std;

int main(){
	int rolls[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int roll;
	double totalrolls = 0.0;
	cout << "Welcome to a new game of Catan!\n";
	cout << "Enter the first roll: ";
	cin >> roll;
	while(roll >= 2 && roll <= 12){
		totalrolls++;
		rolls[roll-2]++;
		for(int i=0; i<11; i++){
			if(i+2 < 10)
				cout << ' ';
			cout << i+2 << ": ";
			for(int j=0; j<rolls[i]; j++){cout << '*';}
			cout << '\n';
		}
		cout << "Enter the next roll, or 0 if the game is over: ";
		cin >> roll;
	}
	cout << "End of Game - Summary of dice rolls:\n";
	for(int i=0; i<11; i++){
		if(i+2 < 10)
			cout << ' ';
                cout << i+2 << ": " << rolls[i] << " - " << (rolls[i]/totalrolls)*100 << "%\n";
                }
	cout << "Total rolls: " << int(totalrolls) << '\n';
	return 0;
}
