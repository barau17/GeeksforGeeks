class Solution:
    #Function to check if two arrays are equal or not.
    def check(self,A,B,N):
        n = len(A)
        m = len(B)
        while n == m:
            A.sort()
            B.sort()
            for i in range(n):
                if A[i] != B[i]:
                    return False
            return True
        return False