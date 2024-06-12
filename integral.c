#include <stdio.h>
#include <ctype.h>
#include <string.h>

extern double _F3(double);;
float root(int f, float g, float a, float b, float eps1);
float integral(int f, float a, float b, float eps2);
void parse_args(int *func, int *test, int *err, int *iterations, int argc, char *argv[]);



void parse_args(int *func, int *test, int *err, int *iterations, int argc, char *argv[]) {
   for (int i = 1; i < argc; ++i) {
      if (!strcmp(argv[i], "--help") || !strcmp(argv[i], "-h")) {
         printf("%s %d %d\n", argv[i], strcmp(argv[i], "--help"), strcmp(argv[i], "-h"));
         printf("--help\t\t-h\t\tget all arguments\n");
         printf("--iterations\t-i\t\twrite iterations count for root function\n");
         printf("--root\t\t-r\t\tcalculate equation\n");
         printf("--test-root\t-R\t\ttest program on equation example\n");
         printf("--test-integral\t-I\t\ttest program on integral example\n");
      }
      if (!strcmp(argv[i], "--iterations") || !strcmp(argv[i], "-i")) {
         *iterations = 1;
      } else if (!strcmp(argv[i], "--root") || !strcmp(argv[i], "-r")) {
         *func = 1;
      } else if (!strcmp(argv[i], "--test-root") || !strcmp(argv[i], "-R")) {
         *func = 1;
         *test = 1;
      } else if (!strcmp(argv[i], "--test-integral") || !strcmp(argv[i], "-I")) {
         *func = 2;
         *test = 1;
      } else if (strlen(argv[i]) >= 1 && argv[i][0] == '-') {
         printf("no matches to keyword %s\n", argv[i]);
         *err = 1;
      } else {
         return;
      }
   }
}

float integral(int f, float a, float b, float eps2) {
   return 0;
}

float root(int f, float g, float a, float b, float eps1) {
   return 0;
}

int main(int argc, char* argv[]) {
   // int func = 0; // 1 - root, 2 - integral
   // int iterations = 0; // true/false
   // int test = 0;  // true/false
   // int err = 0;  // error code
   printf("%f", _F3(1.0));
   // parse_args(&func, &test, &err, &iterations, argc, argv);
   // if (err) {
   //    return err;
   // }
   //
   // if (func == 1 && !test) {
   //    scanf()
   // }
   return 0;
}