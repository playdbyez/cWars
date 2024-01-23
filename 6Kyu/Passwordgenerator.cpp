#include <string>
#include <random>
#include <iostream>
using namespace std;

int main () {

random_device rd;
string pass;
uniform_int_distribution<int> ups(65 , 90);
uniform_int_distribution<int> low(97 , 122);
uniform_int_distribution<int> nu(48 , 57);


  
  //Random distribution of char and n#
uniform_int_distribution<int> siz(6 , 20);
uniform_int_distribution<int> dist(1,3);
int pox = 0;
size_t len = siz(rd);
  for (size_t i = 0; i < len; i++){
    pox = dist(rd);
   
    if (pox == 1){ pass+= ups(rd);} 
    if (pox == 2){ pass+= low(rd);}
    if (pox == 3){ pass+= nu(rd);} 
}
//Allocating requirement positions
  uniform_int_distribution<int> st(0 , len-1);
  int req [3];
  bool al = 0;
  while (al == false){
    req[0] = rand () % len -  6 + 6;
    req[1] = st(rd);
    req[2] = rand () % len -  6 + 6;
      if (req[0] != req[1] && req[0] != req[2] && req[1] != req[2]){al = true;}  }
   int n = sizeof(req) / sizeof(req[0]);
  sort (req, req + n);
                                
 //Ensuring requirments
  // Needs randomization in between (0, 1, 2) provided by next permutation
  pass[req[2]] = ups(rd);
  pass[req[1]] = nu(rd);
  pass[req[0]] = low(rd);
  
  cout << pass << endl;

  
}
