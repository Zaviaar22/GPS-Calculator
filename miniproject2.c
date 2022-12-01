#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LEN 1000


// functions









int main(void){

  // file input
  
  char filename[20], c;
  

  char data[MAX_LINES][MAX_LEN];
  
  FILE *fd, *fw;

  printf("Input users file: ");
  scanf("%s", filename);

  fd = fopen(filename, "r");

  if(fd == NULL){
    
    printf("filename not found");
    
  } else {
    int line = 0;
      while(!feof(fd) && !ferror(fd)){
         if (fgets(data[line], MAX_LEN, fd) != NULL){
          line++;
        }


        }

  fclose(fd);

    for(int i = 0; i < line; i++){
      printf("%s", data[i]);
    }

    printf("\n **************** \n");
    


    //value storage


    struct user_t{
    
    double latitude[100];
    double longitude[100];
    double time[100];
    double alt[100];
    char *name[100];
      



};

    struct user_t our_user;
    struct user_t other_users1;
    


  // our_user specification

    printf("Enter lat, long, alt, and time: ");
    scanf("%lf, %lf, %lf, %lf", &our_user.latitude[0], &our_user.longitude[0], &our_user.alt[0], &our_user.time[0]);
    printf("%lf, %lf, %lf, %lf", our_user.latitude[0], our_user.longitude[0], our_user.alt[0], our_user.time[0]);

    
    

  // other_users specification
    

  int k =6;
  for(int i = 0; i<4; i++){

  other_users1.name[i] = data[k];
  k = k+5;
  
  };

     int l =2;
  for(int i = 5; i<9; i++){

  other_users1.latitude[i] = atof(data[l]);
  l = l+5;
  
  };

 int m =3;
  for(int i = 10; i<14; i++){

  other_users1.longitude[i] = atof(data[m]);
  m = m+5;
  
  };

  int n =5;
  for(int i = 15; i<19; i++){

  other_users1.alt[i] = atof(data[n]);
  n = n+5;
  
  };

  /*int o =4;
  for(int i = 20; i<24; i++){

  other_users1.time[i] = atof(data[o]);
    printf("\n%lf\n", other_users1.alt[i]);
  o = o+5;
  
  };*/

    
    
    double lat_distance[3];
    
    int a = 5;
    for(int x = 0; x<=3; x++){
      lat_distance[x] = (our_user.latitude[0] - other_users1.latitude[a]);
      
      ++a;
    };

    double lon_distance[3];
    
    int b = 10;
    for(int x = 0; x<=3; x++){
      lon_distance[x] = (our_user.longitude[0] - other_users1.longitude[a]);
      ;
      ++a;
    };

    double alt_distance[3];
    
    int c = 15;
    for(int x = 0; x<=3; x++){
      alt_distance[x] = (our_user.alt[0] - other_users1.alt[a]);
      
      ++a;
    };
    


    double distance[100];
    for(int count = 0; count<3; count++){
      distance[count]=sqrt(pow(lat_distance[count], 2) + pow(lon_distance[count], 2) + pow(alt_distance[count], 2));

      
      printf("\ndistance %d: %lf\n", count, distance[count]);
      
      
    };
    

    if(distance[0] < distance[1]){
      printf("\n%s is closest", data[6]);
    } else if(distance[1] < distance[2]){
      printf("\n%s is closest", data[11]);
    } else{
      printf("\n%s is closest", data[16]);
    }
    


return 0;
  }
  }
