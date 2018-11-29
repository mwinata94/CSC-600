( define ( square x ) ( * x x ) )

( define ( sum x . y )
  ( if ( null? y )
      x
      ( + x ( apply sum y ) )
  )
)
( define ( square_sum x . y )
  ( if ( null? y )
    ( square x )
    ( + ( square x ) ( apply square_sum y ) )
  )
)
( define ( length x . y ) 
  ( if ( null? y )
    1
    ( + 1 ( apply length y ) )
  )
)
( define ( mean x . y )
  ( / 
    ( apply sum ( cons x y ) ) 
    ( apply length ( cons x y ) ) 
  )
)
( define ( square_mean x . y )
  ( / 
    ( apply square_sum ( cons x y ) ) 
    ( apply length ( cons x y ) ) 
  )
)
( define ( sigma x . y )
  ( sqrt (
    -
    ( apply square_mean ( cons x y ) )
    ( square ( apply mean ( cons x y ) ) )
  ) )
)
