#ifndef EGIT_BLOB_H
#define EGIT_BLOB_H

EGIT_DEFUN(blob_lookup, emacs_value _repo, emacs_value _oid);
EGIT_DEFUN(blob_lookup_prefix, emacs_value _repo, emacs_value _oid);

EGIT_DEFUN(blob_binary_p, emacs_value _blob);
EGIT_DEFUN(blob_filtered_content, emacs_value _blob, emacs_value _path, emacs_value ignore);
EGIT_DEFUN(blob_id, emacs_value _blob);
EGIT_DEFUN(blob_rawcontent, emacs_value _blob);
EGIT_DEFUN(blob_rawsize, emacs_value _blob);

#endif /* EGIT_BLOB_H */
