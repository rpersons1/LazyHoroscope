//Authors:Ryan Persons
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last, nickname, word;
  int lucky;

  //get user input
  cout<<"What is your first name?\n";
  cin>>first;
  cout<<"What is your last name?\n";
  cin>>last;

  nickname.push_back(first[0]);
  nickname.push_back('.');
  nickname.push_back(last[0]);
  nickname.push_back('.');
  cout<<"Welcome, "<<nickname<<", here is your fortune...\n";

  //tell fortune
  lucky = first.length(); 
  cout<<"your lucky number is "<<lucky<<endl; 
  word = first;
  char letter = word[0];
  if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' 
  || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
  {
  cout<<"you are destined to be famous!\n";
  }
  else
  {
  cout<<"you should keep a low profile.\n";
  }
    
  char let = last[0];
  if(let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u'
  || let == 'A' || let == 'E' || let == 'I' || let == 'O' || let == 'U')
  {
  }
  else
  {
  cout<<"you have already met your true love.\n";
  }

  cout<<"have a good day!\n";
  return 0;
}
