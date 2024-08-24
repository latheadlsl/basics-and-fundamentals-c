#include <iostream>
using namespace std;

//Goal: Create an array in descending order

main()
{
    //Define the inputs of array
    int arrOne[10], arrTwo[10],merge[50];

    //
    int n, One, Two, j, i,temp;

    //Input size for the first array
    cout<<"Enter the size for first array: ";
    cin>>One;

    //Input first array elements
    cout<<"Enter "<<One<<" elements for first array:\n";
    for(i=0;i<One;i++)
    {
        cin>>arrOne[i];
        merge[i]=arrOne[i];
    }
    j=i;

    //Input size for the second array 
    cout<<"Enter the size for second array: ";
    cin>>Two;

    //Input second array elements
    cout<<"Enter "<<Two<<" elements for second array:\n";
    for (i=0;i<Two;i++)
    {
        cin>>arrTwo[i];
        merge[j]=arrTwo[i];
        j++;
    }
    n=j;

    //Merging the first and second array in descending order
        for(int j =0; j < n - 1; j++)
        {
            for(i=0;i<n-1;i++)
            {
                if(merge[i]>merge[i+1])
                {
                    temp=merge[i];
                    merge[i]=merge[i+1];
                    merge[i+1]=temp;
                }
            }
        }
    
    //Print the finalized result of array
        cout<<"\nCombined Array: ";
        for(i=0;i<j;i++)
        cout<<merge[i]<<" ";
        cout<<endl;
    return 0;

}