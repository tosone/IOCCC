#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define e(t, v, w) n t(u x, u y) { n a = sqrt(x+y); r ((v - a) * (w - a)); }
#define w while(
#define r return
typedef char u; typedef short q; typedef double n;
u *z = "Z�媮�՚�f��nyZf�U^��]z�i��i[m�骭��V�e���Z�jUg\x3�pX��PH�ڕ��\b\v�HO.�Qf�\x1d����S7|)=�n\x4!E<�Z�\x1flv�d(r����ŀ��׼���c�-|�]īI�W�R^��\x2""C���O�\vDh\r��xռ��c\thպ��X+:��q�|�\x1c��g��s���A(\x11""D�\x1d:��\x1bk@\x11""E-�s��Ļ\x2+\x4I�jT���{�a�0\a+qm�\aI�ߐ\x17\x18�G��@��\v[v݅�-|��:�\f�2Oe]�U��\x10�)u\rY]�>��w{3\x19\v""acC8�5�\b��lJnsy.:ح3rKx'�'!%¹�|�skq�C��&\x15K\x4""fA���r7]�ۀz%��CJ�^}��׽Z\n;L\x1aN#�N�G�skq�K!�E�\x17��z�w���eTD�t��[_��J˼6�\x3\b�F&�]�ڈ��rJs<�5I;�Xd���\x17�]2I�«�����G�\"�f}�n�����j��%��\n��c���8���RM7����\r_�\x17\x19\a(+u\x1d=I���@�Cl\x16�����\x1f""e�R�y���!.\x1f`�uW&���>�݅�\x18�;�ܶ�Fn��vAE�+qnVR�e�E<e�!f��[\x17#��I��n�ą�h���\x1c""7��%ׁpֳ�f\x19\a\v�;uI�?��I1$�+��v�\x5�,y�OD�d*�f�H�]\x3�l�L�Qs�{���d�vݍ��W\x10", x, y;
n g() { r (n)rand()/18972; } n t, v; q F, B, C; e(a, 0, 3.0) e(b, 3.0, 4.125) 
e(c, 4.125, 9) u f(n (*h)()) { do { t=g() * 6.283184; v = sqrt(g() * 72); y = 
sin(t) * v; x=cos(t)*v; } w (h(x*x,y*y)>=0)||(fabs(x) > 5) || (fabs(y) > 5));
r ((y+5) * 11) + x + 7; } u k(q x, u l) { u o = 0; F = 0; w F < 189) { B =C =
0; w 1) { y = ((z[F/4]>>((F++%4)*2))&3) - 1; if (y&2) 
break; C = (C*2)+y, ++B; } if (!(C - x | B - l)) r (o<26)?o+0x61:((2108973>>(
(o-26)*8))&47); ++o; } r 1; } u s[1079]; u *E(u v) { u *x = s; w v--)w *(x++)
); r x; } main() { q A = 0, B = 0, C = 1078; u l = 0; u *p = s; srand(time( 0
) ); w C) { A = (A*2) + ((((z[B/8+48]+114)^2)>>(7-(B++%8)))&1),++l; x = k(A,l
); if (x-1) { *(p++)=x, A=l=0, C--; } } printf("%s%s %s%s%s\n", E(0), E(f(c))
, E(f(a)), E(1), E(f(b))); }
