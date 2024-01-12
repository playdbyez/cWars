#include <string>
#include <random>
#include <iostream>
using namespace std;

std::string password_gen() {

  string pass;
  
  bool lc = false;
  bool uc = false;
  bool nu = false;
  
  int min = 6;
  int max = 20;
  int range = max - min;
  
int ups = 90 - 65 ;
int low = 122 - 97 ;
int nub = 57 - 48 ;
  int pox = 0;
size_t num = rand() %range + min;
  
  for (size_t i = 0; i < num; i++){
    pox = rand() % 4 +1;
   
    if (pox == 1){ pass+= rand() % ups + 65;} 
    if (pox == 2){ pass+= rand() % low + 97;}
    if (pox == 3){ pass+= rand() % nub + 48;} 
                                
  }
  
  
            for (int j = 0; j < pass.size(); j++)
            {
             if (islower(pass[j])) {lc = true;}
             if (isupper(pass[j])) {uc = true;}
             if (isdigit(pass[j])) {nu = true;}
              
                            if (j == pass.size()-1){ if (lc == false){pass[rand() %6  ] = rand() % (122 - 97) + 97;}
                                                     if (uc == false){pass[rand() %6 ] = rand() % (90 - 65) + 65;}
                                                     if (nu == false){pass[rand() %6 ] = rand() % (57 - 48) +48;}
                                                 }

            }
  cout << pass << endl;
return pass;
  
}
