/\*                             VECTOR                              \*/

//The size of a vector is dynamic, meaning it can grow and shrink as

//needed



//Vectors are found in the <vector> library, and they come with many

//useful functions to add, remove and modify elements



//Both vectors and arrays are data structures used to store multiple

//elements of the same data type.



\#include <bits/stdc++.h>

using namespace std;



int main(){

&nbsp;   //declaration 

&nbsp;   vector<int> v;  //this creates an empty vector which 

&nbsp;                   //can hold integers

&nbsp;   

&nbsp;   //similar to arrays we can decide the datatype

&nbsp;   vector<string> v;

&nbsp;   

&nbsp;    // Create a vector called cars that will store strings

&nbsp;   vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

&nbsp;   // Print vector elements

&nbsp;   for (string car : cars) {         /\*string car: cars means For                                   each element in the vector

&nbsp;                                       cars, take it and put it into

&nbsp;                                       a variable called car\*/

&nbsp;       cout << car << "\\n";

&nbsp;   }



&nbsp;   //similar to arrays we can redefine the size of the vector

&nbsp;   vector<char> v(100);

&nbsp;   

&nbsp;   //function to get size of vector

&nbsp;   int size\_of\_vector=v.size();

&nbsp;   

&nbsp;   //inserting an element

&nbsp;   v.push\_back(x);           //inserts the x element at the back of

&nbsp;                             //the vector. the size of the vector

&nbsp;                             //increases by 1 after this

&nbsp;   //removing an element

&nbsp;   v.pop\_back();             //this removes the last elt from the

&nbsp;                             //vector. The size of the vector

&nbsp;                             //decreases by 1 after this

&nbsp;                             

&nbsp;   /\*fetch an element. similar to arrays we can use index

&nbsp;     fast access. does not do bounds check. out of bounds access

&nbsp;     results in undefined behaviour \*/

&nbsp;   int ith\_element=v\[i]; 

&nbsp;   /\*alternatively we can also use .at()

&nbsp;    slower access.performs bound checking. prevents silent error by

&nbsp;    throwing out of range error for out of bounds access. \*/

&nbsp;   v.at(i)              

&nbsp;   

&nbsp;   //we can directly reference the value of first and last element

&nbsp;   v.front();

&nbsp;   v.back();

&nbsp;   

&nbsp;   //➡ Iterator pointing to first element

&nbsp;   v.begin();             

&nbsp;   

&nbsp;   //➡ Iterator pointing to one position AFTER the last element

&nbsp;   v.end();

&nbsp;   

&nbsp;   //clearing the vector. thus makes its size 0

&nbsp;   v.clear();

&nbsp;   

&nbsp;   //check if a vector is empty 

&nbsp;   // returns 1 if empty and 0 if non empty

&nbsp;   cout << v.empty();

&nbsp;   

&nbsp;   //inserting at a random position

&nbsp;   v.insert(v.begin()+2,10);           //inserts 10 at position 2

&nbsp;   

&nbsp;   //remove from random position

&nbsp;   v.erase(v.begin()+3);               //removes elt at position 3

&nbsp;   

&nbsp;   //assignment operator

&nbsp;   vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

&nbsp;   vector<string> myVector;

&nbsp;   myVector = cars;

&nbsp;   

&nbsp;   //Swapping contents of two vectors-2 ways possible

&nbsp;   myVector.swap (anotherVector);  

&nbsp;   swap (myVector,anotherVector);

&nbsp;   

&nbsp;   //2D arrays in c++

&nbsp;   //declaration and initialization

&nbsp;   vector<vector<int>> my2Dvector;

&nbsp;   vector<vector<int>> my2Dvector= {{1 , 2 , 3} , {4 , 5 , 6} , {7 , 8 ,9}};

&nbsp;   

&nbsp;   //accessing elements

&nbsp;   int value=my2Dvector\[1]\[2];

&nbsp;   

&nbsp;   //size related functions

&nbsp;   //size of row:

&nbsp;   int numRows=my2Dvector.size();

&nbsp;   //size of column:

&nbsp;   int numCols=my2Dvector\[0].size();

&nbsp;   

&nbsp;   //iterating through a 2D vector

&nbsp;   for(int i=0;i<numRows;i++){

&nbsp;       for(int j=0;j<numCols;j++){

&nbsp;           cout<<my2Dvector\[i]\[j];

&nbsp;       }

&nbsp;   }

&nbsp;   

&nbsp;   

&nbsp;   

}



