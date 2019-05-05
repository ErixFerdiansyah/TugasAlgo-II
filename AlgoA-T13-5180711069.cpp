#include <iostream>
using namespace::std;

double jb,jumlah,harga,jmlh,total=0,diskon,totalseluruh;
string nama,np,ni,orang,member;

void barang()
{
    cout<<"Jenis barang : "; cin>>jb;
    for(int i=0;i<jb;i++)
    {
        cout<<"\nBarang "<<i+1;
        cout<<"\nNama barang      : ";cin>>nama;
        cout<<"Jumlah barang      : ";cin>>jumlah;
        cout<<"Harga barang       : ";cin>>harga;
        jmlh=jumlah+harga;
        total=total+jmlh;
    }}
main()
{   string nama[10]={"Bayu","Irvan","Susiati","Diana","Roni"};
    string nomor[10]={"A001","A002","A003","A007","A008"};

    cout<<" MANAMARKET \n";
    cout<<"Apakah anda member ? (ya/tidak) : ";cin>>member;
    if(member=="ya")
    {
        cout<<"Nomor Identitas : ";cin>>ni;
        for(int e=0;e<5;e++)
        {
            if (ni==nomor[e])
            {
                orang=nama[e];
            }
        }
        cout<<" Anda member : "<<ni<<"\nNama : "<<orang<<endl;
        barang();
        cout<<"\nTotal barang         : Rp "<<total;
        diskon=total*0.05;
        totalseluruh=total-diskon;
        cout<<"\nDiskon 5%            : Rp "<<diskon;
        cout<<"\nTotal Keseluruhan  : Rp "<<totalseluruh<<endl;
    }
    else if(member=="tidak")
    {
        cout<<"Nama Pemesan : ";cin>>np;
        barang();
        cout<<"Total seluruh : Rp "<<total<<endl;
    }
}
