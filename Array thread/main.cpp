#include "array_thread.h"

int main()
{
    int size, value;

    std::cout << "Enter size of array ";
    std::cin >> size;
    ArThread arThread(size);

    std::cout << std::endl;

    std::cout << "Enter the number by which to divide the array ";
    std::cin >> value;
    arThread.devideArrayAndPushPartsToTheArrayContainer(value);
    arThread.asyncWork();
    std::cout << "Result is " << arThread.getResult() << std::endl;

    return 0;
}