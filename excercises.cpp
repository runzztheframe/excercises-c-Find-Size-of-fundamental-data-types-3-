#include <iostream>
#include <string>

using namespace std;
//Find Size of fundamental data types<3 :
int main(){
   system("cls");

   cout << "Charater_Size = " << sizeof(char) << " bytes" << endl;
   cout << "int_Size = " << sizeof(int) << " bytes" << endl;
   cout << "String_Size = " << sizeof(string) << " bytes" << endl;
   cout << "long_Size = " << sizeof(long) << " bytes" << endl;
   cout << "Float_Size = " << sizeof(float) << " bytes" << endl;
   cout << "Bool_Size = " << sizeof(bool) << " bytes" << endl;
   cout << "Double_Size = " << sizeof(double) << " bytes" << endl;
   return 0;
}
