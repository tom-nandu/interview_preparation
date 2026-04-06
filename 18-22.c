18. Implement binary search (iterative)
19. Implement binary search (recursive)
20. Find position where an element should be inserted
21. Find first occurrence using binary search
22. Find last occurrence using binary search

-------------------------------------------------------------------
20. Find position where an element should be inserted
#include <stdio.h>

int iter_search(int arr[], int l, int r, int v)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == v)
        {
            return m;
        }
        else if (arr[m] > v)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    int v = 3;

    int x = iter_search(arr, 0, 4, v);
    printf("%d\n", x);

    return 0;
}
``
