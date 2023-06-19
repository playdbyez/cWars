#include <iostream>
#include <chrono>

auto start = std::chrono::high_resolution_clock::now();

using namespace std;

int main()
{
int number = 10;

int x = 3;
int y = 5;
int z1 = 0, z2 = 0, zz = 0, a = 3;

for (size_t i = 0; z2 < number; i++)
{
z1 = y*i;			
if (z1<number)
	{zz+=z1;}
z2 = x*i;
if (z2<number){ 
	while (y*a < z2){a++;}
 		if (z2 != y*a){zz+=z2;}
 }
}

cout << zz;

auto stop = std::chrono::high_resolution_clock::now();

auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

cout << "\n" << duration.count() << " microseconds" ;
}
