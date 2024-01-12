#include <string>
#include <random>
#include <iostream>
using namespace std;

std::string password_gen() {

  string pass;
  
  
  
  int min = 6;
  int max = 20;
  int range = max - min;
  
int ups = 90 - 65 ;
int low = 122 - 97 ;
int nub = 57 - 48 ;
  int pox = 0;
size_t num = rand() %range + min;
  
  for (size_t i = 0; i < num; i++){
    pox = rand() % 3 +1;
   
    if (pox == 1){ pass+= rand() % ups + 65;} 
    if (pox == 2){ pass+= rand() % low + 97;}
    if (pox == 3){ pass+= rand() % nub + 48;} 
                                
  }
  cout << pass << endl;
  
  //A function that checks whats missing and adds it at the cost of a a random character already in the string
  return pass;
  
}
