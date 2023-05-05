#include<chrono>
auto start = std::chrono::high_resolution_clock::now();


//Code here


auto stop = std::chrono::high_resolution_clock::now();
auto duration = duration_cast<std::chrono::microseconds>(stop - start);

cout << "\n" << duration.count() << " microseconds" ;
