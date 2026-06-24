#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int ages[n];
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; i++) 
    {
        cin >> ages[i];
    }

    cout << "ages: ";
    for (int i = 0; i < n; i++) 
    {
        cout << ages[i] << " ";
    }

  

    float avg, sum = 0;
    int i;

        cout<<"\n sizeof ages"<<sizeof(ages)<<endl;
        cout<<"size os ages[0]"<<sizeof(ages[0])<<endl;

    // Get the length of the array

        int length = sizeof(ages) / sizeof(ages[0]);

    // Loop through the elements of the array

    for (int age : ages)
    {
        sum += age;
    }
        cout<<"sum is"<<sum<<endl;

    // Calculate the average by dividing the sum by the length

        avg = sum / length;

    // Print the average
        cout << "The average age is: " << avg << "\n";


        // Create a variable and assign the first array element of ages to it
  int lowestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest age
  for (int age : ages) 
  {
    if (lowestAge > age) 
    {
      lowestAge = age;
    }
  }

  // Print the lowest age
  cout << "The lowest age is: " << lowestAge << "\n";


    return 0;
}