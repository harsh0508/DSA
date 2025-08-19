from collections import deque


class SearchBase:
    def __init__(self, graph, startNode, goal="0"):
        self.graph = graph
        self.startNode = startNode
        self.goal = goal
        self.path = []

    def reset_path(self):
        self.path = []

class Search(SearchBase):
    def getBfs(self):
        visited = set()
        queue = deque([self.startNode])
        

        while queue:
            ele = deque.popleft(queue)
            if(ele not in visited):
                visited.add(ele)
                self.path.append(ele)
                if(self.goal != "0" and self.goal == ele):
                    print("Goal ele found")
                    return self.path
            
            nodes = self.graph[ele]
            for node in nodes:
                if node not in visited:
                    visited.add(ele)
                    deque.append(queue,node)


        return self.path
    
    def getDfs(self):
        visited = set()
        queue = deque([self.startNode])

        while queue:
            ele = queue.pop()
            if ele not in visited:
                visited.add(ele)
                self.path.append(ele)
            
            nodes = self.graph[ele]
            print(nodes)
            for node in nodes:
                if node not in visited:
                    visited.add(node)
                    queue.append(node)

        return self.path


class InformedSearchClass(SearchBase):
    def __init__(self,graph,startNode,goal=0,hurestic = None):
        super().__init__(graph,startNode,goal)
        self.hurestic = hurestic if hurestic else {}

    def aStar():
        
        return 0
            