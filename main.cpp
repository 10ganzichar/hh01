#include <stdio.h>

int* solution(long long nData, int* nReturnLength)
{
    long long nTmp = nData;
    int nLength{};
    while (nTmp > 0)
    {
        nLength++;
        nTmp/=10;
    }
    int* nResult= new int[nLength];
    for (int i = 0; i < nLength; i++)
    {
        nResult[i]=nData%10;
        nData/=10;
    }
    *nReturnLength = nLength;
    return nResult;
}

int main()
{
    long long nData;
    int nReturnLength;

    scanf("%lld", &nData);

    int* nAnswer = solution(nData, &nReturnLength);
    for (int i = 0; i < nReturnLength; i++)
    {
        printf("%d", nAnswer[i]);
    }
    printf("\n");
    delete[] nAnswer;
}