#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main () {
string in = "So you really wanna know Double double So you really wannna know about freakin' Double double So you really wanna know Double double So you really wannna know about freakin' Double double Bangin bones on roland Jungle rottin Chicken skeletal system bombin Unidentified genre abductor Hit it from the back Formula fucker Hooded executor of Cookie cutter Can't wait ta pull dat trigger shut gunner So you really wanna know Cock the hammer Droppin thunder Double helix stopper under Influence of dat Head knock what a O fuckin g, whata uh O fuckin g, fuck it up Bitch you dont know me Run it blood ride reel ta reel low key Hows it feel, feel, feel, easy Make it bloody, make it bloody Ain't really nothin else I see any more Gone in the cause Im bleeding for Double helix Live in a trance can't see you Dont want to anyway anywhere Whatd you say forgot you were even there Head float astray Clear the air Be back when you think im gone Blue jay way, dont belong Double helix phoenix From beyond So you really wanna know how I freak it Rorschach ink blot In the street Skid row mark Show me the beast Im the lust, you can't hide That balled up, fist gut inside Strapped ta, suicide Missions set off With so much pride You can see it In a dead mans eyes So you really wanna know No maps wit directions No answers, just questions Second guessing everything you swore was so can't Tell you what ta do But I'll tell you why I threw All the rules out da window And took an oath to be true Wit da one and only view A man can ever truly know (know) So you really wanna know So you really wanna know how I freak it Double helix Been there and back 'Nuff tracks I am The rail to the road We run like scam Drop it on the one And its on like damn Well I never thought Uh huh, oh yeah Like I didn't know Wake up young blood Ain't nobody sleepin And they never was Off the cliff in a blur of black blood and Hoodou hexin guts I thought you heard dem ghetto birds hollarin everytime I bust Swallow it down and lap it up can't do that, I'm a have ta cut Double So you really wanna know So you really wanna know how I freak it Double helix";
 string inn;
vector <int> l1;
string l2;
vector <int> reps;
int inc =1;
int em = 0;
vector <char> who;

  for (size_t c =0; c<in.size(); c++) {inn+=in[c];}
  
  if (inn.empty()){em =0;}



for (size_t a = 0; a<inn.size(); a++){l1.push_back(inn[a]);}

for (size_t a = 0; a<inn.size(); a++){
	if (isupper(inn[a])){l2+=tolower(in[a]);}
	else {l2+=inn[a];}
	}


sort(l2.begin(), l2.end());
for (size_t d = 0; d < l2.size(); d++){ 
	if (l2[d] == l2[d+1]){inc++;}
	if (l2[d] != l2[d+1] || d == l2.size()-1){ if (inc > 1){reps.push_back(inc); inc=1; who.push_back(l2[d]);}}
	
}

em = reps.size();
  cout << "The total ammount of reocurring characters is : "<< em << endl;
  
  for (size_t x = 0; x < who.size(); x ++){cout << "Character ["<< who[x]<< "] repeats " << reps[x] << " times" << endl;}
  
}
