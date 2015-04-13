#!/usr/bin/env guile
!#

(import (rnrs (6)))

(use-modules (ice-9 format))

(letrec
    ([fun
      (lambda (n)
        (when (< n 64)
          (cond
           [(< n 8) (format #t "#define BIT~d 0x~2,'0x\n" n (expt 2 n))]
           [(< n 16) (format #t "#define BIT~d 0x~4,'0xu\n" n (expt 2 n))]
           [(< n 32) (format #t "#define BIT~d 0x~8,'0xul\n" n (expt 2 n))]
           [(< n 64) (format #t "#define BIT~d 0x~16,'0xull\n" n (expt 2 n))])
          (fun (+ n 1))))])
  (fun 0))
