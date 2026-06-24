/*
STL
used bercause
components of stl
1.Container:is object which stores data,use template funxction
2.Algorithms:sorting,searching ,use template function
3.Iterators:object which points the containers
->handled like pointers
->connect algo with container


STL= container + algorithmas +i terator

containers:
1.sequence container
--linear fashion
eg.vector,list,dequeue

2.associative container
--direct access,tree fashion
eg.set/multiset
map/multimap

3.derived container
->real word modeling
eg stack,queue,priority queue

## When to USE
sequence continer
vector->random access fast
        insertion delition slow
        insertion at end fast
list->  random access fast
        middle insertion fast
        at end fast

associative container
all operation fast 
except random access

derived container
->depends on data structure

*/