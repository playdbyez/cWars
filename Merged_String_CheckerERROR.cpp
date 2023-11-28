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


//v2.0

string zz = s;
    string part11 = part1;
    string part22 = part2;
  int m = 0;
  int n = 0;
  int err = 0;
  int endn = 0;
  bool p1 = false;
  bool p2 = false;
  bool p3 = false;
  bool p4 = false;
  bool anz = false;
  
int leta = 0, letb = 0, letc = 0, letd = 0, lete = 0, letf = 0;
int letg = 0, leth = 0, leti = 0, letj = 0, letk = 0, letl = 0;
int letm = 0, letn = 0, leto = 0, letp = 0, letq = 0, letr = 0;
int lets = 0, lett = 0, letu = 0, letv = 0, letw = 0, letx = 0;
int lety = 0 ,letz = 0;
  
  
  
  
for (size_t i = 0; i< zz.size(); i++){
                if (part11[m] == zz[i]){
                                        m++; 
                                            if (m == part11.size()){ p1 = true; break;}
                                                                                          }
}
  
  
  for (size_t i = 0; i< zz.size(); i++){
                if (part22[n] == zz[i]){
                                        n++; 
                                            if (n == part22.size()){ p2 = true; break;}
                                                                                          }
}

  
  
  for (int i = 0; i < part2.size(); i++){
if (part2[i] == 'a'){++leta;}if (part2[i] == 'b'){++letb;}if (part2[i] == 'c'){++letc;}if (part2[i] == 'd'){++letd;}
if (part2[i] == 'e'){++lete;}if (part2[i] == 'f'){++letf;}if (part2[i] == 'g'){++letg;}if (part2[i] == 'h'){++leth;}
if (part2[i] == 'i'){++leti;}if (part2[i] == 'j'){++letj;}if (part2[i] == 'k'){++letk;}if (part2[i] == 'l'){++letl;}
if (part2[i] == 'm'){++letm;}if (part2[i] == 'n'){++letn;}if (part2[i] == 'o'){++leto;}if (part2[i] == 'p'){++letp;}
if (part2[i] == 'q'){++letq;}if (part2[i] == 'r'){++letr;}if (part2[i] == 's'){++lets;}if (part2[i] == 't'){++lett;}
if (part2[i] == 'u'){++letu;}if (part2[i] == 'v'){++letv;}if (part2[i] == 'w'){++letw;}if (part2[i] == 'x'){++letx;}
if (part2[i] == 'y'){++lety;}if (part2[i] == 'z'){++letz;}
}
  
   for (int i = 0; i < part1.size(); i++){
if (part1[i] == 'a'){++leta;}if (part1[i] == 'b'){++letb;}if (part1[i] == 'c'){++letc;}if (part1[i] == 'd'){++letd;}
if (part1[i] == 'e'){++lete;}if (part1[i] == 'f'){++letf;}if (part1[i] == 'g'){++letg;}if (part1[i] == 'h'){++leth;}
if (part1[i] == 'i'){++leti;}if (part1[i] == 'j'){++letj;}if (part1[i] == 'k'){++letk;}if (part1[i] == 'l'){++letl;}
if (part1[i] == 'm'){++letm;}if (part1[i] == 'n'){++letn;}if (part1[i] == 'o'){++leto;}if (part1[i] == 'p'){++letp;}
if (part1[i] == 'q'){++letq;}if (part1[i] == 'r'){++letr;}if (part1[i] == 's'){++lets;}if (part1[i] == 't'){++lett;}
if (part1[i] == 'u'){++letu;}if (part1[i] == 'v'){++letv;}if (part1[i] == 'w'){++letw;}if (part1[i] == 'x'){++letx;}
if (part1[i] == 'y'){++lety;}if (part1[i] == 'z'){++letz;}
}
  
     for (int i = 0; i < s.size(); i++){
if (s[i] == 'a'){--leta;}if (s[i] == 'b'){--letb;}if (s[i] == 'c'){--letc;}if (s[i] == 'd'){--letd;}
if (s[i] == 'e'){--lete;}if (s[i] == 'f'){--letf;}if (s[i] == 'g'){--letg;}if (s[i] == 'h'){--leth;}
if (s[i] == 'i'){--leti;}if (s[i] == 'j'){--letj;}if (s[i] == 'k'){--letk;}if (s[i] == 'l'){--letl;}
if (s[i] == 'm'){--letm;}if (s[i] == 'n'){--letn;}if (s[i] == 'o'){--leto;}if (s[i] == 'p'){--letp;}
if (s[i] == 'q'){--letq;}if (s[i] == 'r'){--letr;}if (s[i] == 's'){--lets;}if (s[i] == 't'){--lett;}
if (s[i] == 'u'){--letu;}if (s[i] == 'v'){--letv;}if (s[i] == 'w'){--letw;}if (s[i] == 'x'){--letx;}
if (s[i] == 'y'){--lety;}if (s[i] == 'z'){--letz;}
}

if(leta != 0){err++;}
if(letb != 0){err++;}
if(letc != 0){err++;}
if(letd != 0){err++;}
if(lete != 0){err++;}
if(letf != 0){err++;}
if(letg != 0){err++;}
if(leth != 0){err++;}
if(leti != 0){err++;}
if(letj != 0){err++;}
if(letk != 0){err++;}
if(letl != 0){err++;}
if(letm != 0){err++;}
if(letn != 0){err++;}
if(leto != 0){err++;}
if(letp != 0){err++;}
if(letq != 0){err++;}
if(letr != 0){err++;}
if(lets != 0){err++;}
if(lett != 0){err++;}
if(letu != 0){err++;}
if(letv != 0){err++;}
if(letw != 0){err++;}
if(letx != 0){err++;}
if(lety != 0){err++;}
if(letz != 0){err++;}
  
  if (s.size() > 0){
if (s[s.size()-1] == part1[part1.size()-1]){endn++;}
if (s[s.size()-1] == part2[part2.size()-1]){endn++;}
  }
  
  if (err == 0) p3 = true;
  if (part11.size() == 0){ p1 = true; }
  if (part22.size() == 0){ p2 = true; }
  if (endn > 0) { p4 = true;}
  
  cout << endn;
  if (p1 == true && p2 == true ){
    if (p3 == true  && p4 == true )anz = true;}
    return anz;
