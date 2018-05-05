#include<stdio.h>


void generate_combos(int n, int k) {
    int com[100];
    for (int i = 0; i < k; i++) com[i] = i;
    while (com[k - 1] < n) {
        for (int i = 0; i < k; i++)
             printf("%d ",com[i]);
        printf("\n");

        int t = k - 1;
        while (t != 0 && com[t] == n - k + t) 
		t--;
        	com[t]++;
        for (int i = t + 1; i < k; i++) 
		com[i] = com[i - 1] + 1;
    }
}


int main()
{
generate_combos(5, 3);



return 0;
}
