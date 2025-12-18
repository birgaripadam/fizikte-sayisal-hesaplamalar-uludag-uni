#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;

float uy,ut,hesap;

/* yüksekliği ve taban uzunluğu klavyeden girilen dik üçgenin alanı*/
int UcgeninAlani(){
    cout <<"Hesaplanilacak üçgenin yüksekliğini giriniz: ";cin >>uy;
    cout <<"Hesaplanilacak üçgenin taban alanini giriniz: ";cin >>ut;
    hesap = (ut*uy)/2;
    cout <<"Ucgenin alani: "<<hesap;
    return 0;
}
/* klavyeden yerden yüksekliği ve ilk hızı girilen cismin havada kalma süresi, yatayda alacağı yol, yere çarpma hızı*/

//yatay atis asagidaki
int egikAtis(){
    float yerdenY,ilkHiz,sure,yci,yatayYol,v_y,v_x,hiz;
    yci = 9.81;
    cout <<"Cismin yerden yuksekligini giriniz: ";cin >>yerdenY;
    cout <<"Cismin ilk hizini giriniz: ";cin >> ilkHiz;
    v_x = ilkHiz;
    sure = sqrt((2*yerdenY)/yci);
    yatayYol = v_x*sure;
    v_y = sure*yci;
    hiz = sqrt(pow(v_x,2) + pow(v_y,2));

    cout <<"Havada kalma suresi: "<<sure;
    cout <<"\nYatayda aldigi yol: "<<yatayYol;
    cout <<"\nYere Carpma Hizi: "<<hiz;
    return 0;

}

/* geometrik seklin a=(r²pi/h) r ve h klavyeden*/

int geometrikSekil (){
    float r,h,alan;
    cout <<"Hesaplanilacak geometrik seklin yaricapini giriniz: ";cin >>r;
    cout <<"Hesaplanilacak geometrik seklin yuksekligini giriniz: ";cin >>h;
    alan = (pow(r,2)*exp(pi))/h;
    cout <<"Cismin alani: "<<alan;
    return 0;
}

// if,for,while uygulamaları

int donguler(){
    float n,t,i;
    cout<<"1'den n e kadar olan sayilarinin toplami için n sayisini belirtiniz: ";cin>>n;
    t = 0;
    i = 1;
    while (i<=n)
    {
        t = t+i;
        i++;
    }
    cout<<"1'den "<<n<<" sayisina olan sayilarin toplami = "<<t;
    return 0;
}
// x<-2,  -2<=x<5, x>=5
//  3x      5^x    x²+1
int parcaliFonksiyon (){
    float d,y;
    cout<<"hesaplamak istediginiz degeri(sayi) giriniz: ";cin>>d;
    if (d < -2) y=3*d;
    else if (-2<=d && d<5) y=pow(5,d);
    else if (d>=5) y=(pow(d,2)+1);
    else cout<<"tanimli değil";
    cout<<"hesaplanilan degerin goruntusu: "<<y;
    return 0;
}
// ikinci dereceden denklemin köklerini veriyor
int ikinciDDK (){
    float dskk,a,b,c,x1,x2;
    cout<<"kokleri hesaplanacak denklemin katsayilarini giriniz: \n";cout<<"a: ";cin>>a;cout<<"\nb: ";cin>>b;cout<<"\nc: ";cin>>c;
    dskk = (pow(b,2)-(4*a*c));
    if (dskk < 0) {
        cout<<"denklemin reel kokleri bulunmamaktadir";
    }
    else if (dskk == 0) {
        x1 = (-b+(sqrt(dskk)))/(2*a);
        x2 = (-b-(sqrt(dskk)))/(2*a);
        cout<<"cift katli kok var";cout<<"\ndenklemin birinci koku= "<<x1;cout<<"\ndenklemin ikinci koku: "<<x2;
    }
    else if (dskk > 0){
        x1 = (-b+(sqrt(dskk)))/(2*a);
        x2 = (-b-(sqrt(dskk)))/(2*a);
        cout<<"iki farkli kok var";cout<<"\ndenklemin birinci koku= "<<x1;cout<<"\ndenklemin ikinci koku: "<<x2;
    }
    return 0;
}

// sigmayı while döngüsü ile yazıyoruz o örnek var ben yapıcam sonra, Σ(i^3 + i^8 +5) 

int sigma(){
    float t,i,n;
    t,n=0;
    i=1;
    cout<<"n sayisini giriniz: ";cin>>n;
    while(i<=n) {
        t=t+(pow(i,3) + pow(i,8) + 5); 
        i++;
    }
    cout<<"toplam: "<<t;
    return 0;
}
//  Σ1/i² i=2 veriyor
int tuhafSigma(){
    float t,i,n;
    t,n=0;
    i=2;
    cout<<"dostum n sayisini gir: ";cin>>n;
    while (i<=n) {
        t=t+(1/(pow(i,2))); i=i+2;
    }
    cout<<"toplam: "<<t;
    return 0;
}
// Σ(3t^3-5t²+5) şeysi
int ikinciTuhafSigma() {
    float t,i,n;
    t,n=0;
    i=1;
    cout<<"N SAYISINI GIR: ";cin>>n;
    while (i<=n){
        t=t+((3*pow(i,3)) + (5*pow(i,2)) + 5);
        i+=1; //veya (i=i+1) aynı şey yada (i++)
    }
    cout<<"toplam degeri: "<<t;
    return 0;
}

//bir diğer parçalı fonksiyon x<=-3,  -3<x && x<7, x>=7
//                             4x         6^x      x^3+5
int kiymaFonksiyonu(){
    float x,y = 0;
    cout << "x degeri giriniz: ";cin>>x;
    if (x<=-3) {
        y=4*x;
        //cout<<"fonksiyonun goruntusu: "<<y;
    }
    else if (-3<x && x<7) {
        y=pow(6,x);
        //cout<<"fonksiyonun goruntusu: "<<y;
    }
    else {      //veya else if
        y=pow(x,3)+5;
        //cout<<"fonksiyonun goruntusu: "<<y;
    }
    cout<<"fonksiyonun goruntusu: "<<y;
    // her koşul için cout yazarım ya da en sona 1 tane cout yapıştırırım
    return 0;
}

int deneme(){
    float v,vx,vy,t,h,g,ilkhiz=0;
    g=-9.81;
    cin >>v;cin>>h;
    t=sqrt((2*h)/-g);
    vy=g*t;
    vx=v;
    v=sqrt(pow(v,2) + pow(vy,2));
    cout<<v<<"\n";
    cout<<t;
    return 0;
}

//r1=40ohm  r2=60ohm   v=3,6,9,12,15,18
int ohmDeney(){
    float r1,r2,i1,i2 = 0;
    r1=40;
    r2=60;
    
    for (int v=3;v<=18;v=v+3){
        i1=v/r1;
        i2=v/r2;
        cout<<"voltaj: "<<v<<"\t";
        cout<<"r1 (I): "<<i1;cout<<"\tr2 (I): "<<i2;cout<<"\n";

    }
    return 0;

} 

// toplam = 3*i^3-i²+5
int ssgma (){
    float n,t,h=0;
    cout<<"n sayisini giriniz: ";cin>>n;
    for(int k=1;k<=n;k+=1){
        h=(3*pow(k,3))-(pow(k,2))+5;
        t=t+h;
    }
    cout<<"toplamin degeri: "<<t;
    return 0;

}

//m=0,015,0,020...,0,045  f1,f2=? T=100,0 L=1,0  SIKINTILI
int fizikLe(){
    float t,l,h,h2=0;
    l=1.0;t=100.0;
    for (float m=0.015;m<=0.045;m+=0.005){
        h=(1/2*l)*(sqrt(t/m));
        h2=(2/2*l)*(sqrt(t/m));
        cout<<"\nf1 icin frekans degeri: "<<h<<"\n";
        cout<<"f2 icin frekans degeri: "<<h2;
    }
    return 0;
}

//e^x = 1+x+(x²/2!)+(x^3/3!)+(x^n/n!) x,n klavyeden
int expSeyi(){
    float n,t,x=1,h=0; float c=1;
    cout<<"n degeri: ";cin>>n;cout<<"x deger: ";cin>>x;
    for (int k=1;k<=n;k+=1){
        h=(pow(x,k))/c;
        c=c*k;
        t=t+h;

    }
    cout<<"toplam degeri: "<<t;
    return 0;
}

//klavyeden 3 tam sayi girilmesi isteniyor birinci tam sayi pozitif ikinci ve ücüncü tamsayi negatif ise bu üc tam sayiyi carpan ve sonucu ekrana yazan eger sayilardan birisi sifira esit ise
//bu sayiları toplayan ve sonucu ekrana yazan programi yaz
//int tuhafLa(){}

//n=5 icin Σ(k+(1/k!))


//t=1+1/2²+..+1/2^n

int imamBayildi(){
    float t,n=0,i;
    cout<<"n: ";cin>>n;
    for (i=1;i<=n;i++){
        t=t+(1/pow(i,2));
    }
    cout<<"toplam: "<<t;
    return 0;
}

//r1=40, r2=60, v=3,6,9,..,18
int imamAyildi(){
    float r1,r2,v,i1,i2;
    r1=40;r2=60;
    for (v=3;v<=18;v=v+3){
        i1=v/r1;i2=v/r2;
        cout<<"v: "<<v<<" r1: "<<r1<<" i:"<<i1<<"\n";
        cout<<"v: "<<v<<" r2: "<<r2<<" i:"<<i2<<"\n";
    }
    return 0;
}

//fn=1/2L*sqrt(T/M)      L=58cm  T=15680  M=0.015,0.020+...+0.045


// (1+1/k!) n=5 için cevap
int imamNerede(){
    float carp=1,t=0,n=0,i;
    cout<<"n: ";cin>>n;
    for (i=1;i<=n;i++){
        carp = carp*i;
        t=t+(1+(1/carp));
    }
    cout<<"toplam: "<<t;
    return 0;
}

//başlangıçta girilen 10 adet sayının ortalamasını bulan program
int dedeKayip(){
    float n=0,i=1,t=0,ort=0;
    for (i;i<=10;i++){
        cout<<i<<". seyi girin: ";cin>>n;
        t = t + n;
    }
    
    ort = t/10;
    cout<<"ortalama : "<<ort;
    return 0;

}

//klavyeden girilen 10 adet sayıyı diziye aktarıp ortalamasını alan program
int asdas(){
    int i,t=0;
    float ort=0;
    float aaa[10];
    for (i=0;i<10;i++){
        cout<<i<<". elemani giriniz: ";cin >> aaa[i];

    }
    for (int j=0;j<10;j++){
        t = t + aaa[j];
    }
    cout <<"ortalama: "<<t/10.0;
    return 0;
}

//standart sapma sqrt(Σ(x-xort)²/n)
int standartSapma(){
    float ort=0,t=0,sts=0,t2=0;
    float ddd[5];
    ort = t/5;
    for (int i=0;i<5;i++){
        cout<<i<<". eleman gir: ";cin>>ddd[i];
    }
    for (int j=0;j<5;j++){
        t = t + ddd[j];
    }
    for (int z=0;z<5;z++){
        t2 = t2 + ((ddd[z]-ort),2);
    }
    sts = sqrt(t2/5);
    cout << "ortalama: "<<ort<<endl;
    cout << "standart sapma: "<<sts;
    return 0;

}

//10 elemanı girilen bir dizinin en büyük elemanını bul bir de en küçük

int eeBB(){
    float eb=0,ek=0,sogan[10];
    for (int i=0;i<10;i++){
        cout<<i<<". elemani gir: ";cin>>sogan[i];
    }
    eb = sogan[0];
    for (int j=0;j<10;j++){
        if (eb < sogan[j]){
            eb = sogan[j];
        }
    }
    cout<<endl<<eb;
    return 0;
}

//3'e 3 lük bir matrisin toplamını ve farkını bulan program, kullanıcıdan isticek
int tuhafliklarKiyameti(){
    int son[3][3];
    int dell1[3][3] = {
        {1,4,7},
        {3,4,6},
        {9,3,1}
    };
    int dell2[3][3] = {
        {3,3,3},
        {3,1,1},
        {5,8,4}
    };
    for (int i=0; i<3; i++){

        for (int j=0; j<3; j++){
            son[i][j] = dell1[i][j] + dell2[i][j];
        }

    }
    for (int i=0;i<3;i++){
        for (int j =0;j<3;j++){
            std::cout<<son[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

//3 adet öğrenciye ait notlar girilip bunların ortalaması alınacak

int godlama(){
    int ogr[3][1];
    int toplam = 0;
    for (int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            std::cout<<i+1<<". ogrencinin notu: ";cin>>ogr[i][j];}
    }
    for (int i=0;i<3;i++){
        for (int j=0; j<1; j++){
            toplam = toplam + ogr[i][j];
        }
    }
    std::cout<<"notlar ortalamasi: "<<(toplam/3);
    return 0;
}

// verilen bir dizideki en büyük ve en küçük sayıları bulan program yapılacak

int maraba(){
    int dizi[10] = {23,1,4,325,7,999,123,2,1,42811};
    int eb = dizi[0];
    for (int i=0;i<10;i++){
        if( eb < dizi[i] ){
            eb = dizi[i];
        }
    }
    std::cout<<"en buyuk lavuk: "<<eb;
    return 0;
}


int main(){
    //egikAtis();
    //geometrikSekil();
    //donguler();
    //parcaliFonksiyon();
    //ikinciDDK();
    //sigma();
    //tuhafSigma();
    //ikinciTuhafSigma();
    //kiymaFonksiyonu();
    //deneme();
    //ohmDeney();
    //ssgma();
    //fizikLe();
    //expSeyi();
    //imamBayildi();
    //imamAyildi();
    //imamTuhaf();
    //imamNerede();
    //dedeKayip();
    //asdas();
    //standartSapma();
    //eeBB();
    //tuhafliklarKiyameti();
    //godlama();
    //maraba();
}
