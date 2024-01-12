:::::::::::::::::::::::::::::::::::::::::::::#########         C++         ###########:::::::::::::::::::::::::::::::::::::::::::::::::
//Timer
#include<chrono>
auto start = std::chrono::high_resolution_clock::now();
//Code here
auto stop = std::chrono::high_resolution_clock::now();
auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

cout << "\n" << duration.count() << " microseconds" ;

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//If element exists in vector
if (std:: find (v.begin(), v.end(), elem) != v.end ())
{
//elem exists in the vector
}


::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//cpp11 multidimensional array + vector
int a1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
std::vector<std::vector<int>> a2 = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//Determine lenght of a single int with a multi-digit value
int len = to_string(n).length();

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//Remove specific element
vec.erase(remove(vec.begin(), vec.end(), 0), vec.end());

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//Even or Odd
return (num %2 ==0)?"Even":"Odd";

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//find position of minElement
auto it = std::min_element(std::begin(vec), std::end(vec));
std::cout << "index of smallest element: " << std::distance(std::begin(vec), it);

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//Do/While
do{ } 
        while(next_permutation(v.begin(),v.end()));


::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//Random Number Generator within range min - max

#include <random>
int range = max - min + 1;
int num = rand() % range + min;

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::



:::::::::::::::::::::::::::::::::::::::::::::#########         C           ###########:::::::::::::::::::::::::::::::::::::::::::::::::



//length of an Int object

#include <math.h>
 int nDigits = floor(log10(abs(VarSize))) + 1;
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// to_string version of C 

int someInt = 368;
char str[12];
sprintf(str, "%d", someInt);
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Proper initialization of Char pointer
 // Proper Sprintf type casting and multiple insertion


size_t size = strlen(s);
char *buff = malloc(sizeof(s)/sizeof(char));  
sprintf(buff, "%d/%d", upt,(int)size);
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Sort function
// the comp struct will return a negative (-1) in order to sort a list in Ascending order
// List can also be sorted in Descending order by returning a positive value (1)

int comp(const void *a,const void *b) {
                                        int x = *((int *) a);
                                        int y = *((int *) b);
                                        if (x > y){return 1;}
                                        if (y > x){return -1;}
                                                                              }

char unsorted_list [20]
qsort (unsorted_list,20, sizeof *unsorted_list,comp);
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::




