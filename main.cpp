#include <iostream>

struct Rect
{
    float minX;
    float minY;
    float maxX;
    float maxY;
};

float DistanceToRect(float x, float y, Rect& rect)
{
    if(rect.minX < x && x < rect.maxX && rect.minY < y && y < rect.maxY)
    {
        return 0;
    }
    float distanceX = std::max(rect.minX - x, x - rect.maxX);
    float distanceY = std::max(rect.minY - y, y - rect.maxY);
    return std::sqrt(distanceX*distanceX + distanceY*distanceY);
}

int main()
{
    Rect rect = {0, 0, 1, 1};
    std::cout << "Distance to the rectangle: " << DistanceToRect(4,0,rect);
}