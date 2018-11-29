( define ( max n )
  ( if ( null? ( cdr n ) )
    ( car n )
    ( let ( ( tail_max ( max ( cdr n ) ) ) )
      ( if ( > ( car n ) tail_max ) 
        ( car n )
        tail_max
      )
    )
  )
)

