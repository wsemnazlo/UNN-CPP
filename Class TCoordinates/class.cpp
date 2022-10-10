#include "class.h"
using namespace std;

template <class T>
TCoordinates<T>::TCoordinates() : x(0), y(0) {}

template <class T>
TCoordinates<T>::TCoordinates(T _x, T _y) : x(_x), y(_y) {}

template <class T>
TCoordinates<T>::TCoordinates(const TCoordinates& coordinate) : x(coordinate.x), y(coordinate.y) {}

template <class T>
TCoordinates<T> TCoordinates<T>::operator=(const TCoordinates& coordinate)
{
    if (this == &coordinate)
        return *this;
    else
    {
        x = coordinate.x;
        y = coordinate.y;
        return *this;
    }
}

template <class T>
TCoordinates<T> TCoordinates<T>::operator+(const TCoordinates& coordinate)
{
    return TCoordinates(this->x + coordinate.x, this->y + coordinate.y);
}

template <class T>
TCoordinates<T> TCoordinates<T>::operator-(const TCoordinates& coordinate)
{
    return TCoordinates(this->x - coordinate.x, this->y - coordinate.y);
}

template <class T>
bool TCoordinates<T>::operator>(const TCoordinates& coordinate)
{
    if ((this->x) > (coordinate.y))
        return 1;
    else
        return 0;
}

template <class T>
bool TCoordinates<T>::operator<(const TCoordinates& coordinate)
{
    if ((this->x) > (coordinate.y))
        return 1;
    else
        return 0;
}

template <class T>
bool TCoordinates<T>::operator==(const TCoordinates& coordinate)
{
    if ((this->x) == (coordinate.y))
        return 1;
    else
        return 0;
}

template <class T>
ostream& operator<<(ostream& os, const TCoordinates<T>& coordinate)
{
    return os << "x = " << coordinate.x << endl << "y = " << coordinate.y << endl;
}

template <class T>
istream& operator>>(istream& is, TCoordinates<T>& coordinate)
{
    return is >> coordinate.x >> coordinate.y;
}

template <class T>
void TCoordinates<T>::PrintCoordinate()
{
    cout << "x = " << x << "y = " << y << endl;
}
