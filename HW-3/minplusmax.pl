increasing( [ _ ] ).
increasing( [ E1, E2 | T ] ):- E1 =< E2, increasing( [ E2 | T ] ), !.
decreasing( [ _ ] ).
decreasing( [ E1, E2 | T ] ):- E1 >= E2, decreasing( [ E2 | T ] ), !.
allsame( [ _ ] ).
allsame( [ E1, E2 ] ):- E1 =:= E2.
allsame( [E1, E2 | T ] ):- E1 =:= E2, allsame( T ), !.
notsame( [ _ ] ).
notsame( [ H | T ] ):- \+ member( H, T ), notsame( T ), !.
alldifferent( [ _ ] ).
alldifferent( [ H | T ] ):- notsame( [ H | T ] ), !.
sorted( [ _ ] ).
sorted( [ E1, E2 | T ] ):- 
    increasing( [ E1, E2 | T ] ); 
    decreasing( [ E1, E2 | T ] ).
analyze( L ):-
    (   sorted( L ) ->  
    	write("This list is sorted");
    	write("This list is not sorted")
    ).
min( [ L ], L ).
min( [ E1, E2 | T ], MIN ):- 
    min( [ E2 | T ], M ), 
    MIN is min( min( E1, E2 ), M ),
    !.
max( [ L ], L ).
max( [ E1, E2 | T ], MAX ):- 
    max( [ E2 | T ], M ), 
    MAX is max( max( E1, E2 ), M ),
    !.
minplusmax( L, MPM ):- 
    min( L, MIN ), 
    max( L, MAX ), 
    MPM is MIN + MAX, !.
