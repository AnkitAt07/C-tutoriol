/*
    STL >> Standerd Template Library
    Generic Classes And Function
    Why we use STL -> Reuse : Well tested components
                   -> Time saving

    Components of STL
            1. Containers --> Store data using template classes
                1.1 Sequence Containers -- Store data in linear fashion (eg..Vector, list, dequeue)
                1.2 Associative Container -- Direct access (eg..set, multi set, map, multi map)
                1.3 Derived Container -- Real world modeling (eg..Steack, queue, priority queue) 

            2. Algorithms --> Sorting, Searching using template function
                
            3. Iterators  --> Object points to an element in a container (Handel Just like pointer )


    ...When to use which...
       * Sequence Containers
            1. Vector -> Random access -> Fast
                      -> In middle Insertion/deletion -> slow
                      -> Insertion/deletion at the end fast 

            2. List -> Random access -> Slow 
                    -> Insertion/deletion in middle -> Fast 
                    -> Insertion/deletion at the end -> Fast 

            3. Dequene -> 

        * Associative Container -> All operation fast except random access

        * Derived Container -> depend Data Structure & Algorithm
*/