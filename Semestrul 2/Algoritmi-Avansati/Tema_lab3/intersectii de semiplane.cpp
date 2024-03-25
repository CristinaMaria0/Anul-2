#include <iostream>
#include <vector>
#include<climits>
using namespace std;

string determine_intersection(int n, vector<vector<int>>& planes) {
    int min_x = INT_MIN;  // Inițializăm limita inferioară pentru intersecția pe axa x cu o valoare mică
    int max_x = INT_MAX;  // Inițializăm limita superioară pentru intersecția pe axa x cu o valoare mare
    int min_y = INT_MIN;  // Inițializăm limita inferioară pentru intersecția pe axa y cu o valoare mică
    int max_y = INT_MAX;  // Inițializăm limita superioară pentru intersecția pe axa y cu o valoare mare

    for (int i = 0; i < n; ++i) {
        int a = planes[i][0];  // Coeficientul a al inecuației semiplanului
        int b = planes[i][1];  // Coeficientul b al inecuației semiplanului
        int c = planes[i][2];  // Coeficientul c al inecuației semiplanului

        if (a == 0) {  // Verificăm dacă semiplanul este orizontal
            if (b > 0) {
                min_y = max(min_y, -c / b);  // Actualizăm limita inferioară pentru intersecția pe axa y
            } else {
                max_y = min(max_y, -c / b);  // Actualizăm limita superioară pentru intersecția pe axa y
            }
        } else if (b == 0) {  // Verificăm dacă semiplanul este vertical
            if (a > 0) {
                min_x = max(min_x, -c / a);  // Actualizăm limita inferioară pentru intersecția pe axa x
            } else {
                max_x = min(max_x, -c / a);  // Actualizăm limita superioară pentru intersecția pe axa x
            }
        }
    }

    if (min_x > max_x || min_y > max_y) {
        return "VOID";  // Dacă intersecția este vidă, returnăm "VOID"
    } else if (min_x == INT_MIN || max_x == INT_MAX || min_y == INT_MIN || max_y == INT_MAX) {
        return "UNBOUNDED";  // Dacă intersecția este nemărginită, returnăm "UNBOUNDED"
    } else {
        return "BOUNDED";  // Altfel, intersecția este mărginită și returnăm "BOUNDED"
    }
}

int main() {
    int n;
    cin >> n;  // Citim numărul de semiplane

    vector<vector<int>> planes(n, vector<int>(3));  // Matrice pentru a stoca coeficienții semiplanelor
    for (int i = 0; i < n; ++i) {
        cin >> planes[i][0] >> planes[i][1] >> planes[i][2];  // Citim coeficienții semiplanelor
    }

    string intersection = determine_intersection(n, planes);  // Apelăm funcția pentru a determina intersecția

    cout << intersection << endl;  // Afișăm rezultatul

    return 0;
}
