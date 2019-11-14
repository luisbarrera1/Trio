#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void swap(int& first, int& second, int& third);


int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
swap( red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void swap(int& first, int& second, int& third)
{
        int temp;
        int biggest, mid, least;
         if( first < second && first > third)
      {
             biggest = first;
             second = third;
             second = biggest;
      }
      else if( first > second && first < third)
      {
              biggest = third;
              third = second;
              second = first;
              first = biggest;
      }
        else if( first < second && second < third)
        {
           biggest = third;
           third = first;
           first = biggest;
        }
        else if ( first < third && third < second)
        {
                biggest = second;
                second = third;
                third = first;
                first = biggest;
        }

}





       



