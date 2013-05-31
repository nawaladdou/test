// tast.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main()
{
  char a;
  cout<<"Entre un caractere : "; cin>>a;
 
  if (a>='A' && a<='Z') cout<<"Vous avez mis une majuscule."<<endl;
  else if (a>='a' && a<='z') cout<<"Vous avez mis une minuscule."<<endl;
  else if (a>='0' && a<='9') cout<<"Vous avez mis un chiffre."<<endl;
  else cout<<"Vous n'avez mis ni une majuscule, ni une minuscule, ni un chiffre."<<endl;
 
  return 0;
}

