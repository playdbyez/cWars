#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

string in = "zaddupl1cat1onSSZ";
 string inn;
vector <int> l1;
string l2;
vector <int> reps;
int inc =1;
int em = 0;

  
  for (size_t c =0; c<strlen(in); c++) {inn+=in[c];}
  
  if (inn.empty()){em =0;}



for (size_t a = 0; a<inn.size(); a++){l1.push_back(inn[a]);}

for (size_t a = 0; a<inn.size(); a++){
	if (isupper(inn[a])){l2+=tolower(in[a]);}
	else {l2+=inn[a];}
	}


sort(l2.begin(), l2.end());
for (size_t d = 0; d < l2.size(); d++){ 
	if (l2[d] == l2[d+1]){inc++;}
	if (l2[d] != l2[d+1] || d == l2.size()-1){ if (inc > 1)reps.push_back(inc); inc=1;}
	
}

em = reps.size();
  cout << em;
}
