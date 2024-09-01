Write a function transform_array that takes as input an array a[] of size aLen and a buffer b[] with a maximum size of *p_bLen, and copies the elements from a[] into b[] following these rules:

If the element in a[] is less than 10, it is discarded;

If the element in a[] to be copied is even and a multiple of 4, it is copied 4 times into b[];

If the element in a[] to be copied is even and not a multiple of 4, it is copied 2 times into b[];

If the element in a[] to be copied is odd and a multiple of 3, it is discarded;

Otherwise, the element is copied once into b[].

At the end, the transform_array function must update the value pointed to by *p_bLen with the number of elements inserted into b[].
