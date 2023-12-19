#include<iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
string name= "Today is longer than elongated but nonetheless it is Something and habitual.";
string copek = name;
vector<string> dbl;
int spc = -1; 
int gs = 0;
string fin ;
vector <int> lnts;
vector <int> pos;
vector <int> tar;
vector <char> wrds;
                vector <int> fst;
                vector <int> lst;


//determining location of all chars 
for (int g = 0; g<name.size(); g++)
{
if(isalpha(copek[g])){gs++;}
if (isspace(copek[g])){gs = 0;}
lnts.push_back(gs);
}

//location of all chars
for(int i = 0; i< copek.size(); i++)
{pos.push_back(i);}   

//determining targets
for(int b = 0; b < copek.size(); b++)
{copek[b] = tolower(copek[b]);}
   
for(int i = 0; i < lnts.size(); i++)
{   if (lnts[i] >= 5 ){
copek[i] = toupper(copek[i]);
copek[i-1] = toupper(copek[i-1]);
copek[i-2] = toupper(copek[i-2]);
copek[i-3] = toupper(copek[i-3]);
copek[i-4] = toupper(copek[i-4]);
copek[i-5] = toupper(copek[i-5]);}}

   
for(int c=0; c<copek.size(); c++){
    if(isspace(copek[c])){tar.push_back(spc);}
        if (isupper(copek[c])){tar.push_back(c);}}


//first digits
fst.push_back(tar[0]);
for (int l =0; l<tar.size(); l++)
{if (tar[l] == spc && tar[l+1] != spc ){fst.push_back(tar[l+1]);}}

//last digits
for(int gr =0; gr<tar.size(); gr++)
{if (tar[gr] == spc && tar[gr-1] != spc ){lst.push_back(tar[gr-1]);}}
lst.push_back(tar[tar.size()-1]);


for(int x = 0; x < fst.size(); x++){
    for(int z = 0; z < pos.size(); z++){
        if(fst[x] == pos[z]){reverse(&name[fst[x]], &name[lst[x]+1]);}
                                        }    }
    



//OUTPUTS

cout << name;

cout << "\n";




}
