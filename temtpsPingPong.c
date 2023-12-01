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


RECEND


#include <string.h>
#include <stdio.h>

int main()
{
    
    //pong-ping-pong-ping-pong-ping-pong-ping-pang-pong-ping-pong-ping-pong-ping-pong-ping-pong-ping-slap-klak-pong-ping-pong-ping-pong-ping-pong-funk-ding-plop-ping-pong-ping-pong-ping-pong-ping-pong-ping-pong-clak-ding
    //Pong
    
    
    //ping-pong-ding-pong-ping-donk-ping-thud
    //Pong
    
    //pong-ping-bink-pong-ping-donk-pong-ping-pong-bangping-pong-bink-ping-pong-donk-pong-ping-pong-ping-bangping-pong-aaaa-ping-pong-ping-aaaapong-ping-pong-ping-aaaa-pong-ping-pong-aaaa
    //Pong
 
 
 
 char *sounds = "pong-ping-pong-ping-pong-ping-pong-ping-pang-pong-ping-pong-ping-pong-ping-pong-ping-pong-ping-slap-klak-pong-ping-pong-ping-pong-ping-pong-funk-ding-plop-ping-pong-ping-pong-ping-pong-ping-pong-ping-pong-clak-ding";
 unsigned bin =0; 
  unsigned bon =0;

  unsigned game = strlen(sounds);

  int offs[10];
  int nxt = 0;
  
  char dip[4];
  char song[4];
  
  int q = 0;
  int b = 0;
  int d = 0;
  int z = 0;
  
  
  
  
  for (int i = 0; i<game; i++){

    if(sounds[i] == '-' && sounds[i+2] != 'i' && sounds[i+2] != 'o' ){ 
      if (sounds[i+2] != 'i' && sounds[i+2] != 'o'){ 
        if (sounds [i-4] == 'p' && sounds[i-3] =='i' || sounds[i-3] =='o' ){
                                                    offs[nxt] = i; 
                                                    nxt++;
                                                    offs[nxt +1] = '\0';
                                                    printf("%d ", i);
            }    
          }
        }
      }
 printf("\n\n");
  int l =0;
 int t =0;
 while (offs[l] != '\0'){
     for (int k = t; k<offs[l];k++){
         
         if(sounds[t+1] == 'o' && sounds[t] == 'p' || sounds[t+1] == 'p' && sounds[t+2] =='o'){
         if (sounds[offs[l]-3] == 'i'){dip[b] = 'i'; dip[b+1] = '\0'; b++;}}
         
        if (sounds[offs[l]-3] == 'o'){dip[b] = 'o'; dip[b+1] = '\0'; b++;}
      l++;   
     }
 }
 
 
     if (sounds[1] == 'o' ){song[q] = 'o';  q++; }
     if (sounds[1] == 'i' ){song[q] = 'i';  q++; }
 
 
 for (int j = 0; j<game; j++){
     
     if (j  == offs[d]){while(j < offs[d+1]){
        if (sounds[j] == 'p' && sounds[j+1] == 'i')
            {song[q] = 'i'; song[q+1]= '\0'; q++;d++;break;}
         if (sounds[j] == 'p' && sounds[j+1] == 'o')
            {song[q] = 'o'; song[q+1]= '\0'; q++;d++;break;}
                                                    j++;    }
     }
 }
 unsigned drops = strlen(dip);
  unsigned serve = strlen(song);
  
 
printf("Serves: %s\n", song);
printf("Drops: %s",dip);
 
   return 0;
 }



