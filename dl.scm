(use-modules (ice-9 match) (ice-9 ftw) (srfi srfi-1) (ice-9 format))

;; (define (play-videoIO xs)
;;   (system* "mpv" xs))

;; (define (list-of-videosIO)
;;   (delete 0 (map (lambda (x) (cond ((video? x) x) (else 0)))
;; 	(scandir "/PARA/1-AREAS/youtube/MIT/SICP/watched/"))))

;; (define (video? x)
;;   (if (or (string-contains x ".mk4") (string-contains x ".mkv"))
;;       #t
;;       #f))
  
;; (play-videoIO (string-append "/PARA/1-AREAS/youtube/MIT/SICP/watched/" (car (list-of-videosIO))))

;; (map (lambda (x) x) (scandir "."))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;; (define make-Mstate
;;   (lambda (string)
;;     (cons string 0)))

;; (define State-bind
;;   (lambda (Mstring)
;;     (lambda (k)
;;       (cons (k (car Mstring))
;; 	    (cdr Mstring)))))
;; ((State-bind (make-Mstate "this is the thing to parse"))  (lambda (x) (string-append x "whatup")))
;; (define inc
;;   (lambda (Mstring)
;;     (cons (car Mstring)
;; 	  (+ (cdr Mstring) 1))))
;; (define i (make-Mstate "this is the thing to parse"))
;; (inc i)

;; (define State-pure
;;   (lambda (Mstring)
;;     Mstring))
;; (State-pure (inc i))
      
;; (write "hello")

;; (define parser
;;   (lambda (thing)
;;     (lambda (elem)
;;       (if (equal? thing elem)
;; 	  #t
;; 	  #f))))

;; (define not-parser
;;   (lambda (thing)
;;     (lambda (elem)
;;       (if (equal? thing elem)
;; 	  #f
;; 	  #t))))

;; (define parser-disjunction
;;   (lambda (parsers)
;;     (lambda (elem)
;;      (any identity (map (lambda (parser) (parser elem)) parsers)))))

;; (define parser-bracket? (parser #\{))
;; (define parser-space? (parser #\space))
;; (define parser-notword?
;;   (parser-disjunction (list parser-bracket? parser-space?)))

;; (define parser-alternative
;;   (lambda (toke)
;;     (lambda (elems)
;;       (let ((tokes (map parser (string->list toke)))
;; 	    (elems (string->list elems)))
;; 	;; (define iter
;; 	;;   (lambda (tokes elems)
;; 	    (if (not (list? tokes))
;; 		#f
;; 		(if (equal? (car tokes) (car elems))
;; 		    (cons (iter (cdr tokes) (cdr elems)))
;; 		    #f))))))

;; ((parser-alternative "These") "These")

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


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
