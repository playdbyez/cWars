#include <algorithm>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> get_pins(std::string observed) 
{
    vector <string> sg;
    vector <string> db;
    vector <string> tl;
    vector <string> tk;
    vector <string> ci;
    vector <string> sz;
    vector <string> sd;
    vector <string> ei;
    vector <string> rs;
    string bitmask;
    
    string getp = observed;
    
    int si = getp.size();
    
  if (si == 1){
	if (getp[0] == '0'){sg.push_back("0"); sg.push_back("8");}
	if (getp[0] == '1'){sg.push_back("1"); sg.push_back("2");sg.push_back("4");}
	if (getp[0] == '2'){sg.push_back("1"); sg.push_back("2");sg.push_back("3");sg.push_back("5");}
	if (getp[0] == '3'){sg.push_back("2"); sg.push_back("3");sg.push_back("6");}
	if (getp[0] == '4'){sg.push_back("1"); sg.push_back("4");sg.push_back("5");sg.push_back("7");}
	if (getp[0] == '5'){sg.push_back("6"); sg.push_back("2");sg.push_back("4");sg.push_back("5"); sg.push_back("8");}
	if (getp[0] == '6'){sg.push_back("3"); sg.push_back("5");sg.push_back("6");sg.push_back("9");}
	if (getp[0] == '7'){sg.push_back("4"); sg.push_back("7");sg.push_back("8");}
	if (getp[0] == '8'){sg.push_back("0"); sg.push_back("5");sg.push_back("9");sg.push_back("7"); sg.push_back("8");}
	if (getp[0] == '9'){sg.push_back("6");sg.push_back("8");sg.push_back("9");}	  
return sg; 

}



if (si >= 1){
	if (getp[0] == '0'){sg.push_back("0"); sg.push_back("8");}
	if (getp[0] == '1'){sg.push_back("1"); sg.push_back("2");sg.push_back("4");}
	if (getp[0] == '2'){sg.push_back("1"); sg.push_back("2");sg.push_back("3");sg.push_back("5");}
	if (getp[0] == '3'){sg.push_back("2"); sg.push_back("3");sg.push_back("6");}
	if (getp[0] == '4'){sg.push_back("1"); sg.push_back("4");sg.push_back("5");sg.push_back("7");}
	if (getp[0] == '5'){sg.push_back("6"); sg.push_back("2");sg.push_back("4");sg.push_back("5"); sg.push_back("8");}
	if (getp[0] == '6'){sg.push_back("3"); sg.push_back("5");sg.push_back("6");sg.push_back("9");}
	if (getp[0] == '7'){sg.push_back("4"); sg.push_back("7");sg.push_back("8");}
	if (getp[0] == '8'){sg.push_back("0"); sg.push_back("5");sg.push_back("9");sg.push_back("7"); sg.push_back("8");}
	if (getp[0] == '9'){sg.push_back("6");sg.push_back("8");sg.push_back("9");}	  
}
if (si >= 2){
	if (getp[1] == '0'){db.push_back("0"); db.push_back("8");}
	if (getp[1] == '1'){db.push_back("1"); db.push_back("2");db.push_back("4");}
	if (getp[1] == '2'){db.push_back("1"); db.push_back("2");db.push_back("3");db.push_back("5");}
	if (getp[1] == '3'){db.push_back("2"); db.push_back("3");db.push_back("6");}
	if (getp[1] == '4'){db.push_back("1"); db.push_back("4");db.push_back("5");db.push_back("7");}
	if (getp[1] == '5'){db.push_back("6"); db.push_back("2");db.push_back("4");db.push_back("5"); db.push_back("8");}
	if (getp[1] == '6'){db.push_back("3"); db.push_back("5");db.push_back("6");db.push_back("9");}
	if (getp[1] == '7'){db.push_back("4"); db.push_back("7");db.push_back("8");}
	if (getp[1] == '8'){db.push_back("0"); db.push_back("5");db.push_back("9");db.push_back("7"); db.push_back("8");}
	if (getp[1] == '9'){db.push_back("6"); db.push_back("8");db.push_back("9");}							
}
if (si >= 3){
    if (getp[2] == '0'){tl.push_back("0"); tl.push_back("8");}
	if (getp[2] == '1'){tl.push_back("1"); tl.push_back("2");tl.push_back("4");}
	if (getp[2] == '2'){tl.push_back("1"); tl.push_back("2");tl.push_back("3");tl.push_back("5");}
	if (getp[2] == '3'){tl.push_back("2"); tl.push_back("3");tl.push_back("6");}
	if (getp[2] == '4'){tl.push_back("1"); tl.push_back("4");tl.push_back("5");tl.push_back("7");}
	if (getp[2] == '5'){tl.push_back("6"); tl.push_back("2");tl.push_back("4");tl.push_back("5"); tl.push_back("8");}
	if (getp[2] == '6'){tl.push_back("3"); tl.push_back("5");tl.push_back("6");tl.push_back("9");}
	if (getp[2] == '7'){tl.push_back("4"); tl.push_back("7");tl.push_back("8");}
	if (getp[2] == '8'){tl.push_back("0"); tl.push_back("5");tl.push_back("9");tl.push_back("7"); tl.push_back("8");}
	if (getp[2] == '9'){tl.push_back("6"); tl.push_back("8");tl.push_back("9");}     
}

if (si >= 4){
  if (getp[3] == '0'){tk.push_back("0"); tk.push_back("8");}
	if (getp[3] == '1'){tk.push_back("1"); tk.push_back("2");tk.push_back("4");}
	if (getp[3] == '2'){tk.push_back("1"); tk.push_back("2");tk.push_back("3");tk.push_back("5");}
	if (getp[3] == '3'){tk.push_back("2"); tk.push_back("3");tk.push_back("6");}
	if (getp[3] == '4'){tk.push_back("1"); tk.push_back("4");tk.push_back("5");tk.push_back("7");}
	if (getp[3] == '5'){tk.push_back("6"); tk.push_back("2");tk.push_back("4");tk.push_back("5"); tk.push_back("8");}
	if (getp[3] == '6'){tk.push_back("3"); tk.push_back("5");tk.push_back("6");tk.push_back("9");}
	if (getp[3] == '7'){tk.push_back("4"); tk.push_back("7");tk.push_back("8");}
	if (getp[3] == '8'){tk.push_back("0"); tk.push_back("5");tk.push_back("9");tk.push_back("7"); tk.push_back("8");}
	if (getp[3] == '9'){tk.push_back("6"); tk.push_back("8");tk.push_back("9");}     
}
  
  if (si >= 5){
  if (getp[4] == '0'){ci.push_back("0"); ci.push_back("8");}
	if (getp[4] == '1'){ci.push_back("1"); ci.push_back("2");ci.push_back("4");}
	if (getp[4] == '2'){ci.push_back("1"); ci.push_back("2");ci.push_back("3");ci.push_back("5");}
	if (getp[4] == '3'){ci.push_back("2"); ci.push_back("3");ci.push_back("6");}
	if (getp[4] == '4'){ci.push_back("1"); ci.push_back("4");ci.push_back("5");ci.push_back("7");}
	if (getp[4] == '5'){ci.push_back("6"); ci.push_back("2");ci.push_back("4");ci.push_back("5"); ci.push_back("8");}
	if (getp[4] == '6'){ci.push_back("3"); ci.push_back("5");ci.push_back("6");ci.push_back("9");}
	if (getp[4] == '7'){ci.push_back("4"); ci.push_back("7");ci.push_back("8");}
	if (getp[4] == '8'){ci.push_back("0"); ci.push_back("5");ci.push_back("9");ci.push_back("7"); ci.push_back("8");}
	if (getp[4] == '9'){ci.push_back("6"); ci.push_back("8");ci.push_back("9");}     
}
  if (si >= 6){
  if (getp[5] == '0'){sz.push_back("0"); sz.push_back("8");}
	if (getp[5] == '1'){sz.push_back("1"); sz.push_back("2");sz.push_back("4");}
	if (getp[5] == '2'){sz.push_back("1"); sz.push_back("2");sz.push_back("3");sz.push_back("5");}
	if (getp[5] == '3'){sz.push_back("2"); sz.push_back("3");sz.push_back("6");}
	if (getp[5] == '4'){sz.push_back("1"); sz.push_back("4");sz.push_back("5");sz.push_back("7");}
	if (getp[5] == '5'){sz.push_back("6"); sz.push_back("2");sz.push_back("4");sz.push_back("5"); sz.push_back("8");}
	if (getp[5] == '6'){sz.push_back("3"); sz.push_back("5");sz.push_back("6");sz.push_back("9");}
	if (getp[5] == '7'){sz.push_back("4"); sz.push_back("7");sz.push_back("8");}
	if (getp[5] == '8'){sz.push_back("0"); sz.push_back("5");sz.push_back("9");sz.push_back("7"); sz.push_back("8");}
	if (getp[5] == '9'){sz.push_back("6"); sz.push_back("8");sz.push_back("9");}     
}
 if (si >= 7){
  if (getp[6] == '0'){sd.push_back("0"); sd.push_back("8");}
	if (getp[6] == '1'){sd.push_back("1"); sd.push_back("2");sd.push_back("4");}
	if (getp[6] == '2'){sd.push_back("1"); sd.push_back("2");sd.push_back("3");sd.push_back("5");}
	if (getp[6] == '3'){sd.push_back("2"); sd.push_back("3");sd.push_back("6");}
	if (getp[6] == '4'){sd.push_back("1"); sd.push_back("4");sd.push_back("5");sd.push_back("7");}
	if (getp[6] == '5'){sd.push_back("6"); sd.push_back("2");sd.push_back("4");sd.push_back("5"); sd.push_back("8");}
	if (getp[6] == '6'){sd.push_back("3"); sd.push_back("5");sd.push_back("6");sd.push_back("9");}
	if (getp[6] == '7'){sd.push_back("4"); sd.push_back("7");sd.push_back("8");}
	if (getp[6] == '8'){sd.push_back("0"); sd.push_back("5");sd.push_back("9");sd.push_back("7"); sd.push_back("8");}
	if (getp[6] == '9'){sd.push_back("6"); sd.push_back("8");sd.push_back("9");}     
}
 if (si >= 8){
  if (getp[7] == '0'){ei.push_back("0"); ei.push_back("8");}
	if (getp[7] == '1'){ei.push_back("1"); ei.push_back("2");ei.push_back("4");}
	if (getp[7] == '2'){ei.push_back("1"); ei.push_back("2");ei.push_back("3");ei.push_back("5");}
	if (getp[7] == '3'){ei.push_back("2"); ei.push_back("3");ei.push_back("6");}
	if (getp[7] == '4'){ei.push_back("1"); ei.push_back("4");ei.push_back("5");ei.push_back("7");}
	if (getp[7] == '5'){ei.push_back("6"); ei.push_back("2");ei.push_back("4");ei.push_back("5"); ei.push_back("8");}
	if (getp[7] == '6'){ei.push_back("3"); ei.push_back("5");ei.push_back("6");ei.push_back("9");}
	if (getp[7] == '7'){ei.push_back("4"); ei.push_back("7");ei.push_back("8");}
	if (getp[7] == '8'){ei.push_back("0"); ei.push_back("5");ei.push_back("9");ei.push_back("7"); ei.push_back("8");}
	if (getp[7] == '9'){ei.push_back("6"); ei.push_back("8");ei.push_back("9");}     
}
  
  

if (si ==2)
{for (size_t n =0; n< sg.size() ; ++n){ 
      for (size_t m =0; m< db.size() ; ++m){
      bitmask += sg[n];
      bitmask += db[m];
      rs.push_back(bitmask);
      bitmask = "";
      }
      bitmask = "";
    }
}
  
  if (si ==3)
{for (size_t n =0; n< sg.size() ; ++n){ 
      for (size_t m =0; m< db.size() ; ++m){
        for (size_t o =0; o< tl.size() ; ++o){
      bitmask += sg[n];
      bitmask += db[m];
      bitmask += tl[o];
      rs.push_back(bitmask);
      bitmask = "";
      }
      bitmask = "";
    }
  bitmask ="";
  }
}

  
    if (si ==4)
{for (size_t n =0; n< sg.size() ; ++n){ 
      for (size_t m =0; m< db.size() ; ++m){
        for (size_t o =0; o< tl.size() ; ++o){
          for (size_t ss =0; ss< tk.size() ; ++ss){
      bitmask += sg[n];
      bitmask += db[m];
      bitmask += tl[o];
      bitmask += tk[ss];
      rs.push_back(bitmask);
      bitmask = "";
      }
      bitmask = "";
    }
  bitmask ="";
  }
  bitmask ="";
 }
}

   if (si ==5)
{for (size_t n =0; n< sg.size() ; ++n){ 
      for (size_t m =0; m< db.size() ; ++m){
        for (size_t o =0; o< tl.size() ; ++o){
          for (size_t ss =0; ss< tk.size() ; ++ss){
            for (size_t sn =0; sn< ci.size() ; ++sn){
      bitmask += sg[n];
      bitmask += db[m];
      bitmask += tl[o];
      bitmask += tk[ss];
      bitmask += ci[sn];
      rs.push_back(bitmask);
      bitmask = "";
      }
      bitmask = "";
     }
  bitmask ="";
   }
  bitmask ="";
  }
  bitmask = "";
 }
}  

 if (si ==6)
{for (size_t n =0; n< sg.size() ; ++n){ 
      for (size_t m =0; m< db.size() ; ++m){
        for (size_t o =0; o< tl.size() ; ++o){
          for (size_t ss =0; ss< tk.size() ; ++ss){
            for (size_t sn =0; sn< ci.size() ; ++sn){
              for (size_t sk =0; sk< sz.size() ; ++sk){
      bitmask += sg[n];
      bitmask += db[m];
      bitmask += tl[o];
      bitmask += tk[ss];
      bitmask += ci[sn];
      bitmask += sz[sk];
      rs.push_back(bitmask);
      bitmask = "";
       }
      bitmask = "";
      }
  bitmask ="";
    }
  bitmask ="";
   }
  bitmask = "";
  }
 bitmask = "";
 }
}  

   if (si ==7)
{for (size_t n =0; n< sg.size() ; ++n){ 
      for (size_t m =0; m< db.size() ; ++m){
        for (size_t o =0; o< tl.size() ; ++o){
          for (size_t ss =0; ss< tk.size() ; ++ss){
            for (size_t sn =0; sn< ci.size() ; ++sn){
              for (size_t sk =0; sk< sz.size() ; ++sk){
                for (size_t sl =0; sl< sd.size() ; ++sl){
      bitmask += sg[n];
      bitmask += db[m];
      bitmask += tl[o];
      bitmask += tk[ss];
      bitmask += ci[sn];
      bitmask += sz[sk];
      bitmask += sd[sl];
      rs.push_back(bitmask);
      bitmask = "";
        }
      bitmask = "";
       }
  bitmask ="";
     }
  bitmask ="";
    }
  bitmask = "";
   }
 bitmask = "";
  }
 bitmask = "";
 }
}  

  if (si ==7)
{for (size_t n =0; n< sg.size() ; ++n){ 
      for (size_t m =0; m< db.size() ; ++m){
        for (size_t o =0; o< tl.size() ; ++o){
          for (size_t ss =0; ss< tk.size() ; ++ss){
            for (size_t sn =0; sn< ci.size() ; ++sn){
              for (size_t sk =0; sk< sz.size() ; ++sk){
                for (size_t sl =0; sl< sd.size() ; ++sl){
                  for (size_t sg =0; sg< ei.size() ; ++sg){
      bitmask += sg[n];
      bitmask += db[m];
      bitmask += tl[o];
      bitmask += tk[ss];
      bitmask += ci[sn];
      bitmask += sz[sk];
      bitmask += sd[sl];
      bitmask += ei[sg];
      rs.push_back(bitmask);
      bitmask = "";
         }
      bitmask = "";
        }
  bitmask ="";
      }
  bitmask ="";
     }
  bitmask = "";
    }
 bitmask = "";
   }
 bitmask = "";
  }
 bitmask = "";
 }
}

return rs;  
}
