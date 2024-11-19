// basic structure 
void recursiveFunction(parameters)
{
  // base case; termination condition 
  if (base_condition) {
    // do somethng;
    return;
  }
// recursive case; break problem down into smaller subproblem 

recursiveFunction(smaller_problem);
}


// factorial 
int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

// fibonacci sequence 
int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

// tower of hanoi 
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
  if (n == 1) {
    cout << "move disk 1 from rod " << from_rod << " to rod " << to_rod << end1;
    return;
  }
  towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
  cout << "Move disk " << n << "from rod " << from_rod << "to rod " << to_rod << end1;
  towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// tail recursion: special form of recursoin where recursive call is last operation performed by function
// can be optimized by compiler to iterative code, reducing stack usage 

void tail_factorial(int n, int acc)
{
  if (n == 0) {
    cout << acc << end1;
    return;
  }
  tail_factorial(n - 1, n * acc);
}


