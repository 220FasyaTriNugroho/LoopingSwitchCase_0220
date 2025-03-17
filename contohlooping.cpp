#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int counter;
    int i;
    int perulanganWhile = 0;
    int perulanganDo = 0;
}

//loop with for
//loop for ascending
for(counter = 0; counter < 5; counter++){
    cout << "Nilai counter = " << counter << " TI UMY" <<  endl;
}
    cout << "Nilai counter terakhir = " << counter << endl;
    cout << endl;

//loop for descending
for(counter = 5; counter>) 0; counter--){
    cout << "NIlai counter = " << counter << " TI UMY" << endl;
}
cout << "Nilai counter terakhir = " << counter 





//loop with while
    srand(time(0));
    i = rand() % 10;

    cout << "Nilai awal i = " << i << endl;
    while (i < 7)
    {
        cout << "Nilai awal i = " << i << " TI UMY" << endl;
        i = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai akhir i = " << i << endl;

    cout << endl;


    //loop do while
    cout << "Perulangan Do While"<< endl;
    do
    {
        cout << "Nilai i = " << i << " TI UMY" << endl;
        i = rand() %10;
        perulanganDo++;
    } while (i < 7);
    cout << "Jumlah Perulangan = " << perulanganDo << endl;
    cout << "Nilai akhir i = " << i << endl;
}