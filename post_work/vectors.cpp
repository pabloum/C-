#include <iostream>
// #include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

  std::vector<int> vec {1, 2, 3};

  vec.push_back(4);

  for (size_t i = 0; i < vec.size(); i++) {
    std::cout << "vec[" << i << "] = " << vec[i] << '\n';
  }

  cout << vec.back() << endl;

  return 0;
}
