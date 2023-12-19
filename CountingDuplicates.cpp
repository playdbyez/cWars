#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main () {
string in = "zaddupl1cat1onSSZ";
 string inn;
vector <int> l1;
string l2;
vector <int> reps;
int inc =1;
int em = 0;
vector <char> who;

  for (size_t c =0; c<in.size(); c++) {inn+=in[c];}
  
  if (inn.empty()){em =0;}



for (size_t a = 0; a<inn.size(); a++){l1.push_back(inn[a]);}

for (size_t a = 0; a<inn.size(); a++){
	if (isupper(inn[a])){l2+=tolower(in[a]);}
	else {l2+=inn[a];}
	}


sort(l2.begin(), l2.end());
for (size_t d = 0; d < l2.size(); d++){ 
	if (l2[d] == l2[d+1]){inc++;}
	if (l2[d] != l2[d+1] || d == l2.size()-1){ if (inc > 1){reps.push_back(inc); inc=1; who.push_back(l2[d]);}}
	
}

em = reps.size();
  cout << "The total ammount of reocurring characters is : "<< em << endl;
  
  for (size_t x = 0; x < who.size(); x ++){cout << "Character ["<< who[x]<< "] repeats " << reps[x] << " times" << endl;}
  
}
