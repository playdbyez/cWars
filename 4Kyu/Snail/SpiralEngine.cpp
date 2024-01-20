vector<std::vector<int>> snail_map = {{1,2,3,4}, {12,13,14,5}, {11,16,15,6}, {10,9,8,7}};        //Map to Iterate through
int spath = 0 ;                                                                                   //Output vector must match the total size of snail_map


size_t dr =  snail_map.size()-1;       // delimiter for DownRight
size_t ul = 0;                         // delimiter for UpperLeft
size_t ur = snail_map[0].size() -1;    // delimiter for UpperRight
size_t dl = ul;                        // delimiter for DownLeft
int out  = 0;                          // delimiter to terminate double loop
        int cari = 0;                  // marker for position of I
        int carj= 0;                   // marker for position of J
int totalsize = 0;                     // total size of snail_map
  
  for (size_t i = 0; i < snail_map.size(); i++){
    for (size_t j = 0; j <snail_map[0].size(); j++){ totalsize++;}}

for (size_t i =0; i < snail_map.size(); i++)
    {  if (out == 1) {break;}
         i = ul; 
      for (size_t j =0; j < snail_map[0].size(); j++)
      {
           if ( spath == totalsize){out =1;break;}                                   // condition "out" must be TRUE in order to break out of the loop
          if (spath == 0) {spath++;}                                                // adds first element of snail_map
 
             if (i == ul ){j = carj; 
            while(j < ur ){j++;spath++;                                                         // 
                           if (spath == totalsize){ out =1;break;}}                      // condition "out" only activates if "spath" is of the same size as the whole "snail_map" 
                           ul++;}                                                               // upper left limit goes down one row
            if (j == ur){ carj = j;   
            while(i < dr ){ i++; spath++;    
                           if ( spath == totalsize){out =1;break;}}                     // checks for fullfilment of condition "out"
                           ur--;}                                                              // upper right limit goes back one column
            
            if (i == dr) {cari = i; j = carj; 
            while(j > dl ){ j--;spath++;    
                           if ( spath == totalsize){out =1;break;}} dr--;}              // checks for fullfilment of condition "out"
            
            if (j == dl){ carj = j; i = cari;
            while(i > ul ){ i--;spath++;   
                           if (spath == totalsize){out =1;break;} } dl = ul; }         // checks for fullfilment of condition "out"                         
      }
    }

if ( spath == totalsize) {cout << spath << " is equal to " << totalsize <<endl;}
