#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int item)
{

    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            cout << "\n\n"
                 << "Item " << item << ", is present at the index: " << i << "\n\n";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << " item not found" << endl;
    }
}

int main()
{
    int arr[] = {3, 2, 14, 2, 123};
    linearSearch(arr, 5, 2);
    return 0;
}