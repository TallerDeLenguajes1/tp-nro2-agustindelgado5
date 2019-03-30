# incluye  < iostream >
usando  namespace  std ;
# include  < stdio.h >
# include  < stdlib.h >
# incluye  < conio.h >
# define  N  4
# define  M  5

int  main () {

int f, c;
doble mt [N] [M];

para (f = 0 ; f <N; f ++) {
   para (c = 0 ; c <M; c ++) {
     mt [f] [c] = rand ()% 10 ;
   }
}

para (f = 0 ; f <N; f ++) {
   para (c = 0 ; c <M; c ++) {
      printf ( "   % .2lf   " , mt [f] [c]);
   }
   printf ( " \ n " );
}
   devuelve  0 ;