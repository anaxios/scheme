/* Generated from scratch.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: scratch.scm
   uses: library eval expand
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[10];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,98,105,103,110,117,109,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,108,49,56,32,103,49,57,32,103,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,6),40,116,104,105,115,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,118,97,50,56,57,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,7),40,118,97,50,57,49,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,7),40,118,97,50,57,51,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,118,97,50,57,53,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,118,97,50,57,55,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,118,97,50,57,57,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,118,97,51,48,49,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,118,97,51,48,51,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_143)
static void C_ccall f_143(C_word c,C_word *av) C_noret;
C_noret_decl(f_146)
static void C_ccall f_146(C_word c,C_word *av) C_noret;
C_noret_decl(f_149)
static void C_ccall f_149(C_word c,C_word *av) C_noret;
C_noret_decl(f_152)
static void C_ccall f_152(C_word c,C_word *av) C_noret;
C_noret_decl(f_169)
static void C_ccall f_169(C_word c,C_word *av) C_noret;
C_noret_decl(f_176)
static void C_ccall f_176(C_word c,C_word *av) C_noret;
C_noret_decl(f_181)
static void C_ccall f_181(C_word c,C_word *av) C_noret;
C_noret_decl(f_185)
static void C_ccall f_185(C_word c,C_word *av) C_noret;
C_noret_decl(f_193)
static void C_fcall f_193(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_218)
static void C_ccall f_218(C_word c,C_word *av) C_noret;
C_noret_decl(f_221)
static void C_ccall f_221(C_word c,C_word *av) C_noret;
C_noret_decl(f_227)
static void C_ccall f_227(C_word c,C_word *av) C_noret;
C_noret_decl(f_231)
static void C_ccall f_231(C_word c,C_word *av) C_noret;
C_noret_decl(f_239)
static void C_ccall f_239(C_word c,C_word *av) C_noret;
C_noret_decl(f_243)
static void C_ccall f_243(C_word c,C_word *av) C_noret;
C_noret_decl(f_247)
static void C_ccall f_247(C_word c,C_word *av) C_noret;
C_noret_decl(f_251)
static void C_ccall f_251(C_word c,C_word *av) C_noret;
C_noret_decl(f_255)
static void C_ccall f_255(C_word c,C_word *av) C_noret;
C_noret_decl(f_259)
static void C_ccall f_259(C_word c,C_word *av) C_noret;
C_noret_decl(f_263)
static void C_ccall f_263(C_word c,C_word *av) C_noret;
C_noret_decl(f_267)
static void C_ccall f_267(C_word c,C_word *av) C_noret;
C_noret_decl(f_271)
static void C_ccall f_271(C_word c,C_word *av) C_noret;
C_noret_decl(f_275)
static void C_ccall f_275(C_word c,C_word *av) C_noret;
C_noret_decl(f_279)
static void C_ccall f_279(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va289)
static void C_fcall va289(C_word t0,C_word t1) C_noret;
C_noret_decl(va291)
static void C_fcall va291(C_word t0,C_word t1) C_noret;
C_noret_decl(va293)
static void C_fcall va293(C_word t0,C_word t1) C_noret;
C_noret_decl(va295)
static void C_fcall va295(C_word t0,C_word t1) C_noret;
C_noret_decl(va297)
static void C_fcall va297(C_word t0,C_word t1) C_noret;
C_noret_decl(va299)
static void C_fcall va299(C_word t0,C_word t1) C_noret;
C_noret_decl(va301)
static void C_fcall va301(C_word t0,C_word t1) C_noret;
C_noret_decl(va303)
static void C_fcall va303(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_193)
static void C_ccall trf_193(C_word c,C_word *av) C_noret;
static void C_ccall trf_193(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_193(t0,t1,t2,t3);}

C_noret_decl(trva289)
static void C_ccall trva289(C_word c,C_word *av) C_noret;
static void C_ccall trva289(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va289(t0,t1);}

C_noret_decl(trva291)
static void C_ccall trva291(C_word c,C_word *av) C_noret;
static void C_ccall trva291(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va291(t0,t1);}

C_noret_decl(trva293)
static void C_ccall trva293(C_word c,C_word *av) C_noret;
static void C_ccall trva293(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va293(t0,t1);}

C_noret_decl(trva295)
static void C_ccall trva295(C_word c,C_word *av) C_noret;
static void C_ccall trva295(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va295(t0,t1);}

C_noret_decl(trva297)
static void C_ccall trva297(C_word c,C_word *av) C_noret;
static void C_ccall trva297(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va297(t0,t1);}

C_noret_decl(trva299)
static void C_ccall trva299(C_word c,C_word *av) C_noret;
static void C_ccall trva299(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va299(t0,t1);}

C_noret_decl(trva301)
static void C_ccall trva301(C_word c,C_word *av) C_noret;
static void C_ccall trva301(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va301(t0,t1);}

C_noret_decl(trva303)
static void C_ccall trva303(C_word c,C_word *av) C_noret;
static void C_ccall trva303(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va303(t0,t1);}

/* k141 */
static void C_ccall f_143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_143,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k144 in k141 */
static void C_ccall f_146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_146,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k147 in k144 in k141 */
static void C_ccall f_149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_149,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[0]+1 /* (set! byte ...) */,lf[1]);
t3=C_mutate((C_word*)lf[2]+1 /* (set! bignum ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_152,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("scratch.scm:10: bignum"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t4;
av2[2]=lf[9];
tp(3,av2);}}

/* bignum in k147 in k144 in k141 */
static void C_ccall f_152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_152,c,av);}
a=C_alloc(32);
if(C_truep(C_i_lessp(t2,*((C_word*)lf[0]+1)))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list1(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_169,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_s_a_i_minus(&a,2,t2,*((C_word*)lf[0]+1));
C_trace(C_text("scratch.scm:9: bignum"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}}

/* k167 in bignum in k147 in k144 in k141 */
static void C_ccall f_169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_169,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,*((C_word*)lf[0]+1),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k174 in k147 in k144 in k141 */
static void C_ccall f_176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_176,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("scratch.scm:11: bignum"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t2;
av2[2]=lf[5];
tp(3,av2);}}

/* this in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_181,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_185,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("scratch.scm:12: bignum"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t2;
av2[2]=lf[5];
tp(3,av2);}}

/* k183 in this in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_185,c,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_193,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_193(t6,((C_word*)t0)[2],t1,C_fix(0));}

/* foldl18 in k183 in this in k277 in k174 in k147 in k144 in k141 */
static void C_fcall f_193(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_193,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_s_a_i_plus(&a,2,t3,t5);
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k216 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_218,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("scratch.scm:14: trace"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t2;
tp(2,av2);}}

/* k219 in k216 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_221,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2=av;
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
tp(2,av2);}}

/* k225 in k219 in k216 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_227,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k229 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_231,c,av);}
C_trace(C_text("scratch.scm:13: chicken.base#print"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_239,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_243,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_243,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_247,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_251,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_251,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_255,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_255,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_259,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_259,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_263,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_263,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_267,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_267,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_271,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_271,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_275,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(73,c,2)))){
C_save_and_reclaim((void *)f_275,c,av);}
a=C_alloc(73);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va289,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va291,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va293,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va295,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va297,a[2]=t5,a[3]=((C_word*)t0)[6],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va299,a[2]=t6,a[3]=((C_word*)t0)[7],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va301,a[2]=t7,a[3]=((C_word*)t0)[8],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va303,a[2]=t8,a[3]=((C_word*)t0)[9],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
t10=t9;
va303(t10,C_s_a_i_times(&a,2,((C_word*)t0)[10],((C_word*)t0)[11]));}

/* k277 in k174 in k147 in k144 in k141 */
static void C_ccall f_279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_279,c,av);}
a=C_alloc(12);
t2=C_i_length(t1);
t3=C_mutate((C_word*)lf[3]+1 /* (set! this ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_181,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_231,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_239,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("scratch.scm:13: this"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t6;
tp(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(55))){
C_save(t1);
C_rereclaim2(55*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,10);
lf[0]=C_h_intern(&lf[0],4, C_text("byte"));
lf[1]=C_decode_literal(C_heaptop,C_text("\376\302\000\000\010ffffffff"));
lf[2]=C_h_intern(&lf[2],6, C_text("bignum"));
lf[3]=C_h_intern(&lf[3],4, C_text("this"));
lf[4]=C_h_intern(&lf[4],5, C_text("foldl"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376\302\000\000\0131993da19434"));
lf[6]=C_h_intern(&lf[6],34, C_text("chicken.base#implicit-exit-handler"));
lf[7]=C_h_intern(&lf[7],5, C_text("trace"));
lf[8]=C_h_intern(&lf[8],18, C_text("chicken.base#print"));
lf[9]=C_decode_literal(C_heaptop,C_text("\376\302\000\000\011417a8040a"));
C_register_lf2(lf,10,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_143,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va289 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va289(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trva289,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("scratch.scm:13: trace"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word av2[3];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* va291 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va291(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,1)))){
C_save_and_reclaim_args((void *)trva291,2,t0,t1);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
va289(t2,C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]));}

/* va293 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va293(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,1)))){
C_save_and_reclaim_args((void *)trva293,2,t0,t1);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
va291(t2,C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]));}

/* va295 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va295(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,1)))){
C_save_and_reclaim_args((void *)trva295,2,t0,t1);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
va293(t2,C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]));}

/* va297 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,1)))){
C_save_and_reclaim_args((void *)trva297,2,t0,t1);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
va295(t2,C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]));}

/* va299 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va299(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,1)))){
C_save_and_reclaim_args((void *)trva299,2,t0,t1);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
va297(t2,C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]));}

/* va301 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,1)))){
C_save_and_reclaim_args((void *)trva301,2,t0,t1);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
va299(t2,C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]));}

/* va303 in k273 in k269 in k265 in k261 in k257 in k253 in k249 in k245 in k241 in k237 in k277 in k174 in k147 in k144 in k141 */
static void C_fcall va303(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,1)))){
C_save_and_reclaim_args((void *)trva303,2,t0,t1);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
va301(t2,C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[34] = {
{C_text("f_143:scratch_2escm"),(void*)f_143},
{C_text("f_146:scratch_2escm"),(void*)f_146},
{C_text("f_149:scratch_2escm"),(void*)f_149},
{C_text("f_152:scratch_2escm"),(void*)f_152},
{C_text("f_169:scratch_2escm"),(void*)f_169},
{C_text("f_176:scratch_2escm"),(void*)f_176},
{C_text("f_181:scratch_2escm"),(void*)f_181},
{C_text("f_185:scratch_2escm"),(void*)f_185},
{C_text("f_193:scratch_2escm"),(void*)f_193},
{C_text("f_218:scratch_2escm"),(void*)f_218},
{C_text("f_221:scratch_2escm"),(void*)f_221},
{C_text("f_227:scratch_2escm"),(void*)f_227},
{C_text("f_231:scratch_2escm"),(void*)f_231},
{C_text("f_239:scratch_2escm"),(void*)f_239},
{C_text("f_243:scratch_2escm"),(void*)f_243},
{C_text("f_247:scratch_2escm"),(void*)f_247},
{C_text("f_251:scratch_2escm"),(void*)f_251},
{C_text("f_255:scratch_2escm"),(void*)f_255},
{C_text("f_259:scratch_2escm"),(void*)f_259},
{C_text("f_263:scratch_2escm"),(void*)f_263},
{C_text("f_267:scratch_2escm"),(void*)f_267},
{C_text("f_271:scratch_2escm"),(void*)f_271},
{C_text("f_275:scratch_2escm"),(void*)f_275},
{C_text("f_279:scratch_2escm"),(void*)f_279},
{C_text("toplevel:scratch_2escm"),(void*)C_toplevel},
{C_text("va289:scratch_2escm"),(void*)va289},
{C_text("va291:scratch_2escm"),(void*)va291},
{C_text("va293:scratch_2escm"),(void*)va293},
{C_text("va295:scratch_2escm"),(void*)va295},
{C_text("va297:scratch_2escm"),(void*)va297},
{C_text("va299:scratch_2escm"),(void*)va299},
{C_text("va301:scratch_2escm"),(void*)va301},
{C_text("va303:scratch_2escm"),(void*)va303},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
S|applied compiler syntax:
S|  chicken.base#foldl		1
o|eliminated procedure checks: 2 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|folded constant expression: (scheme#- (quote 4294967296) (quote 1)) 
o|safe globals: (bignum byte) 
o|substituted constant variable: g1720 
o|replaced variables: 29 
o|removed binding forms: 12 
o|removed binding forms: 27 
o|simplifications: ((##core#call . 11)) 
o|  call simplifications:
o|    scheme#length
o|    scheme#*
o|    ##sys#check-list
o|    scheme#pair?
o|    ##sys#slot	2
o|    scheme#+
o|    scheme#<
o|    scheme#-
o|    scheme#cons
o|    scheme#list
o|contracted procedure: k157 
o|contracted procedure: k171 
o|contracted procedure: k177 
o|contracted procedure: k186 
o|contracted procedure: k198 
o|contracted procedure: k205 
o|contracted procedure: k213 
o|contracted procedure: k209 
o|simplifications: ((##core#call . 9) (let . 2)) 
o|  call simplifications:
o|    scheme#*	9
o|removed binding forms: 8 
o|contracted procedure: k233 
o|removed binding forms: 1 
o|customizable procedures: (va303 va301 va299 va297 va295 va293 va291 va289 foldl1822) 
o|calls to known targets: 10 
o|identified direct recursive calls: f_193 1 
o|fast box initializations: 1 
*/
/* end of file */
