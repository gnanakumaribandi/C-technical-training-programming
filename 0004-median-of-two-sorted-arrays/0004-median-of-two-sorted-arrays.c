double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int m = nums1Size;
    int n = nums2Size;
    int total = m + n;
    int i = 0, j = 0;
    int prev = 0, curr = 0;
    for (int k = 0; k <= total / 2; k++) {
        prev = curr;
        if (i < m && (j >= n || nums1[i] <= nums2[j])) {
            curr = nums1[i++];
        }
        else {
            curr = nums2[j++];
        }
    }
    if (total % 2 == 0) {
        return ((double)prev + curr) / 2.0;
    }
    return curr;
}