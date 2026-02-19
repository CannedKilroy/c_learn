/*
Pg 239

Exercise 1:
Error 1: height has not type passed
Error 2: idk

Exercise 2:
int check(int x, int y, int n){
  if ((x>=0 && x<=(n-1))&&(y>=0 && y<=(n-1))){
    return 1;
  }
  return 0;
}

Exercise 3:
int gcd(int m, int n){
  return gcd
}

Exercise 4:
int day_of_year(int month, int day, int year){
}

Exercise 5:
int num_digits(int n) {
    int count = 0;

    do {
        n /= 10;
        count++;
    } while (n != 0);

    return count;
}

Exercise 6:
int digit(int n, int k){
  for (int i=1; i<k; i++){
    n = n/10;
  }
  return n%10;
}

Exercise 7:
all legal. They are converted

Exercise 8:

Exercise 9:
Pass by value. No swapping happens

Exercise 10:
a).
int max_a(int a[], int n){
  int max = a[0];
  for (int i=1; i<n; i++){
    if (a[i]> max) {
      max = a[i];
    }
  }
  return max;
}
b).
float avg_a(int a[], int n){
  int sum = 0;
  for (int i=0; i<n; i++){
    sum += a[i];
  }
  return (double)sum/n;
  // Note, the cast has quite high operator precedence
  // above division. So sum is casted to double first
  // So the line means ((double)sum)/n
}
c).
int positive_elements(int a[], int n){
    int count = 0;

    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            count++;

    return count;
}

Exercise 11:
float compute_GPA(char grades[], int n){
  float sum = 0;
  for (int i=0; i<n; i++){
    if (grades[i] == 'A'){
      sum += 4;
    }

    if (grades[i] == 'B'){
      sum += 3;
    }

    if (grades[i] == 'C'){
      sum += 2;
    }
      ...
  }
  return sum/n;
}

Exercise 12:
double inner_product(double a[], double b[], int n){
double sum=0.0;  
for (int i=0; i<n; i++){
    sum += a[i]*b[i];
  }
return sum;
}

Exercise 14:
It only checks one element

Exercise 19:

*/