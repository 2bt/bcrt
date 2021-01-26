# Business Card Raytracer

This little program renders SoundHound's Houndify logo.

```c++
#include<cmath>  // g++ -Ofast houndify.cpp -o houndify
#include<cstdio> // ./houndify > houndify.ppm
#include<cstdlib>
#define R {return
#define S (F)rand()/RAND_MAX-.5
#define P(x)putchar(c.x*263/(c.x+99))
#define O(o)z=c;}V operator o(V r)R{r.x o x,r.y o y,r.z o z};}
using F=double;F(*A)(F)=fabs,(*I)(F,F)=fmin,E=.01,x,y=720,a,n,i,j;struct V{F x,z
,y;V(F a,F b,F c=0){x=a;y=b;O(+)V(F c=0){x=y=O(*)F operator-(F)R x+y+z;}}o;F L(V
v)R sqrt(v*v-0);}V Z(V v)R v*(1/L(v));}V M(V p){V q=p;q.z=0;F l=L(q),f=I(I(I(L({
p.x,p.y+I(0,-I(p.y,18))})-9,-I(2-A(l-15),-p.y)),-I(2-A(p.x),5-A(p.y+20))),-I(8-A
(p.x),2-A(p.y+24))),g=A(l-53)-8.1,m=g<f?f=g,L(q+5.5*(p.x>p.y?:-1))<53.5?.2:.3:.1
;f=L({I(f,-1)-f,I(-p.z,4)+p.z})-1;g=I(-p.z,p.z+250);R{I(g,f),g<f?.8:m};}}int ma\
in(){V b=Z({-3,-1,7}),l=Z({b.z,0,-b.x})*.001,u(b.y*l.z-b.z*l.y,b.z*l.x-b.x*l.z,b
.x*l.y-b.y*l.x),c,d,m,s;for(puts("P6 960 720 255");y--;)for(x=960;x--;P(x),P(y),
P(z))for(c=n=0;a=99>n++;c=c+(d.z<-.8?V(9,6,3):d.y>.3?V(3,4,6):0)*a)for(o={74,26,
-170},d=Z(b+l*(S-x+480)+u*(y-360+S)),i=4;--i;){for(s=1,j=30;--j&&s.x>E;)s=M(o=o+
d*s.x);if(3e4>o*o-0){for(a*=s.y,j=6;--j&&d*d-0>.5;)d={S,S,S};m=Z(V(M(o+V(E,0)).x
,M(o+V(0,E)).x,M(o+V(0,0,E)).x)+-s.x),d=Z(m*d-0<0?d*-1:d),o=o+m*E;}}}
```

![houndify](houndify.jpg)
