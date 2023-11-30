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
 
 char *sounds = "pong-ping-dong-ping-pong-tink-bonk-pong-ping-doof";
 unsigned bin =0; 
  unsigned bon =0;

  unsigned game = strlen(sounds);

  int offs[10];
  int nxt = 0;
  int mrk = 0;
  
  for (int i = 0; i<game; i++){

    if(sounds[i] == '-' && sounds[i+1] != 'p'){ 
      if (sounds[i+2] != 'i' || sounds[i+1] != 'o'){ 
        if (sounds [i-4] == 'p' ){
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
         if (sounds[offs[l]-3] == 'i'){printf(" ping dropped on %d\n", offs[l]);}}
         
        if (sounds[offs[l]-3] == 'o'){printf(" pong dropped on %d\n", offs[l]);}
      l++;   
     }
 }
   return 0;
 }

