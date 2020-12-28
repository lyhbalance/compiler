//直接插入排序

int a[100];

void sort(int temp, int k)
{
  int i, j;
  for (i = 0; i < k; i++)
  {
    if (temp < a[i])
    {
      for (j = k; j > i; j++)
      {
        a[j] = a[j - 1];
      }
      a[i] = temp;
    }
    else
    {
      a[k] = temp;
    }
  }
  return;
}

int main()
{
  int n;
  n = read();
  for (int i = 0; i < n; i++)
  {
    int temp = read();
    sort(temp, i);
  }
  for (int i = 0; i < n; i++)
  {
    print(a[i]);
  }
  return 0;
}
