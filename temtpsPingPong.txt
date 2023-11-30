#include <stdio.h>
#include <string.h>

char * ping_pong(const char * sounds) 
{
  
  unsigned bin =0; 
  unsigned bon =0;

  unsigned game = strlen(sounds);

  int offs[10];
  int nxt = 1;
  int mrk = 0;
  
  for (size_t i = 0; i<game; i++){

    if(sounds[i] == '-' && sounds[i+1] != 'p'){ 
      if (sounds[i+2] != 'i' || sounds[i+1] != 'o'){ 
        if (sounds [i-4] == 'p'){
                                                    offs[nxt] = i; 
                                                    nxt++;
                                                    offs[nxt +1] = '\0';
                                                    //printf("%d ", i);
            }    
          }
        }
      }
 
 int l =0;
 int t =0;
 while (offs[l] != '\0'){
    
      printf("%d ", offs[l]);
      l++;
     }
   return 0;
 }
  
  // Your code here!
 // or "pong"
  



  /*
    
    if (sounds[0] == 'p' && sounds[1] == 'i'){
      if(sounds[i] == '-'){
       
    
    if (sounds[0] == 'p' && sounds[1] == 'o'){
      if(sounds[i] == '-'){
       if (sounds[i+1] != 'p'  && sounds[i-3] == 'i' && sounds[i-4] == 'p'){bon+=1;}
        if (sounds[i+1] != 'p'  && sounds[i-3] == 'o' && sounds[i-4] == 'p'){
        
      }
    }
    
    
    
      
       if (sounds[i+1] != 'p'  && sounds[i-3] == 'i' && sounds[i-4] == 'p'){bon++;}
          
      if (sounds[i+1] != 'p'  && sounds[i-3] == 'o' && sounds[i-4] == 'p'){bin++;}
        }
      }
      */
   
 // if (bon == bin){ printf("TIEBRAKER");
 //   for (size_t j = game; j>0; j--){
 //     if (sounds[j] == 'g'){if (sounds[j-1] == 'n'){if (sounds[j-2] == 'o'){if (sounds[j-3] == 'p'){ bin++;break;}}}}
 //     if (sounds[j] == 'g'){if (sounds[j-1] == 'n'){if (sounds[j-2] == 'i'){if (sounds[j-3] == 'p'){ bon++;break;}}}}
 //   }  
 // }
  
// printf("%d       %d\nping      pong\n", bin,bon);
//  if (bin>bon){return "ping";}
//  if (bon>bin){return "pong";}
  
  //return 0;
  
//}
