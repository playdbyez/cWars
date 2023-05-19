

//Remove specific element
vec.erase(remove(vec.begin(), vec.end(), 0), vec.end());

//Even or Odd
return (num %2 ==0)?"Even":"Odd";

//find position of minElement
auto it = std::min_element(std::begin(vec), std::end(vec));
std::cout << "index of smallest element: " << std::distance(std::begin(vec), it);
