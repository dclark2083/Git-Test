
#include <iostream>

using namespace std;

int sum (int userNum);

int main() {

  cout << "Please enter a number: " << endl;
  int n;
  cin >> n;

  cout << sum(n) << endl;
  
  return 0;
}

int sum (int userNum) {

  int total = 0;

  for (int i = 0; i < userNum; i++) {
    total += userNum;
  }

  return total;
}
