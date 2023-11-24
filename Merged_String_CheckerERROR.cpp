#include <string>
#include <vector>
using namespace std;

bool is_merge(const string& s, const string& part1,const string& part2) 
{
bool anz =false;

string sizer;

const char zr = '0';
const char rz = '@';
	vector <char> tot;
  	vector <char> pp1;
  	vector <char> pp2;
vector <int> ord1;
vector <int> ord2;

int ing =0;
vector <char> let1;
vector <char> let2;

sizer= part1+part2;

if ( part2.empty() && sizer.size() == s.size()){anz = true; return anz;}
  if ( part1.empty() && sizer.size() == s.size()){anz = true; return anz;}
if (sizer.size() == s.size()){anz = true;}
if (anz == false){return anz;}


for (auto c:s)
{tot.push_back(c);}

for (auto q:part1)
{pp1.push_back(q);}

  for (auto d:part2)
{pp2.push_back(d);}




for (size_t g =0; g<pp1.size();g++){
	for (size_t q =0; q<pp2.size();q++){
		for (size_t t=0; t<tot.size();t++){
			if( pp1[g] == tot[t]){
			ord1.push_back(t); 
			let1.push_back(tot[t]);
			pp1[g] = rz; 
			tot[t] = zr; 
			g= 0;
			}
			if( pp2[q] == tot[t]){
			ord2.push_back(t);
			let2.push_back(tot[t]);
			pp2[q] = rz; 
			tot[t] = zr; 
			q= 0;
			}
		      }			
		    }
		  }

for (size_t k = 0; k< ord1.size(); k++){
 	if (ord1[k]<ord1[k-1]){
 		if (let1[k-1] != let2[k-1]) 
 	anz= false;
 	}
      }
for (size_t k = 0; k< ord2.size(); k++){
	 if (ord2[k]<ord2[k-1]){
	 if (let2[k-1] != let1[k-1]) 
	 anz= false;
	 }
	}
	for (size_t a =0; a<tot.size(); a++){if (tot[a] != zr){anz=false;}}
		for (size_t b =0; b<pp1.size(); b++){if (pp1[b] != rz){anz=false;}}
			for (size_t c =0; c<pp2.size(); c++){if (pp2[c] != rz){anz=false;}}
  
											  return anz;
}

//Passes all Sample Tests
//Cannot handle edge_cases
//Cannot handle true
//Cannot handle false
//Cannot handle any
