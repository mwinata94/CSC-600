( define ( found e lst )
  ( if ( equal? lst '() )
    #f
    ( if (equal? e  ( car lst ) )
      #t
      ( found e ( cdr lst ) )
    )
  )
)

( define ( set? lst )
  ( if (equal? lst '() )
    #t
    ( if ( found ( car lst ) ( cdr lst ) )
      #f
      ( set? ( cdr lst ) )
    )
  )
)

( define ( square? n )
  ( if ( integer? ( sqrt n ) )
    #t
    #f
  )
)

( define ( count2 lst )
  ( if ( equal? lst '() )
    0
    ( if ( square? ( car lst ) )
      ( + 1 ( count2 ( cdr lst ) ) )
      ( + 0 ( count2 ( cdr lst ) ) )
    )
  )
)

( define ( len lst )
  ( if ( equal? lst '() )
    0
    (+ 1 ( len ( cdr lst ) ) )
  )
)

( define ( allsquares? lst )
  ( if ( equal? lst '() )
    #t
    ( if ( square? ( car lst ) )
      ( allsquares? ( cdr lst ) )
      #f
    )
  )
)

( define ( sumsquares lst )
  ( if ( equal? lst '() )
    0
    ( if ( square? ( car lst ) )
      ( + ( car lst ) ( sumsquares ( cdr lst ) ) )
      ( + 0 ( sumsquares ( cdr lst ) ) )
    )
  )
)
