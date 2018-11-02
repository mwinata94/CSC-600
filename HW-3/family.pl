% facts
is_male( bob ).
is_male( frank ).
is_male( steve ).
is_male( george ).
is_male( will ).
is_male( david ).
is_male( mike ).
is_male( jeff ).
is_male( miles ).
is_female( jill ).
is_female( claire ).
is_female( anita ).
is_female( carolina ).
is_female( stephanie ).
is_female( lucy ).
is_female( chelsea ).
is_female( stacy ).
is_female( tera ).
is_parent_of( bob, frank ).
is_parent_of( bob, will ).
is_parent_of( bob, mike ).
is_parent_of( jill, frank ).
is_parent_of( jill, will ).
is_parent_of( jill, mike ).
is_parent_of( frank, steve ).
is_parent_of( frank, george ).
is_parent_of( frank, anita ).
is_parent_of( frank, carolina ).
is_parent_of( claire, steve ).
is_parent_of( claire, george ).
is_parent_of( claire, anita ).
is_parent_of( claire, carolina ).
is_parent_of( will, david ).
is_parent_of( will, lucy ).
is_parent_of( stephanie, david ).
is_parent_of( stephanie, lucy ).
is_parent_of( mike, jeff ).
is_parent_of( mike, chelsea ).
is_parent_of( mike, stacy ).
is_parent_of( miles, tera ).
is_parent_of( stacy, tera ).

% rules
mother( M, C ):- is_female( M ), is_parent_of( M, C ), !.
father( F, C ):- is_female( F ), is_parent_of( F, C ), !.

sibling1( N1, N2 ):- 
    is_parent_of( X, N1 ), 
    is_parent_of( X, N2 ),
    N1 \= N2.

brother1( B1, B2 ):- 
    sibling1( B1, B2 ), 
    is_male( B1 ), 
    is_male( B2 ).

sister1( S1, S2 ):- 
    sibling1( S1, S2 ), 
    is_female( S1 ), 
    is_female( S2 ).

sibling2( N1, N2 ):- 
    is_parent_of( X, N1 ), 
    is_parent_of( X, N2 ), 
    is_parent_of( Y, N1 ), 
    is_parent_of( Y, N2 ), 
    N1 \= N2,
    X \= Y.

brother2( B1, B2 ):- 
    sibling2( B1, B2 ), 
    is_male( B1 ), 
    is_male( B2 ).

sister2( S1, S2 ):- 
    sibling2( S1, S2 ), 
    is_female( S1 ), 
    is_female( S2 ).

cousin( C1, C2 ):- 
    is_parent_of( X, C1 ), 
    is_parent_of( Y, C2 ), 
    \+ is_parent_of( X, C2 ),
    \+ is_parent_of( Y, C1 ),
    sibling1( X, Y ).

couple( C1, C2 ):-
    is_parent_of( C1, X ),
    is_parent_of( C2, X ),
    C1 \= C2.

% includes uncle-in-law
uncle( U, C ):-
    is_male( U ),
    \+ is_parent_of( U, C ),
    is_parent_of( P, C ),
    ( sibling1( U, P ); couple( U, A ), sibling1( A, P ) ).

% includes aunt-in-law
aunt( A, C ):-
    is_female( A ),
    \+ is_parent_of( A, C ),
    is_parent_of( P, C ),
    ( sibling1( A, P ); couple( A, U ), sibling1( U, P ) ).

grandparent( GP, GC ):-
    is_parent_of( P, GC ),
    is_parent_of( GP, P ).

grandfather( GF, GC ):-
    is_male( GF ),
    grandparent( GF, GC ).

grandmother( GM, GC ):-
    is_female( GM ),
    grandparent( GM, GC ).

grandchild( GC, GP ):-
    grandparent( GP, GC ).

greatgrandparent( GGP, GGC ):-
    grandparent( GP, GGC ),
    is_parent_of( GGP, GP ).

ancestor( A, C ):-
    is_parent_of( A, C );
    ( is_parent_of( A, AC ), ancestor( AC, C ) ).
