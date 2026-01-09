#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}
void stat(const double a[],int N,double B[]){
double sum =0;

for(int i=0;i<N;i++)
{
    sum =sum +a[i];
}
long double max = a[0],min =a[0];
for(int i=0;i<N;i++){
    if(a[i]>max) max=a[i];
    if(a[i]<min) min=a[i];
}
double mean =sum/N;
double sum_sq = 0;
    for(int i = 0; i < N; i++){
        sum_sq += (a[i] - mean) * (a[i] - mean);
    }
double product = 1;
    for(int i = 0; i < N; i++){
        product *= a[i];
    }
double hm_sum = 0;
    for(int i = 0; i < N; i++){
        hm_sum += 1.0 / a[i];
    }

double hm = N / hm_sum;
double gm = pow(product, 1.0 / N);
double sd = sqrt(sum_sq / (N));
B[0]=sum/N;
B[1]=sd;
B[2]=gm;
B[3]=hm;
B[4]=max;
B[5]=min;
}

