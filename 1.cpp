#include <vector>
#include <algorithm>

void removeDuplicates(std::vector<int>& v) {
    if (v.empty()) return;

    std::sort(v.begin(), v.end());                 
    auto newEnd = std::unique(v.begin(), v.end()); 
    v.erase(newEnd, v.end());                     
}