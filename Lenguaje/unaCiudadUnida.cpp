#include <cstdio>
using namespace std;

int components[2009];
int cubeta[2009];

int main()
{
    int n,e;
    scanf("%d %d", &n, &e);

    for(int i = 1; i <= n; i++){
        components[i] = i;
        cubeta[i] = 0;
    }

    for(int i = 0; i < e; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(components[a] != components[b])
        {
            int oldColor = components[b];
            for(int j = 1; j <= n; j++)
            {
                if(components[j] == oldColor)
                {
                    components[j] = components[a];
                }
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cubeta[components[i]]++;
    }

    long long int answer = 0;
    for(int i = 1; i <= n; i++){
        answer += (cubeta[i] * (n - cubeta[i]));
    }

    printf("%lld\n", answer/2);

    return 0;
}