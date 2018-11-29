( define ( find_max fnc x1 x2 )
  ( if ( < ( - x2 x1 ) 0.000001 )
    ( / ( + x1 x2 ) 2 )
    ( let ( ( a1 ( + x1 ( / ( - x2 x1 ) 3 ) ) ) )
      ( let ( ( a2 ( - x2 ( / ( - x2 x1 ) 3 ) ) ) )
        ( if ( > ( fnc a1 ) ( fnc a2 ) ) 
          ( find_max fnc x1 a2 )
          ( find_max fnc a1 x2 )
        )
      )
    )
  )
)