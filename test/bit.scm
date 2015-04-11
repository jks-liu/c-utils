#!/usr/bin/env guile
!#

(import (rnrs (6)))

(use-modules (ice-9 format))

(letrec ((fun (lambda (n)
                (if (> n 0)
                    (fun (- n 1)))
                (format #t "#define BIT~d 0x~2,'0x\n" n (expt 2 n)))))
  (fun 7))
