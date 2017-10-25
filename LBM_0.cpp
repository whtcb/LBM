//
// Created by alexey on 25.10.17.
//
N = 10;
T = 20; //2000
Delta_x = 0.05;
Delta_t = 1;
Tau = 0.502;

int main(){
    // initialisation (t=0):
    for (int x = 0; x < N; x++) {
        // f[x][0] = ...
        // f_eq[x][0] = ...
        // f_star = f[0][0]
        // v = ...
    }
    for (int t = 1; t < T; t++){
        for (int x = 0; x < N; x++) {
            // +цикл для трех направлений!?
            f_star = f[x][t - 1] - (Delta_t / Tau) * (f[x][t - 1] - f_eq[x][t - 1]); // collide (Omega = BGK)
            f[x][t] = f_star; // streaming
            if ((x == 0) || (x == N - 1)){
                // bound
            }
            // f_eq[x][t] = 0;
            // v[x][t] = ...;


        }

    }

    return 0;
}
