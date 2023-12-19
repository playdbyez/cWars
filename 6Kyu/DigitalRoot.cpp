#include<string>
#include<vector>
using namespace std;
int digital_root(int n)
{
  
  int n = 992;
   string fir;
  vector<int> sum;
  int len = to_string(n).length();
    int lib = len;
        int acc=0;

fir+=to_string(n);


for (size_t i =0; i<lib; i++)
{
    sum.push_back(fir[i]-48);}

while (lib != 1)
{
acc=0;
for (size_t j =0; j<sum.size(); j++)
  {acc+=sum[j];}

sum.clear();

fir=to_string(acc);
lib=fir.length();

for (size_t i =0; i<lib; i++)
{
    sum.push_back(fir[i]-48);}
}
   
cout<< acc;
 
}
