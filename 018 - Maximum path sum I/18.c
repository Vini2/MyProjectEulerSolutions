#include<stdio.h>
main(){

    int i = 0, max = 0,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x;

    int a1 = 75;
    int a2[2] = {95,64};
    int a3[3] = {17,47,82};
    int a4[4] = {18,35,87,10};
    int a5[5] = {20,4,82,47,65};
    int a6[6] = {19,1,23,75,3,34};
    int a7[7] = {88,2,77,73,7,63,67};
    int a8[8] = {99,65,04,28,6,16,70,92};
    int a9[9] = {41,41,26,56,83,40,80,70,33};
    int a10[10] = {41,48,72,33,47,32,37,16,94,29};
    int a11[11] = {53,71,44,65,25,43,91,52,97,51,14};
    int a12[12] = {70,11,33,28,77,73,17,78,39,68,17,57};
    int a13[13] = {91,71,52,38,17,14,91,43,58,50,27,29,48};
    int a14[14] = {63,66,4,68,89,53,67,30,73,16,69,87,40,31};
    int a15[15] = {4,62,98,27,23,9,70,98,73,93,38,53,60,4,23};

    for (j = 0; j < 1; j++) {

            for (k = 0; k < 2; k++) {

                for (l = k; l < k+2; l++) {

                    for (m = l; m < l+2; m++) {

                        for (n = m; n<m+2; n++) {

                            for (o = n; o < n+2; o++) {

                                for (p = o; p < o+2; p++) {

                                    for (q = p; q < p+2; q++) {

                                        for (r = q; r < q+2; r++) {

                                            for (s = r; s < r+2; s++) {

                                                for (t = s; t < s+2; t++) {

                                                    for (u = t; u < t+2; u++) {

                                                        for (v = u; v < u+2; v++) {

                                                            for (w = v; w < v+2; w++) {

                                                                for (x = w; x < w+2; x++) {

                                                                    int sum = a1+a2[k]+a3[l]+a4[m]+a5[n]+a6[o]+a7[p]+a8[q]+a9[r]+a10[s]+a11[t]+a12[u]+a13[v]+a14[w]+a15[x];
                                                                    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d --> %d\n", k, l, m, n, o, p, q, r, s, t, u, v, w, x, sum);
                                                                    if (sum>max) {
                                                                        max = sum;
                                                                    }

                                                                }

                                                            }

                                                        }

                                                    }

                                                }

                                            }

                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }
    }

printf("Maximum sum = %d", max);
}
