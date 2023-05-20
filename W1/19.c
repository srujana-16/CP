#include <stdio.h>

int main(void) {
	int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d\n", &n);
        int input[n], output[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d", &input[j]);
        }
        for(int k=0; k<n; k++)
        {
            scanf("%d", &output[k]);
        }
        int count=0;
        for(int m=0; m<n; m++)
        {
            if(input[m]!=output[m])
                count++;
        }
        if(count%2!=0)
            printf("%d\n", 0);
        else
            printf("%d\n", 1);
    }
	return 0;
}

