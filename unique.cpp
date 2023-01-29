#include<iostream>
using namespace std;
int uniqueElement(int arr[],int size)
{
    int unique =0;
    for(int i =0;i<size;i++)
    {
    unique = (unique)^arr[i];
}
return unique;
}
int main()
{
    cout<<"enter size of the array"<<endl;
    int size;
    cin>>size;
    int arr[20] = {1,3,4,1,3};
    int unique = uniqueElement(arr,size);
     cout<<"unique element in the given array is:"<<unique<<endl;
     return 0;
}
