//
// rm_error.h
//


#ifndef RM_ERROR_H
#define RM_ERROR_H

//
// Print-error function
//
void RM_PrintError(RC rc);
void PrintError(RC rc);

#define RM_LASTWARN START_RM_WARN

#define RM_SIZETOOBIG      (START_RM_ERR - 0)  // record size too big
#define RM_PF              (START_RM_ERR - 1)  // error in PF
#define RM_NULLRECORD      (START_RM_ERR - 2)  
#define RM_RECSIZEMISMATCH (START_RM_ERR - 3)  // record size mismatch
#define RM_HANDLEOPEN      (START_RM_ERR - 4)
#define RM_BADOPEN         (START_RM_ERR - 5)
#define RM_FNOTOPEN        (START_RM_ERR - 6)
#define RM_BAD_RID         (START_RM_ERR - 7)
#define RM_EOF             (START_RM_ERR - 8)  // end of file

#define RM_LASTERROR RM_EOF

#endif // RM_ERROR_H