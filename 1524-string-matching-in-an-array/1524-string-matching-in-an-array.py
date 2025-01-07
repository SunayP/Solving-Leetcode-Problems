class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        li = []
        for i in words:
            for j in words:
                if i!=j:
                    if i in j:
                        li.append(i)
                        break
        return li
        