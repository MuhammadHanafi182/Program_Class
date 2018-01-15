#include <iostream>

using namespace std;

class JenisMusang

{
private:

	string namamusang;
    string habitat;
    int panjangtubuhmaks;
    int brtmaks;
    string makanan;
    string warna;
    string karakter;
    
public:

    // Pembentuk atau outputan yang diberikan

    JenisMusang (string namamusang, string habitat, int panjangtubuhmaks, int brtmaks, 
	string makanan, string warna, string karakter )   
	
     {
    	JenisMusang::namamusang = namamusang;
        JenisMusang::habitat = habitat;
        JenisMusang::panjangtubuhmaks = panjangtubuhmaks;
        JenisMusang::brtmaks = brtmaks;
        JenisMusang::makanan = makanan;
        JenisMusang::warna = warna;
    	JenisMusang::karakter = karakter;   
        
     }
    
    // untuk menampilkan

    void perolehInfo (void)  
	  
    {
    	cout << "|=======================================================================================================| " << endl;
    	cout << "|==============================================JENIS MUSANG=============================================| " << endl;
    	cout << "|__________________________________DIKELOMPOKAN OLEH : MUHAMMAD HANAFI__________________________________| "<< endl;
    	cout << "|______________________________________BERDASARKAN PENELUSURAN GOOGLE___________________________________| " << endl;
    	cout << "|=======================================================================================================| " << endl;
    	
    	cout << "Nama Musang 		    : " << namamusang << endl;
        cout << "Habitat     		    : " << habitat << endl;
        cout << "Panjang Tubuh Maksimal (Cm) : " << panjangtubuhmaks << endl;
        cout << "Berat Maksimal (Kg) 	    : " << brtmaks << endl;
        cout << "Makanan 		    : " << makanan << endl;
        cout << "Warna		            : " << warna << endl;
        cout << "Karakter		    : " << karakter << endl;
    
        cout << endl;
    };
	};

int main(){
}
