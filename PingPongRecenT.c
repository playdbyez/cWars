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



////
////

////

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

char pink[5] = {'p','i','n','g'};
char ponk[5] = {'p','o','n','g'};
  int offs[10];
  int nxt = 0;
  
  char dip[20];
  char song[20];
  
  int q = 0;
  int b = 0;
  int d = 0;
  int z = 0;
  int y = 0;
  int x = 0;
  
  
  
  for (int i = 0; i<game; i++){

    if(sounds[i-1] == '-' ){ 
      if (sounds [i-5] == 'p' && sounds[i-4] =='i' ){ 
          while (x < strlen(ponk)-1){
                    if (sounds[i+x] != ponk[x]){
                                                offs[nxt] = i-1;
                                                nxt++;
                                                offs[nxt +1] = '\0';
                                                printf("%d ", i-1);
                                                
                                                                            }
            ++x;}
          
  
            }    
          }
         
  }
 printf("\n\n");
  int l =0;
 int t =0;
 
 
 while (offs[l] != '\0'){
     t = offs[l];
     for (int k = t; k<game;k++){
         
         if (sounds[offs[l]-3] == 'i' && sounds[offs[l]-4] == 'p'){dip[b] = 'i'; dip[b+1] = '\0'; b++; l++;k = t;}
         
        if (sounds[offs[l]-3] == 'o' && sounds[offs[l]-4] == 'p'){dip[b] = 'o'; dip[b+1] = '\0'; b++; l++;k = t;}
     }
     l++;
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
printf("Drops : %s",dip);

for (int n = 0; n<serve; n++){
                            if(song[n] == 'i' && dip[n] == 'o') {bin++;}
                            if(song[n] == 'o' && dip[n] == 'i') {bon++;}
}

if (bon == bin){
   for (size_t j = game; j>0; j--){
     if (sounds[j] == 'g'){if (sounds[j-1] == 'n'){if (sounds[j-2] == 'o'){if (sounds[j-3] == 'p'){ bin++;break;}}}}
     if (sounds[j] == 'g'){if (sounds[j-1] == 'n'){if (sounds[j-2] == 'i'){if (sounds[j-3] == 'p'){ bon++;break;}}}}
   }  
 }
 
 if (bin>bon){printf("\nping");}
 if (bon>bin){printf ("\npong");}
  
   return 0;
 }
