#!/usr/bin/env guile
!#

((let ((fun (lambda (n)
              ((display "#define J_BIT"))
          (display n)
          (display "0x0")
          (display n)
          (newline))))
   (fun 8)))
