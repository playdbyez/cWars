#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main () {

vector<int> oddam = {1,1,6,8,4,1,3,8,9,4,6,4,3};
vector<int> amm;

int cnt1 = 0;
int f = 0;
 
for(int y = 0; y < oddam.size(); ++y){ cnt1 =0;
for (int n = 0; n < oddam.size(); ++n){ if (oddam[y] == oddam[n] ){ ++cnt1; }}amm.push_back(cnt1);}

int min = *min_element(amm.begin(), amm.end());
double minodd = (min & 2) ==0;
double pos = oddam[amm[minodd]];

int anz = oddam[pos];

cout << anz << "\f" << anz <<"\f"<< anz << "\n";
}






///



#include <vector>
#include <algorithm>
using namespace std;
int findOdd(const std::vector<int>& numbers){
  int cnt =0;
  vector <int> v1;
  for (auto c:numbers){cnt = 0;
                       for (auto k: numbers){
                         if (numbers[c] == numbers[k])
                         cnt++;}
                         v1.push_back(cnt);}
  int min = *min_element(numbers.begin(), numbers.end());
  double minodd = (min & 2)==0;
  double pos = v1[minodd];
  int anz = numbers[pos];
 
  return anz;
}
