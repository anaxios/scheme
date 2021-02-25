(use-modules (ice-9 match) (ice-9 ftw) (srfi srfi-1) (ice-9 format))

(define make-matrix
  (lambda (cols rows)
    (if (= rows cols)
	'()
	(cons (make-col cols
			rows)
	      (make-matrix cols
			   (+ rows 1))))))

(define (make-col n x)
    (if (< n 1)
      '()
      (cons (modulo x 25)
	    (make-col (- n 1) (+ x 1)))))

(define (show-matrix matrix)
  (for-each (lambda (x)
					; (format #t "~{~3,d~}" x)
	      (display x)
	      (newline))
	    matrix))


(show-matrix (make-matrix 25 0))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define (make-latin r c elem)
  (cons (cons r c)
	elem))

(define (bind-elem tup k)
  (let ((r (car (car tup)))
	(c (cdr (car tup)))
	(elem (cdr tup)))
    (cons (cons r c)
	  (k elem))))

(define (bind-r tup k)
  (let ((r (car (car tup)))
	(c (cdr (car tup)))
	(elem (cdr tup)))
    (cons (cons (k r) c)
	  elem)))

(define (bind-c tup k)
  (let ((r (car (car tup)))
	(c (cdr (car tup)))
	(elem (cdr tup)))
    (cons (cons r (k c))
	  elem)))

(define (pure-r tup)
  (let ((r (car (car tup)))
	(c (cdr (car tup)))
	(elem (cdr tup)))
    r))

(define (pure-c tup)
  (let ((r (car (car tup)))
	(c (cdr (car tup)))
	(elem (cdr tup)))
    c))

(define (pure-elem tup)
  (let ((r (car (car tup)))
	(c (cdr (car tup)))
	(elem (cdr tup)))
    elem))

(define make-latin-square
  (lambda (key)
    (define (make-col r c n key)
      (if (< n 1)
	  '()
	  (cons (make-row r
			  c
			  key)
		(make-col (+ r 1)
			  c
			  (- n 1)
			  (append (cdr key) (list (car key))))))) ;(append (cdr key) (car key))
    (define (make-row r c key)
      (if (null? key)
	  '()
	  (cons (make-latin r
			    c
			    (car key))
		(make-row r
			  (+ c 1)
			  (cdr key)))))
    (let ((n (length key)))
      (make-col 0
		0
		n
		key))))

(define (show-latin-square matrix)
  (define (repeat x n)
    (if (< n 1)
	'()
	(cons x
	      (repeat x (- n 1)))))
  (format #t "~{~a~}" (repeat "_" (* 2 (length (car matrix)))))
  (newline)
  (for-each (lambda (x)
	      (display #\|)
	      (format #t "~{~2,a~}" (map (lambda (y)
			      (pure-elem y))
			    x))
	      (newline))
	    matrix))

(show-latin-square (make-latin-square '(a b c d e f g h i j k l m n o p q r s t u v w k y z)))

(append (cdr '(a b d s)) (list (car '(a b d s))))
