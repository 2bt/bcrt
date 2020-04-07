#include<cstdlib>// houndify > out.ppm
#include<cstdio>
#include<cmath>
#define R return
#define O operator
using F=float;F E=.01;struct V{F O%(V r){R x*r.x+y*r.y+z*r.z;}V O+(V r){R{x+r.x,
y+r.y,z+r.z};}V O*(V r){R{x*r.x,y*r.y,z*r.z};}V(F a,F b,F c=0){x=a;y=b;z=c;}F x,
z,y;V(F v=0){x=y=z=v;}};F I(F a,F b=0){R a<b?a:b;}F S(){R(F)rand()/RAND_MAX;}F L
(V v){R sqrtf(v%v);}V Z(V v){R v*(1/L(v));}V M(V p){V q=p;q.z=0;F l=L(q),g=fabs(
l-53)-8.1,f=I(I(I(L({p.x,p.y+I(-I(p.y,18))})-9,-I(2-fabs(l-15),-p.y)),-I(2-fabs(
p.x),5-fabs(p.y+20))),-I(8-fabs(p.x),2-fabs(p.y+24))),m=g<f?f=g,L(q+(p.x>p.y?:-1
)*5.5)<53.5?.2:.3:.07;f=L({I(f,-1)-f,I(-p.z-4)+p.z+4})-1;g=I(-p.z,p.z+250);R{I(g
,f),g<f?.8f:m};}int main(){V b=Z({-6,-1,14}),l=Z({b.z,0,-b.x})*.001,u(b.y*l.z-b.
z*l.y,b.z*l.x-b.x*l.z,b.x*l.y-b.y*l.x),o,c,d;puts("P6 960 720 255");for(F x,a,n,
y=720,i,j;y--;)for(x=960;x--;o=c+1,c=V(c.x/o.x,c.y/o.y,c.z/o.z)*255,putchar(c.x)
,putchar(c.y),putchar(c.z))for(c=n=0;n++<99;c=c+(d.z<-.8?V(9,6,3):d.y>.3?V(3,4,6
):0)*a*E)for(o={74,12,-170},d=Z(b+l*(480-x+S())+u*(y-360+S())),a=1,i=4;--i;){V s
=1,m;for(j=30;--j&&s.x>E;)s=M(o=o+d*s.x);if(o%o<3e4){a*=s.y;for(j=6;--j&&d%d>.5;
d=V(S(),S(),S())+-.5);m=Z(V(M(o+V(E,0)).x,M(o+V(0,E)).x,M(o+V(0,0,E)).x)+-s.x),d
=Z(m%d<0?d*-1:d),o=o+m*E;}}}// Daniel Langner
