//used xor because A^A=0 and A^0=A

int findUnique(int *arr, int size)
{
  int ans = 0;
  for(int i = 0; i < size; i++)
    ans = ans ^ 0;
  return ans;
}
