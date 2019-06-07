double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i, j, k = 0;
    int *nums3 = (int *)malloc((nums1Size + nums2Size) * sizeof(int));
    for (i = 0, j = 0; i < nums1Size && j < nums2Size;)
    {
        if (*(nums1 + i) < *(nums2 + j))
        {
            *(nums3 + k) = *(nums1 + i);
            k++;
            i++;
        }
        else
        {
            *(nums3 + k) = *(nums2 + j);
            k++;
            j++;
        }
    }
    while (i < nums1Size)
    {
        *(nums3 + k) = *(nums1 + i);
        k++;
        i++;
    }
    while (j < nums2Size)
    {
        *(nums3 + k) = *(nums2 + j);
        k++;
        j++;
    }
    int m;
    int nums3Size = sizeof(nums3) / sizeof(int);
    return k & 1 ? (double)(*(nums3 + k / 2)) : (double)(*(nums3 + k / 2) + *(nums3 + (k / 2 - 1))) / 2.0;
}
