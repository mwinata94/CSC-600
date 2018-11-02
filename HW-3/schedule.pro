% facts
teaches( teacher1, 1001 ).
teaches( teacher1, 1002 ).
teaches( teacher1, 1003 ).
teaches( teacher1, 1004 ).
teaches( teacher2, 1001 ).
teaches( teacher3, 1002 ).
teaches( teacher4, 1003 ).
teaches( teacher5, 1004 ).
freshman( 1001 ).
sophomore( 1002 ).
junior( 1003 ).
senior( 1004 ).
morning( 1001 ).
morning( 1003 ).
afternoon( 1002 ).
afternoon( 1004 ).
tth( 1001 ).
tth( 1003 ).
mwf( 1002 ).
mwf( 1004 ).

% rules
all_teaches_freshman( T ):- freshman( C ), teaches( T, C ).
teaches_freshman( T ):- 
    findall( X, all_teaches_freshman( X ), AX ), list_to_set( AX, T ).
all_teaches_sophomore( T ):- sophomore( C ), teaches( T, C ).
teaches_sophomore( T ):- 
    findall( X, all_teaches_sophomore( X ), AX ), list_to_set( AX, T ).
all_teaches_junior( T ):- junior( C ), teaches( T, C ).
teaches_junior( T ):- 
    findall( X, all_teaches_junior( X ), AX ), list_to_set( AX, T ).
all_teaches_senior( T ):- senior( C ), teaches( T, C ).
teaches_senior( T ):- 
    findall( X, all_teaches_senior( X ), AX ), list_to_set( AX, T ).
all_teaches_morning( T ):- morning( C ), teaches( T, C ).
teaches_morning( T ):- 
    findall( X, all_teaches_morning( X ), AX ), list_to_set( AX, T ).
all_teaches_afternoon( T ):- afternoon( C ), teaches( T, C ).
teaches_afternoon( T ):- 
    findall( X, all_teaches_afternoon( X ), AX ), list_to_set( AX, T ).
all_teaches_whole_day( T ):- 
    morning( MC ), 
    afternoon( AC ), 
    teaches( T, MC ),
    teaches( T, AC ).
teaches_whole_day( T ):- 
    findall( X, all_teaches_whole_day( X ), AX ), list_to_set( AX, T ).
all_works_mwf( T ):- mwf( C ), teaches( T, C ).
works_mwf( T ):- 
    findall( X, all_works_mwf( X ), AX ), list_to_set( AX, T ).
all_works_tth( T ):- tth( C ), teaches( T, C ).
works_tth( T ):- 
    findall( X, all_works_tth( X ), AX ), list_to_set( AX, T ).
all_teaches_three_classes( T ):- 
    teaches( T, C1 ),
    teaches( T, C2 ),
    teaches( T, C3 ),
    C1 \= C2,
    C1 \= C3,
    C2 \= C3.
teaches_three_classes( T ):- 
    findall( X, all_teaches_three_classes( X ), AX ), list_to_set( AX, T ).
