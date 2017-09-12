#include <iostream>
#include <string.h>

using namespace std;

int nos = 0;
double res = 0;
double no[0] = {};

void giveNos() {

  cout << endl << "How many numbers would you like to add? : " << flush;
  cin >> nos;

  for (int i = 0; i < nos; i++) {
    cout << "Number " << (i + 1) << " : " << flush;
    cin >> no[i];

    res += no[i];
  }

  cout << "Result = " << res << endl;
}

void console() {

  while(1) {

    string command;

    getline(cin, command);

    if (command == "calc") {

      giveNos();
    }

    if (command == "help")
      cout << endl << "calc = Run calculator" << endl << "exit = Exit the program" << endl << "help = Opens this help dialog" << endl;

    if (command == "exit") {
      cout << "Exiting..." << endl;
      break;
    }

    if (command == "view numbers") {
      cout << endl;
      for(int j = 0; j < nos; j++)
      cout << "Number " << (j + 1) << " : " << no[j] << endl;
    }
  }
}

int main() {

  cout << "Welcome to my calculator, type 'help' for help." << endl;
  console();

  return 0;
}
