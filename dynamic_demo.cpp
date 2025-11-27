#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements : \n";
    cin>>length;
    
    //Step 1 : Allocate the memory
    Arr = new int[length];
    if(Arr == NULL)
    {
        cout<<"Unableto allocate the memory\n";
    }
    else
    {
        cout<<"Memory gets allocate successfully\n";
    }

    // Step 2 : Use the Memory

    // Step 3 : Deallocate the Memory
    delete [] Arr;

    return 0;
}