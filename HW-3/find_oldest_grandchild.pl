male( que1, 24 ).
male( que2, 18 ).
male( que2_1, 21 ).
male( que3, 24 ).
male( que3_1, 12 ).
male( jozo, 60 ).
female( weq1, 24 ).
female( weq2, 18 ).
female( weq3, 24 ).
parent( que1, que2 ).
parent( que1, que2_1 ).
parent( que1, weq2 ).
parent( que2, que3 ).
parent( que2, weq3 ).
parent( que2_1, que3_1 ).
parent( weq1, que2 ).
parent( weq1, weq2 ).
person( N, A ):- male( N, A ).
person( N, A ):- female( N, A ).
maxlist( [ H ], H ):- !, true.
maxlist( [ H | T ], LE ):- maxlist( T, E ), LE is max( H, E ).
maxage( MA ):- findall( A, person( _, A ), X ), maxlist( X, ML ), MA is ML.
oldest( N ):- maxage( MA ), person( N, MA ).
listsum( [], 0 ).
listsum( [ H | T ], LS ):- listsum(T, S), LS is H + S.
mean( L, M ):- length( L, LEN ), listsum( L, S ), M is S / LEN.
meanAgeM( MA ):- findall( A, male( _, A ), X ), mean( X, MA ).
meanAgeF( MA ):- findall( A, female( _, A ), X ), mean( X, MA ).
is_female( N, A ):- female( N, A ).
is_male( N, A ):- male( N, A ).
is_parent( P, C ):- parent( P, C ).
grandchild( P, G ):- 
    parent( P, C ), 
    parent( C, G ).
find_grandchild_age( P, A ):- 
    grandchild( P, G ),
    person( G, A ).
find_oldest_grandchild( P, OG ):- 
    findall( A, find_grandchild_age( P, A ), AL ),
    maxlist( AL, ML ),
    person( OG, ML ),
    grandchild( P, OG ).
