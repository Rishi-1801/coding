# sets are similar to list and tuple but {} are used
# sets always gives suffled outputs so indexing is not possible
# u c annot change the set elements as indexing is not possible
# but u can add and remove elements in sets
s={1,10,'rishi',10.10,True}
print(s)
# here even slicing is not allaowed
# set.add(ele) adds ele to set
# set.remove(ele) removes ele from set but if an ele entered which is not in set then it gives key error
# set.discard(ele) removes ele from set but if an ele entered which is not in set then it  does not gives key error
# even set.pop() removes random item 
# u can add tuple to set but not list because list are mutable


# u can perform set operations like union and intersection
# u can perform union in  2 ways
s1={'ram','shyam','jiya','jenny'}
s2={'ankur','jenny'}
print(s1.union(s2))# or print(s2.union(s1))
print(s1 | s2)
# in second method to carry this method both should be sets only
# but in 1st method if add tuple or list first it convets to sets and make union example is below
print(s1.union(('rishi','saanvi'),s2))
print(s1 | s2 | ('rishi','saanvi'))# u will get error here
# u can also do union update
# set1.update(set2) or set1 |= set2 both give same output as union
# u can perform intersection in 2 ways
# set1.intersection(set2)   or
# set1 & set2
# in second method to carry this method both should be sets only
# but in 1st method if we add tuple or list first it convets to sets and make intersection 
# u can do intersection update by   set1.intersection_update(set2)
# u can do difference of the sets in two ways
# set1.difference(set2) it gives the ele in set but not in set2
# set1-set2 this also give same ouput as above
# u can perform difference update by set1.difference_update(set2)
# all the above operations are allowed on multiple sets
# u can perform symmetric difference by "set1.symmetric_difference(set2)"  or "set1 ^ set2"
# the  1st method is not applicable on multiple sets but 2nd method is applicable
# this gives the all elements in  both sets but common in both sets are not
# u can perform symmetric difference update by "set1.symmetric_difference_update(set2)"
# u can check 2 sets are disjoint are not by "set1.isdisjoint(set2)"
# u can check if a set is subset of another by "set1.issubset(set2)"or "set1 <= set2"
# u can check if a set is superset of another by "set1.issuperset(set2)" or " set1 >= set2"
# to empty a set we have a function set.clear()
# we del keyword to delete entire set EX: del set2  this deletes even set2 too
