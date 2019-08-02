#include <iostream>
#include <array>
using namespace std;
int main(){
	array<int, 6> arr={1,2,3,4,5,6};
	cout<<"Array 1 before swaping:";
	for(int i=0;i<6;i++)
	{
	
		cout<<arr.at(i)<<" ";
	}
	cout<< "\nelement 1st by get function:";
	cout<<get<0>(arr);
	cout<<"\nElements of arr2 before swaping";
	array<int,6> arr1={7,8,9,10,11,12};
	for(int i=0;i<6;i++){
		cout<< arr1.at(i)<<" ";
	}
	arr.swap(arr1);
	cout<<"\nelements of arr1 after swaping";
	for(int i=0;i<6;i++)
	{
		cout<< arr.at(i)<< " ";
	}
	cout<<"\nelements after swaping of arr2";
	for(int i=0;i<6;i++){
	
		cout<<arr1.at(i) << " ";
	}

	cout<<"\n size of array 1 is: "<< arr.size();
	cout<< "\n size of arr2 is: " << arr.size();
}
