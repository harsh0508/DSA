# some hack for easy import

import sys
import os

SCRIPT_DIR = os.path.dirname(os.path.realpath(__file__))
sys.path.append(os.path.dirname(SCRIPT_DIR))

from BaseClass.Search import Search


# main function here
def main():

    graph = {
        'A': ['B', 'C'],
        'B': ['D', 'E'],
        'C': ['F'],
        'D': [],
        'E': ['F'],
        'F': []
    }

    dfs = Search(graph=graph,startNode='A',goal='D')
    print(dfs.getDfs())

    # uncomment to run without goal
    # print("path is without goal :")
    # print(bfs(graph=graph,startNode='A'))

    # uncomment to run with goal
    # print("path is without goal :")
    # print(bfs(graph=graph,startNode='A',goal='D'))



if __name__ == "__main__":
    main()