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

int main()
{	
	JenisMusang MusangA("Musang Pandan", "Alam Liar, Atap Rumah", 
	95, 6, "Buah-Buahan,Kopi,Serangga Kecil,dll", "Tergantung Tempat Tinggal",
	"Aktif dimalam hari,Pintar dan mudah diajak bermain");

	JenisMusang MusangB("Musang Akar", "Alam Liar", 
	60, 3, "Buah-Buahan,Kopi,dll", "Bulu Coklat,Kepala Abu-Abu,",
	"Dapat melahirkan anak hingga 2 anak,Penciuman tajam");
	
	JenisMusang MusangC("Musang Bulan", "Alam Liar", 
	75, 5, "Buah-Buahan,Kopi,Serangga Kecil,dll", "(2 Jenis) Orange Bercampur Coklat dan Hitam Gelap, Hitam Corak Putih",
	"Penghasil Kopi Luwak");
	
	JenisMusang MusangD("Musang Rase", "Alam Liar", 
	63, 3, "Serangga Kecil,Tikus,dll", "Belang Hitam Putih,Bintik Hitam Disisi Tubuh Hitam Corak Putih,Garis hitam di Punggung",
	"Lebih Suka Memakan Jenis Serangga dan Tikus,Memiliki Warna Unik");
}
