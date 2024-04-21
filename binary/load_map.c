// sample kappa loading code
#include <stdlib.h>
#include <stdio.h>


int main(void){
  char inname[256];
  int i, j, ng, dummy;
  double pix;
  double *kappa;
  FILE *fp;


  const double theta = 5.0; // opening angle [deg]

  // read data for kappa
  sprintf(inname, "sample_kappa.dat");


  if((fp = fopen(inname, "rb")) == NULL){
    printf("can't open the files!\n");
    exit(1);
  }

  fread(&dummy, sizeof(int), 1, fp);

  ng = dummy;
  kappa = (double *) malloc(sizeof(double)*ng*ng);

  if(kappa == NULL){
    printf("memory allocation error!\n");
    exit(1);
  }

  fread(kappa, sizeof(double), ng*ng, fp);
  fread(&dummy, sizeof(int), 1, fp);

  if(ng != dummy){
    printf("loading failed!\n");
    exit(1);
  }

  fclose(fp);


  pix = theta/ng;
  printf("ng:%d pixel size:%g [arcmin]\n", ng, pix*60.0);

  // show all values
  /*
  printf("(x, y): kappa\n");
  for(i=0;i<ng;i++){
    for(j=0;j<ng;j++){
      printf("(%g %g): %g\n", i*pix, j*pix, kappa[j+ng*i]);
    }
  }
  */

  free(kappa);


  return 0;
}
