#include <iostream>
using namespace std;

main() {
  
  int yas;
  cout << "Yasinizi giriniz : ";
  cin >> yas;
  
  if(yas<18)
    cout << "Yasiniz oy kullanmak icin yeterli degil";
  if(yas>18)
    cout << "Yasiniz oy kullanmak icin yeterli";
  if(yas=18)
  	 cout << "Yasiniz oy kullanmak icin yeterli";
}
