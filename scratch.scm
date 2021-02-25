#! /usr/bin/csi -script

(define (make-binary x)

  (define mark-place
    (lambda (x place)
      (if (>= (- x place) 0)
	  1
	  0)))
  
  (define next
    (lambda (x place)
      (if (= (mark-place x place) 0)
	  x
	  (- x place))))
  
  (define place
    (lambda (x y)
      (if (>= y x)
	  y
	  (place x (* y 2)))))
  
  (define (iter x place)
    (if (= place 1)
	(list (mark-place x place))
	(cons (mark-place x place)
	      (iter (next x place) (/ place 2)))))
  (if (= (car (iter x (place x 1))) 0)
      (cdr (iter x (place x 1)))
      (iter x (place x 1))))

(print (make-binary 1648598754875938475349039407957))
(foldr string-append "" (map number->string (make-binary 1234567891011121314151617181920)))
(place 255 1)
(expt 2 16)
(/ 1 2)
