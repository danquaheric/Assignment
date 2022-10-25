    #include<iostream>

    using namespace std;

    int main ()

    {

        int arr[10], n, i, pro = 1;

        cout <<"Enter the size of the array : ";

        cin >> n;

        cout <<"Enter the elements of the array : ";

        for (i = 0; i < n; i++)

        cin >> arr[i];

        for (i = 0; i < n; i++)

        {
            pro *= arr[i];

        }

        cout <<"Multiplication of array elements : " << pro;

        return 0;

    }
