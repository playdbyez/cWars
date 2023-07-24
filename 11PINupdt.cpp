#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main () {

//string getp = get_pins;

string observed = "889";

string getp = observed;

string sngl;
vector <string> sg ;
vector <string> gg;
  vector <int> gb;



int si = getp.size();
int sil = sngl.size();
int k =0;

for (int a = 0; a < si ; ++a){
	if (getp[a] == '0'){sngl+="0"; sngl+="8";}
	if (getp[a] == '1'){sngl+="1"; sngl+="2";sngl+="4";}
	if (getp[a] == '2'){sngl+="1"; sngl+="3";sngl+="5"; sngl+="2";}
	if (getp[a] == '3'){sngl+="6"; sngl+="2";sngl+="3";}
	if (getp[a] == '4'){sngl+="7"; sngl+="1";sngl+="5";sngl+="4";}
	if (getp[a] == '5'){sngl+="6"; sngl+="4";sngl+="5";sngl+="8"; sngl+="2";}
	if (getp[a] == '6'){sngl+="3"; sngl+="5";sngl+="6";sngl+="9";}
	if (getp[a] == '7'){sngl+="8"; sngl+="7";sngl+="4";}
	if (getp[a] == '8'){sngl+="8"; sngl+="5";sngl+="9";sngl+="7"; sngl+="0";}
	if (getp[a] == '9'){sngl+="6"; sngl+="8";sngl+="9";}						}


if (si == 1)
{

  for (int a = 0; a < si ; ++a){
	if (getp[a] == '0'){sg.push_back("0"); sg.push_back("8");}
	if (getp[a] == '1'){sg.push_back("1"); sg.push_back("2");sg.push_back("4");}
	if (getp[a] == '2'){sg.push_back("1"); sg.push_back("3");sg.push_back("5");sg.push_back("2");}
	if (getp[a] == '3'){sg.push_back("6"); sg.push_back("2");sg.push_back("3");}
	if (getp[a] == '4'){sg.push_back("7"); sg.push_back("1");sg.push_back("5");sg.push_back("4");}
	if (getp[a] == '5'){sg.push_back("6"); sg.push_back("4");sg.push_back("5");sg.push_back("8"); sg.push_back("2");}
	if (getp[a] == '6'){sg.push_back("3"); sg.push_back("5");sg.push_back("6");sg.push_back("9");}
	if (getp[a] == '7'){sg.push_back("8"); sg.push_back("7");sg.push_back("4");}
	if (getp[a] == '8'){sg.push_back("8"); sg.push_back("5");sg.push_back("9");sg.push_back("7"); sg.push_back("0");}
	if (getp[a] == '9'){sg.push_back("6");sg.push_back("8");sg.push_back("9");}						}
sort(sg.begin(), sg.end());

//return sg;
}



//more than 1
sort(sngl.begin(), sngl.end());

string db1(si,1);
db1.resize(sil,0);

do{
	
	for (int xx =0; xx<si; ++xx){
	db1+= sngl[xx];				
       
if(si>=2){
	if (getp[0] == '0'){if (db1[0] != '0' && db1[0] != '8'){db1[0] = '@';}}
	if (getp[0] == '1'){if (db1[0] != '2' && db1[0] != '1' && db1[0] != '4'){db1[0] = '@';}}
	if (getp[0] == '2'){if (db1[0] != '1' && db1[0] != '3' && db1[0] != '5' && db1[0] != '2'){db1[0] = '@';}}
	if (getp[0] == '3'){if (db1[0] != '6' && db1[0] != '2' && db1[0] != '3'){db1[0] = '@';}}
	if (getp[0] == '4'){if (db1[0] != '7' && db1[0] != '1' && db1[0] != '5' && db1[0] != '4'){db1[0] = '@';}}
	if (getp[0] == '5'){if (db1[0] != '2' && db1[0] != '4' && db1[0] != '5' && db1[0] != '6' && db1[0] != '8'){db1[0] = '@';}}
	if (getp[0] == '6'){if (db1[0] != '5' && db1[0] != '3' && db1[0] != '6' && db1[0] != '9'){db1[0] = '@';}}
	if (getp[0] == '7'){if (db1[0] != '8' && db1[0] != '7' && db1[0] != '4'){db1[0] = '@';}}
	if (getp[0] == '8'){if (db1[0] != '8' && db1[0] != '7' && db1[0] != '5' && db1[0] != '0' && db1[0] != '9'){db1[0] = '@';}}
	if (getp[0] == '9'){if (db1[0] != '8' &&  db1[0] != '6' && db1[0] != '9'){db1[0] = '@';}}	
		
		
	if (getp[1] == '0'){if (db1[1] != '0' && db1[1] != '8'){db1[1] = '@';}}
	if (getp[1] == '1'){if (db1[1] != '2' && db1[1] != '1' && db1[1] != '4'){db1[1] = '@';}}
	if (getp[1] == '2'){if (db1[1] != '1' && db1[1] != '3' && db1[1] != '5' && db1[1] != '2'){db1[1] = '@';}}
	if (getp[1] == '3'){if (db1[1] != '6' && db1[1] != '2' && db1[1] != '3'){db1[1] = '@';}}
	if (getp[1] == '4'){if (db1[1] != '7' && db1[1] != '1' && db1[1] != '5' && db1[1] != '4'){db1[1] = '@';}}
	if (getp[1] == '5'){if (db1[1] != '2' && db1[1] != '4' && db1[1] != '5' && db1[1] != '6' && db1[1] != '8'){db1[1] = '@';}}
	if (getp[1] == '6'){if (db1[1] != '5' && db1[1] != '3' && db1[1] != '6' && db1[1] != '9'){db1[1] = '@';}}
	if (getp[1] == '7'){if (db1[1] != '8' && db1[1] != '7' && db1[1] != '4'){db1[1] = '@';}}
	if (getp[1] == '8'){if (db1[1] != '8' && db1[1] != '7' && db1[1] != '5' && db1[1] != '0' && db1[1] != '9'){db1[1] = '@';}}
	if (getp[1] == '9'){if (db1[1] != '8' && db1[1] != '6' && db1[1] != '9'){db1[1] = '@';}}		

if(si>=3){
	if (getp[2] == '0'){if (db1[2] != '0' && db1[2] != '8'){db1[2] = '@';}}
	if (getp[2] == '1'){if (db1[2] != '2' && db1[2] != '1' && db1[2] != '4'){db1[2] = '@';}}
	if (getp[2] == '2'){if (db1[2] != '1' && db1[2] != '3' && db1[2] != '5' && db1[2] != '2'){db1[2] = '@';}}
	if (getp[2] == '3'){if (db1[2] != '6' && db1[2] != '2' && db1[2] != '3'){db1[2] = '@';}}
	if (getp[2] == '4'){if (db1[2] != '7' && db1[2] != '1' && db1[2] != '5' && db1[2] != '4'){db1[2] = '@';}}
	if (getp[2] == '5'){if (db1[2] != '2' && db1[2] != '4' && db1[2] != '5' && db1[2] != '6' && db1[2] != '8'){db1[2] = '@';}}
	if (getp[2] == '6'){if (db1[2] != '5' && db1[2] != '3' && db1[2] != '6' && db1[2] != '9'){db1[2] = '@';}}
	if (getp[2] == '7'){if (db1[2] != '8' && db1[2] != '7' && db1[2] != '4'){db1[2] = '@';}}
	if (getp[2] == '8'){if (db1[2] != '8' && db1[2] != '7' && db1[2] != '5' && db1[2] != '0' && db1[2] != '9'){db1[2] = '@';}}
	if (getp[2] == '9'){if (db1[2] != '8' &&  db1[2] != '6' && db1[2] != '9'){db1[2] = '@';}}

if(si>=4){
	if (getp[3] == '0'){if (db1[3] != '0' && db1[3] != '8'){db1[3] = '@';}}
	if (getp[3] == '1'){if (db1[3] != '2' && db1[3] != '1' && db1[3] != '4'){db1[3] = '@';}}
	if (getp[3] == '2'){if (db1[3] != '1' && db1[3] != '3' && db1[3] != '5' && db1[3] != '2'){db1[3] = '@';}}
	if (getp[3] == '3'){if (db1[3] != '6' && db1[3] != '2' && db1[3] != '3'){db1[3] = '@';}}
	if (getp[3] == '4'){if (db1[3] != '7' && db1[3] != '1' && db1[3] != '5' && db1[3] != '4'){db1[3] = '@';}}
	if (getp[3] == '5'){if (db1[3] != '2' && db1[3] != '4' && db1[3] != '5' && db1[3] != '6' && db1[3] != '8'){db1[3] = '@';}}
	if (getp[3] == '6'){if (db1[3] != '5' && db1[3] != '3' && db1[3] != '6' && db1[3] != '9'){db1[3] = '@';}}
	if (getp[3] == '7'){if (db1[3] != '8' && db1[3] != '7' && db1[3] != '4'){db1[3] = '@';}}
	if (getp[3] == '8'){if (db1[3] != '8' && db1[3] != '7' && db1[3] != '5' && db1[3] != '0' && db1[3] != '9'){db1[3] = '@';}}
	if (getp[3] == '9'){if (db1[3] != '8' && db1[3] != '6' && db1[3] != '9'){db1[3] = '@';}}
   }
  }
 }
}   

if (find(db1.begin(), db1.end(), '@') == db1.end()){ 
	
		if (find(gg.begin(),gg.end(),db1) == gg.end()){gg.push_back(db1);}}
 
 db1 = "";
 }while(next_permutation(sngl.begin(),sngl.end()));


vector<string> sgg;
 for (size_t k = 0; k < gg.size(); ++k)
 {sgg.push_back( gg[k]);}      
  sort(sgg.begin(), sgg.end());
  
  

//for (size_t k = 0; k < gg.size(); ++k)
// {cout << sgg[k]<< " ";}
  
  //return sgg;
}
