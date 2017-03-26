#include<ctime>
#include<cstdio>
#include<cstdlib>
#define s 20
int*p,a[s*2][s],i,j,c,q;
#define f for(i=1;i++<s-1;)for(j=1;j++<s-1;)
main(){srand(time(0));f a[i][j]=rand()&1;for(;;getchar()){
f{printf("%c%c",!a[i][j]+94,j<s-1?32:10);p=&a[i+s][j];*p=0;
for(q=-2;++q<2;)for(c=-2;++c<2;)*p+=a[q+i][c+j]&&c|q;}
f c=a[i+s][j],p=&a[i][j],*p?*p=c>1&c<4:*p=c==3;}}
