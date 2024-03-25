#include <iostream>
#include <iomanip>
#include <string.h>
#include <queue>
#include <windows.h>
#include <mmsystem.h>
#include <chrono>
using namespace std::chrono;
using namespace std;
int p;
int OK1,OK2,OK3,OK4,OK5,OK6,OK7,OK8,OK9,OK10;
float scortotal;
float nr;
//definirea claselor utilizate
void aplicatia1neori();
void aplicatia2neori();
void uni_aplicatii();
void tabbi_aplicatii1();
void tabbi_aplicatii2();
void uni_test();
void aplicatiauni1();
void aplicatiauni2();
void aplicatia3neori();
void bunvenit();
void gre_introducere();
void gre_cand();
void gre_pasi();
void gre_exemple();
void gre_aplicatii();
void aplicatiagre1();
void gre_test();
void exemplu1_greedy();
void exemplu2_greedy();
void ies();
void prezentare();
void meniuprincipal();
void elembaza();
void tabuni();
void tabbi();
void sircaract();
void subprograme();
void grafneori();
void grafori();
void backtracking();
void greedy();
void progdin();
void meniugrafneori();
void DFS2();
void hamiltonianverificare();
void eulerianverificare();
void DFS1();
void conexverificare();
void DFS();
void definitii();
void gradul();
void metode();
void parcurgeri();
void conexitate();
void hamiltonian();
void eulerian();
void aplicatii();
void test();
void varfizolat();
void varfterminal();
void listaadiacenta();
void vectormuchii();
void matrice();
void caracteristici();
void aplicatiimatrice();
void aplicatia1();
void aplicatia2();
void aplicatia3();
void latime();
void adancime();
void varfizolatexemplu();
void varfterminalexemplu();
void latimeexemplu();
void adancimeexemplu();
void definitii2();
void gradul2();
void metode2();
void conexitate2();
void tareconexitate();
void aplicatii2();
void aplicatia4();
void aplicatia5();
void aplicatia6();
void test2();
void listaadiacenta2();
void vectorularcelor();
void matriceadiacenta();
void matriceaincidenta();
void matriceadrumurilor();
void succesorisipredecesori();
void arcxy();
void defsub();
void strucsub();
void transsub();
void pd_intro();
void pd_fib();
void pd_kp();
void pd_mp();
void pd_prim();
void pd_lcs();
void pd_aplicatii();
void pd_test();
void pd_apk1();
void pd_apk2();
void pd_apk3();
void tipsub();
void avansub();
void aplicsub();
void testsub();
void prob1();
void prob2();
void elem_introducere();
void elem_scrcit();
void elem_tipuri();
void elem_operat();
void elem_repet();
void elem_cond();
void elem_test();
void exemplu_cincout();
void exemplu_operatori();
void teorie_while();
void teorie_for();
void teorie_dowhile();
void exemplu_while();
void aplicatie_while();
void exemplu_for();
void aplicatie_for();
void exemplu_dowhile();
void aplicatie_dowhile();
void aplicatiabaza1();
void aplicatiabaza2();
void aplicatiabaza3();
void uni_introducere();
void uni_elementari();
void uni_frecvente();
void uni_sortare();
void uni_binara();
void uni_inter();
void exemplu_suma();
void exemplu_maxim();
void exemplu_ak();
void exemplu_frecvente();
void fct_dowhile();
void exemplu_sortsel();
void exemplu_sortinter();
void exemplu_sortfrecv();
void elem_aplicatii();
void tabbi_definitii();
void tabbi_declarare();
void tabbi_memorie();
void tabbi_parcurgere();
void tabbi_tab_p();
void tabbi_aplicatii();
void tabbi_test();
void tabbi_dimensiuni();
void tabbi_indexare();
void tabbi_parcurgeri();
void sir_definitie();
void sir_declarare();
void sir_initializare();
void sir_citire();
void sir_aplicatii();
void sir_functii();
void sir_parcurgere();
void sir_test();
void sir_tipulChar();
void sir_apk1();
void sir_apk2();
void defback();
void formback();
void utilback();
void aplicback();
void aplicback1();
void aplicback2();
void testback();
void aplicback1rez();
void aplicback2rez();
void prezentareit();
void facultati();
void iesire();

void titlu(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    // folosim functia system pentru a seta scrisul in culoarea verde
    system("Color 0A");
    cout<<"                                      INVATA INFORMATICA DE LICEU IN 10 PASI SIMPLI!"<<endl;
    system("PAUSE");
    system("cls");
}

void bunvenit(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                           BINE AI VENIT PE PLATFORMA NOASTRA!"<<endl;
    cout<<"                                      Speram sa iti fie de folos ceea ce vei invata"<<endl;
    system("PAUSE");
    system("cls");
}

void prezentare(){
    cout<<endl<<endl<<endl;
    cout<<"                                                         PREZENTARE"<<endl<<endl;
    cout<<"   Bun venit pe platforma noastra!Aici vei putea parcurge intreaga materie de liceu.Fiecare lectie va cuprinde atat informatii teoretice,cat si practice.La sfaristul acesteia vei avea de rezolvat 2 probleme de nivel mediu,iar dupa aceea un test grila pentru testarea cunostintelor."<<endl<<endl;
    cout<<"   Ceea ce noi ne propunem si ne diferentiaza de alte aplicatii este faptul ca noi ne propunem o invatare cat mai interactiva si practica a informatiilor,cat si faptul ca informatiile sunt pe intelesul tutror."<<endl<<endl;
    cout<<"   Trebuie sa tii cont de faptul ca nivelul de invatare si al testelor de la sfarsitul fiecarei lectii este unul mediu si trebuie sa acorzi importanta fiecarei informatii."<<endl<<endl;
    cout<<"   De asemenea,este important de stiut care este nivelul la care doresti sa ajungi in informatica.Daca doresti sa ajungi sa profesezi in acest domeniu trebuie sa stii ca aceste informatii sunt necesare,dar nu si suficiente pentru o cariera in IT.Daca scopul este strict pentru a invata pentru liceu,ai ajuns pe aplicatia perfecta!"<<endl<<endl;
    cout<<"   Mult succes pe parcursul lectiilor!"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    system("PAUSE");
    system("cls");
    prezentareit();
}
void prezentareit(){
    cout<<endl<<endl;
    cout<<"   Information Technology (IT) sau Tehnologia Informatiei in limba romana este o industrie extrem de complexa care are la baza utilizarea computerelor pentru a stoca, crea, prelua, procesa si schimba o varietate de informatii si date pretioase. Practic, IT face parte din tehnologia informatiei si comunicatiilor, pe scurt (TIC). Information Technology este special conceputa pentru afaceri si raspunde unei nevoi mari pe piata internationala."<<endl;
    cout<<"   Sistemele informatice de acest gen exista dintotdeauna, insa nu la acest nivel atat de avansat. Aceste sisteme sunt inter-informationale, adica transmit date unele catre celelalte si sunt controlate de specialisti in domeniu."<<endl;
    cout<<"   Oamenii sunt obisnuiti sa adune informatii si sa le manipuleze inca de cand scrisul a fost inventat. Totusi, nu se putea vorbi atunci de tehnologie, pentru ca acest termen a aparut de abia in secolul XX si a fost inventat de catre Thomas L. Whisler si Harold J. Leavitt. Despre industria IT nu au existat decat vorbe de lauda, pentru ca ea a stat la baza dezvoltarii vietii oamenilor, mai ales in ultimii zeci de ani. Tehnologia informatiei poate fi considerata o ramura definita a informaticii, pentru ca are la baza procesarea de date, indiferent de natura lor."<<endl;
    cout<<"   Astazi, acest termen este folosit atat pentru calculatoare si retele, cat si pentru tehnologii care au la baza distribuirea informatiilor, asa cum sunt smartphone-urile si televizoarele. Servicii sau produse de tipul hardware de calculator, internet, telecomunicatii si alte electronice sunt considerate ca si componente ale aceleiasi industrii."<<endl<<endl;
    cout<<"   Avantajele domeniului IT:"<<endl;
    cout<<"   -daca iti gestionezi timpul corect,poti avea mult timp liber"<<endl;
    cout<<"   -poti lucra de acasa"<<endl;
    cout<<"   -salarii bune"<<endl;
    cout<<"   -gasirea cu usurinta a unui job in acest domeniu"<<endl<<endl;
    cout<<"   Dezavantajele domeniului IT:"<<endl;
    cout<<"   -sedentarismul"<<endl;
    cout<<"   -aparitia lipsei entuziasmului"<<endl;
    cout<<"   -colaboararea cu oameni mai putini priceputi"<<endl<<endl;
    cout<<"   Printre cele mai cautate posturi in domeniul IT sunt:"<<endl;
    cout<<"   -SQL Develeoper"<<endl;
    cout<<"   -Full-Stack Developer"<<endl;
    cout<<"   -Data Analyst"<<endl;
    cout<<"   -Java Developer"<<endl;
    cout<<"   -Software Developer"<<endl;
    cout<<"   -Machine Learning Engineer"<<endl;
    cout<<"   -Database Administrator"<<endl;
    system("PAUSE");
    system("cls");
    meniuprincipal();
}

void meniuprincipal(){
    //prezentarea meniului principal de unde utilizatorul va parcurge lectiile
    int a;
    cout<<endl<<endl<<endl;
    cout<<"                                                         MENIU PRINCIPAL"<<endl<<endl;
    cout<<"   Mai jos va vom oferi lectiile pe care le puteti parcurge in aplicatia noastra"<<endl;
    cout<<"   Ordinea in care sunt mai jos asezate este ordinea in care va recomandam sa le studiati"<<endl<<endl;
    cout<<"                                     1.Elemente de baza.Algoritmi elementari."<<endl;
    cout<<"                                     Grad dificultate:incepator"<<endl<<endl;
    cout<<"                                     2.Tablouri unidimensionale"<<endl;
    cout<<"                                     Grad dificultate:incepator"<<endl<<endl;
    cout<<"                                     3.Tablouri bidimensionale"<<endl;
    cout<<"                                     Grad dificultate:incepator"<<endl<<endl;
    cout<<"                                     4.Siruri de caractere"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     5.Subprograme"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     6.Grafuri neorientate.Arbori"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     7.Grafuri orientate"<<endl;
    cout<<"                                     Grad dificultate:mediu"<<endl<<endl;
    cout<<"                                     8.Backtracking"<<endl;
    cout<<"                                     Grad dificultate:avansat"<<endl<<endl;
    cout<<"                                     9.Metoda Greedy"<<endl;
    cout<<"                                     Grad dificultate:avansat"<<endl<<endl;
    cout<<"                                     10.Programare dinamica"<<endl;
    cout<<"                                     Grad dificultate:avansat"<<endl<<endl;
    cout<<"                                     11.Facultati de informatica"<<endl<<endl;
    cout<<"                                     12.Iesire"<<endl<<endl;
    cout<<endl<<endl;
    cout<<"   Alegeti lectia pe care doriti sa o parcurgeti: ";cin>>a;
    if(a==1){
        system("cls");
        elembaza();
    }
    else if(a==2){
        system("cls");
        tabuni();
    }
    else if(a==3){
        system("cls");
        tabbi();
    }
    else if(a==4){
        system("cls");
        sircaract();
    }
    else if(a==5){
        system("cls");
        subprograme();
    }
     else if(a==6){
        system("cls");
        grafneori();
    }
     else if(a==7){
        system("cls");
        grafori();
    }
     else if(a==8){
        system("cls");
        backtracking();
    }
     else if(a==9){
        system("cls");
        greedy();
    }
     else if(a==10){
        system("cls");
        progdin();
    }
    else if(a==11){
        system("cls");
        facultati();
    }
    else if(a==12){
        system("cls");
        iesire();
    }
    else
        meniuprincipal();
}

void elembaza(){
    //p-folosit pt a contoriza cate lectii au fost parcurse din cele 10
    if(OK1==0){
        OK1=1;
        p++;
    }
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Introducere"<<endl;
    cout<<"                 2.Scriere si citire"<<endl;
    cout<<"                 3.Tipuri de date"<<endl;
    cout<<"                 4.Expresii. Operatori"<<endl;
    cout<<"                 5.Structura conditionala"<<endl;
    cout<<"                 6.Structuri repetitive"<<endl;
    cout<<"                 7.Aplicatii"<<endl;
    cout<<"                 8.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        elem_introducere();
    else if(x=='2')
        elem_scrcit();
    else if(x=='3')
        elem_tipuri();
    else if(x=='4')
        elem_operat();
    else if(x=='5')
        elem_repet();
    else if(x=='6')
        elem_cond();
    else if(x=='7')
        elem_aplicatii();
    else if(x=='8')
        elem_test();
    else if(x=='0')
        meniuprincipal();
    else
        meniuprincipal();
}
void elem_introducere()
{
    cout<<"   SETUL DE CARACTERE reprezinta ansamblul de caractere cu ajutorul carora se poate realiza un program C++."<<endl;
    cout<<"   Acesta este alcatuit:"<<endl;
    cout<<"   -litere mari si mici ale alfabetului englez(A-Z, a-z);"<<endl;
    cout<<"   -cifrele sistemului de numeratie in baza 10(0-9);"<<endl;
    cout<<"   -caractere speciale(+,-,/,=,%,<,>,:,;,#,$,@,blank(spațiu))."<<endl;
    cout<<"   IDENTIFICATORUL este o succesiune de litere, cifre sau caracterul special underscor(_) din care prima nu trebuie sa fie cifra."<<endl;
    cout<<"   Cu ajutorul identificatorilor se asociaza nume constantelor, variabilelor, functiilor, etc."<<endl;
    cout<<"   Exemple de identificatori: a, c1, contor_cifre, etc."<<endl;
    cout<<"   Limbajul C++, ca orice limbaj de programare, este compus din cateva denumiri(identificatori) cu o semnificaţie bine stabilita, numite cuvinte cheie."<<endl;
    cout<<"   Cand alegeti denumiri de variabile pentru programe sa nu utilizati aceste denumiri, cum ar fi:auto, break, char, case, for, float, this, cin, cout, etc."<<endl;
    cout<<"   Un comentariu, incepe cu semnul // pentru a scrie un comentariu pe o singura linie sau cu semnul /* comentariu */ pentru a scrie un comentariu pe mai multe linii."<<endl;
    cout<<"   Programatorul poate sa le foloseasca pentru a include explicatii scurte sau observatii asupra codului sursa, deoarece acestea nu au niciun efect asupra comportamentului programului."<<endl;
    system("PAUSE");
    system("cls");
    elembaza();
}
void elem_scrcit()
{
    cout<<"   Pentru a realiza scrieri pe ecran se foloseste cout<<. Cuvantul cheie cout este acronimul de la console output. Forma generala este cout<<a<<b<<c<<n."<<endl;
    cout<<"   Pentru a realiza citiri de la tastatura se foloseste fluxul cin>>. Cuvantul cheie cin este acronimul de la console input.Forma generala este cin>>a>>b>>n."<<endl;
    char elem1;
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu cu citiri si scrieri de la tastatura."<<endl;
    cout<<"   Apasati tasta 2 pentru a reveni la meniul anterior."<<endl;
    cin>>elem1;
    system("cls");
    if(elem1=='1')
        exemplu_cincout();
    else if(elem1=='2')
        elembaza();
    else
        elem_scrcit();
}

void exemplu_cincout()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int x,y,z;"<<endl;
    cout<<"   cout<<'Introduceti valoarea lui x:';"<<endl;
    cout<<"   cin>>x;"<<endl;
    cout<<"   cout<<'Introduceti valoarea lui y:';"<<endl;
    cout<<"   cin>>y;"<<endl;
    cout<<"   z=x+y;"<<endl;
    cout<<"   cout<<'Suma celor doua numere este '<<z<<endl;"<<endl;
    system("PAUSE");
    system("cls");
    elem_scrcit();
}

void elem_tipuri()
{
    cout<<"   Un TIP DE DATE specifica multimea de valori pe care variabila respectiva le poate lua."<<endl;
    cout<<"   Exemple de tipuri de date:"<<endl;
    cout<<"     -char(retine un singur caracter:'A','a','%','!');"<<endl;
    cout<<"     -int(retine numere intregi cu semn: 23,-45,0);"<<endl;
    cout<<"     -float(retine numere reale in format cu virgula mobila, in simpla precizie: 7.8965,-4.123,7.0);"<<endl;
    cout<<"     -double(retine numere reale in format cu virgula mobila, in dubla precizie si se utilizeaza cand se prelucreaza numere foarte mari sau foarte mici: 7.8965, -4.123, 7.0):"<<endl;
    cout<<"     -void(tip de date special care nu specifica un anumit set de valori initial, dar care poate fi specificat ulterior declararii)."<<endl;
    cout<<"   Mai exista si MODIFICATORII DE TIP care schimba valorile pe care o variabila le poate pastra."<<endl;
    cout<<"   Modificatorii de tip sunt unsigned, long, signed, register, short. Pentru a se modifica un tip de date, modificatorul se va plasa in fata tipului respectiv."<<endl;
    system("PAUSE");
    system("cls");
    elembaza();
}

void elem_operat()
{
    cout<<"   Expresia este alcatuita dintr-unul sau mai multi operanzi legati intre ei prin operatori pentru a efectua anumite operatii"<<endl;
    cout<<"   Cei mai importanti operatori ai limbajului C++ sunt:"<<endl;
    cout<<"     -operatorii aritmetici(+,-,/,*)"<<endl;
    cout<<"     -operatorii relationali(<, >, <= ,>=, ==, !=)"<<endl;
    cout<<"     -operatorii de incrementare si decrementare(++, --)"<<endl;
    cout<<"     -operatorii logici(!, &&, ||)"<<endl;
    cout<<"     -operatorii de atribuire(=, +=, -=, *=, /=, %=)"<<endl;
    cout<<"     -operatorul de conversie explicita(tip(expresie), unde tip este int, float, char, etc.)"<<endl;
    cout<<"     -operatorul conditional(exp1 ? expr2 : exp3)"<<endl;
    cout<<"     -operatorul dimensiune sizeof(sizeof(data))"<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu de folosire a operatorilor."<<endl;
    cout<<"   Apasati tasta 2 pentru a reveni la meniul anterior."<<endl;
    char operat1;
    cin>>operat1;
    system("cls");
    if(operat1=='1')
        exemplu_operatori();
    else if(operat1=='2')
        elembaza();
    else
        elem_operat();

}
void exemplu_operatori()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int a,b=8;"<<endl;
    cout<<"   float x,y;"<<endl;
    cout<<"   char c='a', d='b';"<<endl;
    cout<<"   a=5"<<endl;
    cout<<"   x=3.14; y=2;"<<endl;
    cout<<"   cout<<a+b<<endl;//13"<<endl;
    cout<<"   cout<<a-x<<endl;//1.86"<<endl;
    cout<<"   cout<<b-y<<endl;//6"<<endl;
    cout<<"   cout<<a/x<<endl;//1.59236"<<endl;
    cout<<"   cout<<c<<d<<endl;//ab"<<endl;
    cout<<"   cout<<c+d<<endl;//195"<<endl;
    cout<<"   cout<<c-d<<endl;//-1"<<endl;
    cout<<"   cout<<b%a<<endl;//3"<<endl;
    cout<<"   cout<<a+c<<endl;//102"<<endl;
    cout<<"   cout<<x-d<<endl;//-94.86"<<endl;
    cout<<"   cout<<(a<b)<<endl;//1(TRUE);"<<endl;
    cout<<"   cout<<(x==d)<<endl;//0(FALSE);"<<endl;
    cout<<"   a++;"<<endl;
    cout<<"   cout<<a<<endl;//6"<<endl;
    cout<<"   cout<<((a>b)&&(a==b))<<endl;//0"<<endl;
    cout<<"   a+=b;"<<endl;
    cout<<"   cout<<a<<endl"<<endl;
    cout<<"   a=5;"<<endl;
    cout<<"   b=a>7 ? 15:20;// b=20"<<endl;
    cout<<"   cout<<(int)c<<endl;//97"<<endl;
    cout<<"   cout<<sizeof(c)<<octet<<endl;// 1 octet"<<endl;
    system("PAUSE");
    system("cls");
    elem_operat();
}
void elem_cond()
{
    cout<<"   Sintaxa acestei instructiuni este: "<<endl;
    cout<<"      if (conditie)"<<endl;
    cout<<"      {"<<endl;
    cout<<"         instructiune 1;"<<endl;
    cout<<"         instructiune 2;"<<endl;
    cout<<"         ..."<<endl;
    cout<<"      }"<<endl;
    cout<<"    Conditia este o expresie de tip bool si se considera a fi adevarata doar daca este adevarata(true)."<<endl;
    system("PAUSE");
    system("cls");
    elembaza();

}
void elem_repet()
{
    cout<<"   Apasati tasta 1 pentru a afla cum se foloseste structura repetitiva 'while'."<<endl;
    cout<<"   Apasati tasta 2 pentru a afla cum se foloseste structura repetitiva 'for'."<<endl;
    cout<<"   Apasati tasta 3 pentru a afla cum se foloseste structura repetitiva 'do... while'."<<endl;
    cout<<"   Apasati tasta 4 pentru a reveni la meniul anteriro"<<endl;
    char repet;
    cin>>repet;
    system("cls");
    if(repet=='1')
        teorie_while();
    else if(repet=='2')
        teorie_for();
    else if(repet=='3')
        teorie_dowhile();
    else if(repet=='4')
        elembaza();

}

void teorie_while()
{
    cout<<"   Sintaxa acestei instructiuni este: "<<endl;
    cout<<"      while (expresie)"<<endl;
    cout<<"      {"<<endl;
    cout<<"         instructiuni"<<endl;
    cout<<"      }"<<endl;
    cout<<"   Aceasta instructiune se executa astfel: "<<endl;
    cout<<"    -PAS 1: se evalueaza expresia;"<<endl;
    cout<<"    -PAS 2: daca rezultatul este diferit de 0, adica este TRUE,atunci se executa instructiunile si se revine la primul pas; altfel se trece la executia instructiunii care urmeaza instructiunii while."<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu pentru structura repetitiva 'while'."<<endl;
    cout<<"   Apasati tasta 2 pentru a testa dumneavoastra un exemplu cu structura repetitiva 'while'."<<endl;
    cout<<"   Apasati tasta 3 pentru a reveni la meniul anterior."<<endl;
    char fct_while;
    cin>>fct_while;
    system("cls");
    if(fct_while=='1')
        exemplu_while();
    if(fct_while=='2')
        aplicatie_while();
    else if(fct_while=='3')
        elem_repet();
    else elembaza();
}

void exemplu_while()
{
    cout<<"   Se citesc de la tastatura mai multe numere pana la intalnirea valorii 0. Sa se scrie un program C++ care calculeaza si afiseaza pe ecran suma numerelor pare si produsul numerelor impare."<<endl;
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int n,s,p;"<<endl;
    cout<<"   cout<<'n=';"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   s=0;p=1;"<<endl;
    cout<<"   while(n>0)"<<endl;
    cout<<"   {"<<endl;
    cout<<"       if(n%2==0)"<<endl;
    cout<<"            s=s+n;"<<endl;
    cout<<"       else"<<endl;
    cout<<"            p=p*n;"<<endl;
    cout<<"   cout<<'n= ';"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   }"<<endl;
    cout<<"   cout<<'Suma numerelor pare este '<<s<<endl;"<<endl;
    cout<<"   cout<<'Produsul numerelor impare este '<<p;"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    elem_repet();
}

void aplicatie_while()
{
    cout<<"   Se citesc de la tastatura mai multe numere pana la intalnirea valorii 0. Sa se scrie un program C++ care determina valoarea maxima si de cate ori apare in sir."<<endl;
    int n, maxi, contor;
    cout<<"n= ";
    cin>>n;
    maxi=n;
    contor=1;
    while(n>0)
    {
        cout<<"n= ";
        cin>>n;
        if(maxi==n)
            contor++;
        else if(n>maxi)
        {
            maxi=n;
            contor=1;
        }
    }
    cout<<"Valoarea maxima din sir este "<<maxi;
    cout<<" si apare de "<<contor<<" ori.";
    system("PAUSE");
    system("cls");
    elem_repet();
}

void teorie_for()
{
    cout<<"   Sintaxa acestei instructiuni este: "<<endl;
    cout<<"      for (exp1;exp2;exp3)"<<endl;
    cout<<"      {"<<endl;
    cout<<"         instructiuni"<<endl;
    cout<<"      }"<<endl;
    cout<<"      - exp1, pentru initializare, prin care se stabileste starea dinainte de prima executie a instructiunii;"<<endl;
    cout<<"      - exp2, pentru testare, compara starea curenta cu starea care termina procesul de terminare si are rolul de a termina executarea repetata a instructiunilor;"<<endl;
    cout<<"      - exp3, pentru modificare, prin schimbarea starii curente, astfel incat sa se avanseze catre starea finala."<<endl;
    cout<<"   Aceasta instructiune se executa astfel: "<<endl;
    cout<<"    -PAS 1: se evalueaza exp1;"<<endl;
    cout<<"    -PAS 2: se evalueaza expresia expe2; daca rezultatul este TRUE, atunci se executa instructiunile; altfel se trece la executia instructiunii care urmeaza instructiunii for."<<endl;
    cout<<"    -PAS 3: se evalueaza exp3 si se revina la PAS 2;"<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu pentru structura repetitiva 'for'."<<endl;
    cout<<"   Apasati tasta 2 pentru a testa dumneavoastra un exemplu cu structura repetitiva 'for'."<<endl;
    cout<<"   Apasati tasta 3 pentru a reveni la meniul anterior."<<endl;
    char fct_for;
    cin>>fct_for;
    system("cls");
    if(fct_for=='1')
        exemplu_for();
    if(fct_for=='2')
        aplicatie_for();
    else if(fct_for=='3')
        elem_repet();
    else elembaza();
}

void exemplu_for()
{
    cout<<"   Se citesc de la tastatura n numere intregi. Sa se scrie un program C++ care calculeaza si afiseaza pe ecran suma numerelor pare si produsul numerelor impare."<<endl;
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int n, s, p, i, a;"<<endl;
    cout<<"   cout<<'n=';"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   s=0;p=1;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"   {"<<endl;
    cout<<"   cout<<'a= ';"<<endl;
    cout<<"   cin>>a;"<<endl;
    cout<<"       if(a%2==0)"<<endl;
    cout<<"            s=s+a;"<<endl;
    cout<<"       else"<<endl;
    cout<<"            p=p*a;"<<endl;
    cout<<"   }<<endl;"<<endl;
    cout<<"   cout<<'Suma numerelor pare este '<<s<<endl;"<<endl;
    cout<<"   cout<<'Produsul numerelor impare este '<<p;"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    elem_repet();
}

void aplicatie_for()
{
    cout<<"   Se citesc de la tastatura n numere intregi. Sa se scrie un program C++ care determina media aritmetica a numerelor impare."<<endl;
    int n, s, i, a, contor;
    cout<<"n= ";
    cin>>n;
    s=0;
    contor=0;
    for(i=1;i<=n;i++)
    {
        cout<<"a= ";
        cin>>a;
        if(a%2!=0)
            {contor++;
            s=s+a;
            }

    }
    cout<<"Media aritmetica a numerelor ";
    cout<<" impare este "<<(float)s/contor<<" .";
    system("PAUSE");
    system("cls");
    elem_repet();
}

void teorie_dowhile()
{
    cout<<"   Sintaxa acestei instructiuni este: "<<endl;
    cout<<"      do"<<endl;
    cout<<"      {"<<endl;
    cout<<"         instructiuni"<<endl;
    cout<<"      }"<<endl;
    cout<<"      while(expresie);"<<endl;
    cout<<"   Aceasta instructiune se executa astfel: "<<endl;
    cout<<"    -PAS 1: se executa instructiunile;"<<endl;
    cout<<"    -PAS 2: se evalueaza expresia; daca rezultatul este TRUE, atunci se revine la primul pas; altfel trece la executia instructiunii care urmeaza instructiunii do...while."<<endl;
    cout<<"    Spre deosebire de instructiunea WHILE instructiunea DO...WHILE se executa cel putin o data."<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu pentru structura repetitiva 'do...while'."<<endl;
    cout<<"   Apasati tasta 2 pentru a testa dumneavoastra un exemplu cu structura repetitiva 'do...while'."<<endl;
    cout<<"   Apasati tasta 3 pentru a reveni la meniul anterior."<<endl;
    char fct_dowhile;
    cin>>fct_dowhile;
    system("cls");
    if(fct_dowhile=='1')
        exemplu_dowhile();
    if(fct_dowhile=='2')
        aplicatie_dowhile();
    else if(fct_dowhile=='3')
        elem_repet();
    else elembaza();
}

void exemplu_dowhile()
{
    cout<<"   Se citesc cifrele unui numar incepand cu cifra cea mai semnificativa. Sa se afiseze numarul obtinut."<<endl;
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   long n"<<endl;
    cout<<"   int cifra;"<<endl;
    cout<<"   cout<<'cifra= ';"<<endl;
    cout<<"   cin>>cifra;"<<endl;
    cout<<"   n=0;"<<endl;
    cout<<"   if(cifra>=0 && cifra<=9)"<<endl;
    cout<<"   do"<<endl;
    cout<<"   {"<<endl;
    cout<<"       n=n*10+cifra;"<<endl;
    cout<<"       cout<<'Cifra';"<<endl;
    cout<<"       cin>>cifra;"<<endl;
    cout<<"   }"<<endl;
    cout<<"   while(cifra>=0 && cifra<=9);"<<endl;
    cout<<"   cout<<'Numarul obtinut este '<<n;"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    elem_repet();
}

void aplicatie_dowhile()
{
    cout<<"   Se citesc cifrele unui numar incepand cu cifra cea mai semnificativa. Sa se afiseze numarul obtinut."<<endl;
    long n;
    int cifra;
    cout<<"Cifra:";
    cin>>cifra;
    n=0;
    if(cifra>=0 && cifra<=9)
    do
    {
        n=n*10+cifra;
        cout<<"Cifra:";
        cin>>cifra;
    }
    while(cifra>=0 && cifra<=9);
    cout<<"Numarul obtinut este "<<n;
    system("PAUSE");
    system("cls");
    elem_repet();
}

void elem_aplicatii()
{
    cout<<"   1.Determinarea celui mai mare divizor comun a doua numere naturale. Algoritmul lui Euclid."<<endl;
    cout<<"   2.Descompunerea in factori primi a unui numar natural."<<endl;
    cout<<"   3.Determinarea valorii minime dintr-un sir de numere."<<endl;
    cout<<"   4.Revenire"<<endl;
    cout<<endl<<endl;
    cout<<"   Apasati tasta corepunzatoare fiecarei probleme pentru a-i vedea rezolvarea"<<endl;
    char aplic;
    cin>>aplic;
    system("cls");
    if(aplic=='1')
        aplicatiabaza1();
    else if(aplic=='2')
        aplicatiabaza2();
    else if(aplic=='3')
        aplicatiabaza3();
    else if(aplic=='4')
        elembaza();
    else
        elem_aplicatii();
}

void aplicatiabaza1()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int a,b,r;"<<endl;
    cout<<"   cout<<'a=';"<<endl;
    cout<<"   cin>>a;"<<endl;
    cout<<"   cout<<'b=';"<<endl;
    cout<<"   cin>>b;"<<endl;
    cout<<"   while(b)"<<endl;
    cout<<"   {"<<endl;
    cout<<"        r=a%b;"<<endl;
    cout<<"        a=b;"<<endl;
    cout<<"        b=r;"<<endl;
    cout<<"   }<<endl;"<<endl;
    cout<<"   cout<<'CMMDC este '<<a;"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    elem_aplicatii();
}

void aplicatiabaza2()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   {"<<endl;
    cout<<"   int n, d=2, k;"<<endl;
    cout<<"   cout<<'n=';"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   while(n!=1)"<<endl;
    cout<<"   {"<<endl;
    cout<<"      if(n%d==0)"<<endl;
    cout<<"      {"<<endl;
    cout<<"         k=0;"<<endl;
    cout<<"         while(n%d==0)"<<endl;
    cout<<"         {"<<endl;
    cout<<"            k++;"<<endl;
    cout<<"            n=n/d;"<<endl;
    cout<<"         }"<<endl;
    cout<<"         cout<<d<<'^'<<k<<endl;"<<endl;
    cout<<"      }"<<endl;
    cout<<"      d++;"<<endl;
    cout<<"   }"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    elem_aplicatii();
}

void aplicatiabaza3()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int n,a,max,i;"<<endl;
    cout<<"   cout<<'n=';"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   cout<<'a=';"<<endl;
    cout<<"   cin>>a;"<<endl;
    cout<<"   max=a"<<endl;
    cout<<"   for(i=2;i<=n;i++)"<<endl;
    cout<<"   {"<<endl;
    cout<<"        cout<<'a= ';"<<endl;
    cout<<"        cin>>a;"<<endl;
    cout<<"        if(a>max)"<<endl;
    cout<<"           max=a;"<<endl;
    cout<<"   }<<endl;"<<endl;
    cout<<"   cout<<max;"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    elem_aplicatii();
}

void elem_test()
{
    //nr-cate teste au fost facute
    nr++;
    int scor3=0;
    cout<<"   1. Consideram ca variabila a are valoarea 'z'. Carui tip poate apartine aceasta variabila:"<<endl;
    cout<<"   a)unsigned int b)long c)char d)double"<<endl;
    char et1;
    cin>>et1;
    if(et1=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor3++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   2.Care din urmatoarele declaratii este corecta: "<<endl;
    cout<<"   a)int abc b)double nr prim c)long 2ab d)int m.n"<<endl;
    char et2;
    cin>>et2;
    if(et2=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor3++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   3.Care din urmatoarele expresii furnizeaza rezultatul 1 daca a si b sunt ambele pozitive:"<<endl;
    cout<<"   a)(a > 0) && (a > b)  b)a*b > 0  c)(a > 0) || (b>0)  d)(a*b > 0) && (b > 0)"<<endl;
    char et3;
    cin>>et3;
    if(et3=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor3++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   4.Care din urmatoarele expresii au valoarea 1 :"<<endl;
    cout<<"   a) (3 < 7) && (2 < 0) || (6 = = 4)  b) (3 < 7) || (2 < 0) || (6 = = 4)  c) ! (2 < 0) || (6 = = 4)"<<endl;
    char et4;
    cin>>et4;
    if(et4=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor3++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   5.Alegeti varianta corecta care verifica daca n (natural) este par:"<<endl;
    cout<<"   a. if (n % 2) cout << “par” ;  b. if (n / 2) cout << “par” ;  c.  if (!(n % 2)) cout << “par” ;  d.  if (n / 2 = = 0) cout << “par” ;"<<endl;
    char et5;
    cin>>et5;
    if(et5=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor3++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    //afisare scor final
    cout << "\nScorul tau final: " << scor3 << "/5\n";
    //scortotal-suma tuturor scorurilor facute in aplicatie
    scortotal=scortotal+scor3;
    system("PAUSE");
    system("cls");
    elembaza();
}

void tabuni(){
    if(OK2==0){
        OK2=1;
        p++;
    }
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Introducere"<<endl;
    cout<<"                 2.Algoritmi elementari cu vectori"<<endl;
    cout<<"                 3.Vector de frecvente"<<endl;
    cout<<"                 4.Sortarea vectorilor"<<endl;
    cout<<"                 5.Cautare binara"<<endl;
    cout<<"                 6.Interclasarea vectorilor"<<endl;
    cout<<"                 7.Aplicatii"<<endl;
    cout<<"                 8.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        uni_introducere();
    else if(x=='2')
        uni_elementari();
    else if(x=='3')
        uni_frecvente();
    else if(x=='4')
        uni_sortare();
    else if(x=='5')
        uni_binara();
    else if(x=='6')
        uni_inter();
    else if(x=='7')
        uni_aplicatii();
    else if(x=='8')
        uni_test();
    else if(x=='0')
        meniuprincipal();
    else
        meniuprincipal();
}

void uni_introducere()
{
    cout<<"   Vectorii sau tablourile unidimensionale sunt structuri de date bine definite si organizate in memorie."<<endl;
    cout<<"   Cu ajutorul acestora, se pot pastra in memorie si accesa ulterior mai multe variabile, fara a fi nevoie de retinerea explicita a fiecareia dintre ele."<<endl;
    cout<<"   Cu alte cuvinte, un vector retine sub acelasi nume mai multe valori de acelasi tip. Fiecare valoare poate fi accesata folosind poziția sa in vector."<<endl;
    cout<<"         Declararea vectorilor"<<endl;
    cout<<"   Sintaxa este: tip elemente vector ; nume vector [dimensiune maxima vector];"<<endl;
    cout<<"   Exemple: "<<endl;
    cout<<"     int x[100];// tipul elementelor vectorului este int iar dimensiunea maxima 100"<<endl;
    cout<<"     double a[50];"<<endl;
    cout<<"     char s[1000];"<<endl;
    cout<<"          Initializarea vectorilor"<<endl;
    cout<<"   Fiecare element al vectorului este o variabila separata, care poate fi atribuita, citita sau scrisa intocmai ca o variabila de tipul vectorului."<<endl;
    cout<<"   Exemple: "<<endl;
    cout<<"     int v[4]={5, 6, 10, 21}; // inițializarea la declarare"<<endl;
    cout<<"     int numere[50];"<<endl;
    cout<<"     for(i=0;i<numar-numere;i++)"<<endl;
    cout<<"     { numere[i]=i; } // inițializarea la atribuire"<<endl;
    cout<<"      v[3] = 30; // atribuirea"<<endl;
    cout<<"      v[i] = v[i] + 1; // atribuirea"<<endl;
    cout<<"            Citirea vectorilor"<<endl;
    cout<<"   Citirea mai multor valori dintr-un fisier si introducerea lor intr-un vector se face similar cu citirea unei secvente: vom citi mai intai numarul de elemente, n si apoi cele n elemente, de la 0 la n-1 sau de la 1 la n."<<endl;
    cout<<"   int a[100];//un vector de maxim 100 elemente"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   { int n,i;"<<endl;
    cout<<"     cout<<n= ; cin>>n; //n este lungimea vectorului"<<endl;
    cout<<"     for(i=0;i<n;i++) "<<endl;
    cout<<"    {  cout<<a[ <<i<<]= ; /*se afiseaza numarul de ordine al elementului, careeste cu 1 mai mare decat indicele */"<<endl;
    cout<<"       cin>>a[i];} "<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<"              Afisarea vectorilor"<<endl;
    cout<<"   Afiaarea valorilor vectorului este similara cu citirea. Vom scrie in fișierul de iesire fiecare valoare, pe rand: de la 0 la n-1 sau de la 1 la n."<<endl;
    cout<<"   int a[100];//un vector de maxim 100 elemente"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   { int n,i;"<<endl;
    cout<<"     cout<<n= ; cin>>n; //n este lungimea vectorului"<<endl;
    cout<<"     for(i=0;i<n;i++) "<<endl;
    cout<<"    {  cout<<a[i]<<' '; ; /*se afiseaza numarul de ordine al elementului, careeste cu 1 mai mare decat indicele */"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    tabuni();

}

void uni_elementari()
{
    cout<<"   Apasati tasta 1 pentru a vedea cum se afla suma elementelor unui vector"<<endl;
    cout<<"   Apasati tasta 2 pentru a vedea cum se afla maximul dintr-un vector"<<endl;
    cout<<"   Apasati tasta 3 pentru a vedea cum se elimina elementul a[k] aflat pe pozitia k dintr-un vector"<<endl;
    cout<<"   Apasati tasta 4 pentru a reveni la meniul anterior"<<endl;
    char fct_unielem;
    cin>>fct_unielem;
    system("cls");
    if(fct_unielem=='1')
        exemplu_suma();
    if(fct_unielem=='2')
        exemplu_maxim();
    else if(fct_unielem=='3')
        exemplu_ak();
    else if(fct_unielem=='4')
        tabuni();
    else
        uni_elementari();
}

void exemplu_suma()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int v[100];"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int i,n,s=0;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"      {cin>>v[i];"<<endl;
    cout<<"        s=s+v[i];}"<<endl;
    cout<<"   cout<<s;"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    uni_elementari();
}

void exemplu_maxim()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int v[101];"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int i, vmax, n;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"      {cin>>v[i];}"<<endl;
    cout<<"   vmax=v[1];"<<endl;
    cout<<"   for(i=2;i<=n;i++){"<<endl;
    cout<<"   if(v[i]>vmax)"<<endl;
    cout<<"   vmax=v[i];}"<<endl;
    cout<<"   cout<<vmax;"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    uni_elementari();
}

void exemplu_ak()
{
    cout<<"   for(i=k; i<=n-1; i++)"<<endl;
    cout<<"   a[i]=a[i+1];"<<endl;
    cout<<"   n--;"<<endl;
    system("PAUSE");
    system("cls");
    uni_elementari();
}

void uni_frecvente()
{
    cout<<"   Vectorii de frecventa sunt vectori ale caror elemente au o semnificatie speciala: valoarea de pe pozitia i arata numarul de aparitii a lui i intr-o alta entitate, de obicei o secventa de numere, sau un numar."<<endl;
    cout<<"   In orice multime elementele sunt unice, iar vectorul frecventelor are doar valori 0 sau 1. Acest vector este numit vectorul caracteristic al unei multimi."<<endl;
    cout<<"   Vectorul de frecvente poate fi folosit pentru a obtine rapid multimea asociata ca un vector caracteristic astfel:"<<endl;
    cout<<"     -0 inseamna ca elementul nu apartine multimii;"<<endl;
    cout<<"     -1 (o valoare diferita de 0) inseamna ca elementul apartine multimii."<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu pentru structura repetitiva 'do...while'."<<endl;
    cout<<"   Apasati tasta 2 pentru a reveni la meniul anterior."<<endl;
    char fct_frecvente;
    cin>>fct_frecvente;
    system("cls");
    if(fct_frecvente=='1')
        exemplu_frecvente();
    if(fct_frecvente=='2')
        tabuni();
    else tabuni();
}

void exemplu_frecvente()
{
    cout<<"   Fiind dat un numar natural n, sa se afiseze cifrele numarului si numarul de aparitii ale fiecarei cifre in numar. "<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int v[10];"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int n,c;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   while(n>0){"<<endl;
    cout<<"      c=n%10;"<<endl;
    cout<<"      v[c]++;"<<endl;
    cout<<"      n=n/10;}"<<endl;
    cout<<"   for(c=0;c<10;c++){"<<endl;
    cout<<"      if(v[c]!=0)"<<endl;
    cout<<"      cout<<c<<' '<<v[c]<<endl;}"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    uni_frecvente();
}

void uni_sortare()
{
    cout<<"   Prin sortare se intelege aranjarea elementelor unui vector in ordine crescatoare sau descrescatoare. "<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu pentru sortarea prin selectie'."<<endl;
    cout<<"   Apasati tasta 2 pentru a vedea un exemplu pentru sortarea prin interclasare."<<endl;
    cout<<"   Apasati tasta 3 pentru a vedea un exemplu pentru sortarea folosind vectorul de frecventa"<<endl;
    cout<<"   Apasati tasta 4 pentru a reveni la meniul anterior"<<endl;
    char fct_sortare;
    cin>>fct_sortare;
    system("cls");
    if(fct_sortare=='1')
        exemplu_sortsel();
    if(fct_sortare=='2')
        exemplu_sortinter();
    else if(fct_sortare=='3')
        exemplu_sortfrecv();
    else if(fct_sortare=='4')
        tabuni();
    else
        uni_sortare();

}

void exemplu_sortsel()
{
    cout<<"   for ( i = 1; i <= n ; i++ ) {"<<endl;
    cout<<"   mini = v[i]; "<<endl;
    cout<<"   p = i;"<<endl;
    cout<<"   for ( j = i + 1; j < n; j++ )"<<endl;
    cout<<"     if ( v[j] < mini ) "<<endl;
    cout<<"        { mini = v[j]; "<<endl;
    cout<<"           p = j; }"<<endl;
    cout<<"   v[p] = v[i];"<<endl;
    cout<<"   v[i] = mini; } "<<endl;
    cout<<"   "<<endl;
    system("PAUSE");
    system("cls");
    uni_sortare();
}

void exemplu_sortinter()
{
    cout<<"   for ( i = 1; i < n ; i++ ) "<<endl;
    cout<<"       for ( j = i + 1; j <= n; j++ ) "<<endl;
    cout<<"           if ( v[j] < v[j] )"<<endl;
    cout<<"              { aux = v[i];"<<endl;
    cout<<"                v[i] = v[j]; "<<endl;
    cout<<"                v[j] = aux; } "<<endl;
    system("PAUSE");
    system("cls");
    uni_sortare();
}

void exemplu_sortfrecv()
{
    cout<<"   cin>>n;"<<endl;
    cout<<"   for (i=1;i<=n;i++){ "<<endl;
    cout<<"       cin >> x; "<<endl;
    cout<<"       fr[x]++; } "<<endl;
    cout<<"   for (x=0;x<=100;x++)"<<endl;
    cout<<"   for (i=1;i<=fr[x];i++) "<<endl;
    cout<<"   cout<<x<<” ”;"<<endl;
    system("PAUSE");
    system("cls");
    uni_sortare();

}


void uni_binara()
{
    cout<<"   Cautarea unei valori intr-un vector se poate face in doua moduri:"<<endl;
    cout<<"      -secvential : presupune analizarea fiecarui element al vectorului intr-o anumita ordine. Cand se gaseste valoarea cautata parcurgerea vectorului se poate opri. In cel mai rau caz, pentru un vector cu n elemente parcurgerea face n pasi, complexitatea timp a cautarii secventiale este O(n)."<<endl;
    cout<<"      -binar. Cautarea binara se poate face intr-un vector numai daca elementele acestuia sunt in ordine dupa un anumit criteriu. Cautarea binara presupune impartirea vectorului in secvente din ce in ce mai mici, injumatatindu-le si continuand cu jumatatea in care se poate afla valoarea dorita."<<endl;
    cout<<"   Algoritmul cautarii binare este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int a[1001], n,x,st,dr,poz,i;"<<endl;
    cout<<"   cin>>n>>x;"<<endl;
    cout<<"   for(i=1;i<=n;i++){"<<endl;
    cout<<"       cin>>a[i];}"<<endl;
    cout<<"   st=1; dr=n; poz=0;"<<endl;
    cout<<"   while(st<=dr && poz==0){"<<endl;
    cout<<"       int mij=(st+dr)/2;"<<endl;
    cout<<"       if(a[mij]==x)  poz=mij;"<<endl;
    cout<<"          else if(a[mij]<x)  st=mij+1;"<<endl;
    cout<<"            else dr=mij-1;}"<<endl;
    cout<<"   if(poz!=0)"<<endl;
    cout<<"      cout<<'Valoarea '<< x <<' se afla pe pozitia '<< poz;"<<endl;
    cout<<"   else cout<<'Valoarea '<< x <<' nu exista in vector"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    tabuni();

}

void uni_inter()
{
    cout<<"      Interclasarea"<<endl;
    cout<<"   -consideram doua tablouri, cu n, respectiv m elemente, ordonate crescator "<<endl;
    cout<<"   -cele doua tablouri se parcurg concomitent;"<<endl;
    cout<<"   -se alege valoarea mai mica dintre cele doua elemente curente"<<endl;
    cout<<"   -se adauga in al treilea tablou"<<endl;
    cout<<"   -se avanseaza numai in tabloul din care am ales valoarea de adaugat"<<endl;
    cout<<"   -parcurgerea unuia dintre cele doua tablouri se incheie"<<endl;
    cout<<"   -toate elementele din celalalt tablou, neparcurse inca, sunt adaugate in tabloul destinatie"<<endl;
    cout<<"   -tabloul destinatie are k = n + m elemente"<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   {int a[100001],b[100001], c[200002], i, j, k, n, m ;"<<endl;
    cout<<"   i=1;j=1;k=0; "<<endl;
    cout<<"   while(i<=n && j<=m) "<<endl;
    cout<<"     if (a[i]<b[j]){"<<endl;
    cout<<"        k++; "<<endl;
    cout<<"        c[k]=a[i]; "<<endl;
    cout<<"        i++;}"<<endl;
    cout<<"     else{ k++;"<<endl;
    cout<<"           c[k]=b[j]; "<<endl;
    cout<<"            j++;}"<<endl;
    cout<<"   while(i<=n){"<<endl;
    cout<<"        k++;"<<endl;
    cout<<"        c[k]=a[i]; "<<endl;
    cout<<"        i++;}"<<endl;
    cout<<"   while (j<=m){ "<<endl;
    cout<<"        k++;"<<endl;
    cout<<"        c[k]=b[j]; "<<endl;
    cout<<"        j++;}}"<<endl;
    system("PAUSE");
    system("cls");
    tabuni();

}
void uni_aplicatii()
{
    cout<<"  Mai jos veti avea de rezolvat 2 probleme din acest capitol"<<endl<<endl;
    cout<<"  1.Sa se determine numarul de elemente din vector care sunt multipli de k."<<endl;
    cout<<"  2.Sa se verifice daca toate elementele vectorului sunt egale."<<endl;
    cout<<"  Apasati tasta 1 pentru a vedea rezolvarea primei probleme,tasta 2 pentru rezolvarea celei de-a doua probleme, tasta 3 pentru a reveni la meniul anterior: ";
    char uni_aplic;
    cin>>uni_aplic;
    system("cls");
    if(uni_aplic=='1')
        aplicatiauni1();
    else if(uni_aplic=='2')
        aplicatiauni2();
    else if(uni_aplic=='3')
        tabuni();
    else
        tabuni();
}

void aplicatiauni1()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int nr=0,k,n,v[100];"<<endl;
    cout<<"   cout<<'n=';"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   cout<<'k=';"<<endl;
    cout<<"   cin>>k;"<<endl;
    cout<<"   for (int i = 0; i < n; i++)"<<endl;
    cout<<"   cin>>v[i];"<<endl;
    cout<<"   for (int i = 0; i < n; i++)"<<endl;
    cout<<"      if (v[i] % k == 0)"<<endl;
    cout<<"        nr++;"<<endl;
    cout<<"   cout<<'Numarul este '<<nr;"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    uni_aplicatii();
}


void aplicatiauni2()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   {"<<endl;
    cout<<"   int n,v[100];"<<endl;
    cout<<"   bool ok=false;"<<endl;
    cout<<"   cout<<'n=';"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   for (int i = 0; i < n; i++)"<<endl;
    cout<<"      cin>>v[i];"<<endl;
    cout<<"   for (int i = 0; i < n; i++)"<<endl;
    cout<<"      if (v[i] % 2) {"<<endl;
    cout<<"         ok=true;"<<endl;
    cout<<"         break;"<<endl;
    cout<<"         }"<<endl;
    cout<<"   if(ok)"<<endl;
    cout<<"       cout<<'DA\n'"<<endl;
    cout<<"   else"<<endl;
    cout<<"        cout<<'NU\n'"<<endl;
    cout<<"    }"<<endl;
    system("PAUSE");
    system("cls");
    uni_aplicatii();

}

void uni_test()
{
    nr++;
    int scor_uni=0;
    cout<<"   1. Puteti sa aflati informatii dintr-un tablou unidimensional, prin operatia de:"<<endl;
    cout<<"   a)actualizare b)sortare c)consultare"<<endl;
    char ttabuni1;
    cin>>ttabuni1;
    if(ttabuni1=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_uni++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   2.Cate comparatii se executa pentru sortarea unui vector cu n componente folosind metoda selectarii directe? "<<endl;
    cout<<"   a)n comparatii b)(n-1)*n/2 comparatii c)n+i comparatii"<<endl;
    char ttabuni2;
    cin>>ttabuni2;
    if(ttabuni2=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_uni++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   3.Care dintre variantele de mai jos reprezinta o declaratie corecta a unui vector cu 20 de elemente, numere reale ? "<<endl;
    cout<<"   a)real v[15];  b)float v[10];  c)int v[20];  d)double v[20]"<<endl;
    char ttabuni3;
    cin>>ttabuni3;
    if(ttabuni3=='d'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_uni++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   4.Fie declararea int vector[10]; care dintre urmatoarele operatii este incorecta ?"<<endl;
    cout<<"   a)vector=10; b)vector[5]=6.7;  c)vector[0]=10;"<<endl;
    char ttabuni4;
    cin>>ttabuni4;
    if(ttabuni4=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_uni++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   5.Care dintre urmatoarele acceseaza corect primul element al unui vector din vectorul cu 100 de elemente f ?"<<endl;
    cout<<"   a) f  ;   b) f[first];   c) f[0];  d) F[1]"<<endl;
    char ttabuni5;
    cin>>ttabuni5;
    if(ttabuni5=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_uni++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout << "\nScorul tau final: " << scor_uni << "/5\n";
    scortotal=scortotal+scor_uni;
    system("PAUSE");
    system("cls");
    tabuni();
}

void tabbi(){
    if(OK3==0){
        OK3=1;
        p++;
    }
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Definitie"<<endl;
    cout<<"                 2.Declararea matricilor"<<endl;
    cout<<"                 3.Memorie"<<endl;
    cout<<"                 4.Parcurgerea matricilor"<<endl;
    cout<<"                 5.Tablouri patratice"<<endl;
    cout<<"                 6.Aplicatii"<<endl;
    cout<<"                 7.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        tabbi_definitii();
    else if(x=='2')
        tabbi_declarare();
    else if(x=='3')
        tabbi_memorie();
    else if(x=='4')
        tabbi_parcurgere();
    else if(x=='5')
        tabbi_tab_p();
    else if(x=='6')
        tabbi_aplicatii();
    else if(x=='7')
        tabbi_test();
    else if(x=='0')
        meniuprincipal();
    else
        tabbi();

}
void tabbi_definitii()
{

    cout<<" Tablourile unidimensionale C/C++ au elemente de acelasi tip. Astfel, tipul elementelor poate fi chiar tablou (unidimensional);"<<endl;
    cout<<" Elementele tabloului sunt la randul lor tablouri unidimensionale, care au elemente de un anumit tip. Aceste tablouri se numesc bidimensionale sau matrice"<<endl;
    cout<<" \nDintr-o perspectiva usoar diferita, tablourile unidimensionale sunt structuri de date alcatuite din elemente de acelasi tip, organizate pe linii si pe coloane. Astfel, fiecare element are doi indici: un indice de linie si un indice de coloana."<<endl;
    system("PAUSE");
    system("cls");
    tabbi();
}

void tabbi_declarare()
{
    cout<<"Declararea tablourilor bidimensionale (matrice) face in C/C++ similar cu a tablourilor unidimensionale, dar trebuie precizate doua dimensiuni fizice, maximale: numarul maxim de linii si numarul maxim de coloane ale matricei:"<<endl;
    cout<<"     tipDeBaza denumire[NumarLinii][NumarColoane];\n";
    cout<<"De exemplu: int A[5][10];\n\n";
    cout<<"\nReferirea elementelor se face prin intermediul operatorului C++ de indexare [], la fel ca in cazul vectorilor, dar trebuie precizati doi indici - cel de linie si cel de coloana. Astfel, A[2][4] reprezinta elementul matricei aflat pe linia 2 si pe coloana 4 - la intersectia dintre linia 2 si coloana 4. Astfel primul indice al unui element este cel de linie, iar al doilea indice este cel de coloana.\n";

    cout<<"\nCade in sarcina programatorului (adica tu!) sa se asigure ca valorile indicilor folositi in expresiile de indexare fac parte din intervalul corect, conform declararii tabloului. Daca valorile indicilor nu sunt corecte, comportamentul programului este impredictibil: rezultatele obtinute vor fi eronate sau se vor produce erori la executia programului. \n";
    cout<<"De exemplu, pentru matricea de mai sus, expresiile A[-1][7], A[2][20], A[7][7], A[7][30] sunt gresite. Rezultatele sunt impredictibile.\n\n";
    system("PAUSE");
    system("cls");
    tabbi();
}

void tabbi_memorie()
{
    cout<<"Memoria ocupata de un tablou bidimensional in limbajul de programare C++ depinde de dimensiunile tabloului si de tipul de date al elementelor sale. Pentru a calcula memoria ocupata de un tablou bidimensional, putem folosi formula:\n";
    cout<<"     memorie ocupata = numarul de randuri * numarul de coloane * dimensiunea tipului de date\n\n";
    cout<<"Sa presupunem ca avem un tablou bidimensional de tip int cu 3 randuri si 4 coloane. In acest caz, memoria ocupata de tablou va fi:\n";
    cout<<"     memorie ocupata = 3 * 4 * 4 = 48 octeti\n";
    system("PAUSE");
    system("cls");
    tabbi();

}

void tabbi_parcurgere()
{
    cout<<"                 0.Inapoi"<<endl;
    cout<<"                 1.Dimensiunile unei matrice"<<endl;
    cout<<"                 2.Indexarea de la 0 si indexarea de la 1"<<endl;
    cout<<"                 3.Parcurgerea"<<endl;


    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        tabbi_dimensiuni();
    else if(x=='2')
        tabbi_indexare();
    else if(x=='3')
        tabbi_parcurgeri();
    else if(x=='0')
        tabbi();
    else
        tabbi_parcurgere();

}

void tabbi_dimensiuni()
{
    cout<<"La fel ca in cazul tablourilor unidimensionale, si tablourile bidimensionale au doua categorii de dimensiuni:\n";
    cout<<"     -dimensiunile fizice, maxime – numarul maxim de linii, respectiv coloane pe care le poate avea tabloul; de regula se precizeaza in enuntul problemei\n";
    cout<<"     -dimensiunile logice, curente – numarul de linii si de coloane pe care le are matricea la un moment dat, pe parcursul executiei programului. Nu pot sa depaseasca dimensiunile fizice.\n\n";
    cout<<"Datorita existentei acestor dimensiuni logice, intr-un program C/C++ care foloseste tablouri bidimensionale, pe langa variabila care reprezinta tabloul propriu-zis este necesara prezenta a inca doua variabile, de regula notate cu n si m, care reprezinta numarul curent de linii, respectiv coloane ale tabloului.\n";    cout<<"     int A[100][100], n , m;\n";
    system("PAUSE");
    system("cls");
    tabbi_parcurgere();
}

void tabbi_indexare()
{
    cout<<"Implicit, tablourile bidimensionale, la fel ca cele unidimensionale sunt indexate de la 0 (liniile sunt indexate de la 0 la n-1 si coloanele de la 0 la m-1).\n";
    cout<<"Putem insa sa ignoram prima linie si prima coloana, si sa consideram tabloul indexat de la 1, adica liniile sunt indexate de la 1 la n, iar coloanele de la 1 la m. In aceasta situatie matricea trebuie declarata corespunzator.\n";
    cout<<"\nDe exemplu, pentru o matrice cu 100 de linii si 100 de coloane indexata de la 0 declararea va fi:\n";
    cout<<"     int A[100][100], n , m;\n";
    cout<<"Iar pentru o matrice similara indexata de la 1 declararea va fi:\n";
    cout<<"     int A[101][101], n , m;\n";

    system("PAUSE");
    system("cls");
    tabbi_parcurgere();
}

void tabbi_parcurgeri()
{
    cout<<"Parcurgerea presupune accesarea elementelor curente ale matricei, intr-o anumita ordine - de regula aceasta se face pe linii, de sus in jos si de la stanga la dreapta:\n";
    cout<<"int n, m, A[100][100];"<<endl;
    cout<<"..."<<endl;
    cout<<"for(int i = 0 ; i < n ; i++)"<<endl;
    cout<<"{"<<endl;
    cout<<"// linia i\n";
    cout<<"     for(int j = 0 ; j < m ; j++)\n";
    cout<<"     // A[i][j]\n";
    cout<<"     // .....\n";
    cout<<"}\n\n";

    cout<<"Urmatoarea secventa realizeaza parcurgerea pe coloane:\n";
    cout<<"int n, m, A[100][100];"<<endl;
    cout<<"..."<<endl;
    cout<<"for(int j = 0 ; j < m ; j++)"<<endl;
    cout<<"{"<<endl;
    cout<<"// linia i\n";
    cout<<"     for(int i = 0 ; i < m ; i ++)\n";
    cout<<"     // A[i][j]\n";
    cout<<"     // .....\n";
    cout<<"}\n\n";


    cout<<"Citirea unei matrici:\n";
    cout<<"cin>>n>>m;\n";
    cout<<"for(i=0;i<n;i++)\n";
    cout<<"     for(j=0;j<m;j++)\n;";
    cout<<"         cin>>A[i][j];\n";

    system("PAUSE");
    system("cls");
    tabbi_parcurgere();

}

void tabbi_tab_p ()
{
    cout<<"Un tablou bidimensional este tablou patratic sau matrice patratica daca numarul de linii este egal cu numarul de coloane.\n";
    cout<<"In aceasta situatie folosim pentru ambele dimensiuni o singura variabila, de regula n:\n";
    cout<<"     int n, A[100][100];\n\n";
    cout<<"Intr-o matrice patratica se disting o categorie speciala de elemente, diagonalele. Un element al matricei apartine sau nu diagonalelor sau zonelor delimitate de acestea daca respecta anumite reguli, in care intervin indicii elementului, nu valoarea elementului. In cele ce urmeaza, pentru un element oarecare al matricei vom nota cu i indicele de linie si cu j indicele de coloana.\n\n";
    cout<<"Elementele de pe diagonaa principala sunt de forma : A[i][i]\n";
    cout<<"\nElemenetele de pe diagonala secundara sunt de forma:\n";
    cout<<"      A[i][n - 1 - i]  ->pentru indexarea de la 0\n";
    cout<<"      A[i][n + 1 - i]  ->pentru indexarea de la 1\n";
    system("PAUSE");
    system("cls");
    tabbi();

}
void tabbi_aplicatii()
{
    int n;
    cout<<"   1.Calculul sumei elementelor unei matrici"<<endl;
    cout<<"   2.Se da o matrice cu n linii si n coloane si elemente numere naturale. Calculati diferenta in valoare absoluta dintre sumele elementelor de pe cele două diagonale."<<endl;
    cout<<endl<<endl;
    cout<<"   Apasati tasta corespunzatoare fiecarei probleme pentru a vedea rezolvarea ei sau 3 pt. a reveni la meniul anterior"<<endl;
    cin>>n;
    system("cls");
    if(n==1)
        tabbi_aplicatii1();
    else if(n==2)
        tabbi_aplicatii2();
    else if(n==3)
        tabbi();
    else
        tabbi_aplicatii();
    cout<<"#include <iostream>\n";

    cout<<"using namespace std;\n";

    cout<<"int main() {\n";
    cout<<"    int rows, cols;\n";
    cout<<"    cin >> rows;\n";
    cout<<"    cin >> cols;\n";
    cout<<"    int matrix[100][100];\n";
    cout<<"    for (int i = 0; i < rows; i++) {\n";
    cout<<"        for (int j = 0; j < cols; j++) {\n";
    cout<<"            cin >> matrix[i][j];\n";
    cout<<"        }\n";
    cout<<"    }\n";

    cout<<"    int sum = 0;\n";
    cout<<"    for (int i = 0; i < rows; i++) {\n";
    cout<<"        for (int j = 0; j < cols; j++) {\n";
    cout<<"            sum += matrix[i][j];\n";
    cout<<"        }\n";
    cout<<"    }\n";

    cout<<"    cout <<sum << endl;\n";

    cout<<"    return 0;\n";
    cout<<"}\n";
}

void tabbi_aplicatii1(){
    cout<<"#include <iostream>\n";

    cout<<"using namespace std;\n";

    cout<<"int main() {\n";
    cout<<"    int rows, cols;\n";
    cout<<"    cin >> rows;\n";
    cout<<"    cin >> cols;\n";
    cout<<"    int matrix[100][100];\n";
    cout<<"    for (int i = 0; i < rows; i++) {\n";
    cout<<"        for (int j = 0; j < cols; j++) {\n";
    cout<<"            cin >> matrix[i][j];\n";
    cout<<"        }\n";
    cout<<"    }\n";

    cout<<"    int sum = 0;\n";
    cout<<"    for (int i = 0; i < rows; i++) {\n";
    cout<<"        for (int j = 0; j < cols; j++) {\n";
    cout<<"            sum += matrix[i][j];\n";
    cout<<"        }\n";
    cout<<"    }\n";

    cout<<"    cout <<sum << endl;\n";

    cout<<"    return 0;\n";
    cout<<"}\n";
    system("PAUSE");
    system("cls");
    tabbi_aplicatii();
}

void tabbi_aplicatii2(){
    cout<<"   #include<iostream>"<<endl;
    cout<<"   #include<math.h>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"      int a[21][21], n, sp=0, ss=0, i, j;"<<endl;
    cout<<"      cin >> n;"<<endl;
    cout<<"      for (i = 1; i <= n; i++)"<<endl;
    cout<<"         for (j = 1; j <= n; j++)"<<endl;
    cout<<"            cin >> a[i][j];"<<endl;
    cout<<"      for(i=1;i<=n;i++)"<<endl;
    cout<<"         for (j = 1; j <= n; j++) {"<<endl;
    cout<<"             if (i == j)"<<endl;
    cout<<"                sp = sp + a[i][j];"<<endl;
    cout<<"             if (i + j == n + 1)"<<endl;
    cout<<"                ss = ss + a[i][j]; }"<<endl;
    cout<<"      cout << abs(sp - ss);"<<endl;
    cout<<"      return 0;"<<endl;
    system("PAUSE");
    system("cls");
    tabbi_aplicatii();
}

void tabbi_test()
{
    nr++;
    cout << "Test grila - Tablouri bidimensionale" << endl;

    int score = 0;

    // Intrebarea 1
    cout << "\n1. Care este definitia unui tablou bidimensional?\n";
    cout << "   a) Un tablou cu elemente de acelasi tip organizate pe linii\n";
    cout << "   b) Un tablou cu elemente de acelasi tip organizate pe coloane\n";
    cout << "   c) Un tablou cu elemente de acelasi tip organizate intr-o structura rectangulara cu linii si coloane\n";

    char answer1;
    cout << "Raspuns: ";
    cin >> answer1;

    if (answer1 == 'c' || answer1 == 'C') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"Raspuns gresit :(";

    // Intrebarea 2
    cout << "\n2. Cum se realizeaza parcurgerea unui tablou bidimensional?\n";
    cout << "   a) Prin intermediul unui singur indice\n";
    cout << "   b) Prin intermediul a doi indici - indicele de linie si indicele de coloana\n";
    cout << "   c) Prin intermediul unui pointer la adresa\n";

    char answer2;
    cout << "Raspuns: ";
    cin >> answer2;

    if (answer2 == 'b' || answer2 == 'B') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
     else
        cout<<"Raspuns gresit :(";

    // Intrebarea 3
    cout << "\n3. Care este formula pentru calcularea memoriei ocupate de un tablou bidimensional?\n";
    cout << "   a) dimensiunea tabloului * dimensiunea tipului de date\n";
    cout << "   b) numarul de randuri * numarul de coloane * dimensiunea tipului de date\n";
    cout << "   c) dimensiunea tipului de date / numarul de randuri * numarul de coloane\n";

    char answer3;
    cout << "Raspuns: ";
    cin >> answer3;

    if (answer3 == 'b' || answer3 == 'B') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
     else
        cout<<"Raspuns gresit :(";

    // Intrebarea 4
    cout << "\n4. Ce reprezinta dimensiunile fizice ale unui tablou bidimensional?\n";
    cout << "   a) Numarul de linii si coloane maxim pe care le poate avea tabloul\n";
    cout << "   b) Numarul de linii si coloane curente pe care le are tabloul la un moment dat\n";
    cout << "   c) Numarul total de elemente din tablou\n";

    char answer4;
    cout << "Raspuns: ";
    cin >> answer4;

    if (answer4 == 'a' || answer4 == 'A') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
     else
        cout<<"Raspuns gresit :(";

    // Intrebarea 5
    cout << "\n5. Cum se indexeaza implicit elementele unui tablou bidimensional?\n";
    cout << "   a) De la 1 la numarul de linii si de la 1 la numarul de coloane\n";
    cout << "   b) De la 0 la numarul de linii si de la 0 la numarul de coloane\n";
    cout << "   c) De la 1 la numarul de linii si de la 0 la numarul de coloane\n";

    char answer5;
    cout << "Raspuns: ";
    cin >> answer5;

    if (answer5 == 'b' || answer5 == 'B') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
     else
        cout<<"Raspuns gresit :(";

    // Intrebarea 6
    cout << "\n6. Care este caracteristica speciala a unei matrice patratice?\n";
    cout << "   a) Are un numar egal de linii si coloane\n";
    cout << "   b) Are elemente de acelasi tip\n";
    cout << "   c) Are elemente organizate intr-o structura dreptunghiulara\n";

    char answer6;
    cout << "Raspuns: ";
    cin >> answer6;

    if (answer6 == 'a' || answer6 == 'A') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
     else
        cout<<"Raspuns gresit :(";

    // Afisarea scorului final
    cout << "\nScorul tau final: " << score << "/6\n";
    scortotal=scortotal+score;
    system("PAUSE");
    system("cls");
    tabbi();

}

void sircaract(){
    //pt a contoriza cate lectii au fost parcurse
    if(OK4==0){
        OK4=1;
        p++;
    }
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Definitie"<<endl;
    cout<<"                 2.Declararea sirurilor"<<endl;
    cout<<"                 3.Initializarea sirurilor"<<endl;
    cout<<"                 4.Citirea sirurilor"<<endl;
    cout<<"                 5.Referirea unui caracter din sir. Parcurgerea unui sir"<<endl;
    cout<<"                 6.Tipul char*"<<endl;
    cout<<"                 7.Functii pentru caractere"<<endl;
    cout<<"                 8.Aplicatii"<<endl;
    cout<<"                 9.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        sir_definitie();
    else if(x=='2')
        sir_declarare();
    else if(x=='3')
        sir_initializare();
    else if(x=='4')
        sir_citire();
    else if(x=='5')
        sir_parcurgere();
    else if(x=='6')
        sir_tipulChar();
    else if(x=='7')
        sir_functii();
    else if(x=='8')
        sir_aplicatii();
    else if(x=='9')
        sir_test();
    else if(x=='0')
        meniuprincipal();
    else
        sircaract();

}

void sir_definitie()
{
    cout<<"Sirurile de caractere in limbajul de programare C++ reprezinta secvente de caractere consecutive, unde un caracter este o valoare care reprezinta un simbol sau o litera. Caracterele pot fi litere, cifre, simboluri sau chiar caractere speciale, cum ar fi spatii sau caractere de control.\n\n";

    cout<<"Un sir de caractere poate fi considerat ca o serie de elemente de tip char, fiecare element reprezentand un singur caracter. Aceste caractere sunt stocate intr-un buffer continuu in memorie, iar sfarsitul sirului este marcat cu un caracter special de terminare, denumit in mod obisnuit null terminator \0.\n";
    cout<<"Acest caracter semnaleaza ca sirul s-a incheiat si este esential in lucrul cu sirurile de caractere in C++, deoarece permite functiilor sa determine lungimea sirului.\n\n";
    system("PAUSE");
    system("cls");
    sircaract();
}

void sir_declarare()
{
    cout<<"In limbajul de programare C++, putem declara si defini siruri de caractere folosind tipul de date char si operatorul de atribuire (=). Declararea unui sir de caractere implica specificarea numelui sirului si alocarea spatiului necesar pentru a stoca caracterele. Definirea sirului consta in atribuirea valorii initiale sau atribuirea ulterioara a unui sir de caractere existent.\n";
    cout<<" De exemplu:      char numeSir[numarElemente];\n";
    cout<<"                  char sir[20];\n\n";
    system("PAUSE");
    system("cls");
    sircaract();

}
void sir_initializare()
{
    cout<<"Exista mai multe moduri de a initializa un sir:\n\n";
    cout<<"     1.Initializare la declarare:\n";
    cout<<"         char numeSir[] = 'Valoare initiala';\n\n";
    cout<<"     2.Initializare dupa declarare:\n";
    cout<<"         char numeSir[20];\n";
    cout<<"         strcpy(numeSir, 'Valoare initiala');\n";
    cout<<"         //Aici, am declarat sirul numeSir cu o dimensiune de 20 de caractere si apoi am utilizat functia strcpy() pentru a atribui valoarea Valoare initiala dupa declarare \n\n";
    cout<<"     3.Atribuirea caracter cu caracter:\n";
    cout<<"         char numeSir[10];\n";
    cout<<"         numeSir[0] = 'H';\n";
    cout<<"         numeSir[1] = 'e';\n";
    cout<<"         numeSir[2] = 'l';\n";
    cout<<"         numeSir[3] = 'l';\n";
    cout<<"         numeSir[4] = 'o';\n";
    cout<<"         numeSir[5] = '\0';\n";
    cout<<"Aici, am alocat spatiu pentru un sir de caractere cu 10 elemente si am atribuit manual caracterele pentru a forma cuvantul 'Hello'. Caracterul '\0' este adaugat pentru a marca sfarsitul sirului.\n\n";
    system("PAUSE");
    system("cls");
    sircaract();


}

void sir_citire()
{
    cout<<"Pentru citirea de la tastatura am putea folosi operatorul >>, dar in acest mod se vor citi caracterele pana la primul spatiu\n";
    cout<<"Pentru a citi siruri care contin spatii, putem folosi metoda getline: \n";
    cout<<"     istream& getline (char* s, streamsize n );\n";
    cout<<"     //Se vor citi in sirul s caracterele din stream-ul de intrare (de la tastatura) pana la aparitia caracterului sfarsit de linie '\n', dar nu mai mult de n-1 caractere.\n";
    cout<<"De exemplu:  cin.getline(s , 11);\n\n";
    system("PAUSE");
    system("cls");
    sircaract();

}

void sir_parcurgere()
{
    cout<<"Deoarece sirurile de caractere sunt de fapt tablouri, pentru referirea unui caracter din sir se foloseste operatorul [], ca in exemplul urmator:\n";
    cout<<"     char s[]=abac; // sirul consta din 5 caractere: cele 4 litere si caracterul nul '\0' \n";
    cout<<"     cout << s[3]; // c      \n";
    cout<<"     s[1] = 'r'; \n";
    cout<<"     cout << s; // arac  \n";
    cout<<"     cout << s[10]; // ??? comportament impredictibil: nu exista in sir caracter cu indice 10  \n\n";

    cout<<"In numeroase situatii este necesara analizarea fiecarui caracter din sir. Pentru aceasta este necesara o parcurgere a sirului; aceasta se face similar cu parcurgerea unui tablou oarecare. Diferenta consta in faptul ca, pentru sirul de caractere nu se cunoaste explicit lungimea. Ea poate fi determinata cu functia strlen (vezi mai jos), dar putem controla parcurgerea sirului stiind ca dupa ultimul caracter valid din sir apare caracterul nul '\0'.\n";
    cout<<"Urmatoarele exemple parcurg un sir de caractere si afiseaza caracterele separate prin spatii:\n";

    cout<<"     char s[11]; \n";
    cout<<"     cin >> s; // se citeste un cuvant , fara spatii\n";
    cout<<"     for(int i = 0 ; s[i] ; i ++)\n";
    cout<<"         cout << s[i] << " ";    \n";

    system("PAUSE");
    system("cls");
    sircaract();

}


void sir_tipulChar()
{
    cout<<"Consideram declaratia:\n";
    cout<<"     char * p , s[31] = pbinfo;\n";
    cout<<"Ce este p? Este un pointer la char, adica o variabila a carei valoare este adresa unei date de tip char.\n";
    cout<<"Ce este s? Spunem ca este un sir de caractere, dar practic s este tot un pointer. Valoarea sa este adresa primului element din sir, adica adresa lui s[0]. Observam ca de fapt, variabilele p si s sunt de acelasi tip, pointer la char. Diferenta dintre cele doua variabile este ca s memoreaza o adresa de memorie unde incepe un sir de caractere (la acea adresa exista o data de tip char) in timp ce p memoreaza o adresa aleatorie.\n\n";

    cout<<"Cu ce putem initializa pointer-ul p? Cu adresa unei date de tip char. O asemenea data este orice element al unui sir de caractere, de exemplu orice element din s. Daca p reprezinta adresa unui caracter dintr-un sir, atunci cu p se pot face toate operatiile care se pot face cu acel sir.\n";
    cout<<"Iata un exemplu:\n";
    cout<<"     #include <iostream>\n";
    cout<<"     using namespace std;\n";
    cout<<"     int main(){\n";
    cout<<"         char * p , s[]=pbinfo;\n";
    cout<<"         cout << s << endl; // pbinfo\n";
    cout<<"         p = s;\n";
    cout<<"         cout << p << endl; // pbinfo\n";
    cout<<"         p ++;\n";
    cout<<"         cout << p << endl; // binfo\n";
    cout<<"         return 0;\n";
    cout<<"}\n\n";
    system("PAUSE");
    system("cls");
    sircaract();
}

void sir_functii()
{
    cout << "In limbajul de programare C++, exista o serie de functii predefinite care sunt utile in manipularea sirurilor de caractere. Iata cateva dintre cele mai importante functii aplicate sirurilor de caractere:\n\n";

    cout << "\nstrlen(const char* str): Aceasta functie calculeaza si returneaza lungimea unui sir de caractere, adica numarul de caractere pana la caracterul nul de sfarsit '\\0'.\n";
    cout << "\nstrcpy(char* dest, const char* src): Functia copiaza continutul unui sir de caractere sursa (src) intr-un sir de caractere destinatie (dest). Este important ca dest sa aiba suficient spatiu alocat pentru a primi continutul lui src.\n";
    cout << "\nstrcat(char* dest, const char* src): Aceasta functie concateneaza (adauga) continutul sirului src la sfarsitul sirului dest. Iar aici, dest trebuie sa aiba suficient spatiu alocat pentru a putea primi noul continut.\n";
    cout << "\nstrcmp(const char* str1, const char* str2): Functia compara doua siruri de caractere str1 si str2 si returneaza rezultatul comparatiei. Daca str1 este mai mic decat str2, rezultatul va fi negativ. Daca str1 este mai mare decat str2, rezultatul va fi pozitiv. Daca cele doua siruri sunt identice, rezultatul va fi zero.\n";
    cout << "\nstrchr(const char* str, int c): Functia cauta prima aparitie a caracterului c in sirul de caractere str. Daca se gaseste caracterul, functia returneaza un pointer catre acea pozitie in sir. In caz contrar, functia returneaza NULL.\n";
    system("PAUSE");
    system("cls");
    sircaract();

}


void sir_aplicatii()
{

    cout<<"1.Aceasta aplicatie primeste un text de la utilizator si il convertește in litere majuscule sau litere minuscule, in functie de optiunea selectata. Utilizatorul poate alege sa converteasca un singur cuvant sau un intreg sir de caractere."<<endl;
    cout<<"2.Se citeste un sir de la tastatura.Sa se afiseze prima litera din fiecare cuvant"<<endl;
    cout<<"Pentru a ne intoarce la pagina anterioara, apasati 3\n"<<endl;
    cout<<"Apasati tasta corespunzatoare fiecarei probleme pentru a vedea rezolvarea ei"<<endl;
    int i;
    cin>>i;
    system("cls");
    if (i==1)
        sir_apk1();
    else if (i==2)
        sir_apk2();
    else if(i==3)
        sircaract();
    else sir_aplicatii();

}

void sir_apk1()
{
    cout<<"     #include <iostream>\n";
    cout<<"     #include <cstring>\n";
    cout<<"     #include <cctype>\n";

    cout<<"     using namespace std;\n";

    cout<<"     int main() {\n";
        cout<<"     char text[100];\n";
        cout<<"     cin.getline(text, 100);\n";

        cout<<"     int optiune;\n";
        cout<<"     cout << Selectati optiunea:\n";
        cout<<"     cout << 1. Conversie la majuscule\n";
        cout<<"     cout << 2. Conversie la minuscule\n";
        cout<<"     cin >> optiune;\n";

        cout<<"     if (optiune == 1) {\n";
            cout<<"     for (int i = 0; i < strlen(text); i++) {\n";
                cout<<"     text[i] = toupper(text[i]);\n";
            cout<<"     }\n";
        cout<<"     } else if (optiune == 2) {\n";
            cout<<"     for (int i = 0; i < strlen(text); i++) {\n";
                cout<<"     text[i] = tolower(text[i]);\n";
            cout<<"     }\n";
        cout<<"     }\n";

        cout<<"     cout << Textul convertit:  << text << endl;\n";

       cout<<"      return 0;\n";
    cout<<"     }\n";
    system("PAUSE");
    system("cls");
    sir_aplicatii();


}

void sir_apk2()

{
    cout<<"     #include <iostream>"<<endl;
    cout<<"     using namespace std;"<<endl;
    cout<<"     int main() {"<<endl;
    cout<<"       char propozitie[128];"<<endl;
    cout<<"       cin.get(propozitie,128);"<<endl;
    cout<<"       char *cuvant = strtok(propozitie, ' ');"<<endl;
    cout<<"          while(cuvant) {"<<endl;
    cout<<"            cout << cuvant << '-> prima litera: '<< cuvant[0] << '\n';"<<endl;
    cout<<"            cuvant = strtok(NULL, " ");}"<<endl;
    cout<<"       return 0;}"<<endl;

    system("PAUSE");
    system("cls");
    sir_aplicatii();
}

void sir_test()
{
    nr++;
    int score = 0;

    // Intrebarea 1
    cout << "1. Ce reprezinta un sir de caractere in limbajul de programare C++?\n";
    cout << "   a) Un tip de date ce stocheaza o valoare numerica.\n";
    cout << "   b) Un tablou de caractere terminate cu caracterul nul.\n";
    cout << "   c) Un tip de date utilizat exclusiv pentru afisarea textului pe ecran.\n";
    char raspuns1;
    cin >> raspuns1;
    if (raspuns1 == 'b') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"Raspuns gresit:(";

    // Intrebarea 2
    cout << "\n2. Cum se parcurge un sir de caractere in C++?\n";
    cout << "   a) Prin utilizarea unui pointer catre primul caracter al sirului si incrementarea acestuia.\n";
    cout << "   b) Prin utilizarea functiei `for` cu un contor si accesarea elementelor folosind operatorul `[]`.\n";
    cout << "   c) Nu se poate parcurge un sir de caractere in C++.\n";
    char raspuns2;
    cin >> raspuns2;
    if (raspuns2 == 'a') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"Raspuns gresit:(";

    // Intrebarea 3
    cout << "\n3. Cum se determina lungimea unui sir de caractere in C++?\n";
    cout << "   a) Prin utilizarea functiei `strlength(str)`.\n";
    cout << "   b) Prin numararea manuala a caracterelor pana la intalnirea caracterului nul.\n";
    cout << "   c) Prin accesarea valorii proprietatii `length` a sirului.\n";
    char raspuns3;
    cin >> raspuns3;
    if (raspuns3 == 'b') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"Raspuns gresit:(";

    // Intrebarea 4
    cout << "\n4. Care este caracterul nul in sirurile de caractere?\n";
    cout << "   a) '\\0'\n";
    cout << "   b) ' '\n";
    cout << "   c) '\\n'\n";
    char raspuns4;
    cin >> raspuns4;
    if (raspuns4 == 'a') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"Raspuns gresit:(";

    // Intrebarea 5
    cout << "\n5. Ce functie se utilizeaza pentru concatenarea a doua siruri de caractere in C++?\n";
    cout << "   a) `strcat(str1, str2)`\n";
    cout << "   b) `concat(str1, str2)`\n";
    cout << "   c) `append(str1, str2)`\n";
    char raspuns5;
    cin >> raspuns5;
    if (raspuns5 == 'a') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"Raspuns gresit:(";

    // Intrebarea 6
    cout << "\n6. Care este dimensiunea ocupata in memorie de un sir de caractere de tip `char s[20]`?\n";
    cout << "   a) 20 bytes\n";
    cout << "   b) 21 bytes\n";
    cout << "   c) 22 bytes\n";
    char raspuns6;
    cin >> raspuns6;
    if (raspuns6 == 'b') {
        cout<<"Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"Raspuns gresit:(";

    // Afisarea scorului final
    cout << "\nScorul tau final: " << score << "/6\n";
    //suma scorurilor
    scortotal=scortotal+score;

    system("PAUSE");
    system("cls");
    sircaract();
}

void subprograme(){
    if(OK5==0){
        OK5=1;
        p++;
    }
    cout<<"                 1.Definitie"<<endl;
    cout<<"                 2.Structura unui subprogram"<<endl;
    cout<<"                 3.Transmiterea parametrilor"<<endl;
    cout<<"                 4.Tipurile subprogramelor"<<endl;
    cout<<"                 5.Avantajele utilitatii subprogramelor"<<endl;
    cout<<"                 6.Aplicatii"<<endl;
    cout<<"                 7.Test"<<endl;
    cout<<"                 8.Iesire"<<endl;
    char m;
    cin>>m;
    system("cls");
    if(m=='1')
        defsub();
    else if(m=='2')
        strucsub();
    else if(m=='3')
        transsub();
    else if(m=='4')
        tipsub();
    else if(m=='5')
        avansub();
    else if(m=='6')
        aplicsub();
    else if(m=='7')
        testsub();
    else if(m=='8')
        meniuprincipal();
    else
        subprograme();
}

void defsub(){
    cout<<"  Subprogramele reprezinta functii definite de catre utilizator. Ele sunt identificate prin nume si pot fi apelate in interoriul unui program."<<endl;
    cout<<"  Subprogramele se scriu inainte de functia int main()."<<endl;
    cout<<"  Acestea sunt unitati de program care au algortim propriu,pot fi proiectate,scrise,compilate independent si se pot executa numai in cadrul unui program"<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void strucsub(){
    cout<<"  Un subprogram(o functie)are structura urmatoare:"<<endl<<endl;
    cout<<"    tip_returnat nume_subprogram(parametri_formali) //acesta fiind si antetul programului "<<endl;
    cout<<"      //instructiunea sau instructiunile subprogramului"<<endl<<endl;
    cout<<"  tip_returnat = tipul rezultatului calculat si returnat de catre subprogram(int,char,float,void etc)"<<endl;
    cout<<"  nume_subprogram = numele dat subprogramului de catre cel care il defineste(etse folosit la apelare)"<<endl;
    cout<<"  parametri_formali = lista de declaratii de variabile separate prin virgula"<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void transsub(){
    cout<<"  Exista doua metode de transmitere a parametrilor:prin valoare si prin adresa"<<endl;
    cout<<"  In cazul transmiterii prin valoare,orice modificare sufera variabila nu este permanenta.Se transmite un parametru prin valoare atunci cand in antet intre tipul datei si numele unui parametru formal nu se afla nimic."<<endl;
    cout<<"  In cazul transmiterii prin valoare,orice modificare sufera variabila este permanenta si in fata variabilet se pune '&'."<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void tipsub(){
    cout<<"  Subprogramele pot fi de 2 tipuri:"<<endl;
    cout<<"  -de tip operand"<<endl;
    cout<<"  -de tip procedural"<<endl<<endl;
    cout<<"  Subprogramele de tip operand determina un rezultat de la o anumita data de intrare.Valoarea este returnata de functie,iar aceasta va fi apelata intr-o expresie(de ex:cout<<subprogram(n);)"<<endl;
    cout<<"  Subprogramele de tip procedural se folosesc in instructiuni de sine statatoare,nu in expresii.Au un efect,dar nu returneaza un rezultat."<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void avansub(){
    cout<<"  Subprogramele sunt foarte des folosite in industria IT deoarece acestea aduc anumite avantaje mari precum:"<<endl;
    cout<<"  -reutilizarea codului:subprogramul poate fi apelat ori de cate ori este nevoie"<<endl;
    cout<<"  -modularizarea programelor:subprogramele ne permit sa impartim problema in mai multe subprobleme mai simple"<<endl;
    cout<<"  -reducerea numarului de erori intr-un program"<<endl;
    cout<<"  -depistarea mai facila a erorilor:fiecare subprogram poate fi compilat pe rand"<<endl;
    system("PAUSE");
    system("cls");
    subprograme();
}

void aplicsub(){
    cout<<"  Mai jos veti avea de rezolvat 2 probleme din acest capitol"<<endl<<endl;
    cout<<"  1.Sa se scrie un subprogram care returneaza suma cifrelor unui numar."<<endl<<endl;
    cout<<"  2.Sa se scrie un subprogram care furnizeaza printr-un parametru de iesire oglinditul unui numar natural n."<<endl<<endl;
    cout<<"  Apasati tasta 1 pentru a vedea rezolvarea primei probleme,tasta 2 pentru rezolvarea celei de-a doua probleme sau tasta 3 pentru a reveni la meniul anterior: ";
    char n;
    cin>>n;
    system("cls");
    if(n=='1')
        prob1();
    else if(n=='2')
        prob2();
    else if(n=='3')
        subprograme();
    else
        aplicsub();
}
void prob1(){
    //rezolvare problema 1
    cout<<" int sumcif(int n) {"<<endl;
    cout<<"  int s = 0;"<<endl;
    cout<<"  while (n != 0) {"<<endl;
    cout<<"     s = s + (n % 10);"<<endl;
    cout<<"     n /= 10;"<<endl;;
    cout<<"  }"<<endl;
    cout<<"  return s;"<<endl;
    cout<<" }"<<endl;
    system("PAUSE");
    system("cls");
    aplicsub();
}

void prob2(){
    //rezolvare aplicatia 2
    cout<<"  void oglindit(int n, int &inv) {"<<endl;
    cout<<"    int c;"<<endl;
    cout<<"    inv = 0;"<<endl;
    cout<<"    while (n != 0) {"<<endl;
    cout<<"      c = n % 10;"<<endl;
    cout<<"      inv = inv * 10 + c;"<<endl;
    cout<<"      n /= 10;"<<endl;;
    cout<<"      }"<<endl;
    cout<<"  }"<<endl;;
    system("PAUSE");
    system("cls");
    aplicsub();
}

void testsub(){
    //contorizam cate teste parcurgem
    nr++;
    int scor2=0;
    //daca rasp este corect afisam un mesaj,daca nu alt mesaj
    cout<<"   1.Care tip de subprogram returneaza un rezultat?"<<endl;
    cout<<"   a)operand b)procedural "<<endl;
    char x;
    cin>>x;
    if(x=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   2.Care tip de subprogram furnizeaza rezultatul printr-un parametru?"<<endl;
    cout<<"   a)operand b)procedural "<<endl;
    char y;
    cin>>y;
    if(y=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   3.Cum se transmit parametrii subprogramelor?"<<endl;
    cout<<"   a)valoare si adresa b)adresa c)valoare d)vector"<<endl;
    char z;
    cin>>z;
    if(z=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   4.Unde se definesc prima oara subprogramele?"<<endl;
    cout<<"   a)in int main() b)dupa int main() c)unde dorim() d)inainte de int main()"<<endl;
    char t;
    cin>>t;
    if(t=='d'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   5.Subprogramele au ca beneficiu reducerea numarului de erori?"<<endl;
    cout<<"   a)fals b)adevarat"<<endl;
    char s;
    cin>>s;
    if(s=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   6.Care parte a unui subprogram este folosita la apelarea acestuia?"<<endl;
    cout<<"   a)parametrii sai b)tipul sau c)numele sau"<<endl;
    char a;
    cin>>a;
    if(a=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout<<"   7.Ce sunt subprogramele?"<<endl;
    cout<<"   a)functii definite de utilizator b)functii predefinite c)biblioteci C++ d)instrcutiuni"<<endl;
    char b;
    cin>>b;
    if(b=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor2++;}
    else
        cout<<"   Raspuns gresit"<<endl;
    cout << "\nScorul tau final: " << scor2 << "/7\n";
    //suma tutror scorurilor
    scortotal=scortotal+scor2;
    system("PAUSE");
    system("cls");
    subprograme();
}

void grafneori(){
    if(OK6==0){
        OK6=1;
        p++;
    }
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Definitii"<<endl;
    cout<<"                 2.Gradul unui varf"<<endl;
    cout<<"                 3.Metode de reprezentare"<<endl;
    cout<<"                 4.Parcurgeri"<<endl;
    cout<<"                 5.Conexitate"<<endl;
    cout<<"                 6.Graf hamiltonain"<<endl;
    cout<<"                 7.Graf eulerian"<<endl;
    cout<<"                 8.Aplicatii"<<endl;
    cout<<"                 9.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        definitii();
    else if(x=='2')
        gradul();
    else if(x=='3')
        metode();
    else if(x=='4')
        parcurgeri();
    else if(x=='5')
        conexitate();
    else if(x=='6')
        hamiltonian();
    else if(x=='7')
        eulerian();
    else if(x=='8')
        aplicatii();
    else if(x=='9')
        test();
    else if(x=='0')
        meniuprincipal();
    else
    {
        grafneori();
    }
}
void definitii()
{
    cout<<"   Se numeste graf neorientat G=(X,U) perechea ordonata de multimi X,U,unde X este omultimea finita nevida(multimea varfurilor),iar U este o multime formata din perechi neordonate de elemente distincte din X(multimea muchiilor)"<<endl;
    cout<<"   O muchie reprezinta o latua ce are ca extremitati 2 varfuri distincte din multimea X,care sunt unite printr-o linie"<<endl;
    cout<<"   2 varfuri sunt adiacente daca ele pot fi extremitatile unei muchii.Ambele varfuri sunti ncidente cu muchia respectiva."<<endl;
    cout<<"   Se numeste lant intr-un graf neorientat L=(x1,x2,...,xn)cu proprietatea ca oricare 2 varfuri consecutive sunt adiacente"<<endl;
    cout<<"   Se numeste ciclu intr-un graf neorientat C=(x1,x2,...,xn)cu proprietatea ca x1=xn si oricare 2 varfuri consecutive sunt adiacente"<<endl;
    cout<<"   Fie graful G = (X, U). Un graf partial al lui G, este un graf G1 = (X, V) cu V inclus in U. Altfel spus,un graf partial G1 al lui G, este chiar G, sau se obtine din G pastrand toate varfurile si eliminand niste muchii."<<endl;
    cout<<"   Fie graful G = (X, U). Un subgraf al lui G, este un graf G1 = (Y, V) unde Y inclus in X, iar V vacontine toate muchiile din U care au ambele extremitati in Y. Altfel spus, un subgraf al unui graf se obtine eliminand niste noduri si toate muchiile incidente acestor noduri."<<endl;
    cout<<"   Un graf complet este un graf neorientat în care fiecare pereche de noduri distincte este conectatã printr-o muchie unicã."<<endl;
    cout<<"   Un graf bipartit este un graf ale cãrui noduri pot fi împãr?ite în douã mul?imi U si V(neavand niciun nod comun,iar reunite formand multimea nodurilor), astfel încât fiecare muchie conecteazã un nod din U cu unul din V."<<endl;
    cout<<"   Un graf bipartit complet este un graf in care toate orice nod din multimea U este adiacent cu toate din multimea V"<<endl;
    system("PAUSE");
    system("cls");
    grafneori();
}
void gradul()
{
    cout<<"   Gradul unui varf reprezinta numarul de muchii incidente cu varful respectiv"<<endl;
    cout<<"   Un varf izolat este un varf cu gradul egal cu zero"<<endl;
    cout<<"   Un varf terminal este un varf cu gradul egal cu unu"<<endl;
    char x;
    cout<<"   Apasati tasta 1 pt a vedea algoritmul care verifica daca intr-un graf exista in varf izolat"<<endl;
    cout<<"   Apasati tasta 2 pt a vedea algoritmul care verifica daca intr-un graf exista in varfterminal"<<endl;
    cout<<"   Apasati tasta 3 pt a reveni la meniul anterior"<<endl;
    cin>>x;
    system("cls");
    if(x=='1')
    {
        varfizolat();
    }
    else if(x=='2')
    {
        varfterminal();
    }
    else if(x=='3')
    {
        grafneori();
    }
    else
        gradul();
}
void varfizolat()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n,m, x, y, i, j, s, OK = 0;"<<endl;
    cout<<"   cin >> n>>m;"<<endl;
    cout<<"   for(i=1;i<=m;i++) {"<<endl;
    cout<<"       cin>>x>>y;"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1; }"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"        s = 0;"<<endl;
    cout<<"        for (j = 1; j <= n; j++)"<<endl;
    cout<<"            s = s + A[i][j];"<<endl;
    cout<<"        if (s == 0)"<<endl;
    cout<<"           OK=1;  }"<<endl;
    cout<<"   if(OK==1)"<<endl;
    cout<<"      cout<<Exista minim un varf izolat in graf;"<<endl;
    cout<<"   else"<<endl;
    cout<<"      cout<<Nu exista;"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        gradul();
    else if(f=='2')
        varfizolatexemplu();
    else
        varfizolat();
}
void varfizolatexemplu()
{
    int n,m,x, y, i, j, s, contor = 0,A[100][100],OK=0;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti perechile de muchii:";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            A[i][j]=0;
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        s = 0;
        for (j = 1; j <= n; j++)
            s = s + A[i][j];
        if (s == 0)
            OK=1;
    }
    if(OK==1)
        cout<<"Exista minim un varf izolat in graf"<<endl;
    else
        cout<<"Nu exista niciun varf izolat in graf"<<endl;
    system("PAUSE");
    system("cls");
    gradul();
}
void varfterminal()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n,m, x, y, i, j, s, OK = 0;"<<endl;
    cout<<"   cin >> n>>m;"<<endl;
    cout<<"   for(i=1;i<=m;i++) {"<<endl;
    cout<<"       cin>>x>>y;"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1; }"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"        s = 0;"<<endl;
    cout<<"        for (j = 1; j <= n; j++)"<<endl;
    cout<<"            s = s + A[i][j];"<<endl;
    cout<<"        if (s == 1)"<<endl;
    cout<<"           OK=1;  }"<<endl;
    cout<<"   if(OK==1)"<<endl;
    cout<<"      cout<<Exista minim un varf terminal in graf;"<<endl;
    cout<<"   else"<<endl;
    cout<<"      cout<<Nu exista;"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        gradul();
    else if(f=='2')
        varfterminalexemplu();
    else
        varfterminal();
}
void varfterminalexemplu()
{
    int n,m,x, y, i, j, s, contor = 0,A[100][100],OK=0;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti perechile de muchii:";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            A[i][j]=0;
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        s = 0;
        for (j = 1; j <= n; j++)
            s = s + A[i][j];
        if (s == 1)
            OK=1;
    }
    if(OK==1)
        cout<<"Exista minim un varf terminal in graf"<<endl;
    else
        cout<<"Nu exista niciun varf terminal in graf"<<endl;
    system("PAUSE");
    system("cls");
    gradul();
}
void metode()
{
    cout<<"             1.Lista de adiacenta"<<endl;
    cout<<"             2.Vectorul muchiilor"<<endl;
    cout<<"             3.Matricea de adiacenta"<<endl;
    cout<<"             4.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        listaadiacenta();
    else if(x=='2')
        vectormuchii();
    else if(x=='3')
        matrice();
    else if(x=='4')
        grafneori();
    else
        metode();
}
void listaadiacenta()
{
    cout<<"   Intr-o lista de adiacenta(a vecinilor) se va scrie pentru fiecare nod toate varfurile adiacente cu acesta"<<endl;
    cout<<"   Ex:Se da graful neorientat cu varfurile numerotate de la 1 la 7 si muchiile (1,2),(1,3),(1,4),(5,4),(4,6),(5,6)"<<endl;
    cout<<"   Lista vecinilor va fi:"<<endl;
    cout<<"   Varf Vecini"<<endl;
    cout<<"   1    2,3,4"<<endl;
    cout<<"   2    1"<<endl;
    cout<<"   3    1"<<endl;
    cout<<"   4    1,5,6"<<endl;
    cout<<"   5    4,6"<<endl;
    cout<<"   6    4,5"<<endl;
    cout<<"   7    -"<<endl;
    system("PAUSE");
    system("cls");
    metode();
}
void vectormuchii()
{
    cout<<"   Vectorul muchiilor este reprezentat printr-o structura care va contine varfurile adiacente"<<endl;
    cout<<"   struct muchie {"<<endl;
    cout<<"     unsigned x,y;"<<endl;
    cout<<"   }a[20];"<<endl;
    system("PAUSE");
    system("cls");
    metode();
}
void matrice()
{
    cout<<"             1.Caracteristici"<<endl;
    cout<<"             2.Aplicatii"<<endl;
    cout<<"             3.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        caracteristici();
    else if(x=='2')
        aplicatiimatrice();
    else if(x=='3')
        metode();
    else
        matrice();
}
void caracteristici()
{
    cout<<"   Matricea de adiacenta are urmatoarele proprietati:"<<endl;
    cout<<"   -este patratica(nr linii=nr coloane)"<<endl;
    cout<<"   -este binara(contine doar 0 si 1;1 daca varfurile i si j sunt adiacente,iar 0 in caz contrar)"<<endl;
    cout<<"   -este simetrica fata de diagonala principala"<<endl;
    cout<<"   -elementele de pe diagonala principala sunt egale cu 0"<<endl;
    system("PAUSE");
    system("cls");
    matrice();
}
void aplicatiimatrice()
{
    cout<<"                 1.Aplicatia 1"<<endl;
    cout<<"                 2.Aplicatia 2"<<endl;
    cout<<"                 3.Aplicatia 3"<<endl;
    cout<<"                 4.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        aplicatia1();
    else if(x=='2')
        aplicatia2();
    else if(x=='3')
        aplicatia3();
    else if(x=='4')
        matrice();
    else
        aplicatiimatrice();
}
void aplicatia1()
{
    cout<<"   Se citeste de la tastatura o matrice cu n linii si n coloane.Sa se verifice daca poate fi matrice de adiacenta"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"          cin >> A[i][j];"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (A[i][j] != A[j][i])"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (i == j)"<<endl;
    cout<<"             if (A[i][j] != 0)"<<endl;
    cout<<"                OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"     cout << Matricea este de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"     cout << NU poate fi de adiacenta;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatiimatrice();
}
void aplicatia2()
{
    cout<<"   Se citeste de la tastatura un numar n(n>2) reprezentand numarul de linii si de coloane al matricei de adiacenta al unui graf neorientat si matricea de adiacenta a grafului.Sa se determine gradul varfului 2."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   int n,i,j,d=0,A[50][50]"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"      for(j=1;j<=n;j++)"<<endl;
    cout<<"         cin>>A[i][j]"<<endl;
    cout<<"   for(j=1;j<=n;j++)"<<endl;
    cout<<"       if(A[2][j]==1)"<<endl;
    cout<<"          d++;"<<endl;
    cout<<"   cout<<d;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatiimatrice();
}
void aplicatia3()
{
    cout<<"   Se citeste de la tastatura un numar n(n>2) reprezentand numarul de linii si de coloane al matricei de adiacenta al unui graf neorientat si matricea de adiacenta a grafului.Sa se modifice matricea de adiacenta astfel incat sa nu mai poata fi de adiacenta si sa se afiseze dupa modificare"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   int n,i,j,d=0,A[50][50]"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"      for(j=1;j<=n;j++)"<<endl;
    cout<<"         cin>>A[i][j]"<<endl;
    cout<<"   A[1][1]=1;"<<endl;
    cout<<"   for(i=1;i<=n;i++) { "<<endl;
    cout<<"      for(j=1;j<=n;j++)"<<endl;
    cout<<"         cout<<A[i][j]<<' '"<<endl;
    cout<<"      cout<<endl; }"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatiimatrice();
}
void parcurgeri()
{
    cout<<" 1.In latime"<<endl;
    cout<<" 2.In adancime"<<endl;
    cout<<" 3.Revenire"<<endl;
    char x;
    cin>>x;
    system("cls");
    if (x=='1')
        latime();
    else if(x=='2')
        adancime();
    else if(x=='3')
        grafneori();
    else
    {
        system("cls");
        parcurgeri();
    }
}
void latime()
{
    cout<<"   Pentru parcurgerea in latime se vor scrie toti vecinii nevizitati ai nodului respectiv"<<endl;
    cout<<"   Ex:Se da graful neorientat cu varfurile numerotate de la 1 la 7 si muchiile (1,2),(1,3),(1,4),(5,4),(4,6),(5,6).Sa se parcurga in latime plecand din varful 3."<<endl;
    cout<<"   Lista vecinilor va fi:"<<endl;
    cout<<"   Varf      Vecini"<<endl;
    cout<<"   1         2,3,4"<<endl;
    cout<<"   2         1"<<endl;
    cout<<"   3         1"<<endl;
    cout<<"   4         1,5,6"<<endl;
    cout<<"   5         4,6"<<endl;
    cout<<"   6         4,5"<<endl;
    cout<<"   7         -"<<endl;
    cout<<"   Parcurgerea va fi:3,1,2,4,5,6"<<endl;
    cout<<"   Algoritmul de parucrgere in latime este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   #include<queue>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], v[101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, m, X, i, j, x, y, c;"<<endl;
    cout<<"   queue<int> q;"<<endl;
    cout<<"   cin >> n >> m >> X;"<<endl;
    cout<<"   for (i = 1; i <= m; i++) {"<<endl;
    cout<<"      cin >> x >> y;"<<endl;
    cout<<"      A[x][y] = 1;"<<endl;
    cout<<"      A[y][x] = 1; }"<<endl;
    cout<<"   q.push(X);"<<endl;
    cout<<"   cout<< X << " ";"<<endl;
    cout<<"   v[X]++;"<<endl;
    cout<<"   while (!q.empty()) {"<<endl;
    cout<<"     c= q.front();"<<endl;
    cout<<"     for(j=1;j<=n;j++)"<<endl;
    cout<<"       if (A[c][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"          cout << j << " ";"<<endl;
    cout<<"          q.push(j);"<<endl;
    cout<<"          v[j]++; }"<<endl;
    cout<<"    q.pop();}"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char g;
    cin>>g;
    system("cls");
    if(g=='1')
        parcurgeri();
    else if(g=='2')
        latimeexemplu();
    else
        latime();
}
void latimeexemplu()
{
    int n, m, X, i, j, x, y, c,v[101],A[101][101];
    queue<int> q;
    for(i=1; i<=100; i++)
        v[i]=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            A[i][j]=0;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti varful de unde sa se parcurga in latime";
    cin>>X;
    cout<<"Introduceti muchiile:";
    for (i = 1; i <= m; i++)
    {
        cin >> x >> y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    q.push(X);
    cout << X << " ";
    v[X]++;
    while (!q.empty())
    {
        c = q.front();
        for(j=1; j<=n; j++)
            if (A[c][j] == 1 && v[j] == 0)
            {
                cout << j << " ";
                q.push(j);
                v[j]++;
            }
        q.pop();
    }
    system("PAUSE");
    system("cls");
    parcurgeri();
}
void adancime()
{
    cout<<"   Pentru parcurgerea in adancime se va scrie primul vecin nevizitat al nodului.Daca acesta nu mai are,ne vom intoarce la nodul anterior"<<endl;
    cout<<"   Ex:Se da graful neorientat cu varfurile numerotate de la 1 la 7 si muchiile (1,2),(1,3),(1,4),(5,4),(4,6),(5,6).Sa se parcurga in adancime plecand din varful 5."<<endl;
    cout<<"   Lista vecinilor va fi:"<<endl;
    cout<<"   Varf      Vecini"<<endl;
    cout<<"   1         2,3,4"<<endl;
    cout<<"   2         1"<<endl;
    cout<<"   3         1"<<endl;
    cout<<"   4         1,5,6"<<endl;
    cout<<"   5         4,6"<<endl;
    cout<<"   6         4,5"<<endl;
    cout<<"   7         -"<<endl;
    cout<<"   Parcurgerea va fi:5,4,1,2,3,6"<<endl;
    cout<<"   Algoritmul de parcurgere in adancime este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], v[101], n, m, X, x, y;"<<endl;
    cout<<"   void DFS(int X) {"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"        if (A[X][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"           cout << j << " ";"<<endl;
    cout<<"           v[j]++;"<<endl;
    cout<<"           DFS(j); }"<<endl;
    cout<<"    }"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   cin >> n >> m >> X;"<<endl;
    cout<<"   for (int i = 1; i <= m; i++) {"<<endl;
    cout<<"       cin >> x >> y;"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1; }"<<endl;
    cout<<"   cout << X << " ";"<<endl;
    cout<<"   v[X]++;"<<endl;
    cout<<"   DFS(X);"<<endl;
    cout<<"   return 0; }"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char g;
    cin>>g;
    system("cls");
    if(g=='1')
        parcurgeri();
    else if(g=='2')
        adancimeexemplu();
    else
        adancime();
}
void DFS(int X,int v[101],int A[][101],int n)
{
    for(int j=1; j<=n; j++)
        if (A[X][j] == 1 && v[j] == 0)
        {
            cout << j << " ";
            v[j]++;
            DFS(j,v,A,n);
        }
}
void adancimeexemplu()
{
    int n,m,X,A[101][101],v[101]= {0},x,y;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            A[i][j]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti varful de unde sa se parcurga in adancime:";
    cin>>X;
    cout<<"Introduceti muchiile:";
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    cout << X << " ";
    v[X]++;
    DFS(X,v,A,n);
    system("PAUSE");
    system("cls");
    parcurgeri();
}
void conexitate()
{
    cout<<"   Un graf este conex daca oricare 2 noduri ale sale pot fi extremitatile unui lant.Un graf conex nu contine niciun varf izolat si are o singura componenta conexa"<<endl;
    cout<<"   Se numeste componenta conexa a grafului G=(X,U), un subgraf C=(X1,U1) conex al lui G care are proprietatea ca nu exista nici un lant in G care sa lege un varf din multimea X1 cu un vârf din multimea X-X1."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], v[101], n,m;"<<endl;
    cout<<"   void DFS(int X) {"<<endl;
    cout<<"   for (int j = 1; j <= n; j++)"<<endl;
    cout<<"     if (A[X][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"         v[j]=1;"<<endl;
    cout<<"         DFS(j); }"<<endl;
    cout<<"   }"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int OK = 1, x, y;"<<endl;
    cout<<"   cin >> n>>m;"<<endl;
    cout<<"   for(int i=1;i<=m;i++){"<<endl;
    cout<<"      cin >> x >> y) {"<<endl;
    cout<<"      A[x][y] = 1;"<<endl;
    cout<<"      A[y][x] = 1; }"<<endl;
    cout<<"   v[1]=1;"<<endl;
    cout<<"   DFS(1);"<<endl;
    cout<<"   for (int i = 1; i <= n; i++) "<<endl;
    cout<<"       if (v[i] == 0) {"<<endl;
    cout<<"           cout << NU;"<<endl;
    cout<<"           return 0;)"<<endl;
    cout<<"   cout<< DA;"<<endl;
    cout<<"   return 0;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char h;
    cin>>h;
    system("cls");
    if(h=='1')
        grafneori();
    else if(h=='2')
        conexverificare();
    else
        conexitate();
}
void DFS1(int X,int v[101],int A[][101],int n)
{
    for(int j=1; j<=n; j++)
        if (A[X][j] == 1 && v[j] == 0)
        {
            v[j]++;
            DFS1(j,v,A,n);
        }
}
void conexverificare()
{
    int A[101][101], v[101]= {0}, n, x, y,m,OK=1;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            A[i][j]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti muchiile:";
    for(int i=1; i<=m; i++)
    {
        cin>>x>>y;
        A[x][y]=1;
        A[y][x]=1;
    }
    v[1]=1;
    DFS1(1,v,A,n);
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            OK=0;
        }
    }
    if(OK==1)
        cout << "DA,este conex";
    else
        cout<<"NU,nu este conex";
    system("PAUSE");
    system("cls");
    grafneori();
}
void hamiltonian()
{
    cout<<"   Intr-un graf neorientat, se numeete lant hamiltonian un lant elementar care contine toate varfurile grafului."<<endl;
    cout<<"   Intr-un graf neorientat, se numeste ciclu hamiltonian un ciclu elementar care contine toate vârfurile grafului."<<endl;
    cout<<"   Un graf neorientat se numeete graf hamiltonian dacã contine un ciclu hamiltonian."<<endl;
    cout<<"   Algoritmul de verificare daca un graf este hamiltonain este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   struct muchii {"<<endl;
    cout<<"     int x,y;"<<endl;
    cout<<"   };"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   muchii v[30];"<<endl;
    cout<<"   unsigned n,m,i,j,l,c=0,ok=1,g=0;"<<endl;
    cout<<"   Introduceti numarul de varfuri:";
    cout<<"   cin>>n;"<<endl;
    cout<<"   Introduceti numarul de muchii:";
    cout<<"   cin>>m;"<<endl;
    cout<<"   int a[n][n];"<<endl;
    cout<<"   for(j=1;j<=n;j++)"<<endl;
    cout<<"      for(l=1;l<=n;l++)"<<endl;
    cout<<"          a[j][l]=0;"<<endl;
    cout<<"   for(i=1;i<=m;i++) {"<<endl;
    cout<<"      cin>>v[i].x;"<<endl;
    cout<<"      cin>>v[i].y;"<<endl;
    cout<<"      a[v[i].x][v[i].y]=a[v[i].y][v[i].x]=1; }"<<endl;
    cout<<"    for(j=1;j<=n;j++) {"<<endl;
    cout<<"        for(l=1;l<=n;l++) {"<<endl;
    cout<<"           g=g+a[j][l]; }"<<endl;
    cout<<"        if(g<n/2)"<<endl;
    cout<<"           ok=0;"<<endl;
    cout<<"        g=0;"<<endl;
    cout<<"         }"<<endl;
    cout<<"        if(ok==1)"<<endl;
    cout<<"            cout<<Graful este hamiltonian;"<<endl;
    cout<<"        else"<<endl;
    cout<<"            cout<<Graful nu este hamiltonian;}"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        grafneori();
    else if(f=='2')
        hamiltonianverificare();
    else
        hamiltonian();
}
void hamiltonianverificare()
{
    unsigned n,m,i,j,l,c=0,ok=1,g=0,a[101][101],x,y;
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(j=1; j<=n; j++)
        for(l=1; l<=n; l++)
            a[j][l]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti muchiile:";
    for (i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(j=1; j<=n; j++)
    {

        for(l=1; l<=n; l++)
        {
            g=g+a[j][l];
        }
        if(g<n/2)
            ok=0;
        g=0;
    }
    if(ok==1)
        cout<<"Graful este hamiltonian";
    else
        cout<<"Graful nu este hamiltonian";
    system("PAUSE");
    system("cls");
    grafneori();
}
void eulerian()
{
    cout<<"   Într-un graf neorientat, se numeste lant eulerian un lant simplu in care apare fiecare muchie (fiind lant simplu, fiecare muchie apare o singurã datã)."<<endl;
    cout<<"   Într-un graf neorientat, se numeete ciclu eulerian un ciclu în care apare fiecare muchie."<<endl;
    cout<<"   Un graf neorientat se numeste graf eulerian dacã contine un ciclu eulerian."<<endl;
    cout<<"   Algoritmul de verificare daca un graf este eulerian este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101], ap[101], n,m;"<<endl;
    cout<<"   void DFS(int X) {"<<endl;
    cout<<"   for (int j = 1; j <= n; j++)"<<endl;
    cout<<"     if (A[X][j] == 1 && v[j] == 0) {"<<endl;
    cout<<"         v[j]=1;"<<endl;
    cout<<"         DFS(j); }"<<endl;
    cout<<"   }"<<endl;
    cout<<"   struct muchii"<<endl;
    cout<<"   {"<<endl;
    cout<<"   int x,y;"<<endl;
    cout<<"   };"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   muchii v[30];"<<endl;
    cout<<"   unsigned i,j,l,c=0,ok=1,g=0;"<<endl;
    cout<<"   cout<<n= ;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   cout<<m= ;"<<endl;
    cout<<"   cin>>m;"<<endl;
    cout<<"   int a[n][n];"<<endl;
    cout<<"   for(i=1;i<=m;i++)"<<endl;
    cout<<"   {"<<endl;
    cout<<"   cin>>v[i].x;"<<endl;
    cout<<"   cin>>v[i].y;"<<endl;
    cout<<"   a[v[i].x][v[i].y]=a[v[i].y][v[i].x]=1;"<<endl;
    cout<<"   }"<<endl;
    cout<<"    for(j=1;j<=n;j++)"<<endl;
    cout<<"    {"<<endl;
    cout<<"       for(l=1;l<=n;l++)"<<endl;
    cout<<"       {"<<endl;
    cout<<"         g=g+a[j][l];"<<endl;
    cout<<"       }"<<endl;
    cout<<"       if(g<2)"<<endl;
    cout<<"          ok=0;"<<endl;
    cout<<"       if(g%2==1)"<<endl;
    cout<<"          ok=0;"<<endl;
    cout<<"       g=0;"<<endl;
    cout<<"     }"<<endl;
    cout<<"   v[1]=1;"<<endl;
    cout<<"   DFS(1);"<<endl;
    cout<<"   for (int i = 1; i <= n; i++) "<<endl;
    cout<<"       if (v[i] == 0) "<<endl;
    cout<<"           ok=0;"<<endl;
    cout<<"    if(ok==1)"<<endl;
    cout<<"       cout<<Graful este eulerian;"<<endl;
    cout<<"    else"<<endl;
    cout<<"       cout<<Graful nu este eulerian; }"<<endl;
    cout<<endl;
    cout<<"  Apasati tasta 1 pt a reveni la meniul anterior"<<endl;
    cout<<"  Apasati tasta 2 pt a vedea afisarea pt un exemplu"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        grafneori();
    else if(f=='2')
        eulerianverificare();
    else
        eulerian();
}
void DFS2(int X,int v[101],int a[][101],int n)
{
    for(int j=1; j<=n; j++)
        if (a[X][j] == 1 && v[j] == 0)
        {
            v[j]++;
            DFS2(j,v,a,n);
        }
}
void eulerianverificare()
{
    int  n,m,i,j,l,c=0,ok=1,g=0,a[101][101],x,y,v[101]= {0};
    cout<<"Introduceti numarul de varfuri:";
    cin>>n;
    for(j=1; j<=n; j++)
        for(l=1; l<=n; l++)
            a[j][l]=0;
    cout<<"Introduceti numarul de muchii:";
    cin>>m;
    cout<<"Introduceti muchiile:";
    for (i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(j=1; j<=n; j++)
    {

        for(l=1; l<=n; l++)
        {
            g=g+a[j][l];
        }
        if(g%2==1)
            ok=0;
        g=0;
    }
    v[1]=1;
    DFS2(1,v,a,n);
    for(i=1; i<=n; i++)
        if(v[i]==0)
            ok=0;
    if(ok==1)
        cout<<"Graful este eulerian";
    else
        cout<<"Graful nu este eulerian";
    system("PAUSE");
    system("cls");
    grafneori();
}
void test()
{
    nr++;
    int scor1=0;
    cout<<"   1.care este gradul unui varf izolat?"<<endl;
    cout<<"   a)0 b)1 c)3 d)10"<<endl;
    char x;
    cin>>x;
    if(x=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   2.Care este gradul unui varf terminal?"<<endl;
    cout<<"   a)2 b)3 c)1 d)120"<<endl;
    char y;
    cin>>y;
    if(y=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   3.Graful hamiltonian contine un varf izolat?"<<endl;
    cout<<"   a)adevarat b)fals"<<endl;
    char z;
    cin>>z;
    if(z=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   4.Matricea de adiacenta este:"<<endl;
    cout<<"   a)patratica b)asimetrica fata de diagonala principala c)contine doar 1 si 2"<<endl;
    char t;
    cin>>t;
    if(t=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   5.Graful eulerian are gradul oricarui varf:"<<endl;
    cout<<"   a)numar impar b)numar par"<<endl;
    char s;
    cin>>s;
    if(s=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   6.Intr-un graf complet exista minim un varf izolat?"<<endl;
    cout<<"   a)adevarat b)fals"<<endl;
    char a;
    cin>>a;
    if(a=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit:("<<endl;
    cout<<"   7.Multimea varfurilor intr-un graf bipartit este compusa din:"<<endl;
    cout<<"   a)o submultime b)3 submultimi c)2 submultimi"<<endl;
    char b;
    cin>>b;
    if(b=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit:("<<endl;
    cout<<"   8.La parcurgerea in latime:"<<endl;
    cout<<"   a)se scrie pt fiecare varf toti vecinii nevizitati b)se scrie pt fiecare varf primul varf nevizitat"<<endl;
    char c;
    cin>>c;
    if(c=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit:("<<endl;
    cout<<"   9.La parcurgerea in adancime:"<<endl;
    cout<<"   a)se scrie pt fiecare varf toti vecinii nevizitati b)se scrie pt fiecare varf primul varf nevizitat"<<endl;
    char d;
    cin>>d;
    if(d=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit:("<<endl;
    cout<<"   10.Intr-un graf neorientat conteaza ordinea in care scriem extremiatiile unei muchii"<<endl;
    cout<<"   a)fals b)adevarat"<<endl;
    char e;
    cin>>e;
    if(e=='a'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor1++;}
    else
        cout<<"   Raspuns gresit:("<<endl;
    cout << "\nScorul tau final: " << scor1 << "/10\n";
    scortotal=scortotal+scor1;
    system("PAUSE");
    system("cls");
    grafneori();
}
void aplicatii()
{
    int a;
    cout<<"   1.Se citeste de la tastatura o matrice cu n linii si n coloane.Sa se verifice daca poate fi matrice de adiacenta"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"   2.Se da lista muchiilor unui graf neorientat. Sa se afiseze varfurile de grad maxim."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"   3.Se da lista muchiilor unui graf neorientat cu n vârfuri, etichetate de la 1 la n. Din acest graf se elimina toate muchiile cu proprietatea ca ambele extremitați au aceeasi paritate. Sa se determine cate muchii va avea graful partial obtinut."<<endl;
    cout<<endl<<endl;
    cout<<"   Apasati tasta corespunzatoare numarului problemei pe care vreti s-o vedeti rezolvata sau tasta 4 pt a reveni la meniul anterior";
    cin>>a;
    system("cls");
    if(a==1)
        aplicatia1neori();
    else if(a==2)
        aplicatia2neori();
    else if(a==3)
        aplicatia3neori();
    else if(a==4)
        grafneori();
    else
        aplicatii();
    system("PAUSE");
    system("cls");
    grafneori();
}
void aplicatia1neori(){
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= n; j++)"<<endl;
    cout<<"         cin >> A[i][j];"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"     for (j = 1; j <= n; j++)"<<endl;
    cout<<"         if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (A[i][j] != A[j][i])"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"        for (j = 1; j <= n; j++)"<<endl;
    cout<<"           if (i == j)"<<endl;
    cout<<"              if (A[i][j] != 0)"<<endl;
    cout<<"                 OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"       cout << Matricea este de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"       cout << NU;"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    aplicatii();
}
void aplicatia2neori(){
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, x, y, i, j, s, smax = -1, contor = 0;"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   while (cin >> x >> y) {"<<endl;
    cout<<"      A[x][y] = 1;"<<endl;
    cout<<"      A[y][x] = 1;}"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"      s = 0;"<<endl;
    cout<<"     for (j = 1; j <= n; j++)"<<endl;
    cout<<"        s = s + A[i][j];"<<endl;
    cout<<"     if (s > smax)"<<endl;
    cout<<"         smax = s;  }"<<endl;
    cout<<"   for (i = 1; i <= n; i++) {"<<endl;
    cout<<"       s = 0;"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          s = s + A[i][j];"<<endl;
    cout<<"       if (s == smax)"<<endl;
    cout<<"          cout << i <<  ;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatii();
}
void aplicatia3neori(){
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n, x, y, i, j, div, OK1, OK2, c = 0;"<<endl;
    cout<<"   cin >> n;"<<endl;
    cout<<"   while (cin >> x >> y)"<<endl;
    cout<<"   {"<<endl;
    cout<<"     if (x % 2 != y%2)"<<endl;
    cout<<"     {"<<endl;
    cout<<"       A[x][y] = 1;"<<endl;
    cout<<"       A[y][x] = 1;"<<endl;
    cout<<"     }"<<endl;
    cout<<"   }"<<endl;
    cout<<"   for (i = 2; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j < i; j++)"<<endl;
    cout<<"         c = c + A[i][j];"<<endl;
    cout<<"   cout << c;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    aplicatii();
}

void grafori(){
    if(OK7==0){
        OK7=1;
        p++;
    }
    cout<<"                 1.Definitii"<<endl;
    cout<<"                 2.Gradul unui varf"<<endl;
    cout<<"                 3.Metode de reprezentare"<<endl;
    cout<<"                 4.Conexitate"<<endl;
    cout<<"                 5.Tare conexitate"<<endl;
    cout<<"                 6.Aplicatii"<<endl;
    cout<<"                 7.Test"<<endl;
    cout<<"                 8.Iesire"<<endl;
    int n;
    cin>>n;
    system("cls");
    if(n==1)
        definitii2();
    else if(n==2)
        gradul2();
    else if(n==3)
        metode2();
    else if(n==4)
        conexitate2();
    else if(n==5)
        tareconexitate();
    else if(n==6)
        aplicatii2();
    else if(n==7)
        test2();
    else if(n==8)
        meniuprincipal();
    else
        meniuprincipal();
}
void definitii2()
{
    cout<<"   Se numeste GARF ORIENTAT sau digraf o pereche ordonata de multimi notata G=(V, U), unde:V este o multime finita si nevida ale carei elemente se numesc noduri sau varfuri,iar U este o multime de perechi ordonate de elemente distincte din V ale carei elemente se numesc arce."<<endl;
    cout<<"   Un ARC este o muchie intre 2 varfuri care are asociata un sens.Prima extremitate a arcului este initiala,iar a doua finala."<<endl;
    cout<<"   Se numeste LANT o succesiune de arce u 1 , u 2 ... u k , cu proprietatea ca oricare doua arce de pe pozitii consecutive au un nod comun."<<endl;
    cout<<"   Se numeste DRUM o succesiune de noduri x 1 , x 2 ... x k cu proprietatea ca (x i ,x i+1 ) este arc."<<endl;
    cout<<"   Se numeste CIRCUIT intr-un graf un drum x 1 ,x 2 ... x k cu prop ca x 1 = x k si arcele (x i ,x i+1 ) sa fie distincte doua cate doua."<<endl;
    cout<<"   Fie G=(V, U) un graf orientat. Se numeste GRAF PARTIAL al grafului G, graful orientat G1=(V, U1), unde U1 este inclusa in U.Se elimina un arc sau mai multe sau niciunul"<<endl;
    cout<<"   Fie G=(V, U) un graf orientat. Se numeste SUBGRAF al grafului G graful orientat G1=(V1,U1) unde V1 inlcus in V iar U1 contine toate arcele din U care au extremitatile in V1."<<endl;
    system("PAUSE");
    system("cls");
    grafori();
}
void gradul2()
{
    cout<<"   Se numeste grad exterior al nodului x, numarul arcelor de forma (x,y) (adica numarul arcelor care ies din x), notat  d+(x)."<<endl;
    cout<<"   Se numeste grad interior al nodului x, numarul arcelor de forma (y,x) (adica numarul arcelor care intra in x), notat d-(x)."<<endl;
    cout<<"   Se da un graf orientat cu 4 varfuri si arcele (1,2),(1,3),(2,3),(3,4),(4,1)."<<endl;
    cout<<"   d+(1)=2      d-(1)=1"<<endl;
    cout<<"   d+(2)=1      d-(2)=1"<<endl;
    cout<<"   d+(3)=1      d-(3)=2"<<endl;
    cout<<"   d+(4)=1      d-(4)=1"<<endl;
    cout<<"   Se numeste varf izolat un varf care are gradul exterior si gradul interior egal cu 0"<<endl;
    cout<<"   Pentru a determina daca un varf este izolat,vom face suma elementelor de pe linia si coloana respectiva"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101],V[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,k,s1=0,s2=0,X"<<endl;
    cout<<"   cin>>n>>X;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(int i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || V[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;"<<endl;
    cout<<"   V[x][y]=1;}"<<endl;
    cout<<"   for(int i=1;i<=n;i++)"<<endl;
    cout<<"       s1=s1+A[i][X];"<<endl;
    cout<<"   for(int j=1;j<=n;j++)"<<endl;
    cout<<"       s2=s2+A[X][j];"<<endl;
    cout<<"   if(s1==0 && s2==0) cout<<X este varf izolat"<<endl;
    cout<<"   else cout<<X nu este varf izolat"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    grafori();
}
void metode2()
{
    cout<<"             1.Lista de adiacenta"<<endl;
    cout<<"             2.Vectorul arcelor"<<endl;
    cout<<"             3.Matricea de adiacenta"<<endl;
    cout<<"             4.Matricea de incidenta"<<endl;
    cout<<"             5.Matricea drumurilor"<<endl;
    cout<<"             6.Multimea succesorilor si predecesorilor"<<endl;
    cout<<"             7.Multimea arcelor(x,y) si (y,x)"<<endl;
    cout<<"             8.Revenire"<<endl;
    int m;
    cin>>m;
    system("cls");
    if(m==1)
        listaadiacenta();
    else if(m==2)
        vectorularcelor();
    else if(m==3)
        matriceadiacenta();
    else if(m==4)
        matriceaincidenta();
    else if(m==5)
        matriceadrumurilor();
    else if(m==6)
        succesorisipredecesori();
    else if(m==7)
        arcxy();
    else if(m==8)
        grafori();
    else
        metode2();
}
void listaadiacenta2()
{
    cout<<"   Lista de adiacenta memoreaza vecinii exteriori si vecinii interiori pentru fiecare nod"<<endl;
    cout<<"   Se da graful orientat G cu 4 noduri si arcele (1,2),(2,3),(3,4),(4,1),(1,3)."<<endl;
    cout<<"   NOD     L+(x)       L-(x)"<<endl;
    cout<<"   1       2,3         4"<<endl;
    cout<<"   2       3           1"<<endl;
    cout<<"   3       4           1,2"<<endl;
    cout<<"   4       1           3"<<endl;
    cout<<"   Algoritmul pentru implementarea listei este:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m,x,y,i,j,X=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(int i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1; }"<<endl;
    cout<<"   while(X<=n){"<<endl;
    cout<<"      cout<<X<<'    ';"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"          if(A[X][j]==1)"<<endl;
    cout<<"              cout<<j<<' ';"<<endl;
    cout<<"      cout<<'    ';"<<endl;
    cout<<"      for(int i=1;i<=n;i++)"<<endl;
    cout<<"           if(A[i][X]==1)"<<endl;
    cout<<"               cout<<i<<' ';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      X++;}"<<endl;
    cout<<"   return 0;}"<<endl;
    unsigned n,m,x,y,i,j,X=1,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;}
    while(X<=n){
        cout<<X<<"     ";
        for(j=1;j<=n;j++)
            if(A[X][j]==1)
                cout<<j<<" ";
        cout<<"     ";
        for(i=1;i<=n;i++)
            if(A[i][X]==1)
                cout<<i<<" ";
        cout<<endl;
        X++;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void vectorularcelor()
{
    cout<<"   Vectorul arcelor este reprezentat printr-o structura care va contine perechile de arce"<<endl;
    cout<<"   struct arc{"<<endl;
    cout<<"       unsigned x,y;"<<endl;
    cout<<"   }arc v[50];"<<endl;
    cout<<"   int main {"<<endl;
    cout<<"   unsigned n,m,x,y,i;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) "<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>a[i].x>>a[i].y;"<<endl;
    cout<<"   }while(a[i].x==a[i].y || a[i].x>n || a[i].y>n);"<<endl;
    cout<<"   return 0;}"<<endl;
    system("PAUSE");
    system("cls");
    metode2();
}
void matriceadiacenta()
{
    cout<<"   Matricea de adiacenta a grafului orientat este o matrice cu n linii si n coloane si elemente 0 sau 1, astfel:0,daca i si j nu sunt adiacente,1 daca i si j sunt adiacente"<<endl;
    cout<<"   OBS:i si j sunt adiacente daca exista arcul (i,j)"<<endl;
    cout<<"   Caracteristici:"<<endl;
    cout<<"   -este patratica(nr de linii=nr de coloane)"<<endl;
    cout<<"   -este binara(contine doar 0 si 1)"<<endl;
    cout<<"   -are pe diagonala principala 0"<<endl;
    cout<<"   Algoritmul de verificare daca o matrice poate fi de adiacenta pt un graf orientat:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n >> m;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          cin >> A[i][j];"<<endl;
    cout<<"   if(n!=m)"<<endl;
    cout<<"       OK=0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (i == j)"<<endl;
    cout<<"             if (A[i][j] != 0)"<<endl;
    cout<<"                OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"     cout << Matricea poate fi de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"     cout << NU poate fi de adiacenta;"<<endl;
    cout<<"   return 0; }"<<endl;
    unsigned n, i, j, OK = 1, A[101][101],m;
    cout<<"   Introduceti numarul de linii:";
    cin >> n;
    cout<<"   Introduceti numarul de coloane:";
    cin>>m;
    cout<<"   Introduceti matricea:";
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> A[i][j];
    if(n!=m)
        OK=0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (A[i][j] != 0 && A[i][j] != 1)
                OK = 0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i == j)
                if (A[i][j] != 0)
                    OK = 0;
    if (OK == 1)
        cout << "   Matricea poate fi de adiacenta"<<endl;
    else
        cout << "   Matricea nu poate fi de adiacenta"<<endl;
    system("PAUSE");
    system("cls");
    metode2();
}
void matriceaincidenta()
{
    cout<<"   Matricea de incidenta este o matrice cu n linii si m coloane si contine 1,0 si -1 astfel:"<<endl;
    cout<<"   1,daca i este incident exterior cu arcul j"<<endl;
    cout<<"   -1.daca i este incident interior cu arcul j"<<endl;
    cout<<"   0,daca i nu este incident cu arcul j"<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(1,3) si (2,4)"<<endl;
    cout<<"   Matricea de incidenta pentru acest graf este:"<<endl;
    cout<<"        (1,2)    (1,3)    (2,4)"<<endl;
    cout<<"   1     1        1       0"<<endl;
    cout<<"   2    -1        0       1"<<endl;
    cout<<"   3     0        -1      0"<<endl;
    cout<<"   4     0        0       -1"<<endl;
    cout<<"   Algoritmul de generare al matricei de incidenta este:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int A[101][101],V[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   int n,m,x,y,i;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || V[x][y]==1);"<<endl;
    cout<<"   A[x][i]=1;"<<endl;
    cout<<"   A[y][i]=-1;"<<endl;
    cout<<"   V[x][y]=1;}"<<endl;
    cout<<"   for(i=1;i<=n;i++) {"<<endl;
    cout<<"     for(j=1;j<=m;j++)"<<endl;
    cout<<"        cout<<A[i][j]<<' ';"<<endl;
    cout<<"     cout<<endl;}"<<endl;
    cout<<"   return 0;}"<<endl;
    int n,m,x,y,i,j,A[50][50],V[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            A[i][j]=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            V[i][j]=0;
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || V[x][y]==1);
        A[x][i]=1;
        A[y][i]=-1;
        V[x][y]=1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void matriceadrumurilor()
{
    cout<<"   Matricea drumurilor este o matrice cu n linii si n coloane care contine 1 daca exista drum de la i la j sau 0 in caz contrar"<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(2,1),(1,4),(4,1),(2,3),(4,3)."<<endl;
    cout<<"   Matricea drumurilor va fi:"<<endl;
    cout<<"   1 1 1 1"<<endl;
    cout<<"   1 1 1 1"<<endl;
    cout<<"   0 0 0 0 "<<endl;
    cout<<"   1 1 1 1"<<endl;
    cout<<"   Algoritmul Roy-Warshall este algoritmul prin care se transforma matricea de adiacenta in matricea drumurilor."<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,k;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(k=1;k<=n;k++)"<<endl;
    cout<<"       for(i=1;i<=n;i++)"<<endl;
    cout<<"           for(j=1;j<=n;j++)"<<endl;
    cout<<"              if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)"<<endl;
    cout<<"                  A[i][j]=1;"<<endl;
    cout<<"   for(i=1;i<=n;i++) {"<<endl;
    cout<<"     for(j=1;j<=n;j++)"<<endl;
    cout<<"        cout<<A[i][j]<<' ';"<<endl;
    cout<<"     cout<<endl;}"<<endl;
    cout<<"   return 0;"<<endl;
    int n,m,x,y,i,j,k,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;
    }
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)
                    A[i][j]=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void succesorisipredecesori()
{
    cout<<"   Se numeste succesor al varfului x orice varf la care ajunge un arc care iese din x.Multimea succesorilor se noteaza: Γ+."<<endl;
    cout<<"   Se numeste predecesor al varfului x orice vârf de la care intra un arc în varful x.Multimea predecesorilor se noteaza: Γ-."<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(2,1),(1,4),(4,1),(2,3),(4,3)."<<endl;
    cout<<"   Γ+(1)={2,4}   Γ-(1)={2,4}"<<endl;
    cout<<"   Γ+(2)={1,3}   Γ-(2)={1}"<<endl;
    cout<<"   Γ+(3)= \      Γ-(3)={2,4}"<<endl;
    cout<<"   Γ+(4)={1,3}   Γ-(4)={1}"<<endl;
    cout<<"   Algoritmul pt multimea succesorilor si predecesorilor este:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m,x,y,i,j,X=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(int i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   while(X<=n){"<<endl;
    cout<<"      cout<<'Succesorii lui '<<X<<' sunt:';"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"          if(A[X][j]==1)"<<endl;
    cout<<"              cout<<j<<' '"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      cout<<'Predecesorii lui '<<X<<' sunt:';"<<endl;
    cout<<"      for(int i=1;i<=n;i++)"<<endl;
    cout<<"           if(A[i][X]==1)"<<endl;
    cout<<"               cout<<i<<' ';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      X++;}"<<endl;
    cout<<"   return 0;}"<<endl;
    unsigned n,m,x,y,i,j,X=1,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;}
    while(X<=n){
        cout<<"   Succesorii lui "<<X<<" sunt:";
        for(j=1;j<=n;j++)
            if(A[X][j]==1)
                cout<<j<<" ";
        cout<<endl;
        cout<<"   Predecesorii lui "<<X<<" sunt:";
        for(i=1;i<=n;i++)
            if(A[i][X]==1)
                cout<<i<<" ";
        cout<<endl;
        X++;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void arcxy()
{
    cout<<"   ω+(x)={(x,y)|(x,y) este muchie}"<<endl;
    cout<<"   ω-(x)={(y,x)|(y,x) este muchie}"<<endl;
    cout<<"   Se da un graf orientat cu 4 noduri si arcele (1,2),(2,1),(1,4),(4,1),(2,3),(4,3)."<<endl;
    cout<<"   ω+(1)={(1,2),(1,4)}       ω-(1)={(2,1),(4,1)}"<<endl;
    cout<<"   ω+(2)={(2,1),(2,3)}       ω-(2)={(1,2)}"<<endl;
    cout<<"   ω+(3)= \                  ω-(3)={(2,3),(4,3)}"<<endl;
    cout<<"   ω+(4)={(4,1),(4,3)}       ω-(4)={(1,4)}"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m,x,y,i,j,X=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   while(X<=n){"<<endl;
    cout<<"      cout<<'Arcele care il contin pe '<<X<<' ca extremitate initiala sunt:';"<<endl;
    cout<<"      for(int j=1;j<=n;j++)"<<endl;
    cout<<"          if(A[X][j]==1)"<<endl;
    cout<<"              cout<<'('<<X<<','<<j<<')'<<' ';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      cout<<'Arcele care il contin pe '<<X<<' ca extremitate finala sunt:';"<<endl;
    cout<<"      for(int i=1;i<=n;i++)"<<endl;
    cout<<"           if(A[i][X]==1)"<<endl;
    cout<<"              cout<<'('<<i<<','<<X<<')';"<<endl;
    cout<<"      cout<<endl;"<<endl;
    cout<<"      X++;}"<<endl;
    cout<<"   return 0;}"<<endl;
    unsigned n,m,x,y,i,j,X=1,A[50][50];
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;
    }
    while(X<=n){
        cout<<"   Arcele care il contine pe "<<X<<" ca extremitate initiala sunt:";
        for(j=1;j<=n;j++)
            if(A[X][j]==1)
                cout<<"("<<X<<","<<j<<")";
        cout<<endl;
        cout<<"   Arcele care il contine pe "<<X<<" ca extremitate finala sunt:";
        for(i=1;i<=n;i++)
            if(A[i][X]==1)
                cout<<"("<<i<<","<<X<<")";
        cout<<endl;
        X++;
    }
    system("PAUSE");
    system("cls");
    metode2();
}
void conexitate2()
{
    cout<<"   Se numeste graf orientat conex un graf in care oricare 2 varfuri x si y pot fi unite printr-un lant"<<endl;
    cout<<"   Componenta conexa este un subgraf conex maximal cu aceasta proprietate"<<endl;
    system("PAUSE");
    system("cls");
    grafori();
}
void tareconexitate()
{
    cout<<"   Graful tare conex este un graf in care intre oricare 2 varfuri exista drum.Matricea drumurilor contine doar 1."<<endl;
    cout<<"   Se numeste componenta tare conexa un subgraf tare conex maximal cu aceasta proprietate"<<endl;
    cout<<"   Algoritmul care verifica daca un graf este tare conex este urmatorul:"<<endl;
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,k,OK=1;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(k=1;k<=n;k++)"<<endl;
    cout<<"       for(i=1;i<=n;i++)"<<endl;
    cout<<"           for(j=1;j<=n;j++)"<<endl;
    cout<<"              if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)"<<endl;
    cout<<"                  A[i][j]=1;"<<endl;
    cout<<"   for(i=1;i<=n;i++)"<<endl;
    cout<<"     for(j=1;j<=n;j++)"<<endl;
    cout<<"        if(A[i][j]!=1)"<<endl;
    cout<<"            OK=0;"<<endl;
    cout<<"   if(OK==1) cout<<Graful este tare conex"<<endl;
    cout<<"   else cout<<Graful nu este tare conex"<<endl;
    cout<<"   return 0;}"<<endl;
    int n,m,x,y,i,j,k,A[50][50],OK=1;
    cout<<"   Introduceti nr de varfuri:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            A[i][j]=0;
    do
    {
        cout<<"   Introduceti numarul de arce:";
        cin>>m;
    }
    while(m>n*(n-1));
    for(i=1; i<=m; i++)
    {
        do
        {
            cout<<"   Introduceti arcul "<<i<<":";
            cin>>x>>y;
        }
        while(x==y || x>n || y>n || A[x][y]==1);
    A[x][y]=1;
    }
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(A[i][j]==0 && A[i][k]==1 && A[k][j]==1)
                    A[i][j]=1;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(A[i][j]!=1)
                OK=0;
    if(OK==1)
        cout<<"   Graful este tare conex";
    else
        cout<<"   Graful nu este tare conex";
    system("PAUSE");
    system("cls");
    grafori();
}
void aplicatii2()
{
    cout<<"   1.Se citeste de la tastatura numarul de varfuri ale unui graf orientat si numarul de arce,iar apoi m arce.Sa se determine cate varfuri au gradul interior nul."<<endl;
    cout<<"   2.Se citeste de la tastatura n-numarul de varfuri ale unui graf orientat si m-numarul de arce,iar apoi m arce.Sa se determine cate varfuri au gradul exterior egal cu cel interior."<<endl;
    cout<<"   3.Se citeste de la tastatura o matrice cu n linii si m coloane.Sa se verifice daca poate fi de adiacenta pt un graf orientat"<<endl;
    cout<<"   Apasati tasta corespunzatoare fiecarei probleme pentru a vedea rezolvarea sau 4 pt. a reveni la meniul anteiror"<<endl;
    int a;
    cin>>a;
    system("cls");
    if(a==1)
        aplicatia4();
    else if(a==2)
        aplicatia5();
    else if(a==3)
        aplicatia6();
    else if(a==4)
        grafori();
    else
        aplicatii2();
}
void aplicatia4()
{
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned v[101],A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,contor=0;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   v[y]++;"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(i=1; i<=n; i++) "<<endl;
    cout<<"       if(v[i]==0)"<<endl;
    cout<<"          contor++;"<<endl;
    cout<<"   cout<<contor;"<<endl;
    cout<<"   return 0; }"<<endl;
    system("PAUSE");
    system("cls");
    aplicatii2();
}
void aplicatia5()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   unsigned vplus[101],vminus[101],A[101][101];"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned m,n,x,y,i,j,contor=0;"<<endl;
    cout<<"   cin>>n;"<<endl;
    cout<<"   do {"<<endl;
    cout<<"       cin>>m;"<<endl;
    cout<<"   }while(m>n*(n-1));"<<endl;
    cout<<"   for(i=1; i<=m; i++) {"<<endl;
    cout<<"   do {"<<endl;
    cout<<"      cin>>x>>y;"<<endl;
    cout<<"   }while(x==y || x>n || y>n || A[x][y]==1);"<<endl;
    cout<<"   vplus[x]++;"<<endl;
    cout<<"   vminus[y]++;"<<endl;
    cout<<"   A[x][y]=1;}"<<endl;
    cout<<"   for(i=1; i<=n; i++) "<<endl;
    cout<<"       if(vplus[i]==vminus[i])"<<endl;
    cout<<"          contor++;"<<endl;
    cout<<"   cout<<contor;"<<endl;
    cout<<"   return 0; }"<<endl;
    system("PAUSE");
    system("cls");
    aplicatii2();
}
void aplicatia6()
{
    cout<<"   #include<iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"   unsigned n,m, i, j, OK = 1, A[101][101];"<<endl;
    cout<<"   cin >> n >> m;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          cin >> A[i][j];"<<endl;
    cout<<"   if(n!=m)"<<endl;
    cout<<"       OK=0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"      for (j = 1; j <= m; j++)"<<endl;
    cout<<"          if (A[i][j] != 0 && A[i][j] != 1)"<<endl;
    cout<<"             OK = 0;"<<endl;
    cout<<"   for (i = 1; i <= n; i++)"<<endl;
    cout<<"       for (j = 1; j <= n; j++)"<<endl;
    cout<<"          if (i == j)"<<endl;
    cout<<"             if (A[i][j] != 0)"<<endl;
    cout<<"                OK = 0;"<<endl;
    cout<<"   if (OK == 1)"<<endl;
    cout<<"     cout << Matricea poate fi de adiacenta;"<<endl;
    cout<<"   else"<<endl;
    cout<<"     cout << NU poate fi de adiacenta;"<<endl;
    cout<<"   return 0; }"<<endl;
    system("PAUSE");
    system("cls");
    aplicatii2();
}
void test2(){
    nr++;
    int scor=0;
    cout<<"   1.Matricea de adiacenta:"<<endl;
    cout<<"   a)este patratica b)contine 1 si 3 c)este simetrica d)are pe diagonala secundara numai 0"<<endl;
    char a;
    cin>>a;
    if(a=='a' || a=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;}
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   2.Varful izolat are gradul exterior egal cu 0"<<endl;
    cout<<"   a)adevarat b)fals c)depinde de graf d)nu are grad exterior"<<endl;
    char b;
    cin>>b;
    if(b=='a'|| b=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   3.Un graf orientat are 8 varfuri, numerotate de la 1 la 8, si arcele (1,7), (1,8), (3,5), (3,7), (4,3), (4,7), (6,3), (6,5), (6,7), (6,8), (8,5), (8,7). Numarul varfurilor care au gradul exterior nul este:"<<endl;
    cout<<"   a)1 b)2 c)3 d)4"<<endl;
    char c;
    cin>>c;
    if(c=='c' || c=='C'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   4.Intr-un graf orientat cu 7 noduri suma gradelor interioare ale tuturor nodurilor este egala cu 10. Care este valoarea sumei gradelor exterioare ale tuturor nodurilor?"<<endl;
    cout<<"   a)5 b)3 c)20 d)10"<<endl;
    char x;
    cin>>x;
    if(x=='d'|| x=='D'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   5.Care dintre variantele de mai jos este o metoda de reprezentare?"<<endl;
    cout<<"   a)vectorul arcelor b)lant c)drum d)subgraf"<<endl;
    char y;
    cin>>y;
    if(y=='a' || y=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   6.Un graf orientat contine muchii?"<<endl;
    cout<<"   a}fals b)adevarat c)depinde de graf d)nu exista muchii"<<endl;
    char z;
    cin>>z;
    if(z=='a' || z=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   7.Cate noduri ale grafului orientat cu sase noduri numerotate de la 1 la 6 si urmatoarele arce: (1,5), (1,6), (2,1), (2,3), (3,1), (3,4), (4,3), (4,5), (5,4), (6,5) au gradul interior egal cu gradul exterior?"<<endl;
    cout<<"   a)5 b)7 c)4 d)0"<<endl;
    char t;
    cin>>t;
    if(t=='c' || t=='C'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   8.Se considera graful orientat cu varfurile numerotate de la 1 la 7 si arcele (1,2), (1,7), (2,3), (3,2), (3,4), (4,3), (5,4), (5,6), (6,4), (7,6). Cate varfuri din graful dat au gradul exterior impar?"<<endl;
    cout<<"   a)0 b)2 c)1 d)4"<<endl;
    char s;
    cin>>s;
    if(s=='d' || s=='D'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   9.Matricea de incidenta:"<<endl;
    cout<<"   a)nu este patratica b)contine doar 1 si -1 c)este patratica d)este simetrica"<<endl;
    char r;
    cin>>r;
    if(r=='a'|| r=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   10.Gradul exterior al unui varf este egal cu:"<<endl;
    cout<<"   a)gradul interior al acestuia b)numarul de varfuri c)numarul de arce d)numarul de arce in care acesta este extremitate initiala"<<endl;
    char o;
    cin>>o;
    if(o=='d' || o=='D'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout << "\nScorul tau final: " << scor << "/10\n";
    scortotal=scortotal+scor;
    system("PAUSE");
    system("cls");
    grafori();
}

void backtracking(){
    if(OK8==0){
        OK8=1;
        p++;
    }
    cout<<"                     1.Definitie"<<endl;
    cout<<"                     2.Forma generala"<<endl;
    cout<<"                     3.Utilitate"<<endl;
    cout<<"                     4.Aplicatii"<<endl;
    cout<<"                     5.Test"<<endl;
    cout<<"                     6.Iesire"<<endl;
    char f;
    cin>>f;
    system("cls");
    if(f=='1')
        defback();
    else if(f=='2')
        formback();
    else if(f=='3')
        utilback();
    else if(f=='4')
        aplicback();
    else if(f=='5')
        testback();
    else if(f=='6')
        meniuprincipal();
    else
        backtracking();
}
void defback(){
    cout<<"   Backtracking este o metoda de parcurgere sistematica a spatiului solutiilor posibile al unei probleme."<<endl;
    cout<<"   Este o metoda generala de programare, si poate fi adaptata pentru orice problema pentru care dorim sa obtinem toate solutiile posibile, sau sa selectam o solutie optima, din multimea solutiilor posibile"<<endl;
    cout<<"   Backtracking este insa si cea mai costisitoare metoda din punct de vedere al timpului de executie."<<endl;
    system("PAUSE");
    system("cls");
    backtracking();
}
void formback(){
    cout<<"   Algoritmul de implementare al backtracking-ului arata in felul urmator:"<<endl;
    cout<<"   void BK(int k) //k-pozitia din vector care se completeaza"<<endl;
    cout<<"   {int i;"<<endl;
    cout<<"    for (i=1; i<=nr_elemente_Sk; i++) //parcurge elementele multimii Sk"<<endl;
    cout<<"      { v[k]=i; //selecteaza un element din multime"<<endl;
    cout<<"        if (validare(k)==1) //valideaza conditiile de continuare ale problemei"<<endl;
    cout<<"          { if (solutie(k)==1) //verifica daca s-a obtinut o solutie"<<endl;
    cout<<"               afisare(k); //afiseaza solutia"<<endl;
    cout<<"             else"<<endl;
    cout<<"               BK(k+1); //reapeleaza functia pentru pozitia k+1"<<endl;
    cout<<"          }"<<endl;
    cout<<"      } //daca nu mai exista nici un element neselectat in multimea Sk"<<endl;
    cout<<"    } //se inchide nivelul de stiva si astfel se revine pe pozitia k-1 a vectorului"<<endl;
    cout<<"// executia functiei se incheie, dupa ce s-au inchis toate nivelurile stivei, inseamna ca în vectorul v nu mai poate fi selectat niciun element din multimile Sk"<<endl;
    system("PAUSE");
    system("cls");
    backtracking();
}
void utilback(){
    cout<<"   Backtracking-ul poate implementa anumite probleme din matematica:"<<endl;
    cout<<"   1.Permutare"<<endl;
    cout<<"   2.Produs cartezian"<<endl;
    cout<<"   3.Aranjamente"<<endl;
    cout<<"   4.Combinari"<<endl;
    cout<<"   5.Submultimi"<<endl;
    system("PAUSE");
    system("cls");
    backtracking();
}
void aplicback(){
    cout<<"   1.Aplicatia 1"<<endl;
    cout<<"   2.Aplicatia 2"<<endl;
    cout<<"   3.Revenire"<<endl;
    char g;
    cin>>g;
    system("cls");
    if(g=='1')
        aplicback1();
    else if(g=='2')
        aplicback2();
    else if(g=='3')
        backtracking();
    else
        aplicback();
}
void aplicback1(){
    cout<<"   Fie n un numar natural nenul. Sa se genereze permutarile de n elemente"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea rezolvarea problemei."<<endl;
    cout<<"   Apasati tasta 2 pentru a reveni la meniul anterior"<<endl;
    char h;
    cin>>h;
    system("cls");
    if(h=='1')
        aplicback1rez();
    else if(h=='2')
        aplicback();
    else
        aplicback1();
}
void aplicback1rez(){
    //rezolvarea aplicatiei 1
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int n,st[20];"<<endl;
    cout<<"   void afiseaza() {"<<endl;
    cout<<"     for (int j=1;j<=n;j++)"<<endl;
    cout<<"       cout<<st[j]<<' ';"<<endl;
    cout<<"     cout<<endl; }"<<endl;
    cout<<"   int valid(int k) {"<<endl;
    cout<<"     int sw=1;"<<endl;
    cout<<"     for(int j=1;j<k;j++)"<<endl;
    cout<<"        if (st[j]==st[k])"<<endl;
    cout<<"           sw=0;"<<endl;
    cout<<"     return sw; }"<<endl;
    cout<<"   void back(int k) {"<<endl;
    cout<<"     int i;"<<endl;
    cout<<"     for(i=1;i<=n;i++) {"<<endl;
    cout<<"        st[k]=i;"<<endl;
    cout<<"        if (valid(k))"<<endl;
    cout<<"            if (k==n)"<<endl;
    cout<<"               afiseaza();"<<endl;
    cout<<"         else back(k+1) };"<<endl;
    cout<<"    }"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"     cin>>n;"<<endl;
    cout<<"     back(1);"<<endl;
    cout<<"     return 0; }"<<endl;
    system("PAUSE");
    system("cls");
    aplicback1();
}
void aplicback2(){
    cout<<"   Fie n si m doua numere naturale nenule, m<=n. Sa se genereze aranjamentele de n elemente luate cate m."<<endl;
    cout<<endl<<endl<<endl;
    cout<<"   Apasati tasta 1 pentru a vedea rezolvarea problemei."<<endl;
    cout<<"   Apasati tasta 2 pentru a reveni la meniul anterior"<<endl;
    char i;
    cin>>i;
    system("cls");
    if(i=='1')
        aplicback2rez();
    else if(i=='2')
        aplicback();
    else
        aplicback2();
}
void aplicback2rez(){
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int n,m,st[20];"<<endl;
    cout<<"   void afiseaza() {"<<endl;
    cout<<"     for (int j=1;j<=m;j++)"<<endl;
    cout<<"       cout<<st[j]<<' ';"<<endl;
    cout<<"     cout<<endl; }"<<endl;
    cout<<"   int valid(int k) {"<<endl;
    cout<<"     int sw=1;"<<endl;
    cout<<"     for(int j=1;j<k;j++)"<<endl;
    cout<<"        if (st[j]==st[k])"<<endl;
    cout<<"           sw=0;"<<endl;
    cout<<"     return sw; }"<<endl;
    cout<<"   void back(int k) {"<<endl;
    cout<<"     int i;"<<endl;
    cout<<"     for(i=1;i<=n;i++) {"<<endl;
    cout<<"        st[k]=i;"<<endl;
    cout<<"        if (valid(k))"<<endl;
    cout<<"            if (k==m)"<<endl;
    cout<<"               afiseaza();"<<endl;
    cout<<"         else back(k+1) };"<<endl;
    cout<<"    }"<<endl;
    cout<<"   int main() {"<<endl;
    cout<<"     cin>>n; cin>>m;"<<endl;
    cout<<"     back(1);"<<endl;
    cout<<"     return 0; }"<<endl;
    system("PAUSE");
    system("cls");
    aplicback2();
}
void testback(){
    //cate teste parcurgem
    nr++;
    int scor=0;
    cout<<"   1.Ne propunem sa generam toate submultimile multimii {1, 2, 4, 6, 8}. Cate solutii care obligatoriu contin elementul 2 si nu contin elementul 8 putem genera?"<<endl;
    cout<<"   a)8 b)6 c)16 d)7"<<endl;
    char a;
    cin>>a;
    if(a=='a' || a=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;}
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   2.Utilizand metoda backtracking, se genereaza toate parfumurile formate prin amestecarea a cate 3 esente distincte din multimea {agar, geranium, iasomie, paciuli, tuberoze}. Primele patru solutii obtinute sunt, in aceasta ordine: (agar, geranium, iasomie), (agar, geranium, paciuli), (agar, geranium, tuberoze) si (agar, iasomie, paciuli). Indicati solutia generata imediat inainte de (geranium, iasomie, paciuli)."<<endl;
    cout<<"   a)(agar, iasomie, paciuli)"<<endl;
    cout<<"   b)(agar, paciuli, tuberoze)"<<endl;
    cout<<"   c)(geranium, paciuli, iasomie)"<<endl;
    cout<<"   d)(geranium, agar, iasomie)"<<endl;
    char b;
    cin>>b;
    if(b=='b'|| b=='B'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   3.Utilizand metoda backtracking, se genereaza numerele naturale formate din exact 3 cifre si care au suma cifrelor egala cu 4, in aceasta ordine: 103, 112, 121,130, 202, 211, 220, 301, 310, 400. Daca utilizam acelasi algoritm pentru a genera toate numerele de 4 cifre care au suma cifrelor egala cu 7, precizati care este numarul generat imediat dupa 1222."<<endl;
    cout<<"   a)1231"<<endl;
    cout<<"   b)1223"<<endl;
    cout<<"   c)1213"<<endl;
    cout<<"   d)1321"<<endl;
    char c;
    cin>>c;
    if(c=='a' || c=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   4.Utilizand metoda backtracking se genereaza toate permutarile multimii {1,2,3,4}. Daca primele trei permutari generate sunt, in acesta ordine: 1234, 1243,1324 precizati care este permutarea generata imediat după 3412."<<endl;
    cout<<"   a)3413"<<endl;
    cout<<"   b)4123"<<endl;
    cout<<"   c)3421"<<endl;
    cout<<"   d)3214"<<endl;
    char x;
    cin>>x;
    if(x=='c'|| x=='C'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout<<"   5.Utilizand metoda backtracking se genereaza numerele formate din cate 3 cifre distincte din multimea {1,3,5,7}. Daca primele trei numere generate sunt, in acesta ordine: 135, 137, 153 care este cel de-al patrulea numar generat."<<endl;
    cout<<"   a)157"<<endl;
    cout<<"   b)173"<<endl;
    cout<<"   c)315"<<endl;
    cout<<"   d)357"<<endl;
    char y;
    cin>>y;
    if(y=='a' || y=='A'){
        scor++;
        cout<<"   Raspuns corect!!!:)"<<endl;
    }
    else
        cout<<"   Raspuns gresit!:("<<endl;
    cout << "\nScorul tau final: " << scor << "/5\n";
    //suma scorurilor
    scortotal=scortotal+scor;
    system("PAUSE");
    system("cls");
    backtracking();
}
void greedy(){
    //cate lectii am parcurs
    if(OK9==0){
        OK9=1;
        p++;
    }
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Introducere"<<endl;
    cout<<"                 2.Cand folosim metoda Greedy?"<<endl;
    cout<<"                 3.Pasii algoritmului"<<endl;
    cout<<"                 4.Exemple de probleme"<<endl;
    cout<<"                 5.Aplicatii"<<endl;
    cout<<"                 6.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        gre_introducere();
    else if(x=='2')
        gre_cand();
    else if(x=='3')
        gre_pasi();
    else if(x=='4')
        gre_exemple();
    else if(x=='5')
        gre_aplicatii();
    else if(x=='6')
        gre_test();
    else if(x=='0')
        meniuprincipal();
    else
        meniuprincipal();
}
void gre_introducere()
{
    cout<<"   Metoda Greedy (greedy = lacom), denumita si metoda optimului local, reprezinta o metoda de programare utilizata in probleme de optimizare si care furnizeaza o singura solutie (optimul global) care este obtinuta prin alegeri succesive ale optimului local. "<<endl;
    cout<<"   Algoritmii de tip greedy, asemenea algoritmilor backtracking si de programare dinamica se utilizeaza pentru rezolvarea unor probleme a caror solutie se poate exprima sub forma unui vector de numere intregi."<<endl;
    cout<<"   In comparatie cu metoda backtracking, metoda Greedy nu va determina toate solutiile problemei. Metoda va gasi doar o singura solutie si, in general solutia gasita este solutia optima. "<<endl;
    system("PAUSE");
    system("cls");
    greedy();
}
void gre_cand()
{
    cout<<"   Metoda se aplica problemelor in care se da o multime A cu n elemente si trebuie determinata o submulţime a sa, S cu m elemente, care indeplinesc anumite conditii."<<endl;
    cout<<"   Algoritmul va  determina la fiecare pas k o componenta x[k] a vectorului solutie si spre deosebire de algoritmul backtracking, nu mai revine ulterior la aceasta alegere."<<endl;
    cout<<"   Pentru ca elementele care se selecteaza sa apartina solutiei optime, la pasul k se va alege candidatul care este optim pentru elementul x[k] al solutiei deci un optim local. "<<endl;
    system("PAUSE");
    system("cls");
    greedy();

}

void gre_pasi()
{
    cout<<"   Pasii metodei greedy sunt: "<<endl;
    cout<<"   1.se initializeaza multimea solutiilor S cu multimea vida; "<<endl;
    cout<<"   2.la fiecare pas se alege un anumit element x apartine A, candidatul optim la momentul respectiv,  care poate conduce la o solutie optima;  "<<endl;
    cout<<"   3.se verifica daca elementul ales poate fi adaugat la multimea solutiilor:  "<<endl;
    cout<<"     -daca se poate adauga, atunci va fi adaugat si multimea solutiilor devine S=S ∪ {x} - un element introdus in multimea S nu va mai putea fi eliminat;"<<endl;
    cout<<"     -daca nu se poate adauga, el nu se mai testeaza ulterior.  "<<endl;
    cout<<"   4.procedeul continua, pana cand au fost determinate toate elementele din multimea solutiilor."<<endl;
    cout<<"   De regula metoda greedy are o complexitate de O (n^k). "<<endl;
    cout<<"   Exista destul de putine probleme pentru care se poate aplica această metoda. "<<endl;
    cout<<"   Metoda greedy se aplica atunci cand stim ca se ajunge la solutia dorita. "<<endl;
    system("PAUSE");
    system("cls");
    greedy();

}

void gre_exemple()
{
    cout<<"   Apasati tasta 1 pentru a vedea un exemplu de rezolvare cu metoda greedy."<<endl;
    cout<<"   Apasati tasta 2 pentru a vedea un alt exemplu de rezolvare pentru metoda greedy"<<endl;
    cout<<"   Apasati orice tasta pentru a reveni la meniul anterior."<<endl;
    char exemplu_greedy;
    cin>>exemplu_greedy;
    system("cls");
    if(exemplu_greedy=='1')
        exemplu1_greedy();
    if(exemplu_greedy=='2')
        exemplu2_greedy();
    else greedy();

}
void exemplu1_greedy()
{
    cout<<"   Se da o multime A={a1, a2, . . ., an} cu elemente reale. Sa se determine o submultime a lui S astfel incat suma elementelor submultimii sa fie maxima."<<endl;
    cout<<"   Idee de rezolvare: Se vor cauta intre elementele vectorului A doar elementele mai mari sau egale cu 0. Se va utiliza un subprogram greedy ( ) pentru implementarea algoritmului."<<endl;
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int n,i,m;"<<endl;
    cout<<"   float A[100], S[100];"<<endl;
    cout<<"   void greedy  ( )"<<endl;
    cout<<"   { for(i = 1; i <= n; i ++  )"<<endl;
    cout<<"       if ( A[ i ] >= 0 );"<<endl;
    cout<<"          { m ++ ;"<<endl;
    cout<<"              S[ m ] = A[ i ]; } }"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"       {  cout << ' Numarul de elemente n = ' ; cin >> n ;"<<endl;
    cout<<"          cout << endl <<' Elementele vectorului ' << endl ;"<<endl;
    cout<<"       for  ( i = 1 ;  i <= n  ; i++  )"<<endl;
    cout<<"      { cout <<'A[' <<i<<]' = '; cin >> A[ i ] ;}"<<endl;
    cout<<"   greedy();"<<endl;
    cout<<"   cout << 'Submultimea este formata din: ';"<<endl;
    cout<<"   for ( i= 1; i <= m ;i ++ ) cout << S [ i ] <<' ';"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    gre_exemple();
}

void exemplu2_greedy()
{
    cout<<"   Se da o multime A={a1, a2, . . ., an} cu elemente intregi. Sa se determine cele mai mari doua elemente ale multimii."<<endl;
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int n,i,a,maxi1,maxi2,aux;"<<endl;
    cout<<"   int main()"<<endl;
    cout<<"   {  cout << ' Numarul de elemente n = '' ; cin >> n ;"<<endl;
    cout<<"       for  ( i = 1 ;  i <= n  ; i++  )"<<endl;
    cout<<"      {     cin>>a;"<<endl;
    cout<<"            if(a>maxi1)    maxi1=a;"<<endl;
    cout<<"            if(maxi2<maxi1) {aux=maxi1; maxi1=maxi2; maxi2=aux;}}"<<endl;
    cout<<"   cout << maxi1<<maxi2;"<<endl;
    cout<<"   return 0;"<<endl;
    system("PAUSE");
    system("cls");
    gre_exemple();
}

void gre_aplicatii()
{
    cout<<"  Mai jos veti avea de rezolvato problema din acest capitol"<<endl;
    cout<<"  1.Se citesc 3 numere naturale S, n si e cu urmatoarele semnificatii: S este o suma de bani care trebuie platita folosind bancnote care au valori puterile lui e de la 1 la e la n. Se se afiseze modalitatea de plata folosind un numar minim de bancnote de tipurile precizate. Sa se afiseze la final numarul de bancnote folosite."<<endl;
    cout<<"  Apasati tasta 1 pentru a vedea rezolvarea primei probleme sau orice tasta pentru a reveni la meniul anterior: "<<endl;
    char gre_aplic;
    cin>>gre_aplic;
    system("cls");
    if(gre_aplic=='1')
        aplicatiagre1();
    else greedy();
}

void aplicatiagre1()
{
    cout<<"   #include <iostream>"<<endl;
    cout<<"   using namespace std;"<<endl;
    cout<<"   int main(){"<<endl;
    cout<<"   int s,n,e,t=0,p=1,k=0;"<<endl;
    cout<<"   cin>>s>>n>>e;"<<endl;
    cout<<"   while(p*e<=s && k<n)"<<endl;
    cout<<"   { p=p*e;"<<endl;
    cout<<"   k++;}"<<endl;
    cout<<"   while(s>0){"<<endl;
    cout<<"   if(s>=p}  cout<<s/p<<:'bancnote de valoarea'<<p<<endl;"<<endl;
    cout<<"      t=t+s/p;  s=s%p;  p=p/e;}<<endl;"<<endl;
    cout<<"   cout<<t;"<<endl;
    cout<<"   return 0;;"<<endl;
    cout<<"   }"<<endl;
    system("PAUSE");
    system("cls");
    gre_aplicatii();
}

void gre_test()
{
    nr++;
    int scor_gre=0;
    cout<<"   1. Ce este metoda Greedy?"<<endl;
    cout<<"   a) O metoda de rezolvare a problemelor care se bazeaza pe selectia aleatoare a solutiilor"<<endl;
    cout<<"   b) O metoda de rezolvare a problemelor care alege mereu cea mai buna optiune la fiecare pas"<<endl;
    cout<<"   c) O metoda de rezolvare a problemelor care combina mai multe tehnici algoritmice"<<endl;
    cout<<"   d) O metoda de rezolvare a problemelor bazata pe analiza in profunzime a tuturor optiunilor"<<endl;
    char gre1;
    cin>>gre1;
    if(gre1=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_gre++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   2. Care dintre următoarele este o caracteristica a algoritmilor Greedy?"<<endl;
    cout<<"   a) Ofera intotdeauna solutii optime globale"<<endl;
    cout<<"   b) Funcționeaza eficient pentru orice tip de problema"<<endl;
    cout<<"   c) Realizeaza alegeri locale optime in speranta de a ajunge la o solutie globala optima"<<endl;
    cout<<"   d) Se bazeaza pe metode brute-force pentru a explora toate posibilitatile"<<endl;
    char gre2;
    cin>>gre2;
    if(gre2=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_gre++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   3. Ce este solutia locala in contextul metodei Greedy?"<<endl;
    cout<<"   a) O solutie care satisface doar o mica parte din cerintele problemei"<<endl;
    cout<<"   b) O solutie care este optima in raport cu o anumita subproblema"<<endl;
    cout<<"   c) O solutie care ofera intotdeauna rezultatul optim global"<<endl;
    cout<<"   d) O solutie care se obtine prin aplicarea unui algoritm Greedy într-un singur pas"<<endl;
    char gre3;
    cin>>gre3;
    if(gre3=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_gre++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   4. Care dintre următoarele este un exemplu de problema care poate fi rezolvata folosind metoda Greedy?"<<endl;
    cout<<"   a) Sortarea unei liste de numere in ordine descrescatoare"<<endl;
    cout<<"   b) Gasirea caii minime intre doua noduri intr-un graf ponderat"<<endl;
    cout<<"   c) Impartirea unui sir de caractere in subsiruri de lungime egala"<<endl;
    cout<<"   d) Determinarea daca un graf este aciclic sau nu"<<endl;
    char gre4;
    cin>>gre4;
    if(gre4=='b'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_gre++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout<<"   5. Care este principalul avantaj al metodei Greedy?"<<endl;
    cout<<"   a) Ofera intotdeauna solutii optime globale"<<endl;
    cout<<"   b) Functioneaza eficient pentru orice tip de problema"<<endl;
    cout<<"   c) Este usor de implementat si inteles"<<endl;
    cout<<"   d) Garanteaza ca va gasi intotdeauna solutia optima intr-un timp finit"<<endl;
    char gre5;
    cin>>gre5;
    if(gre5=='c'){
        cout<<"   Raspuns corect!!!:)"<<endl;
        scor_gre++;}
    else
        cout<<"   Raspuns gresit :("<<endl;
    cout << "\nScorul tau final: " << scor_gre << "/5\n";
    scortotal=scortotal+scor_gre;
    system("PAUSE");
    system("cls");
    greedy();
}


void progdin(){
    if(OK10==0){
        OK10=1;
        p++;
    }
    cout<<endl<<endl;
    cout<<"                 0.Iesire"<<endl;
    cout<<"                 1.Introducere in programarea dinamica"<<endl;
    cout<<"                 2.Calcularea valorilor Fibonacci"<<endl;
    cout<<"                 3.Problema rucsacului (Knapsack Problem)"<<endl;
    cout<<"                 4.Matricea drumurilor minime (Minimum Path Matrix)"<<endl;
    cout<<"                 5.Calcularea secventei de numere prim"<<endl;
    cout<<"                 6.Problema celor mai lungi subsecvente comune (Longest Common Subsequence - LCS)"<<endl;
    cout<<"                 7.Aplicatii"<<endl;
    cout<<"                 8.Test"<<endl;
    char x;
    cin>>x;
    system("cls");
    if(x=='1')
        pd_intro();
    else if(x=='2')
        pd_fib();
    else if(x=='3')
        pd_kp();
    else if(x=='4')
        pd_mp();
    else if(x=='5')
        pd_prim();
    else if(x=='6')
        pd_lcs();
    else if(x=='7')
        pd_aplicatii();
    else if(x=='8')
        pd_test();
    else if(x=='0')
        meniuprincipal();
    else
    {
        progdin();
    }
}

void pd_intro()
{
    cout<<endl<<endl;
    cout<<"     Programarea dinamica este o tehnica de proiectare a algoritmilor care rezolva probleme complexe prin impartirea lor in subprobleme mai mici, rezolvarea si stocarea rezultatelor acestor subprobleme si utilizarea ulterioara a acestor rezultate pentru a obtine solutia finala. Este adesea utilizata pentru optimizarea performantei si reducerea timpului de executie al algoritmilor.\n";

    cout<<"     Principalele beneficii ale programarii dinamice includ:Reducerea complexitatii, evitarea recalcularilor si eficienta imbunatatita\n\n";
    cout<<"     Comparativ cu alte paradigme de programare, programarea dinamica se distinge prin abordarea sa bottom-up si construirea progresiva a solutiei optime. De asemenea, este important de mentionat diferenta dintre programarea dinamica si recursivitate: in timp ce recursivitatea se bazeaza pe solutia unui subproblema pentru a rezolva problema mare, programarea dinamica stocheaza rezultatele subproblemelor pentru a le utiliza mai eficient.\n";
    system("PAUSE");
    system("cls");
    progdin();
}

void pd_fib()
{
    cout<<endl<<endl;
    cout<<"     In acest capitol, vei explora problema secventei Fibonacci si modul in care programarea dinamica poate fi utilizata pentru a calcula valorile acestei secvente intr-un mod eficient.\n    Secventa Fibonacci este o secventa de numere in care fiecare numar este suma celor doua numere precedente. Incepe de obicei cu 0 si 1: 0, 1, 1, 2, 3, 5, 8, 13, 21, si asa mai departe.\n\n";
    cout<<"     Inainte de a aborda programarea dinamica, este comun sa se rezolve problema Fibonacci utilizand o solutie recursiva. Cu toate acestea, aceasta solutie recursiva este ineficienta, deoarece recalculeaza aceleasi valori de Fibonacci de mai multe ori, generand o suprapunere a calculului.\n";
    cout<<"     Prin aplicarea programarii dinamice, poti imbunatati semnificativ performanta algoritmului de calcul al valorilor Fibonacci. Ideea centrala este de a stoca rezultatele calculate anterior si de a le utiliza ulterior pentru a evita recalculările inutile.\n      Un mod comun de a implementa programarea dinamica pentru calculul valorilor Fibonacci este utilizarea unei tabele sau a unui vector pentru a stoca rezultatele partiale. In aceasta abordare, incepi cu valorile Fibonacci de baza (0 si 1) si le stochezi in tabela/vectorul respectiv. Apoi, utilizezi aceste valori stocate pentru a calcula valorile Fibonacci de la 2 in sus, evitand astfel recalcularea lor.\n\n";

    cout<<"     Pentru a rezolva problema calcularii valorilor Fibonacci utilizand programarea dinamica in limbajul C++, urmareste urmatorii pasi:Definirea functiei care va calcula valorile Fibonacci,Initializarea valorilor Fibonacci de baza, Calculul valorilor Fibonacci utilizand programarea dinamica(Stabileste valoarea Fibonacci calculata pentru fibonacci(i) si stocheaz-o in vectorul/tabela valorilor Fibonacci.),Returnarea valorii Fibonacci cerute\n";
    system("PAUSE");
    system("cls");
    progdin();

}
void pd_kp()
{
    cout<<endl<<endl;
    cout<<"     In acest capitol, vei explora o alta problema clasica in programarea dinamica, si anume problema rucsacului 0/1. Vei invata cum sa rezolvi aceasta problema utilizand programarea dinamica si vei intelege cum sa gasesti solutii optime.\n\n";
    cout<<"     Problema rucsacului 0/1 presupune ca ai un rucsac cu o capacitate limitata si o lista de obiecte, fiecare avand o valoare si o greutate asociata. Scopul tau este sa selectezi obiecte pentru a le pune in rucsac in asa fel incat sa maximizezi suma valorilor obiectelor selectate, respectand capacitatea maxima a rucsacului.\n";
    cout<<"     Pentru a rezolva aceasta problema utilizand programarea dinamica, poti folosi o matrice sau o tabela pentru a stoca valorile optime intermediare. Matricea va avea dimensiunile (numarul de obiecte + 1) si (capacitatea rucsacului + 1), iar fiecare element al matricei va reprezenta valoarea maxima care poate fi obtinuta utilizand primele i obiecte si avand o capacitate maxima j.\n\n";

    cout<<"     Pentru a calcula valorile matricei, poti utiliza o relatia de recurenta in care compari doua optiuni:\n";
    cout<<"         1.Selectarea obiectului i pentru a fi inclus in rucsac:\n";
    cout<<"              -Daca greutatea obiectului i este mai mica sau egala decat capacitatea curenta j, poti adauga valoarea obiectului i la valoarea optima a obiectelor anterioare si cu o capacitate j - greutatea obiectului i.\n";
    cout<<"              -Astfel, valoarea matricei pentru pozitia (i, j) va fi suma dintre valoarea obiectului i si valoarea optima a obiectelor anterioare cu o capacitate j - greutatea obiectului i.\n\n";
    cout<<"         2.Excluderea obiectului i din rucsac:\n";
    cout<<"              -Valoarea matricei pentru pozitia (i, j) va fi valoarea optima a obiectelor anterioare cu aceeasi capacitate j.\n\n";

    cout<<"     In cele din urma, valoarea optima a problemei rucsacului 0/1 va fi stocata in ultimul element al matricei, adica matrice[numarul de obiecte][capacitatea rucsacului].";

    system("PAUSE");
    system("cls");
    progdin();


}

void pd_mp()
{
    cout<<endl<<endl;
    cout<<"     Problema Matricei drumurilor minime presupune ca ai o matrice de dimensiune MxN, in care fiecare celula contine un cost asociat. Scopul tau este sa gasesti drumul de cost minim de la celula de start la celula de destinatie, deplasandu-te doar in sus, in jos, la stanga sau la dreapta.\n\n";

    cout<<"     Pentru a rezolva aceasta problema utilizand programarea dinamica, poti crea o matrice auxiliara de aceeasi dimensiune ca matricea de intrare. Aceasta matrice va fi folosita pentru a stoca valorile minime ale drumurilor catre fiecare celula.\n   Pentru a calcula matricea drumurilor minime, poti utiliza o relatie de recurenta in care compari valorile drumurilor minime catre celulele vecine:\n";

    cout<<"         1.Pentru celula de start, costul drumului minim catre aceasta va fi egal cu costul ei initial.\n";

    cout<<"         2.Pentru celulele vecine, costul drumului minim catre fiecare dintre ele va fi minimul dintre costul drumului minim catre celula de start si costul celulei vecine, plus costul celulei vecine.\n\n";

    cout<<"     Pentru a determina drumul minim intr-o matrice, poti urma caile cu cel mai mic cost, incepand de la celula de destinatie si deplasandu-te inapoi catre celula de start pe baza valorilor din matricea drumurilor minime.\n\n";
    system("PAUSE");
    system("cls");
    progdin();

}

void pd_prim()
{
    cout<<endl<<endl;
    cout<<"     Problema calcularii secventei de numere prim presupune gasirea tuturor numerelor prime pana la un anumit numar dat. Un numar prim este un numar natural mai mare decat 1, care are doar doi divizori: 1 si el insusi.\n";
    cout<<"     Pentru a rezolva aceasta problema utilizand programarea dinamica, poti implementa un algoritm eficient care verifica daca un numar este prim sau nu. Poti utiliza o matrice sau un vector auxiliar pentru a marca numerele prime si non-prime.\n";
    cout<<"     Pasul de baza este sa initializezi matricea sau vectorul cu toti indicii setati initial la 'prim' (adesea reprezentat cu valoarea 1) pentru a indica ca toate numerele sunt considerate prime la inceput.\n";

    cout<<"     Apoi, incepand de la 2, parcurgi fiecare numar si verifici daca este marcat ca prim in matricea sau vectorul auxiliar. Daca este marcat ca prim, inseamna ca este un numar prim si marchezi toti multiplii sai ca non-prime in matricea sau vectorul auxiliar.\n";
    cout<<"     La finalul procesului, vei obtine matricea sau vectorul actualizat in care fiecare element va indica daca numarul corespunzator este prim sau nu.\n\n";
    cout<<"     Aceasta abordare utilizeaza programarea dinamica pentru a evita recalcularea primelor si non-primelor. De exemplu, daca un numar este marcat ca non-prim, nu va fi verificat in viitorul proces, ceea ce optimizeaza timpul de executie. \n\n";


    system("PAUSE");
    system("cls");
    progdin();

}


void pd_lcs()
{
    cout<<endl<<endl;
    cout<<"     Problema LCS presupune ca ai doua siruri de caractere, A si B, si trebuie sa gasesti cea mai lunga subsecventa comuna intre ele. O subsecventa comuna este o secventa de caractere obtinuta prin stergerea unor caractere din sirurile initiale, astfel incat ordinea caracterelor sa ramana neschimbata.:\n\n";
    cout<<"     Pentru a rezolva aceasta problema utilizand programarea dinamica, poti crea o matrice auxiliara de dimensiune (m+1) x (n+1), unde m si n reprezinta lungimile celor doua siruri de caractere A si B. Aceasta matrice va fi folosita pentru a stoca rezultatele partiale ale subsecventelor comune.\n";

    cout<<"     Pentru a calcula matricea LCS, poti utiliza o relatie de recurenta in care compari caracterele din sirurile A si B:\n";

    cout<<"         1.Daca ultimul caracter al ambelor siruri este acelasi, atunci lungimea LCS va fi cu 1 mai mare decat lungimea LCS fara ultimul caracter al ambelor siruri.\n";
    cout<<"         2.Daca ultimul caracter al ambelor siruri este diferit, atunci lungimea LCS va fi maximul dintre lungimea LCS fara ultimul caracter al sirului A si lungimea LCS fara ultimul caracter al sirului B.\n\n";

    cout<<"     Prin parcurgerea matricei de la stanga sus spre dreapta jos si actualizarea valorilor in functie de relatie de recurenta, vei obtine matricea finala in care ultimul element va reprezenta lungimea LCS a intregelor siruri.\n\n";
    cout<<"     Pentru a reconstrui subsecventa comuna, poti parcurge matricea de la dreapta jos spre stanga sus si adauga caracterele corespunzatoare in subsecventa pe baza relatiei de recurenta.\n";

    system("PAUSE");
    system("cls");
    progdin();
}


void pd_aplicatii()
{
    cout<<endl<<endl;
    cout<<"     1. Verifica daca un cuvant sau o fraza introdusa de utilizator este un palindrom (se citeste la fel in ambele sensuri)\n";
    cout<<"     2. Generarea primelor n numere din sirul Fibonacci\n";
    cout<<"     3. Rezolvarea problemei rucsacului (Knapsack problem)\n";
    cout<<" Alegeti pentru ce problema ati dori sa vedeti rezolvarea. Pentru a va intoarce la meniul principal, apasati tasta 0\n";
    int i;
    cin>>i;
    if (i==1)
        pd_apk1();
    else if (i==2)
        pd_apk2();
    else if (i==3) pd_apk3();
    else {
        system("cls");
        progdin();
    }

}

void pd_apk1()
{
    cout<<"     1. Verifica daca un cuvant sau o fraza introdusa de utilizator este un palindrom (se citeste la fel in ambele sensuri)\n";

    cout << "#include<iostream>" << endl;
    cout << "#include<string>" << endl;
    cout << endl;

    cout << "bool isPalindrome(const string& str) {" << endl;
    cout << "    string reversedStr = str;" << endl;
    cout << "    reverse(reversedStr.begin(), reversedStr.end());" << endl;
    cout << endl;

    cout << "    vector<vector<int>> lcsMatrix(str.length() + 1, vector<int>(str.length() + 1, 0));" << endl;
    cout << endl;

    cout << "    for (int i = 1; i <= str.length(); i++) {" << endl;
    cout << "        for (int j = 1; j <= str.length(); j++) {" << endl;
    cout << "            if (str[i - 1] == reversedStr[j - 1]) {" << endl;
    cout << "                lcsMatrix[i][j] = lcsMatrix[i - 1][j - 1] + 1;" << endl;
    cout << "            } else {" << endl;
    cout << "                lcsMatrix[i][j] = max(lcsMatrix[i - 1][j], lcsMatrix[i][j - 1]);" << endl;
    cout << "            }" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << endl;

    cout << "    return lcsMatrix[str.length()][str.length()] == str.length();" << endl;
    cout << "}" << endl;
    cout << endl;

    cout << "int main() {" << endl;
    cout << "    string word;" << endl;
    cout << "    cout << \"Introduceti un cuvant sau o fraza: \";" << endl;
    cout << "    getline(cin, word);" << endl;
    cout << endl;

    cout << "    if (isPalindrome(word)) {" << endl;
    cout << "        cout << \"Cuvantul/ Fraza este un palindrom.\" << endl;" << endl;
    cout << "    } else {" << endl;
    cout << "        cout << \"Cuvantul/ Fraza nu este un palindrom.\" << endl;" << endl;
    cout << "    }" << endl;
    cout << endl;

    cout << "    return 0;" << endl;
    cout << "}" << endl;
    system("PAUSE");
    system("cls");
    pd_aplicatii();



}

void pd_apk2()

{
    //rezolvarea aplicatiei 2
    cout<<"     2. Generarea primelor n numere din sirul Fibonacci\n";

    cout << "#include<iostream>" << endl;
    cout << endl;

    cout << "void generateFibonacci(int n) {" << endl;
    cout << "    int fib[n];" << endl;
    cout << endl;

    cout << "    fib[0] = 0;" << endl;
    cout << "    fib[1] = 1;" << endl;
    cout << endl;

    cout << "    cout << \"Primele \" << n << \" numere din șirul Fibonacci:\" << endl;" << endl;
    cout << endl;

    cout << "    cout << fib[0] << \" \";" << endl;
    cout << "    cout << fib[1] << \" \";" << endl;
    cout << endl;

    cout << "    for (int i = 2; i < n; i++) {" << endl;
    cout << "        fib[i] = fib[i - 1] + fib[i - 2];" << endl;
    cout << "        cout << fib[i] << \" \";" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    cout << endl;

    cout << "int main() {" << endl;
    cout << "    int n;" << endl;
    cout << "    cout << \"Introduceti numarul de termeni din șirul Fibonacci: \";" << endl;
    cout << "    cin >> n;" << endl;
    cout << endl;

    cout << "    generateFibonacci(n);" << endl;
    cout << endl;

    cout << "    return 0;" << endl;
    cout << "}" << endl;
    system("PAUSE");
    system("cls");
    pd_aplicatii();


}
void pd_apk3()

{
    cout<<"     3. Rezolvarea problemei rucsacului (Knapsack problem)\n";

   cout << "#include<iostream>" << endl;
    cout << endl;

    cout << "using namespace std;" << endl;
    cout << endl;

    cout << "int max(int a, int b) {" << endl;
    cout << "    return (a > b) ? a : b;" << endl;
    cout << "}" << endl;
    cout << endl;

    cout << "int knapSack(int W, int wt[], int val[], int n) {" << endl;
    cout << "    int K[n + 1][W + 1];" << endl;
    cout << endl;

    cout << "    for (int i = 0; i <= n; i++) {" << endl;
    cout << "        for (int w = 0; w <= W; w++) {" << endl;
    cout << "            if (i == 0 || w == 0)" << endl;
    cout << "                K[i][w] = 0;" << endl;
    cout << "            else if (wt[i - 1] <= w)" << endl;
    cout << "                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);" << endl;
    cout << "            else" << endl;
    cout << "                K[i][w] = K[i - 1][w];" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << endl;

    cout << "    return K[n][W];" << endl;
    cout << "}" << endl;
    cout << endl;

    cout << "int main() {" << endl;
    cout << "    int val[] = {60, 100, 120};" << endl;
    cout << "    int wt[] = {10, 20, 30};" << endl;
    cout << "    int W = 50;" << endl;
    cout << "    int n = sizeof(val) / sizeof(val[0]);" << endl;
    cout << endl;

    cout << "    cout << \"Valoarea maxima care poate fi obtinuta este: \" << knapSack(W, wt, val, n) << endl;" << endl;
    cout << endl;

    cout << "    return 0;" << endl;
    cout << "}" << endl;
    system("PAUSE");
    system("cls");
    pd_aplicatii();


}

void pd_test()
{
    nr++;
    int score = 0;

    // Intrebarea 1
    cout << "1. Ce este programarea dinamica?\n";
    cout << "   a) Un algoritm de sortare eficient.\n";
    cout << "   b) O tehnica de optimizare care rezolva problemele prin impartirea acestora in subprobleme mai mici.\n";
    cout << "   c) O metoda de programare utilizata pentru dezvoltarea aplicatiilor mobile.\n";
    char raspuns1;
    cin >> raspuns1;
    if (raspuns1 == 'b') {
        cout<<"   Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"   Raspuns gresit:(";

    // Intrebarea 2
    cout << "\n2. Care dintre urmatoarele este un exemplu potrivit pentru utilizarea programarii dinamice?\n";
    cout << "   a) Cautarea unui element intr-un vector nesortat.\n";
    cout << "   b) Calculul factorialului unui numar.\n";
    cout << "   c) Determinarea celor mai lungi subsecvente comune a doua siruri.\n";
    char raspuns2;
    cin >> raspuns2;
    if (raspuns2 == 'c') {
       cout<<"   Raspuns corect!!!:)";
       score++;
    }
    else
        cout<<"   Raspuns gresit:(";

    // Intrebarea 3
    cout << "\n3. Care este ideea principala din spatele programarii dinamice?\n";
    cout << "   a) Divizarea problemei in subprobleme mai mici si combinarea solutiilor acestora.\n";
    cout << "   b) Utilizarea unui numar mare de bucle si conditii.\n";
    cout << "   c) Utilizarea algoritmilor de sortare.\n";
    char raspuns3;
    cin >> raspuns3;
    if (raspuns3 == 'a') {
        cout<<"   Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"   Raspuns gresit:(";

    // Intrebarea 4
    cout << "\n4. Ce este un tablou bidimensional in contextul programarii dinamice?\n";
    cout << "   a) Un tablou cu doua elemente.\n";
    cout << "   b) Un tablou cu doua dimensiuni, reprezentand o structura de date in forma de matrice.\n";
    cout << "   c) Un tablou cu doua variabile.\n";
    char raspuns4;
    cin >> raspuns4;
    if (raspuns4 == 'b') {
        cout<<"   Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"   Raspuns gresit:(";

    // Intrebarea 5
    cout << "\n5. Ce reprezinta memoizarea in programarea dinamica?\n";
    cout << "   a) Procesul de stocare a valorilor calculate anterior pentru a le utiliza in timpul calculelor ulterioare.\n";
    cout << "   b) Un tip de sortare a datelor.\n";
    cout << "   c) Procesul de reamintire a formulelor matematice.\n";
    char raspuns5;
    cin >> raspuns5;
    if (raspuns5 == 'a') {
        cout<<"   Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"   Raspuns gresit:(";

    // Intrebarea 6
    cout << "\n6. Ce este o relatie de recurenta in programarea dinamica?\n";
    cout << "   a) O relatie matematica care defineste o valoare in functie de alte valori precedente.\n";
    cout << "   b) O relatie de inlocuire a variabilelor intr-o ecuatie.\n";
    cout << "   c) O relatie intre doua programe.\n";
    char raspuns6;
    cin >> raspuns6;
    if (raspuns6 == 'a') {
        cout<<"   Raspuns corect!!!:)";
        score++;
    }
    else
        cout<<"   Raspuns gresit:(";

    // Afisarea scorului final
    cout << "\nScorul final: " << score << "/6\n";
    scortotal=scortotal+score;
    system("PAUSE");
    system("cls");
    progdin();
}

void facultati(){
    //prezentarea facultatilor de informatica
    cout<<endl<<endl;
    cout<<"   Mai jos,va vom prezenta,in opinia noastra,topul celor mai bune facultati de informatica din Romania:"<<endl;
    cout<<"   1.Facultatea de Matematica si Informatica-Universitatea din Bucuresti : Bucuresti,taxa de 4400 lei/an"<<endl;
    cout<<"   2.Facultatea de Automatica si Calculatoare-Universitatea Politehnica Bucuresti : Bucuresti,taxa de 5000 lei/an"<<endl;
    cout<<"   3.Facultatea de Matematica si Informatica-Universitatea Babes-Bolyai : Cluj-Napoca,taxa de 4000 lei/an"<<endl;
    cout<<"   4.Facultatea de Informatica-Universitatea Alexandru Ioan Cuza : Iasi,taxa de 3600 lei/an"<<endl;
    cout<<"   5.Facultatea de Cibernetica,Statistica si Informatica Economica-Academia de Studii Economice : Bucuresti,taxa de 4000 lei/an"<<endl<<endl;
    cout<<"   Facultatea de Matematica si Informatica-Universitatea din Bucuresti este,in opinia noastra,cea mai buna facultate pentru o cariera in IT,deoarece materiile se concentreaza pe domenii foarte cautate in aceasta industrie(Python,Java,IA etc.).De asemenea,profesorii sunt foarte deschisi in privinta invatarii studentilor si reusesc sa ii faca pe studenti sa asimileze rapid informatiile.Insa,admiterea este una grea si va trebui sa inveti pe masura pentru a fi admis.Aceasta facultate se bazeaza pe partea de software."<<endl<<endl;
    cout<<"   Facultatea de Automatica si Calculatoare-Universitatea Politehnica Bucuresti este o facultate in care vei invata o multime de lucruri noi,atat pe partea de software cat se pe partea de hardware,insa trebuie sa tii cont ca este o facultate grea si stresanta cu multe teme si proiecte.Profesorii sunt un pic mai exigenti si trebuie sa ai grija cum gestionezi relatia cu fiecare in parte.Admiterea este baza de examen,iar concurenta una foarte mare"<<endl<<endl;
    cout<<"   Facultatea de Matematica si Informatica-Universitatea Babes-Bolyai este asemanatoare cu FMI ca materii si admitere,doar ca aici concurenta este ceva mai mica datorita pozitie geografice.La admitere poti alege fie matemtaica,fie informatica,media de la bac contand 20%.Gestionarea timpului este un factor decisiv pentru cum te vei descurca pe parcursul anilor."<<endl<<endl;
    cout<<"   Facultatea de Informatica-Universitatea Alexandru Ioan Cuza este o facultate apreciata in partea Moldovei.In primul an matematica este destul de multa si grea,insa cu un minim de interes te vei descurca.Pe partea de informatica vei invata si materii foarte utile pentruu viitor,insa si materii care ti se vor parea irelevante.Profesorii sunt deschisi si chiar este recomandat sa apelezi la ajutorul lor cand nu te descurci"<<endl<<endl;
    cout<<"   Facultatea de Cibernetica,Statistica si Informatica Economica este o facultate ceva mai usoara fata de cele mentionate mai sus.La materiile de informatica vei invata chestii de software si hardware,insa nu se va intra prea mult in detalii.Vei invata,de asemenea,multe chestii legate de economie.Partea buna este ca daca acorzi un timp relevant facultatii nu vei intampina dificultati pe parcursul ei.Recomandam ca aceasta facultate sa fie o varianta de rezerva pentru optiunea principala."<<endl<<endl;
    system("PAUSE");
    system("cls");
    meniuprincipal();
}
void iesire(){
    char s[256],c[256];
    int d1,d2,d3,d4,d5;
    cout<<endl<<endl;
    //review-ul pe care il vrem de la utilizator
    cout<<"   FELICITARI!Ai ajuns la sfarsit.Pentru ca parerea ta conteaza foarte mult,am vrea sa ne raspunzi la cateva intrebari:"<<endl;
    cout<<"   Am vrea sa ne oferi,in primul rand,un review pentru aplicatia noastra:";
    cin>>s;
    cout<<endl;
    cout<<"   Acum dori sa ne acorzi o nota de 1 la 10 pentru unele aspecte ale aplicatiei noastre"<<endl;
    cout<<"   1.prezentarea informatiilor:";
    cin>>d1;
    cout<<endl;
    cout<<"   2.organizarea in pagina a informatiilor:";
    cin>>d2;
    cout<<endl;
    cout<<"   3.problemele propuse pt. fiecare capitol:";
    cin>>d3;
    cout<<endl;
    cout<<"   4.testele grila de la fiecare capitol:";
    cin>>d4;
    cout<<endl;
    cout<<"   5.prezentarea facultatilor:";
    cin>>d5;
    cout<<endl<<endl;
    cout<<"   Si nu in ultimul rand am vrea sa ne spui la ce consideri ca ar trebui sa mai lucram pt.a imbunatati aplicatia:"<<endl;
    cin>>c;
    cout<<endl;
    cout<<"   Multumim!!!";
    //afisarea a cate lectii ai parcurs din aplicatie
    cout<<"  Ai parcurs "<<p<<" lectii din totalul de 10.";
    cout<<endl<<endl<<endl;
    //media scorurilor obtinute la teste in aplicatie
    cout<<"   Media rezultatelor tale de la testele grila este:"<<fixed<<setprecision(2)<<(scortotal/nr)<<endl;
    system("PAUSE");
    system("cls");
    exit(0);
}

int main()
{
    //apelarea primelor functii din main,dupa aceea se apeleaza dintr-o functie in alta
    titlu();
    bunvenit();
    prezentare();
    return 0;
}
