#include<iostream>
using namespace std;

int main(){
  
string letters[2][3]= {
  { "A", "B","c"},
  { "E", "F","g"}
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    cout << letters[i][j] << "\n";
  }
}

return 0;
}