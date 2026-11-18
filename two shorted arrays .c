
#include <stdio.h>

double findMedianSortedArrays(int nums1[], int m, int nums2[], int n) {
    int arr[m + n];
    int i = 0, j = 0, k = 0;

    // Merge two sorted arrays
    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            arr[k++] = nums1[i++];
        else
            arr[k++] = nums2[j++];
    }

    while (i < m)
        arr[k++] = nums1[i++];

    while (j < n)
        arr[k++] = nums2[j++];

    // Find median
    int total = m + n;

    if (total % 2 == 0)
        return (arr[total / 2 - 1] + arr[total / 2]) / 2.0;
    else
        return arr[total / 2];
}

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2};

    int m = 2, n = 1;

    double median = findMedianSortedArrays(nums1, m, nums2, n);

    printf("Median = %.2f\n", median);

    return 0;
}
