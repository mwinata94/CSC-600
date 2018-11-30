( define  ( pow n p ) 
 ( exp ( * p ( log n ) ) )
)

; recursive sum of 1 / n ^ p until n = 1
( define ( sr n p )
  ( if ( < n 1 )
    0
    ( + ( pow ( / 1 n ) p ) ( sr ( - n 1 ) p ) )
  )
)

; iterative sum of 1 / n ^ p until n = 1
( define ( si n p )
  ( do ( ( i n ( - i 1 ) ) ( sum 0 ( + sum ( pow ( / 1 i ) p ) ) ) )
  ( ( < i 1 ) sum )
  )
)
