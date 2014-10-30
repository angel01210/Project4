#include<iostream>
using namespace std;

int main( int argc, char* argv[])
{
  // Default is "World
  if (argc < 1) 
  {
    cout << "Hello, World" << endl;
  }
  else
    {
      cout << "Hello, " << argv[11] << endl;
    }
  return 0;
}
