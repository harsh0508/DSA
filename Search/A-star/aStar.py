# some hack for easy import

import sys
import os

SCRIPT_DIR = os.path.dirname(os.path.realpath(__file__))
sys.path.append(os.path.dirname(SCRIPT_DIR))

from BaseClass.Search import Search
from BaseClass.Search import InformedSearchClass


# main function here
def main():

    # graphbfs = {
    #     'A': ['B', 'C'],
    #     'B': ['D', 'E'],
    #     'C': ['F'],
    #     'D': [],
    #     'E': ['F'],
    #     'F': []
    # }

    # bfs = Search(graph=graphbfs,startNode='A',goal='D')

    # uncomment to run without goal
    # print("path is without goal :")
    # print(bfs(graph=graphbfs,startNode='A'))

    # uncomment to run with goal
    # print("path is without goal :")
    # print(bfs(graph=graphbfs,startNode='A',goal='D'))

    graph = {
    'A': {'B': 1, 'C': 3},
    'B': {'D': 1, 'E': 5},
    'C': {'F': 2},
    'D': {},
    'E': {'F': 1},
    'F': {}
    }

    heuristic = {
        'A': 5,
        'B': 4,
        'C': 2,
        'D': 3,
        'E': 1,
        'F': 0
    }

    aStar = InformedSearchClass(graph=graph , startNode='A', hurestic=heuristic)



if __name__ == "__main__":
    main()