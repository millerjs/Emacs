
(define-minor-mode nav-mode
  "Fuck yea, navigation."
  :lighter " nav"
  :keymap (let ((map (make-sparse-keymap)))

            (define-key map (kbd "C-j") 'backward-word)
            (define-key map (kbd "C-k") 'forward-paragraph)
            (define-key map (kbd "C-l") 'forward-word)
            (define-key map (kbd "C-i") 'backward-paragraph)

            ;; (define-key map (kbd "j") 'backward-char)
            ;; (define-key map (kbd "k") 'next-line)
            ;; (define-key map (kbd "l") 'forward-char)
            ;; (define-key map (kbd "i") 'previous-line)

            map)
        (hl-line-mode))