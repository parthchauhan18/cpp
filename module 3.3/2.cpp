// w.a.p to sort the array using templates.

#include<iostream>
using namespace std;
template<class value> 
void sorting(value arr)
{
    for( int i=0;i<5;i++)  
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The Array in ascending oeder is : "<<endl;
    cout<<"-------------------------------"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<" "<<arr[i];
    }
    cout<<endl<<"-------------------------------"<<endl;
        for(int i=0;i<5;i++) 
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The Array in descending oeder is : "<<endl;
    cout<<"-------------------------------"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<" "<<arr[i];
    }
    cout<<endl<<"-------------------------------"<<endl;
}
int main()
{
    int i,j,arr[5];
    cout<<"Enter the elements of array => "<<endl;
    for(i=0;i<5;i++) 
    {
        cin>>arr[i];
    }
    sorting(arr);
    
    return 0;
}
