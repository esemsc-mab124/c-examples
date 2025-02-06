//Backward Euler method by Miraz
// #include <iostream>

// double f(double y) {
//     return -y;
// }

// int main(void){

//     const int nsteps = 100;
//     double y0 = 1;
//     double t0 = 0;
//     double t1 = 10;
//     double h = t1/nsteps;

//     double t[nsteps+1];
//     double y[nsteps+1];

//     t[0] = t0;
//     y[0] = y0;

//     for (int i=1; i<=nsteps; i++) {
//         t[i] = t[i-1] + h;
//         y[i] = y[i-1] / (h+1);
//     }

//     for (int i=0; i<=nsteps; i++) {
//         std::cout << t[i] << " " << y[i] << std::endl;
//     }

//     return 0;
// }

// #include <iostream> // for std::cout
// #include <cmath> // for std::sin

// double midpoint_rule(double a, double b, double (*func)(double), int number_intervals=10) {
//     double interval_size = (b - a)/number_intervals;

//     double I_M = 0.0;
//     double mid = a + (interval_size/2.0);

//     while (mid < b) {
//         I_M += interval_size * func(mid);
//         mid += interval_size;
//     }
//     return I_M;
// }

// double trapezium_rule(double a, double b, double (*func)(double), int number_intervals=10) {

//     double interval_size = (b - a)/number_intervals;

//     double I_T = 0.0;
//     double x = a + interval_size;

//     while (x < b) {
//         I_T += interval_size * (func(x) + func(x - interval_size))/2.0;
//         x += interval_size;
//     }
//     return I_T;
// }

// // simpson_rule by Miraz
// double simpson_rule(double a, double b, double (*func)(double), int number_intervals=10) {

//     double interval_size = (b - a)/number_intervals;
//     double I_S = func(a) + func(b);
//     double x = 0.0;
    
//     for (int i=1; i < number_intervals; i++) {
//         x = a + i*interval_size;
//         if (i%2==0){
//             I_S += 2*func(x);
//         }
//         else{
//             I_S += 4*func(x);
//         }
//     }
//     return (I_S*interval_size)/3;
// }

// double f(double x) {
//     return std::sin(x);
// }

// int main(void) {
//     std::cout << midpoint_rule(0, M_PI, f) << std::endl;
//     std::cout << trapezium_rule(0, M_PI, f) << std::endl;
//     std::cout << simpson_rule(0, M_PI, f) << std::endl;
//     return 0;
// }

// #include <iostream>

// int main(){
//     int n;
//     double a, sum=0;

//     std::cout << "How many numbers would you like to enter?\n";
//     std::cin >> n;

//     for (int i=0; i<n; i++) {
//         std::cout << "Enter number " << i+1 << std::endl ;
//         std::cin >> a;
//         sum += a;    
//     }

//     std::cout << "Mean is " << sum/n << std::endl ;
//     return 0;
// }

// A user input primes calculator
// #include <iostream>

// int main() {
//     int n;
//     int t = 0; 
//     std::cout << "How many prmes numbers you want?\n";
//     std::cin >> n;
//     for (int i=2; i<1000; i++) {
//         int j = 2;
//         bool flag = true;
//         while (j*j<=i) {
//             if (i%j==0) {
//                 flag = false;
//                 break;
//             }
//             j++;
//         }
//         if (flag) {
//             std::cout << i << std::endl;
//             t++;
//         }
//         if (t==n){
//             break;
//         }
//     }
//     return 1;
// }


// // A command line input primes calculator and file output
// #include <iostream>
// #include <fstream>
// int main(int argc, char* argv[]){
//     int t = 0; 
//     int n = std::atof(argv[1]);
//     std::fstream fs;
//     fs.open ("example.txt", std::fstream::out);
//     for (int i=2; i<1000; i++) {
//         int j = 2;
//         bool flag = true;
//         while (j*j<=i) {
//             if (i%j==0) {
//                 flag = false;
//                 break;
//             }
//             j++;
//         }
//         if (flag) {
//             fs << i << std::endl;
//             // std::cout << i << std::endl;
//             t++;
//         }
//         if (t==n){
//             break;
//         }
//     }
//     fs.close();
//     return 0;
// }