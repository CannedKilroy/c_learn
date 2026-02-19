/*
pg 280

Exercise 1:
int i;
int *p = &i;

*p is value p points to which is i. dereference p
&p is address of the pointer
*&p same as *(&p) still the pointer
&*p means get the address of value of p
*i is invalid
&i is address of i
*&i is dereference address i

Exercise 2:
int i;
int p = &i;
int q = &i;
p=i is not legal, assign int to pointer
*p = &i not legal, assign pointer to int
&p = q; not legal, assign pointer to address 
p = &i; legal, assign address to pointer
p = *&q; assign value of address of q to p
p = q; assign pointer to pointer valid

Exercise 3:
must dereference avg and sum

Exercise 4:
void swap(int *p, int *q){
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

Exercise 8:
int *find_largest(int a[], int n){
int largest = a[0];  
for (int i=0; i<n; i++){
    if (a[i]>largest){
      largest = a[i];
    }
  }
  return &a[i];
}
*/