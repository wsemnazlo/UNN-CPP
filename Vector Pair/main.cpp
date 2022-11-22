#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    srand((unsigned int)time(NULL));
    vector<pair<string, float>> _vector(10);
    
    for (vector<pair<string, float>>::iterator it = begin(_vector); it != end(_vector); ++it)
    {
        int protect = rand() % 3;
        
        switch (protect)
        {
            case 0: {
                *it = { "public", rand() % 100 }; break; }
            case 1: {
                *it = { "private", rand() % 100 }; break; }
            case 2: {
                *it = { "protected", rand() % 100 }; break; }
        }
    }
    
    for (const auto& item : _vector) { cout << item.first << ' ' << item.second << endl; }
    
    cout << " " << endl;

    auto isPublic = [](pair<string, float>& number) { if (number.first == "public") { number.second = 0; }; };
    auto isProtected = [](pair<std::string, float>& number) { if (number.first == "protected") { number.first = "private"; }; };
    
    for_each(begin(_vector), end(_vector), isPublic);
    for_each(begin(_vector), end(_vector), isProtected);
    
    for (const auto& item : _vector) { cout << item.first << ' ' << item.second << endl; }
    
    return 0;
}
