#include <stdio.h>

// Lagrange interpolation function
double lagrange_interpolation(double x, double X[], double Y[], int n) {
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        double term = Y[i];
        for (int j = 0; j < n; j++) {
            if (i != j) {
                term *= (x - X[j]) / (X[i] - X[j]);
            }
        }
        result += term;
    }
    return result;
}

int main() {
    double X[] = {0, 20, 40, 60, 80, 100}; // Values of x
    double Y[] = {26.0, 48.6, 61.6, 71.2, 74.8, 75.2}; // Values of y
    int n = sizeof(X) / sizeof(X[0]); // Number of data points
    double x_value = 55; // Value of x where you want to find y

    // Perform Lagrange interpolation
    double interpolated_y = lagrange_interpolation(x_value, X, Y, n);

    // Display the interpolated value of y
    printf("Interpolated value of y at x = %.2f is %.2f\n", x_value, interpolated_y);

    return 0;
}

