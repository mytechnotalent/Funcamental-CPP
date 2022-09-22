#include <iostream>
#include <vector>

int main()
{
  // Create vector
  std::vector<int> favorite_numbers;
  
  // Add elements to vector
  favorite_numbers.push_back(42);
  favorite_numbers.push_back(7);
  favorite_numbers.push_back(555);
  favorite_numbers.push_back(1);
  
  // Print vector size
  std::cout << favorite_numbers.size() << std::endl;
  
  // Erase the 2nd element
  favorite_numbers.erase(favorite_numbers.begin(), favorite_numbers.begin()+1);
  
  // Print vector size
  std::cout << favorite_numbers.size() << std::endl;
  
  return 0;
}

