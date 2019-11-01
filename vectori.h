#ifndef VECTORI_H
#define VECTORI_H
#include <iostream>
using namespace std;

class vectori{
    private:
        int n;
        double* v;
    public:
       ~vectori()  //ceruta la laborator
        {
            delete []v;
        }
        vectori (bool check); //laborator
        friend void operator--(vectori& A); //laborator
        friend class Management //laborator


        vectori(int,double);
        void afisare();
        vectori();
        vectori(const vectori&);

        friend istream& operator >>(istream&,vectori&); //facut la inceput
        friend ostream& operator <<(ostream&,vectori&); //facut la inceput


            /*void schimbaN(int valoareNoua);  //setter pt n
            int aduN(); //getter pt n
            void schimbaV(double valoareNoua, int pozitie); //setter pt v
            double* aduV(); //getter pt v*/

//    vectori(const vectori);
    //    friend int main();
        friend int length(vectori);
        int& length(vectori);//functia friend de mai sus transformata intr-o functie membra
        //vectori operator+(const vectori&);
        vectori operator=(vectori);

        double& operator[](int i);
        friend double operator[](int& i); //modificarea functiei de mai sus in functie friend

        friend void operator++(vectori&);
        vectori vectorul_x(double x, int lungime);

        double* reinitializare(int num, double x);


        friend const vectori operator+ (const vectori& A,const vectori& B);
        friend const vectori operator- (const vectori& A, const vectori& B);
        friend const vectori operator- (const vectori& A);
        friend const vectori operator==(const vectori& A, const vectori& B);
        friend const vectori operator*(const vectori& A, const vectori& B);
        friend const vectori operator*(const vectori& A);
        friend const int operator!(const vectori& A);

        friend void operator+=(vectori &A, vectori &B);
        friend void operator-=(vectori &A, vectori &B);

        friend bool operator==(vectori A,vectori B);
        friend bool operator!=(vectori A,vectori B);
        friend bool operator<(vectori A,vectori B);
        friend bool operator>(vectori A,vectori B);
        friend bool operator<=(vectori A,vectori B);
        friend bool operator>=(vectori A,vectori B);

        friend bool operator==(vectori A,double x);
        friend bool operator!=(vectori A,double x);
        friend bool operator<(vectori A,double x);
        friend bool operator>(vectori A,double x);
        friend bool operator<=(vectori A,double x);
        friend bool operator>=(vectori A,double x);

        friend bool operator==(double x, vectori A);
        friend bool operator!=(double x, vectori A);
        friend bool operator<(double x, vectori A);
        friend bool operator>(double x, vectori A);
        friend bool operator<=(double x, vectori A);
        friend bool operator>=(double x, vectori A);


    void schimbaN(int valoareNoua)  //setter pt n
    {
        n = valoareNoua;
    }
    int aduN() //getter pt n
    {
        return n;
    }

    void schimbaV(double valoareNoua, int pozitie) //setter pt v
      {
			v[pozitie] = valoareNoua;
      }

    double* aduV() //getter pt v
    {
        return v;
    }




};

class management{
private:
    vectori *vec;
    int n;

public:
    friend istream& operator >>(istream& in,management& A)
    friend ostream& operator<<(ostream& out, management& A)
    management operator=(management);



};

#endif // VECTORI_H
