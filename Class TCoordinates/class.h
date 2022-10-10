#include <iostream>
using namespace std;

template <class T>
class TCoordinates
{
private:
    T x, y;
public:
    TCoordinates();
    TCoordinates(T, T);
    TCoordinates(const TCoordinates&);
    
    TCoordinates operator=(const TCoordinates&);
    TCoordinates operator+(const TCoordinates&);
    TCoordinates operator-(const TCoordinates&);
    
    bool operator>(const TCoordinates&);
    bool operator<(const TCoordinates&);
    bool operator==(const TCoordinates&);
    
    friend ostream& operator<<(ostream&, const TCoordinates&);
    friend istream& operator>>(istream&, TCoordinates&);
    
    void PrintCoordinate();
};
