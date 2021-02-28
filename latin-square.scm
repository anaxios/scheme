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
    (car (car tup)))

(define (pure-c tup)
  (cdr (car tup)))

(define (pure-elem tup)
  (cdr tup))

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
			  (append (cdr key) (list (car key)))))))
					
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
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define (encode-square keys)
  (define (exists? r c elem result) 
    (if (null? (filter (lambda (e)
			 (if (or (and (= (pure-r e) r)
				      (eq? (pure-elem e) elem))
				 (and (= (pure-c e) c)
				      (eq? (pure-elem e) elem)))
			       #t
			       #f))
		       result))
	#f
	#t))
  (define (next-r r c)
    (if (= c (1- (length keys)))
	(modulo (1+ r)
		(length keys))
	r))
  (define (next-c c)
    (modulo (+ c 1)
	    (length keys)))
  
  (define (try-next n)
    (+ n 1))
  
  ;; (define (look-ahead n result r c elem)
  ;;   (cond ((>= (length result) (expt (length keys) 2)) elem)
  ;; 	  ((> n (* (length keys) 2)) #f)
  ;; 	  (else (look-ahead (1+ n)
  ;; 			    (cons (make-latin r c (next-elem r c 0 result))
  ;; 			      result)
  ;; 			(next-r r c)
  ;; 			(next-c c)
  ;; 			elem))))
  
  (define (next-elem r c n matrix)
    (letrec ((elem (list-ref keys (modulo n (length keys)))))
      (cond ((not (exists? r c elem matrix))
	     elem)
	    ((> n (* (length keys) 2))
	     #nil)
	    (else
	     (next-elem r c (try-next n) matrix)))))
    
  (define (iter result r c)
    (cond ((>= (length result) (expt (length keys) 2))
	   result)
	  ((nil? (next-elem r c 0 result))
	   (iter (cons (make-latin r c '?)
		       result)
		 (next-r r c)
		 (next-c c)))
	  (else
	   (iter (cons (make-latin r c (next-elem r c 0 result))
		       result)
		 (next-r r c)
		 (next-c c)))))
  (iter '() 0 0))

(define (show-encoded matrix) 
  (define (iter matrix r)
    (letrec ((row (filter (lambda (e) (= (pure-r e) r)) (reverse matrix))))
      (if (null? row)
	  '()
	  (cons (map pure-elem row)
		(iter matrix (1+ r))))))
  (for-each (lambda (e) (display e) (newline))(iter matrix 0)))



(define mylist (list 'a 'b 'c 'd 'e 'f 'g
		      'h 'i 'j 'k 'l 'm 'n
		      'o 'p 'q 'r 's 't 'u
		      'v 'w 'x 'y 'z))

;(show-encoded (encode-square (list 'a 'b 'c 'd)))


;(show-encoded (encode-square mylist))


					; 00a 01b 02c 03d
					; 10b 11a 12d 13c
					; 20c 21d 22a 23b
					; 30d 31c 32b 33a
