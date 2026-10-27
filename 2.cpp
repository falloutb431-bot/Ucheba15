#include <iostream>
#include <vector>
#include <list>
#include <set>

template <typename Container>
void print_container(const Container& container) {
    auto it = container.begin();
    auto end = container.end();

    if (it == end) {
        std::cout << "\n";
        return;
    }

    
    std::cout << *it;
    ++it;

    
    while (it != end) {
        std::cout << ", " << *it;
        ++it;
    }
    std::cout << "\n";
}