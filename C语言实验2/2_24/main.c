#include <stdio.h>
#define MAX 7

/*某医院有A,B,C,D,E,F,G七位大夫，他们在一星期内每人要值班一天，值班的要求为
	A大夫的值班日比C大夫晚一天；A = C + 1
	D大夫的值班日比E大夫晚2天  D = E + 2
	B大夫的值班日比G大夫早3天  B = G - 3;
	F大夫的值班日在B,C大夫值班日之间，且在星期四 F = 4;*/

void main()
{
    int A,B,C,D,E,G,F=4;
    for(A = 1;A <= 7;A++)
        if(A == 4)
            continue;
        else
            for(B = 1;B <= 7;B++)
                if(B == A || B == 4)
                    continue;
                else
                    for(C = 1;C <= 7;C++)
                        if(C == A || C == B || C == 4)
                            continue;
                        else
                            for(D = 1;D <= 7;D++)
                                if(D == A || D == B || D == C || D == 4)
                                    continue;
                                else
                                    for(E = 1;E <= 7;E++)
                                        if(E == A || E == B || E == C || E == D || E == 4)
                                            continue;
                                        else
                                            for(G = 1;G <= 7;G++)
                                                if(G == A || G == B || G == C || G == D || G == E || G == 4)
                                                    continue;
                                                else
                                                    if(A == (C + 1) && D == (E + 2) && B == (G + 3))
                                                        if((B > F && F < C)||(B < F) && F > C)
                                                            printf("A=%d,B=%d,C==%d,D=%d,E==%d,F=%d,G=%d\n",A,B,C,D,E,F,G);
}
