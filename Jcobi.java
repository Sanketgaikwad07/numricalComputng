public class JacobiMethod {

    // Function to perform Jacobi Iteration
    static void jacobi(double[][] A, double[] b, double[] x, int maxIterations, double tolerance) {
        int n = b.length;
        double[] xNew = new double[n];

        for (int iter = 0; iter < maxIterations; iter++) {
            for (int i = 0; i < n; i++) {
                double sum = 0.0;
                for (int j = 0; j < n; j++) {
                    if (j != i) {
                        sum += A[i][j] * x[j];
                    }
                }
                xNew[i] = (b[i] + sum) / A[i][i];
            }

            // Check for convergence
            double maxError = 0.0;
            for (int i = 0; i < n; i++) {
                maxError = Math.max(maxError, Math.abs(xNew[i] - x[i]));
                x[i] = xNew[i];
            }

            if (maxError < tolerance) {
                System.out.println("Converged in " + (iter + 1) + " iterations.");
                return;
            }
        }

        System.out.println("Did not converge within the maximum number of iterations.");
    }

    public static void main(String[] args) {
        double[][] A = {
            {10, -1, 2, 0},
            {-1, 11, -1, 3},
            {2, -1, 10, -1},
            {2, 3, -1, 8}
        };

        double[] b = {6, 25, -11, 15};
        double[] x = {0, 0, 0, 0}; // Initial guess

        int maxIterations = 25;
        double tolerance = 1e-6;

        jacobi(A, b, x, maxIterations, tolerance);

        System.out.println("Solution:");
        for (int i = 0; i < x.length; i++) {
            System.out.printf("x[%d] = %.6f%n", i, x[i]);
        }
    }
}
