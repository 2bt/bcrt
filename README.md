# Business Card Raytracer

This little program renders [SoundHound's](https://www.soundhound.com/) Houndify logo.

```c++
#include<cmath>  // g++ -Ofast houndify.cpp -o houndify
#include<cstdio> // ./houndify > houndify.ppm
#include<cstdlib>
#define R {return
#define S (F)rand()/RAND_MAX-.5
#define P(x)putchar(c.x*263/(c.x+99))
#define O(o)z=c;}V operator o(V r)R{r.x o x,r.y o y,r.z o z};}F
using F=double;F(*A)(F)=fabs,(*I)(F,F)=fmin,E=.01,x,y=720,a,n,i,j;struct V{V(F a
,F b,F c=0){x=a;y=b;O(+)x,z,y;V(F c=0){x=y=O(*)operator-(F)R x+y+z;}}o;F L(V v)R
sqrt(v*v-0);}V Z(V v)R v*(1/L(v));}V M(V p){V q=p;q.z=0;F l=L(q),f=I(I(I(L({p.x,
p.y+I(0,-I(p.y,18))})-9,-I(2-A(l-15),-p.y)),-I(2-A(p.x),5-A(p.y+20))),-I(8-A(p.x
),2-A(p.y+24))),g=A(l-53)-8.1,m=g<f?f=g,L(q*2+(p.x>p.y?11:-11))>107:-1;f=L({I(f,
-1)-f,I(-p.z,4)+p.z})-1;g=I(-p.z,p.z+250);R{I(g,f),g<f?8:m+2};}}int main(){V b=Z
({-3,-1,7}),l=V(b.z,0,-b.x)*.001,u(b.y*l.z,b.z*l.x-b.x*l.z,-b.y*l.x),c,d,m,s;for
(puts("P6 960 720 255");y--;)for(x=960;x--;P(x),P(y),P(z))for(c=n=0;a=99>n++;c=c
+(d.z<-.8?V(9,6,3):d.y>.3?V(3,4,6):0)*a)for(o={74,26,-170},d=Z(b+l*(S-x+480)+u*(
y-360+S)),i=4;--i;){for(s=1,j=30;--j&&s.x>E;)s=M(o=o+d*s.x);if(3e4>o*o-0){for(j=
6,a*=s.y/9;--j&&d*d-0>.5;)d={S,S,S};m=Z(V(M(o+V(E,0)).x,M(o+V(0,E)).x,M(o+V(0,0,
E)).x)+-s.x),d=Z(m*d-0<0?d*-1:d),o=o+m*E;}}}
```

![houndify](houndify.jpg)


# Business Card Speech Sample

This little program generates audio saying "Houndify everything!" Here's what it sounds like: [he.wav](he.wav).

```c
#include<stdio.h>/////////////////////////// gcc he.c -lm && ./a.out | aplay
#include<math.h>////////////////////////////////////////////////////////////
unsigned long q[]={0x544767c0490c8b21,0x999bf5cf370a7602,0xff1aca05a12a29bb,
0xde322b1fa794b7f4,0x77fc7058aa756118,0x54fe36dfaad5d5ef,0x98e12b0c6b899e73,
0x54fe36dd35b607b0,0x32b350fd32e6bcba,0x98320ea9b0225220,0xdd7f1550fb4de141,
0xbb341aad92e3d7ee,0x775508e0652b365f,0x544766d45e9027b3,0xdd82e4bfce3460ff,
0xdd82bacf2cb306b3,0x54fa51c63ba9a6a8,0x31f48dba868b172a,0x98ec9c128c83ccb0,
0x769a15f8746ef3e9,0x5447665bd9dfafe4,0x31f4a3602bc4faa8,0x54fe4b9e275c2ed1,
0xbb30206739932361,0x98e525505e46c574,0x769a3fe3f6c9273c,0x538c9e4650b56d57,
0x31f4781756b6c763,0x32a02c691f3b2e65,0},f,s,i,t;float x,y,o,g,p,w,a;main(k)
{for(;t=q[s++/333];p+=w,putchar(128+o*f*f/20))for(w=t%47/1e2,i=o=0;a=i*w<3;o
+=sin(p*i++)/sqrt(x*x+y*y))for(k=x=y=.1,f=t;f>8;f/=47,a=f%47*.191-4)x+=a*cos
(g=i*w*k++),y+=a*sin(g);}///////////////////////////////////////////////////
```