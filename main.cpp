//Authors:Ryan Persons
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last, nickname;
   
  //get user input
  cout<<"What is your first name?\n";
  cin>>first;
  cout<<"What is your last name?\n";
  cin>>last;

  //tell fortune
  nickname.push_back(first[0]);
  nickname.push_back('.');
  nickname.push_back(last[0]);
  nickname.push_back('.');

  cout<<"Welcome, "<<nickname<<", here is  your fortune...\n";

  return 0;
}
