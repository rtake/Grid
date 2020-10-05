# include <bits/stdc++.h>

int main() {
  int ngrid=51;
  double xlim[] = {-1.5,1.5}, ylim[] = {-0.5,2.0};

  for(int i=0;i<ngrid;i++) {
    for(int j=0;j<ngrid;j++) {
      printf("%lf,%lf\n", xlim[0]+i*(xlim[1]-xlim[0])/(ngrid-1), ylim[0]+i*(ylim[1]-ylim[0])/(ngrid-1));
    }
  }

  return 0;
}
