#include<iostream>
using namespace std;
int main(){
   // This is how we create string object
   string str;
   cout<<"Enter a String:";
   /* This is used to get the user input
    * and store it into str
    */
   getline(cin,str);
   cout<<"You entered: ";
   cout<<str<<endl;

   /* This function adds a character at
    * the end of the string
    */ str.push_back('A');
   cout<<"The string after push_back: "<<str<<endl;
   /* This function deletes a character from
    * the end of the string
    */
   str.pop_back();
   cout << "The string after pop_back: "<<str<<endl;
   return 0;
}
