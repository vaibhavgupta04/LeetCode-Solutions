#User function Template for python3

class Solution:
    def trailingZeroes(self, N):
    	#code here 
    	st=1
    	ans=0
    	while N/st>0:
    	    st=st*5
    	    ans+=int(N/st)
    	return ans
    	    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        N = int(input()) 
        ob = Solution()
        ans = ob.trailingZeroes(N)
        print(ans)
# } Driver Code Ends