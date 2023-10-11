def areIsomorphic(str1: str, str2: str) -> bool:
    # Write your code here
    if len(str1)==len(str2):
        res1= set(str1)
        res2= set(str2)
        if len(res1)==len(res2):
            return True
        else:
            return False
    else:
        return False  
