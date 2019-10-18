/* Z algorithm for matching substrings. KMP's Brother */

const int MAXN = 2e5 + 2e4;

int z[MAXN];
string s;

void z_algo() {
    int n = s.size();
    int x = 0, y = 0;
    for (int i = 1; i < n; i++) {
        z[i] = max(0, min(z[i-x], y-i+1));
        while (i+z[i] < n && s[z[i]] == s[i+z[i]]) {
            x = i; y = i+z[i]; z[i]++;
        }
    }
}
