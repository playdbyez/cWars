#include <string>
#include <random>
#include <iostream>
using namespace std;

int main () {

random_device rd;
uniform_int_distribution<int> dist(1,3);
uniform_int_distribution<int> ups(65 , 90);
uniform_int_distribution<int> low(97 , 122);
uniform_int_distribution<int> nub(48 , 57);
  string pass;
  
  bool lc = false;
  bool uc = false;
  bool nu = false;
  
  int min = 6;
  int max = 20;
  int range = max - min;
 
  int pox = 0;
  
size_t num = rand() %range + min;
  
  for (size_t i = 0; i < num; i++){
    pox = dist(rd);
   
    if (pox == 1){ pass+= ups(rd);} 
    if (pox == 2){ pass+= low(rd);}
    if (pox == 3){ pass+= nub(rd);} 
                                
  }
  
  
            for (int j = 0; j < pass.size(); j++)
            {
             if (islower(pass[j])) {lc = true;}
             if (isupper(pass[j])) {uc = true;}
             if (isdigit(pass[j])) {nu = true;}
              
                            if (j == pass.size()-1){ if (lc == false){cout << "LL" <<endl;pass[rand() %6 +1 ] = rand() % (122 - 97) + 97;}
                                                     if (uc == false){cout << "Uc" <<endl;pass[rand() %9 +1] = rand() % (90 - 65) + 65;}
                                                     if (nu == false){cout << "NU" <<endl;pass[rand() %8 +1 ] = rand() % (57 - 48) +48;}
                                                 }

            }
  cout << pass << endl;

  
}
