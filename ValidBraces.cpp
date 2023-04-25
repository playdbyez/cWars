#include <iostream>
#include <string>

using namespace std;

int main()
{

bool ans1 =false;
bool ans2 =false;
bool ans3 =false;
bool anz = false;
string braces1 = "[{{}()}]";
string braces2 = "[({)}]";

const char *tkp = "}";
const char *tkb = ")";
const char *tks = "]";


const char *tp = "{";
const char *tb = "(";
const char *ts = "[";


for(int k = 0; k < braces1.size(); ++k)
{
int odd = (k & 2) ==0;

/*
char one = braces1[k] == braces1[k+1];
char two = braces1[k] == braces1[odd];
char three = braces1[odd++] == braces1[odd];
*/

				/*
				if( braces1[k] == braces1[k+1]){ans1 = true;
				if( braces1[k] == braces1[odd]){ans2 = true;}
				if( braces1[odd++] == braces1[odd]){ans3 = true;}
				if (ans1 == true && ans2 == true && ans3 == true){anz =true;}
												}
				*/

	
				if( braces2[k] == braces2[k+1]){ans1 = true;
				if( braces2[k] == braces2[odd]){ans2 = true;}
				if( braces2[odd++] == braces2[odd]){ans3 = true;}
				if (ans1 == true && ans2 == true && ans3 == true){anz =true;}
												}



/*
//next to eachother ()
if( braces1[k] == *tb && braces1[k+1] == *tkb ){cout << braces1[k]<< braces1[k+1] ;}
//next to eachother []
if( braces1[k] == *ts && braces1[k+1] == *tks ){cout << braces1[k]<< braces1[k+1] ;}
//next to eachother {}
if( braces1[k] == *tp && braces1[k+1] == *tkp ){cout << braces1[k]<< braces1[k+1] ;}
*/

} 


cout << "\n"<< anz << "\n";
return 0;
}
