#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;



int main ()
{
    string events="9 O 17 O 9 O 12 O 2 O 12 O 9 O 1 O 5 O 12 O 17 O 20 O 16 O 7 O 2 O 8 O 16 O 14 O 3 O 14 O 11 O 16 O 1 O 13 O 8 O 14 O 5 O 12 O 4 O";

int champion =12;
int rac1 =1;
int rac2 =2;
int rac3 =3;
int rac4 =4;
int rac5 =5;
int rac6 =6;
int rac7 =7;
int rac9 =9;
int rac10 =10;
int rac11 =11;
int rac12 =12;
int rac13 =13;
int rac14 =14;
int rac15 =15;
int rac16 =16;
int rac17 =17;
int rac18 =18;
int rac19 =19;
int rac20 =20;

int posit = champion;
   vector <int> sim;
 
 
 
for (size_t l=0; l< events.size(); l++)
  {
        if (!isdigit(events[l]) && isdigit(events[l-1]) && !isdigit(events[l-2])){sim.push_back(events[l-1]-48);}
        if (!isdigit(events[l]) && isdigit(events[l-1]) && isdigit(events[l-2])){sim.push_back(events[l-1]-48 + (events[l-2]-48)*10);}
       if (events[l] == 'O'){ sim.push_back(0);}
       if (events[l] == 'I'){ sim.push_back(99);}
    }
 
 
 for (size_t i=0; i< sim.size(); i++)
  { if (posit > 1){
      if (sim[i] == champion && sim[i+1] == 0 ){posit--;}
      if (sim[i] == champion && sim[i+1] == 99 ){posit = -1; return posit;}
      if (sim[i] != champion && sim[i] == 99){posit--;}
  }
      }
 
 
 
 
 
cout << posit;

}
