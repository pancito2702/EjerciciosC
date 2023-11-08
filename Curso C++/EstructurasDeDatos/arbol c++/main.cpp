#include <random>
#include <chrono>
#include "bstree.hpp"

int main() {
  bstree<int> arbol;
  int counter = 0;

  std::random_device rseed;
  std::mt19937 rng(rseed());
  for (size_t i = 0; i < 100000; i++) {
    std::uniform_int_distribution<int> dist(0, 200000);
     bstnode<int> *new_node = new bstnode<int>(dist(rng));
     arbol.Insert(new_node);
   }

  //arbol.sequentialTree();

  auto start = std::chrono::steady_clock::now();
  while (true) {
    if(std::chrono::steady_clock::now() - start > std::chrono::seconds(10)) {
      break;
    }
    std::uniform_int_distribution<int> dist(0, 2000000);
    bstnode<int> *aux = arbol.IterativeSearch(arbol.root, dist(rng));
    counter++; 
  }
  std::cout << counter << std::endl;
  
  return 0;
}