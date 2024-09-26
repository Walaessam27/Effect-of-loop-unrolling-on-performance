#include <immintrin.h>  // portable to all x86 compilers
#include <stdio.h>
#include <time.h>
#define DATA float
const int SIZE = 1024;
DATA A[SIZE] ;
DATA B[SIZE] ;
double seconds(){
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC, &now);
  return now.tv_sec + now.tv_nsec / 1000000000.0;
}
void initialize_array(DATA a[], int size){
	for (int i = 0 ;  i < size ; i++) a[i] = rand()%2;
}
void normal(DATA a[],int size){
    for(int t=0;t<100;t++)
        for (int i = 0 ; i < size ; i++) a[i] = a[i] + 5;
}
void d4(DATA a[],int size){
    for(int t=0;t<100;t++)
    for (int i = 0 ; i < size ; i+=4){
        a[i] = a[i] + 5;
        a[i+1] = a[i+1] + 5;
        a[i+2] = a[i+2] + 5;
        a[i+3] = a[i+3] + 5;
    }
}
void d8(DATA a[],int size){
    for(int t=0;t<100;t++)
    for (int i = 0 ; i < size ; i+=8){
        a[i] = a[i] + 5;
        a[i+1] = a[i+1] + 5;
        a[i+2] = a[i+2] + 5;
        a[i+3] = a[i+3] + 5;
        a[i+4] = a[i+4] + 5;
        a[i+5] = a[i+5] + 5;
        a[i+6] = a[i+6] + 5;
        a[i+7] = a[i+7] + 5;
    }
}
void d16(DATA a[],int size){
    for(int t=0;t<100;t++)
    for (int i = 0 ; i < size ; i+=16){
        a[i] = a[i] + 5;
        a[i+1] = a[i+1] + 5;
        a[i+2] = a[i+2] + 5;
        a[i+3] = a[i+3] + 5;
        a[i+4] = a[i+4] + 5;
        a[i+5] = a[i+5] + 5;
        a[i+6] = a[i+6] + 5;
        a[i+7] = a[i+7] + 5;
        a[i+8] = a[i+8] + 5;
        a[i+9] = a[i+9] + 5;
        a[i+10] = a[i+10] + 5;
        a[i+11] = a[i+11] + 5;
        a[i+12] = a[i+12] + 5;
        a[i+13] = a[i+13] + 5;
        a[i+14] = a[i+14] + 5;
        a[i+15] = a[i+15] + 5;
    }
}
void d64(DATA a[],int size){
    for(int t=0;t<100;t++)
    for (int i = 0 ; i < size ; i+=64){
        a[i] = a[i] + 5;
        a[i+1] = a[i+1] + 5;
        a[i+2] = a[i+2] + 5;
        a[i+3] = a[i+3] + 5;
        a[i+4] = a[i+4] + 5;
        a[i+5] = a[i+5] + 5;
        a[i+6] = a[i+6] + 5;
        a[i+7] = a[i+7] + 5;
        a[i+8] = a[i+8] + 5;
        a[i+9] = a[i+9] + 5;
        a[i+10] = a[i+10] + 5;
        a[i+11] = a[i+11] + 5;
        a[i+12] = a[i+12] + 5;
        a[i+13] = a[i+13] + 5;
        a[i+14] = a[i+14] + 5;
        a[i+15] = a[i+15] + 5;
        a[i+16] = a[i+16] + 5;
        a[i+17] = a[i+17] + 5;
        a[i+18] = a[i+18] + 5;
        a[i+19] = a[i+19] + 5;
        a[i+20] = a[i+20] + 5;
        a[i+21] = a[i+21] + 5;
        a[i+22] = a[i+22] + 5;
        a[i+23] = a[i+23] + 5;
        a[i+24] = a[i+24] + 5;
        a[i+25] = a[i+25] + 5;
        a[i+26] = a[i+26] + 5;
        a[i+27] = a[i+27] + 5;
        a[i+28] = a[i+28] + 5;
        a[i+29] = a[i+29] + 5;
        a[i+30] = a[i+30] + 5;
        a[i+31] = a[i+31] + 5;
        a[i+32] = a[i+32] + 5;
        a[i+33] = a[i+33] + 5;
        a[i+34] = a[i+34] + 5;
        a[i+35] = a[i+35] + 5;
        a[i+36] = a[i+36] + 5;
        a[i+37] = a[i+37] + 5;
        a[i+38] = a[i+38] + 5;
        a[i+39] = a[i+39] + 5;
        a[i+40] = a[i+40] + 5;
        a[i+41] = a[i+41] + 5;
        a[i+42] = a[i+42] + 5;
        a[i+43] = a[i+43] + 5;
        a[i+44] = a[i+44] + 5;
        a[i+45] = a[i+45] + 5;
        a[i+46] = a[i+46] + 5;
        a[i+47] = a[i+47] + 5;
        a[i+48] = a[i+48] + 5;
        a[i+49] = a[i+49] + 5;
        a[i+50] = a[i+50] + 5;
        a[i+51] = a[i+51] + 5;
        a[i+52] = a[i+52] + 5;
        a[i+53] = a[i+53] + 5;
        a[i+54] = a[i+54] + 5;
        a[i+55] = a[i+55] + 5;
        a[i+56] = a[i+56] + 5;
        a[i+57] = a[i+57] + 5;
        a[i+58] = a[i+58] + 5;
        a[i+59] = a[i+59] + 5;
        a[i+60] = a[i+60] + 5;
        a[i+61] = a[i+61] + 5;
        a[i+62] = a[i+62] + 5;
        a[i+63] = a[i+63] + 5;
    }
}

int main(){

	DATA r;
    double x,y,z,w,c;
	double before,after;
	initialize_array(A,SIZE);
	before = seconds();
	normal(A,SIZE);
	after = seconds();
    x = after - before;
	printf("Time of normal (us):%f\n",x*10000);

	before = seconds();
	d4(A,SIZE);
	after = seconds();
    y = after - before;
	printf("Time of degree 4 (us):%f\n",y*10000);

    before = seconds();
	d8(A,SIZE);
	after = seconds();
    z = after - before;
	printf("Time of degree 8 (us):%f\n",z*10000);

	before = seconds();
	d16(A,SIZE);
	after = seconds();
    w = after - before;
	printf("Time of degree 16 (us):%f\n",w*10000);

	before = seconds();
	d64(A,SIZE);
	after = seconds();
    c = after - before;
	printf("Time of degree 64 (us):%f\n",c*10000);
    return 0;
}