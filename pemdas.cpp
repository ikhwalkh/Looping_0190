//Library
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x;

    //perulangan dengan For
    //mencetak tulisan sebanyak 5 kali
    //perulangan dengan For
    cout<<"Perulangan for"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi informasi UMY"<<endl;
    }
    cout<<endl;

    //untuk mendapatkan urutan angka acak yg Berbeda
    srand(time(0));

    //perulangan dengan while
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }

    
    cout<<'Bilangan acak while yang terakhir ='<<x <<endl;
    cout<<endl;

    //perulangan dengan DO.....While
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }while(x<=5);

    cout<<'Bilangan acak do-while yang terakhir ='<<x <<endl;
    cout<<endl;
}

//Logika not