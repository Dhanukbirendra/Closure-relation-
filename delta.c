/*delta.c:Closure relation of hermite function */

double pow(double,double);
double exp(double);
double fact(int);
double hermite(int, double);
static double t=0.001;
static double pi=3.14159265358979;
double delta(int N,double x, double t){
double sum;
int n;
	sum=0.0;
	for(n=0;n<=N;n++){
	sum+=(exp(-(x*x+t*t)/2.0)*hermite(n,x)*hermite(n,t))/(pow(2,(double)n)*pow(pi,0.5)*fact(n));
	}
return sum;
}
