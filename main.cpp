//programme 1
#include <iostream>
using namespace std ;
//declaration du class
 class complexe {
    public :
	 int rel,img;
       complexe(){}
       complexe(int r,int i){
         rel=r;
         img=i;}
    //declaration de l'operateur +
     complexe operator+(complexe a)
       {
        complexe s;
        s.rel = rel + a.rel;
        s.img = img + a.img;
        return s;
       }
       //declaration de l'operateur -
     complexe operator-(complexe a)
        {
        complexe s;
        s.rel = rel - a.rel;
        s.img = img - a.img;
        return s;
         }
         //declaration de l'operateur *
      complexe operator*(complexe a)
        {
        complexe p;
        p.rel = rel * a.rel - img * a.img;
        p.img = rel * a.img + img * a.rel;
        return p;
        }
        //declaration de l'operateur /
    complexe operator / (complexe a){

			complexe d;
			d.img=rel/a.rel;
			d.rel=img/a.img;
			return d;}
};
int main(){
  int r1,r2,im1,im2,choix;
   cout << "entrer la partie imaginaire pour le complexe 1:";
        cin >> im1 ;
        cout << "entrer la partie reele pour le complexe 1:";
        cin >> r1 ;
        cout << "complex 1: "  << r1<< "+ i " << im1 << endl;
        cout << "entrer la partie imaginaire pour le complexe 2:";
        cin >> im2 ;
        cout << "entrer la partie reele pour le  complexe 2:";
        cin >> r2 ;
        cout << "complex 2: "  << r2<< "+ i " << im2 << endl;
                 complexe c1(r1,im1);
                 complexe c2(r2,im2);
                 complexe c3 = c1 + c2;
                 complexe c4 = c1 + c2;
                 complexe c5 = c1 + c2;
                 complexe c6 = c1 + c2;

        cout << " choisir choisir s'il vous plais  une des operation du menu :"<<endl;
            string menu[4];
        menu[0] = "1/ +" ;
        menu[1] = "2/ -";
        menu[2] = "3/ * ";
        menu[3] = "4/ / ";
        for(int i(0); i<4; ++i)
        { cout << menu[i] << endl;}
        cin >> choix ;
    if (choix == 1 ){
           cout << "SOMME DE DEUX COMPLEXE EST: " <<c3.rel<< "+ i " << c3.img << endl;}
       else if (choix == 2){
          cout << "SOUSTRACTION DE DEUX COMPLEXE EST: " <<c4.rel<< "+ i " <<c4.img<< endl;}
      else if (choix == 3)
        {cout << "PRODUIT DE DEUX COMPLEXE EST: " << c5.rel<< "+ i " << c4.img << endl;}
      else
       {cout << "LA DIVISION DE DEUX COMPLEXE EST: " << c6.rel<< "+ i " << c6.img<< endl;}
    return 0;
}
// programme 2
#include <iostream>
#include <string>
using namespace std;
//Fonction pour le jour
string get_jour(string j){
    if(j=="01")
        return "1er";
    else
        return j+ " eme";
}
//Fonction pour changer la mois du chifre au mots
string get_mois( string m)
{
    if(m=="01")return "Janvier";
    else if (m=="02")return "Fevrier";
    else if (m=="03")return "Mars";
    else if (m=="04")return "Avril";
    else if (m=="05")return "Mai";
    else if (m=="06")return "Juin";
    else if (m=="07")return "Juillet";
    else if (m=="08")return "Aout";
    else if(m=="09")return "Septembre";
    else if (m=="10")return "Octobre";
    else if (m=="11")return "Novembre";
    else {return "Decembre";}
}
//Fonction pour annee
string get_annee(string a){
        return a;}
//Fonction pour heure
string get_heure(string h){
        return h +"h";}
//Fonction pour minute
string get_min(string n){
        return n;}
int main()
{
    string str;
    cout<<"enter la date est heur qui vous voulez:";
    cin>>str;
    string  day=str.substr(0,2);// On a utiliser substr pour couper la chaine
     string  mois=str.substr(2,2);
      string annee=str.substr(4,4);
       string  heur=str.substr(8,2);
       string  minu=str.substr(10,2);
       cout<< "la date est: " <<get_jour(day);
       cout<< " "<<get_mois(mois);
       cout<<" "<<get_anner(annee)<<"  a  ";
       cout<<get_heure(heur);
       cout<<get_min(minu);

}
//programme 3

#include <iostream>
#include <list>
using namespace std;
int main(){
      int a,b,c,d,e;
    cout<<"SAISIR LES VALEUR DU LIST :"<<endl;
    cin>>a;// On demande a l'utilisateur de remplir la liste
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
 list<int>T={a,b,c,d,e};
 //la fonction pour triee la liste
 T.sort();
 //on cree un iterator pour afficher la liste
 list<int>::iterator it;
 cout<<"LA LIST APRES TRI:"<<endl;
 for(it=T.begin();it!=T.end();it++)
    cout<<*it<<endl;
    }

//programme 4

#include<list>
#include<algorithm>
#include<iterator>
using namespace std ;
int main(){
    // ON CREE UNE LISTE
	list<string>mylist;
	// POUR INSERE LES INFORMATION DANS LA LISTE
mylist.push_back("Ammara,khaoula,21ans");
mylist.push_back("El,oubay,21ans");
// POUR TRI LA LISTE
mylist.sort();
//POUR AFFICHER LA LISTE APRES LE TRI
list<string>::iterator it;
for(it=mylist.begin();it!=mylist.end();it++){
	cout<<*it<<endl;
}
return 0 ;
}

// programme 5
#include <iostream>
#include<set>

using namespace std;

int main()
{
    int i;
    set<int>L;// Pour declare le set
   // on a utilise la boucle for pour remplir le set de 1a 100
    for(int i;i<100;i++){
        L.insert(100-i);
    }
    set<int>::iterator it;// on utilise iterator pour affiche le set
    for (it = L.begin(); it != L.end(); ++it){
      cout <<*it<<",";
    }
    cout<<endl<< "le nombre que vous chercher";
    cin>>i;
    // la fonction count pour indiquer l'existence
    cout<<L.count(i)<<endl;
    if ( L.count(i)==1 ){
     cout << "le nombre existe";}
    else
    cout << "le nombre n'existe pas";
    return 0;
}

//programme 6

#include <iostream>
using namespace std;
// on a ajouter la class MyException
class MyException : public exception{
public:
const char * what() const throw()
{
return "Attempted to divide by zero!\n";
}
};

class Test{
public:
 static int tableau[] ;
public :
 static int division(int indice, int diviseur){
 return tableau[indice]/diviseur;
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
 try
 {
   int x, y;
   cout << "Entrez l’indice de l’entier à diviser: " << endl;
   cin >> x ;
   cout << "Entrez le diviseur: " << endl;
   cin >> y ;
// on donne l'exception pour que la fonction siot arrete
  if (y == 0)
   {
     MyException z;
     throw z;
    }
  else
  {
   cout << "Le résultat de la division est: "<< endl;
   cout <<Test::division(x,y) << endl;
   }
  }

 catch(exception& e)
  {
   cout << e.what();
  }
  return 0;
}
//programme7
#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std ;

 class Chat ;
 class Repas ;
 class Elements ;
 // declaration du class chat
 class Chat {
    private:
     String type;
     list<Repas> listRepas;
    public :
      Chat(String type){
        this->type = type;}
    void setType(String type){
        this->type = type;}
    String getType(){
        return this->type;}
    void setListRepas(list<Repas> listRp){
        this->listRepas = listRp ;}
    list<Repas> getListRepas(){
        return this->listRepas ;}
    void sauter(){
        return 0;}
};

// declaration du class Repas
    class Repas {
	   private:
	     string nom ;
	     int heure;
        string description;
	    Chat chat ;
        list<Elements > *lise ;
    public :
        Repas(String nom, int heure, String description){
           this->nom = nom;
           this->heure = heure;
           this->description = description;
           liste = new list<Elements>();{
             this->nom = nom ; }
           string getNom(){
              return this->nom ; }
           void setHeure(int heure ){
               this->heure= heure ; }
           int  getHeure(){
           return this->heure; }
           void setDescription(string description){
              this->description = description ; }
           string getDescription(){
           return this->description ; }
          void setListElements(list<Elements> *liste){
          this->lise = lise ; }
          list<Elements>* getListElements(){ return this->liste; }
          void setChat(Chat c){
             this->chat = c ;}
          Chat getChat(){return this->chat ;}
          ~Repas (){
               delete this->liste ; cout << "call dist of Repas" << endl ;}
              };
class Elements {
	 private:
	    string nom;
	    string type;
	    Repas r ;
     public :
        void setNom(string nom){
        this->nom = nom ; }
        string getNom(){
        return this->nom ; }
        void setType(string type){
        this->type = type; }
        string getType(){
        return this->type ; }
        void setRepas( Repas r){
        this->r = r; }
        Repas getRepas(){
        return this->r ; }
        ~Elements(){ cout << "call dist of Elements " << endl ;}
        };

class Animal ; class Chien ;class Race;
class Animal {
     protected :
         string nom ;
         int age;
         string genre ;
     public:
         Animal (){};
         Animal (string n,int a,string g){
	     nom=n;
	     age=a;
        genre =g;}
        void afficher(){
	   cout << "nom:"<<nom<<"age:"<<age<<"genre :"<<genre<<endl;}
        void setNom(string nom){
	      this->nom=nom;}
        string  getNom(){return this->nom;}
         void setAge(int age ){
	       this->age=age;}
        int  getAge( ){return this->age;}
         void setGenre(string genre){
             this->genre=genre;}
        string  getGenre(){return this->genre;}
       };
class Chat : public Animal {
	  private:
	     string type ;
	  public:
	     Chat (string n,int a,string g,string t):Animal (n,a,g){
		 type=t;}
        void setType(string type){
	     this->type=type;}
         string  getType(){return this->type;}
	   void sauter(){
		 cout<<"Le type est : "<< type <<endl;}
};
class Race{
	protected :
	   string specificite ;
	public:
		string test1;
        Race (){};
	    Race (string s){
        specificite=s;}
	void setSpecificite(string specificite){
	this->specificite=specificite;
    }
     string  getSpecificite(){
	    return this->specificite;
    }
	 bool isracehybride (){
	   if (specificite==test1){return true ;}
      else {return false;}
      }
};

class Chien;
class Entraineur;
class Composition;

class Chien :public Animal,public Race{
    private:
      String taille;
      list<Entraineur> listEntraineur;
    public :
       Chien (string n,int a, string g, string s, string t) : public Animal ( n, a, g),public Race( s){
       this->taille = taille ;}
       void setTaille(String taille){
       this->taille = taille ;}
       String getTaille(){
        return this->taille;}
       void getListEntraineur(list<Entraineur> listEnt){
          this->listEntraineur = listEnt;}
       list<Entraineur> getListEntraineur(){
           return this->listEntraineur;}
       bool ischass3(){return true;}
};

class Entraineur {
    private:
       String nom;
      String description;
      list<Chien> listChien;
    public :
       Entraineur(String nom, String description){
       this->nom = nom;
       this->description = description;
         }
       void setNom(String nom){
       this->nom = nom;}
        String getNom(){
          return this->attb ;}
       void setdescription(String description){
          this->description = description;}
       String getdescription(){
           return this->description ;}
       void setListChien(list<Chien> listChien){
           this->listChien = listChien;}
       list<Chien> getListChien(){
          return this->listChien ;}
       };

class Composition{
     private :
       String date;
       String nom;
       Entraineur e;
       Chien c;
     public :
        int ordre;
        Composition(String date, String nom, int ordre){
            this->nom = nom;
            this->date = date;
            this->ordre = ordre;}
       void setNom(String nom){
            this->nom = nom;}
       String getNom(){
            return this->nom ;}
       void setDate(String date){
            this->date = date;}
       String getDate(){
            return this->date ;}
       void setOrdre(String ordre){
            this->ordre = ordre;}
       String getOrdre(){
            return this->ordre ;}
       void setChien(Chien c){
            this->c = c ;}
       Chien getChien(){
            return this->c ;}
       void setEntraineur(Entraineur e){
            this->e = e;}
       Entraineur getEntraineur(){
            return this->e ;}
};



