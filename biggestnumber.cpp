//Author:Nysa Morales
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  
  cout<<"Please enter a whole number:\n";

  int wholenumber1;
  cin>> wholenumber1;
  
  cout<<"Please enter another whole number:\n";
  
  int wholenumber2;
  cin>> wholenumber2;
  int biggest;
  if (wholenumber1 >= wholenumber2)
  {
    biggest= wholenumber1;
  }
  else
  {
  biggest= wholenumber2;
  }
  cout<<"Of those two numbers, the biggest is: "<<biggest;


  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
