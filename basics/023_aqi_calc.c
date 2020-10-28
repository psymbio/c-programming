#include<stdio.h>
#include<string.h>

void main()
{
          int i, il, ih, ch, cl;
          char c='A';
          printf("Enter the value of PM10:");
          scanf("%d", &i);

          if(c == 'A')
          {
              if(i >= 0 && i <= 50)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 50;
              }
              if (i >= 51 && i <= 100) {
                  il = 51;
                  ih = 100;
                  cl = 51;
                  ch = 100;
              }
              if (i >= 101 && i <= 250) {
                  il = 101;
                  ih = 200;
                  cl = 101;
                  ch = 250;
              }
              if (i >= 251 && i <= 350) {
                  il = 201;
                  ih = 300;
                  cl = 251;
                  ch = 350;
              }
              if (i >= 351 && i <= 430) {
                  il = 301;
                  ih = 400;
                  cl = 351;
                  ch = 430;
              }
              if (i >= 430) {
                  il = 401;
                  ih = 500;
                  cl = 431;
                  ch = 500;
              }
          }
          c='B';
          printf("Enter the value of PM2.5:");
          scanf("%d", &i);
          if(c == 'B')
          {
              if(i >= 0 && i <= 30)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 30;
              }
              if (i >= 31 && i <= 60) {
                  il = 51;
                  ih = 100;
                  cl = 31;
                  ch = 60;
              }
              if (i >= 61 && i <= 90) {
                  il = 101;
                  ih = 200;
                  cl = 61;
                  ch = 90;
              }
              if (i >= 91 && i <= 120) {
                  il = 201;
                  ih = 300;
                  cl = 91;
                  ch = 120;
              }
              if (i >= 121 && i <= 250) {
                  il = 301;
                  ih = 400;
                  cl = 121;
                  ch = 250;
              }
              if (i >= 251) {
                  il = 401;
                  ih = 500;
                  cl = 251;
                  ch = 300;
              }
          }
          c='C';
          printf("Enter the value of NO2:");
          scanf("%d", &i);
          if(c == 'C')
          {
              if(i >= 0 && i <= 40)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 40;
              }
              if (i >= 41 && i <= 80) {
                  il = 51;
                  ih = 100;
                  cl = 41;
                  ch = 80;
              }
              if (i >= 81 && i <= 180) {
                  il = 101;
                  ih = 200;
                  cl = 81;
                  ch = 180;
              }
              if (i >= 181 && i <= 280) {
                  il = 201;
                  ih = 300;
                  cl = 181;
                  ch = 280;
              }
              if (i >= 281 && i <= 400) {
                  il = 301;
                  ih = 400;
                  cl = 281;
                  ch = 400;
              }
              if (i >= 401) {
                  il = 401;
                  ih = 500;
                  cl = 400;
                  ch = 500;
              }
          }
          c ='D';
          printf("Enter the value of O3:");
          scanf("%d", &i);
          if(c == 'D')
          {
              if(i >= 0 && i <= 50)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 50;
              }
              if (i >= 51 && i <= 100) {
                  il = 51;
                  ih = 100;
                  cl = 51;
                  ch = 100;
              }
              if (i >= 101 && i <= 168) {
                  il = 101;
                  ih = 200;
                  cl = 101;
                  ch = 168;
              }
              if (i >= 169 && i <= 208) {
                  il = 201;
                  ih = 300;
                  cl = 169;
                  ch = 208;
              }
              if (i >= 209 && i <= 748) {
                  il = 301;
                  ih = 400;
                  cl = 209;
                  ch = 748;
              }
              if (i >= 749) {
                  il = 401;
                  ih = 500;
                  cl = 749;
                  ch = 800;
              }
          }
          c='E';
          printf("Enter the value of CO:");
          scanf("%d", &i);
          if(c == 'E')
          {
              if(i >= 0 && i <= 1)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 1;
              }
              if (i >= 1.1 && i <= 2) {
                  il = 51;
                  ih = 100;
                  cl = 1.1;
                  ch = 2;
              }
              if (i >= 2.1 && i <= 10) {
                  il = 101;
                  ih = 200;
                  cl = 2.1;
                  ch = 10;
              }
              if (i >= 10 && i <= 17) {
                  il = 201;
                  ih = 300;
                  cl = 10;
                  ch = 17;
              }
              if (i >= 18 && i <= 34) {
                  il = 301;
                  ih = 400;
                  cl = 18;
                  ch = 34;
              }
              if (i >= 35) {
                  il = 401;
                  ih = 500;
                  cl = 35;
                  ch = 50;
              }
          }
          c='F';
          printf("Enter the value of SO2:");
          scanf("%d", &i);
          if(c == 'F')
          {
              if(i >= 0 && i <= 40)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 40;
              }
              if (i >= 41 && i <= 80) {
                  il = 51;
                  ih = 100;
                  cl = 41;
                  ch = 80;
              }
              if (i >= 81 && i <= 380) {
                  il = 101;
                  ih = 200;
                  cl = 81;
                  ch = 380;
              }
              if (i >= 381 && i <= 800) {
                  il = 201;
                  ih = 300;
                  cl = 381;
                  ch = 800;
              }
              if (i >= 801 && i <= 1600) {
                  il = 301;
                  ih = 400;
                  cl = 801;
                  ch = 1600;
              }
              if (i >= 1601) {
                  il = 401;
                  ih = 500;
                  cl = 1601;
                  ch = 1700;
              }
          }
          c='G';
          printf("Enter the value of NH3:");
          scanf("%d", &i);
          if(c == 'G')
          {
              if(i >= 0 && i <= 200)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 200;
              }
              if (i >= 201 && i <= 400) {
                  il = 51;
                  ih = 100;
                  cl = 201;
                  ch = 400;
              }
              if (i >= 401 && i <= 800) {
                  il = 101;
                  ih = 200;
                  cl = 401;
                  ch = 800;
              }
              if (i >= 801 && i <= 1200) {
                  il = 201;
                  ih = 300;
                  cl = 801;
                  ch = 1200;
              }
              if (i >= 1201 && i <= 1800) {
                  il = 301;
                  ih = 400;
                  cl = 1201;
                  ch = 1800;
              }
              if (i >= 1801) {
                  il = 401;
                  ih = 500;
                  cl = 1801;
                  ch = 1900;
              }
          }
          /*c='H';
          printf("Enter the value of Pb:");
          scanf("%d", &i);
          if(c == 'H')
          {
              if(i >= 0 && i <= 0.5)
              {
                  il = 0;
                  ih = 50;
                  cl = 0;
                  ch = 0.5;
              }
              if (i >= 0.5 && i <= 1) {
                  il = 51;
                  ih = 100;
                  cl = 0.5;
                  ch = 1;
              }
              if (i >= 1.1 && i <= 2) {
                  il = 101;
                  ih = 200;
                  cl = 1.1;
                  ch = 2;
              }
              if (i >= 2.1 && i <= 3) {
                  il = 201;
                  ih = 300;
                  cl = 2.1;
                  ch = 3;
              }
              if (i >= 3.1 && i <= 3.5) {
                  il = 301;
                  ih = 400;
                  cl = 3.1;
                  ch = 3.5;
              }
              if (i > 3.5) {
                  il = 401;
                  ih = 500;
                  cl = 3.5;
                  ch = 4;
              }
          }*/
           float r = ((ih - il)*(i - cl)/(ch-cl)) + il;

           if(r >= 0 && r <= 50)
             printf("Category: Good");
           if(r >= 51 && r <= 100)
             printf("Category: Satisfactory");
           if(r >= 101 && r <= 200)
             printf("Category: Moderately Polluted");
           if(r >= 201 && r <= 300)
             printf("Category: Poor");
           if(r >= 301 && r <= 400)
             printf("Category: Very Poor");
           if(r >= 401 && r <= 500)
             printf("Category: Severe");

}
