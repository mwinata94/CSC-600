( define ( line n )
  ( if ( > n 0 )
    ( begin
      ( display "*" ) 
      ( line ( - n 1 ) ) 
    )
    ( newline )
  )
)

( define ( histogram n ) 
  ( if ( null? n )
    ( newline )
    ( begin
      ( line ( car n ) )
      ( histogram ( cdr n ) )
    )
  )
)
