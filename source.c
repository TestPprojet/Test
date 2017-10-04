
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned long magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[43];
};
static const struct sqlcxp sqlfpn =
{
    42,
    "J:\\V34\\AsterSrv\\projets\\exploit\\exploit.pc"
};


static unsigned long sqlctx = 552030293;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
            void  *sqhstv[18];
   unsigned int   sqhstl[18];
            int   sqhsts[18];
            void  *sqindv[18];
            int   sqinds[18];
   unsigned int   sqharm[18];
   unsigned int   *sqharc[18];
   unsigned short  sqadto[18];
   unsigned short  sqtdso[18];
} sqlstm = {10,18};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned long *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned long *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, int *);

 static const char *sq0001 = 
"select numtrt ,nomprog ,(('\\\"'||replace(libprog,'''','\\\\\\'''))||'\\\"')\
 ,libprog ,type ,media_edt ,nvl(dir_prog,' ') ,nvl(dir_edt,' ') ,nvl(dir_dem,'\
 ') ,nvl(replace(destinataire,' ','-'),' ') ,nvl(imprimante,' ') ,nvl(orientat\
ion,' ') ,nvl(copies,1) ,nvl(cod_format,'XX') ,nvl(recto_verso,'X') ,nvl(sens_\
rv,'X') ,nvl(bac,'X') ,uti_cre  from b_traitement where (code_fin='P' and natu\
re='E') order by numtrt            ";

 static const char *sq0004 = 
"select b_paramtrt.nomparam ,NVL(b_paramtrt.param,DECODE(:b0,'B','\"\"',' '))\
  from b_paramtrt where b_paramtrt.numtrt=:b1 order by b_paramtrt.indpar      \
      ";

 static const char *sq0005 = 
"select b_batch.nomprog ,b_batch.libprog ,b_batch.type ,nvl(b_batch.dir_prog,\
' ') ,rc_declenche.num_ordre ,b_batch.media_edt ,nvl(b_batch.dir_edt,' ') ,nvl\
(b_batch.dir_dem,' ') ,nvl(b_batch.imprimante,' ') ,nvl(b_batch.orientation,' \
') ,nvl(b_batch.cod_format,'XX') ,nvl(b_batch.recto_verso,'X') ,nvl(b_batch.se\
ns_rv,'X') ,nvl(b_batch.bac,'X')  from b_batch ,rc_declenche ,sh_fonction wher\
e (((sh_fonction.cod_role=b_batch.nomprog and rc_declenche.ide_fct=sh_fonction\
.ide_fct) and rc_declenche.num_ordre>:b0) and rc_declenche.ide_chaine=:b1) ord\
er by rc_declenche.num_ordre            ";

 static const char *sq0007 = 
"select b_parambat.nomparam ,NVL(b_paramtrt.param,DECODE(:b0,'B','\"\"',' '))\
  from b_paramtrt ,b_parambat where ((b_paramtrt.nomparam(+)=b_parambat.nompar\
am and b_parambat.nomprog=:b1) and b_paramtrt.numtrt(+)=:b2) order by b_paramb\
at.indparlib            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4130,0,0,0,
5,0,0,1,416,0,9,521,0,0,0,0,0,1,0,
20,0,0,1,0,0,13,537,0,0,18,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,2,9,0,0,
107,0,0,1,0,0,15,640,0,0,0,0,0,1,0,
122,0,0,2,70,0,4,696,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
145,0,0,3,71,0,4,710,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
168,0,0,4,158,0,9,807,0,0,2,2,0,1,0,1,9,0,0,1,3,0,0,
191,0,0,4,0,0,13,820,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
214,0,0,4,0,0,15,842,0,0,0,0,0,1,0,
229,0,0,5,584,0,9,954,0,0,2,2,0,1,0,1,3,0,0,1,9,0,0,
252,0,0,5,0,0,13,969,0,0,14,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,
9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
323,0,0,5,0,0,15,1045,0,0,0,0,0,1,0,
338,0,0,5,584,0,9,1059,0,0,2,2,0,1,0,1,3,0,0,1,9,0,0,
361,0,0,6,71,0,4,1074,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
384,0,0,5,0,0,15,1097,0,0,0,0,0,1,0,
399,0,0,7,254,0,9,1294,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,68,0,0,
426,0,0,7,0,0,13,1308,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
449,0,0,7,0,0,15,1325,0,0,0,0,0,1,0,
};


/*
---------------------------------------------------------------------------
 Fichier         : exploit.pc
 Auteur          : B. BERKOVITCH (Sema)
 Date creation   : 29/12/99
---------------------------------------------------------------------------
 Version         : @(#) exploit version 2.1-1.4
---------------------------------------------------------------------------
 Auteur          : BBE
 Version         : @(#) exploit version 1.0-1.0 : BBE : 29/12/1999
 Date version    : 29/12/99
 Description     : Lancement des traitements postes (de type chaine de
                   traitements ou de type traitement simple)
---------------------------------------------------------------------------
 Auteur          : SNE
 Version         : @(#) exploit version 1.0-1.1 : SNE : 08/08/2000
 Date modif      : 03/07/2000
 Description     : CHG_BASE01 : Mise a niveau (evol. modele physique

 Date modif      : 08/08/2000
 Description     : CHG_RECUR : Ajout de la possibilite de lancer un traitemen
                   de type 'chaine' dans une chaine de traitement (recursion)
---------------------------------------------------------------------------
 Auteur          : SNE
 Version         : @(#) exploit version 2.0-1.2 : SNE : 13/12/2000
 Date modif      : 13/12/2000
 Description     : CHG_BASE01 : Bug : utilisation des caracteristiques de chaque traitement d'une chaine
---------------------------------------------------------------------------
  Parametres d'entree:
   - fichier log      : path absolu du fichier log general
   - instance         : nom de l'instance
   - user             : compte oracle pour acces a la base
   - fichier password : fichier contenant le password du compte oracle
   - repertoire log   : repertoire des fichiers log de chaine
   - indicateur de lancement des scripts de debut et fin:
           = D lancement du script de Debut uniquemen
           = F lancement du script de FIn uniquemen
           = A lancement d'Aucun scrip
           = T lancement de Tous les scripts
  - repertoire local : repertoire de l'executable et des shell de lancemen
   Historique	:							
	--------------------------------------------------------------------
		Fonction		|version	|Date	    |Initiales	|Commentaires 		
	--------------------------------------------------------------------
@(#)	exploit_batch 	|1.0-1.0	|29/12/1999 | BBE	| Creation 		
@(#)	exploit_batch 	|2.0-1.1	|03/07/2000 | SNE	| Mise a niveau (evol. base) 	
@(#)	exploit_batch 	|2.0-1.2	|08/08/2000 | SNE	| evol.- lancemt chaines (CHG_RECUR)
@(#)	exploit_batch 	|2.0-1.2	|08/08/2000 | SNE	| evol.- lancemt chaines (CHG_RECUR)
@(#)	exploit_batch 	|2.0-1.3	|13/12/2000 | SNE	| utilisation des caracteristiques de chaque traitement d'une chaine
@(#)	exploit_batch 	|2.1-1.4	|18/10/2001 | SNE	| Maj msg d'information sur la syntaxe
@(#)	exploit_batch 	|3.0-1.0	|08/04/2002 | NDY	| Ajout creation-suppression de variables globales de traitement (date systeme, niveau de trace)
---------------------------------------------------------------------------
*/

/* Les fichiers inclus */
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "../commun/commun.h"
#include "../commun/combase.h"

#define EXPLOIT_NOM_PROGRAMME		"EXPLOIT"
#define EXPLOIT_LIB_PROGRAMME		EXPLOIT_NOM_PROGRAMME " - lanceur des traitement de nuit"
#define EXPLOIT_VERSION_FICHIER		"1.4"

#define EXPLOIT_NOM_CODIQUE_PROG	"exploit"
#define EXPLOIT_CAR_DLIMITR_CHAINE	'\''
#define EXPLOIT_STR_DLIMITR_CHAINE	"\'\0"

/*
	====================================================================
	SNE, Definition des variables de fonciguration utilisees par exploit
	====================================================================
*/
#define EXPLOIT_VAR_FIC_UTIL	COMMUN_VAR_FIC_UTIL
#define EXPLOIT_VAR_REP_LOCAL	COMMUN_VAR_BATCH
#define EXPLOIT_VAR_REP_LOG		COMMUN_VAR_BATCH_LOG

#define EXPLOIT_VAR_FIC_LOG		"EXPLOIT_LOG"
#define EXPLOIT_VAR_IDLANC_DFLT	"EXPLOIT_LANCER"
#define EXPLOIT_VAR_EXPLOIT_DEB	"EXPLOIT_DEB"
#define EXPLOIT_VAR_EXPLOIT_FIN	"EXPLOIT_FIN"

#define EXPLOIT_COD_CODIF_ORIENT	"ORIENTATION"

/*
	====================================================================
	 SNE, 08/08/2000 : Adaptations : constantes et variables utilitaires 
	====================================================================
*/
#define EXPLOIT_OK						OK
#define EXPLOIT_AVERTISSEMENT			1
#define EXPLOIT_ERREUR_APPLICATIVE		2
#define EXPLOIT_ERREUR_GRAVE			KO

#define EXPLOIT_LG_NOMPROG				21
#define EXPLOIT_LG_LIBPROG				51
#define EXPLOIT_LG_TYPE					2
#define EXPLOIT_LG_DIR_PROG				61
#define EXPLOIT_LG_NOM_FICHIER			256
#define EXPLOIT_PAR_GEN_PREFIXE			0
#define EXPLOIT_PAR_GEN_SUFFIXE			1
#define EXPLOIT_BATC_CHAINE_TRT			"C"
#define EXPLOIT_IND_LANCE_SCRIPT_DEB	"D"
#define EXPLOIT_IND_LANCE_SCRIPT_FIN	"F"
#define EXPLOIT_IND_LANCE_AUCUN_SCRP	"A"
#define EXPLOIT_IND_LANCE_TOUS_SCRP		"T"

#define EXPLOIT_PARAM_FIC_CFG		1

#define EXPLOIT_PARAM_INSTANCE		2
#define EXPLOIT_PARAM_COD_UTIL		3
#define EXPLOIT_PARAM_IND_LANCE		4
#define EXPLOIT_PARAM_FIC_LOG		5
#define EXPLOIT_PARAM_FIC_UTIL		6
#define EXPLOIT_PARAM_REP_LOG		7
#define EXPLOIT_PARAM_REP_LOCAL		8
#define EXPLOIT_PARAM_FIC_ERR		9
#define EXPLOIT_PARAM_NIV_DEBUG		10


#define EXPLOIT_NBRE_PARAM_MIN		EXPLOIT_PARAM_IND_LANCE
#define EXPLOIT_NBRE_PARAM_MAX		EXPLOIT_PARAM_NIV_DEBUG


#define EXPLOIT_MSG_ERR_SYNTAXE	" %s <fichier cfg> <instance> <utilisateur> <indic. traitement> [<nom fic. log>] [<fichier utilisateurs>] [<rep. log>] [<rep. executables batch>] [<fichier erreur>] [<niveau trace>]==> niveau de gravite 5\n"
#define EXPLOIT_MSG_ERR_VAR_ENV	COMMUN_MSG_ERR_VAR_ENV


#define EXPLOIT_INF_DEMARRAGE	736
#define EXPLOIT_INF_LANCE		736

#define EXPLOIT_VAR_DATE_SYSTEME	"DATE_SYSTEME_VAR"
#define EXPLOIT_VAR_P_DAT_SYS		"P_DAT_SYS"
#define EXPLOIT_VAR_DATE_SYS_VAL	CBASE_VAR_DATE_SYS_VAL

#define EXPLOIT_VAR_NIVEAU_TRACE	"NIVEAU_TRACE_VAR"
#define EXPLOIT_VAR_P_NIV_TRACE	"P_NIV_TRACE"

/* EXEC SQL INCLUDE sqlca;
 */ 
/*
 * $Header: \Referentiel/aster v430x/distrib_poste/distribution/AsterSrv/projets/exploit/exploit.c,v 1.1 2010/02/02 08:52:58 ilaronde-cp Exp $ sqlca.h 
 */

/* Copyright (c) 1985,1986, 1998 by Oracle Corporation. */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */


typedef struct enr_b_traitement{
	int numtrt;
    char *nomprog;
    char *libprog1;
	char *libprog2;
	char *type;
	char *media_edt;
	char *dir_prog;
	char *dir_edt;
	char *dir_dem;
	char *destinataire;
	char *imprimante;
	char *orientation;
	char *copies;
	char *cod_format;
	char *recto_verso;
	char *sens_rv;
	char *bac;
	char *uti_maj;
} t_EXPLOIT_enr_b_traitement;

static char exploit_version_fichier[]="@(#) " EXPLOIT_LIB_PROGRAMME " version "COMMUN_VERSION_ASTER"-"EXPLOIT_VERSION_FICHIER" - "__DATE__ " "__TIME__;




/*
	====================================================================
	SNE, Declaration des variables globales (hors variables hotes SQL)
	====================================================================
*/
char exploit_log[EXPLOIT_LG_NOM_FICHIER];
char exploit_fic_log[EXPLOIT_LG_NOM_FICHIER];
char exploit_fichier_utilisateur[EXPLOIT_LG_NOM_FICHIER];
char exploit_fic_exec[EXPLOIT_LG_NOM_FICHIER];
char exploit_script_deb[EXPLOIT_LG_NOM_FICHIER];
char exploit_script_fin[EXPLOIT_LG_NOM_FICHIER];
char exploit_rep_log[EXPLOIT_LG_NOM_FICHIER]
	, exploit_rep_tmp[EXPLOIT_LG_NOM_FICHIER]
	, exploit_separateur_chemin[5]
    , exploit_rep_log[EXPLOIT_LG_NOM_FICHIER]
	, exploit_tmp[1000];
	;
char exploit_rep_local[EXPLOIT_LG_NOM_FICHIER];
char exploit_instance[COMMUN_LG_NOM_INSTANCE];
char exploit_user[41];
char exploit_dat_systeme[21] = "DD/MM/YYYY HH:MI:SS\0";
char exploit_dernier_message[COMMUN_LG_LIBL_ERR];
int exploit_retour;

COMMUN_t_contexte_exec exploit_ctx_exec;





/* fonction */
/* SNE, 08/08/2000 : Adaptations : Fonctions */
int  EXPLOIT_intRechParam(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_param);

int  EXPLOIT_intTraiterChaine(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_fic_log);
int  EXPLOIT_intRechParamfct(char *p_ligne_cmd, t_EXPLOIT_enr_b_traitement *p_enreg);

int  EXPLOIT_traiter_taches(void);
int	 EXPLOIT_traiter_une_tache(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_fic_log);
int  EXPLOIT_parametres_generaux(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_ligne_cmd, char *p_fic_log, int p_nbparam, int p_partie);
void EXPLOIT_formatte_param_trt(char *p_ligne_cmd, char *p_nom_param, char *p_val_param, t_EXPLOIT_enr_b_traitement *p_enreg);


/*
 ====================================================================================
   Nom 			: EXPLOIT_fin_prg
   Description 	: Cloture du traitement d'exploit
   Auteur		: Sofiane NEKERE
   Date creation: 15/02/2001 
   retour		:                                                     
					Aucun
   Historique	:
	---------------------------------------------------------------------------
	Fonction			|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_fin_prg	|29/02/2001 | SNE	| Creation (@fonction)
 ====================================================================================
*/
void EXPLOIT_fin_prg(int status)
{
  COMMUN_Date_du_jour(COMMUN_FRMT_EXT_F_LOG, exploit_dat_systeme);
  sprintf(exploit_log, "%s_%s.log", exploit_fic_log, exploit_dat_systeme);

  COMMUN_close_log(exploit_fic_log);
   /*--------------------------*/
   /* renommage du fichier log */
   /*--------------------------*/
    if (COMMUN_existe_fichier(exploit_fic_log) == COMMUN_CODE_FICHIER_EXISTANT) rename(exploit_fic_log, exploit_log);
	if (CBASE_deconnexion_base(OK) != OK)
	{
		exit(KO);
	}
   exit(status);
}


/*
 ====================================================================================
   Nom 			: main
   Description 	: Programme principal
   Auteur		: Sofiane NEKERE
   Date creation: 15/02/2001 
   retour		:                                                     
					Aucun
   Historique	:
	---------------------------------------------------------------------------
	Fonction			|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_fin_prg	|29/02/2001 | SNE	| Creation (@fonction)
 ====================================================================================
*/
main(argc,argv)
int  argc; 
char *argv[];
{
   char v_indlanc[2];
   char exploit_rep_local[EXPLOIT_LG_NOM_FICHIER];
   char v_nivdebug[2]="\0";

   /*------------------------*/
   /* Analyse des parametres */
   /*------------------------*/


  memset(&exploit_ctx_exec, 0, sizeof(COMMUN_t_contexte_exec));
  memset(exploit_dernier_message, 0, COMMUN_LG_LIBL_ERR);
  strcpy(exploit_ctx_exec.nom_programme, argv[0]);

  if ( argc < EXPLOIT_NBRE_PARAM_MIN || argc > EXPLOIT_NBRE_PARAM_MAX+1 ) {
    COMMUN_ecrit_log_var(COMMUN_BALISE_INFORMATIVE, "\n%s\n" , exploit_version_fichier+4);
    COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_SYNTAXE,  *argv);
    EXPLOIT_fin_prg(KO);
  }

  strcpy(exploit_ctx_exec.fichier_config, argv[EXPLOIT_PARAM_FIC_CFG]);
  strcpy(exploit_instance, argv[EXPLOIT_PARAM_INSTANCE]);
  strcpy(exploit_user, argv[EXPLOIT_PARAM_COD_UTIL]);

  if (argc > EXPLOIT_PARAM_IND_LANCE)
  	strcpy(v_indlanc,argv[EXPLOIT_PARAM_IND_LANCE]);
  if (strlen(v_indlanc) == 0)
      if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, EXPLOIT_VAR_IDLANC_DFLT, v_indlanc) != OK){
		COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_VAR_ENV, EXPLOIT_VAR_IDLANC_DFLT, exploit_ctx_exec.fichier_config);
		EXPLOIT_fin_prg(KO);
	}

  if (argc > EXPLOIT_PARAM_REP_LOCAL)
  	strcpy(exploit_rep_local, argv[EXPLOIT_PARAM_REP_LOCAL]);
  if (strlen(exploit_rep_local) == 0)
      if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, EXPLOIT_VAR_REP_LOCAL, exploit_rep_local) != OK){
		COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_VAR_ENV, EXPLOIT_VAR_REP_LOCAL, exploit_ctx_exec.fichier_config);
		EXPLOIT_fin_prg(KO);
	}

  if (argc > EXPLOIT_PARAM_REP_LOG)
   strcpy(exploit_rep_log,argv[EXPLOIT_PARAM_REP_LOG]);
  if (strlen(exploit_rep_log) == 0)
    if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, EXPLOIT_VAR_REP_LOG, exploit_rep_log) != OK){
		COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_VAR_ENV, EXPLOIT_VAR_REP_LOG, exploit_ctx_exec.fichier_config);
		EXPLOIT_fin_prg(KO);
	}

  if (argc > EXPLOIT_PARAM_FIC_LOG)
   strcpy(exploit_fic_log, argv[EXPLOIT_PARAM_FIC_LOG]);
  if (strlen(exploit_fic_log) == 0)
    if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, EXPLOIT_VAR_FIC_LOG, exploit_fic_log) != OK){
		COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_VAR_ENV, EXPLOIT_VAR_FIC_LOG, exploit_ctx_exec.fichier_config);
		EXPLOIT_fin_prg(KO);
	}

  if (argc > EXPLOIT_PARAM_FIC_UTIL)
  	strcpy(exploit_fichier_utilisateur, argv[EXPLOIT_PARAM_FIC_UTIL]);
  if (strlen(exploit_fichier_utilisateur) == 0) {
    if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, COMMUN_VAR_FIC_UTIL, exploit_fichier_utilisateur) != OK){
		COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_VAR_ENV, COMMUN_VAR_FIC_UTIL, exploit_ctx_exec.fichier_config);
		EXPLOIT_fin_prg(KO);
	}
  }

  if (argc > EXPLOIT_PARAM_FIC_ERR)
	 strcpy(exploit_ctx_exec.fichier_erreur, argv[EXPLOIT_PARAM_FIC_ERR]);
  if (strlen(exploit_ctx_exec.fichier_erreur) == 0){
    if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, COMMUN_VAR_FIC_ERR, exploit_ctx_exec.fichier_erreur) != OK){
		COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_VAR_ENV, COMMUN_VAR_FIC_ERR, exploit_ctx_exec.fichier_config);
		EXPLOIT_fin_prg(KO);
	}
  }

	if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, COMMUN_VAR_BATCH_TMP, exploit_rep_tmp) != OK){
		COMMUN_ecrit_log_var(COMMUN_BALISE_ERREUR, EXPLOIT_MSG_ERR_VAR_ENV, COMMUN_VAR_BATCH_TMP, exploit_ctx_exec.fichier_config);
		EXPLOIT_fin_prg(KO);
	}

  COMMUN_check_env(NULL, exploit_separateur_chemin, NULL, exploit_tmp);

  /* ajout V3.0 NDY 08/04/2002 */
  exploit_ctx_exec.niveau_debug = COMMUN_DEBUG_SANS_DEBUG;
  if (argc > EXPLOIT_PARAM_NIV_DEBUG) strcpy(v_nivdebug,argv[EXPLOIT_PARAM_NIV_DEBUG]);
  if (strlen(v_nivdebug) == 0) sprintf(v_nivdebug,"%d",exploit_ctx_exec.niveau_debug);

  exploit_ctx_exec.mode_trace = COMMUN_TRACE_DANS_FIC;
  COMMUN_init_param_execution(exploit_ctx_exec);

  if (COMMUN_open_log(exploit_fic_log, exploit_ctx_exec.nom_programme) != OK)
	COMMUN_open_log(NULL, exploit_ctx_exec.nom_programme);

  /* connection ORACLE */
  /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

  if ( CBASE_connexion_base(exploit_ctx_exec.fichier_config, exploit_instance, exploit_fichier_utilisateur, exploit_user) != TRT_OK){
    CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
    EXPLOIT_fin_prg(KO);
  }

/*
	SNE, Recherche des noms des scripts de debut et de fin
*/
   if ( (strcmp(v_indlanc, EXPLOIT_IND_LANCE_SCRIPT_DEB) == 0) || ( strcmp(v_indlanc, EXPLOIT_IND_LANCE_TOUS_SCRP) == 0) )
	   if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, EXPLOIT_VAR_EXPLOIT_DEB, exploit_script_deb) != OK)
			if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, COMMUN_VAR_CFG_PLTFM, EXPLOIT_VAR_EXPLOIT_DEB, exploit_script_deb) != OK){
				CBASE_affiche_message(COMMUN_ERR_VAL_VAR,  COMMUN_BALISE_ERREUR,  EXPLOIT_VAR_EXPLOIT_DEB,  NULL, NULL);
				EXPLOIT_fin_prg(KO);
			}

   if ( (strcmp(v_indlanc, EXPLOIT_IND_LANCE_SCRIPT_FIN) == 0) || ( strcmp(v_indlanc, EXPLOIT_IND_LANCE_TOUS_SCRP) == 0) )
	   if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, exploit_instance, EXPLOIT_VAR_EXPLOIT_FIN, exploit_script_fin) != OK)
			if (COMMUN_lire_info(exploit_ctx_exec.fichier_config, COMMUN_VAR_CFG_PLTFM, EXPLOIT_VAR_EXPLOIT_FIN, exploit_script_fin) != OK){
				CBASE_affiche_message(COMMUN_ERR_VAL_VAR,  COMMUN_BALISE_ERREUR,  EXPLOIT_VAR_EXPLOIT_FIN,  NULL, NULL);
				EXPLOIT_fin_prg(KO);
			}


   sprintf(exploit_tmp,"%s %s %s", exploit_log, exploit_user, v_indlanc);
   CBASE_affiche_message(EXPLOIT_INF_DEMARRAGE,  COMMUN_BALISE_INFORMATIVE,  exploit_tmp,  NULL, NULL);


   /* NDY 08/04/2002 V3.0 : creation des variables globales de traitement (date systeme et niveau de trace) */
   if ( CBASE_cree_var_trt(EXPLOIT_VAR_DATE_SYSTEME,EXPLOIT_VAR_P_DAT_SYS,EXPLOIT_VAR_DATE_SYS_VAL) != OK)
	   EXPLOIT_fin_prg(KO);
   if ( CBASE_cree_var_trt(EXPLOIT_VAR_NIVEAU_TRACE,EXPLOIT_VAR_P_NIV_TRACE,v_nivdebug) != OK)
	   EXPLOIT_fin_prg(KO);

   /*---------------------------------------------*/
   /* Execution du script de debut d'exploitation */
   /* si execution demandee au lancement          */
   /*---------------------------------------------*/
   if ( (strcmp(v_indlanc, EXPLOIT_IND_LANCE_SCRIPT_DEB) == 0) || ( strcmp(v_indlanc, EXPLOIT_IND_LANCE_TOUS_SCRP) == 0) )
   {
      if ( (exploit_retour = COMMUN_lancer_commande(exploit_script_deb, NULL, NULL)) != 0)
      {
		CBASE_affiche_message(COMMUN_ERR_TRT_BAT,  COMMUN_BALISE_ERREUR,  exploit_script_deb,  NULL, NULL);
        EXPLOIT_fin_prg(KO);
      }
   }


   /**************************************************************/
   /*                   Traitement des taches                    */
   /**************************************************************/
   if ( (exploit_retour = EXPLOIT_traiter_taches()) != OK)
	   EXPLOIT_fin_prg(KO);


   /*-------------------------------------------*/
   /* Execution du script de fin d'exploitation */
   /* si execution demandee au lancement        */
   /*-------------------------------------------*/
   if ( (strcmp(v_indlanc, EXPLOIT_IND_LANCE_SCRIPT_FIN) == 0) || ( strcmp(v_indlanc, EXPLOIT_IND_LANCE_TOUS_SCRP) == 0) )
   {
	  
      if ( (exploit_retour = COMMUN_lancer_commande(exploit_script_fin, NULL, NULL)) != 0)
      {
		CBASE_affiche_message(COMMUN_ERR_TRT_BAT,  COMMUN_BALISE_ERREUR,  exploit_script_fin,  NULL, NULL);
        EXPLOIT_fin_prg(KO);
      }
   }
   

   /* NDY 08/04/2002 V3.0 : suppresion des variables globales de traitement */
   if ( CBASE_supp_var_trt(EXPLOIT_VAR_DATE_SYSTEME) != OK)
	   EXPLOIT_fin_prg(KO);
   if ( CBASE_supp_var_trt(EXPLOIT_VAR_NIVEAU_TRACE) != OK)
	   EXPLOIT_fin_prg(KO);

	EXPLOIT_fin_prg(OK);


}  /* FIN DU PROGRAMME PRINCIPAL */


/*
 ====================================================================================
   Nom 			: EXPLOIT_traiter_taches
   Description 	: Fonction centrales de parcours et de traitement des taches en attente
   Auteur		: Sofiane NEKERE
   Date creation: 15/02/2001 
   retour		:                                                     
					Aucun
   Historique	:
	---------------------------------------------------------------------------
	Fonction					|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_traiter_une_tache	|15/02/2001 | SNE	| Creation (@fonction)
@(#) EXPLOIT_traiter_une_tache	|05/03/2001 | SNE	| Remplacement de uti_maj par uti_cre pour contourner
@(#) EXPLOIT_traiter_une_tache	|           |		| les MAJ effectuees par le scrutateur
 ====================================================================================
*/

int EXPLOIT_traiter_taches(void)
{


	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* table b_traitement */
	   int     trt_numtrt;
	   /* VARCHAR trt_nomprog[21]; */ 
struct { unsigned short len; unsigned char arr[21]; } trt_nomprog;

	   /* VARCHAR trt_libprog[51]; */ 
struct { unsigned short len; unsigned char arr[51]; } trt_libprog;

	   /* VARCHAR trt_libprog2[51]; */ 
struct { unsigned short len; unsigned char arr[51]; } trt_libprog2;

	   /* VARCHAR trt_type[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } trt_type;

	   /* VARCHAR trt_media_edt[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } trt_media_edt;

	   /* VARCHAR trt_dir_prog[61]; */ 
struct { unsigned short len; unsigned char arr[61]; } trt_dir_prog;

	   /* VARCHAR trt_dir_edt[61]; */ 
struct { unsigned short len; unsigned char arr[61]; } trt_dir_edt;

	   /* VARCHAR trt_dir_dem[61]; */ 
struct { unsigned short len; unsigned char arr[61]; } trt_dir_dem;

	   /* VARCHAR trt_destinataire[31]; */ 
struct { unsigned short len; unsigned char arr[31]; } trt_destinataire;

	   /* VARCHAR trt_imprimante[17]; */ 
struct { unsigned short len; unsigned char arr[17]; } trt_imprimante;

	   /* VARCHAR trt_orientation[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } trt_orientation;

	   /* VARCHAR trt_copies[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } trt_copies;

	   /* VARCHAR trt_format[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } trt_format;

	   /* VARCHAR trt_recto_verso[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } trt_recto_verso;

	   /* VARCHAR trt_sens_rv[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } trt_sens_rv;

	   /* VARCHAR trt_bac[21]; */ 
struct { unsigned short len; unsigned char arr[21]; } trt_bac;

	   /* VARCHAR trt_utimaj[13]; */ 
struct { unsigned short len; unsigned char arr[13]; } trt_utimaj;


	/* EXEC SQL END DECLARE SECTION; */ 


	t_EXPLOIT_enr_b_traitement v_enr_b_traitement;
	int retfct;
	int v_retour;
	char v_fic_log[256];
   /*---------------------------------*/
   /* Declaration des Curseurs ORACLE */
   /*---------------------------------*/


   /* Curseur de recherche des traitements postes de nature exploitation */
	/* EXEC SQL DECLARE c_b_traitement CURSOR FOR
      SELECT   numtrt, 
               nomprog, 
               '\"'||replace(libprog,'''','\\\''')||'\"',
               libprog,
               type,
               media_edt,
               nvl(dir_prog,' '),
               nvl(dir_edt,' '),
               nvl(dir_dem,' '),
               nvl(replace(destinataire, ' ', '-'), ' '),
               nvl(imprimante,' '),
               nvl(orientation,' '),
               nvl(copies,1),
               nvl(cod_format,'XX'),	/o SNE, 03/07/2000 : FORMT -COD_FORMATo/
               nvl(recto_verso,'X'),
               nvl(sens_rv,'X'),
               nvl(bac,'X'),
               uti_cre			/o SNE, 03/07/2000 : UTIMAJ - UTI_MAJ o/
      FROM     b_traitement
      WHERE    code_fin= 'P' AND
               nature = 'E'
      ORDER BY numtrt; */ 


   /*-------------------------------------------------------*/
   /* Ouverture curseur C_B_TRAITEMENT (Traitements postes) */
   /*-------------------------------------------------------*/
	/* EXEC SQL OPEN c_b_traitement; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0001;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

	if ( sqlca.sqlcode != 0 )
	{
	  CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
      return(KO);
	}
   /*-------------------------------------------*/
   /* boucle de parcours des traitements postes */
   /* tant qu'il n'y a pas d'erreur systeme     */
   /*-------------------------------------------*/
   retfct = 0;
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   while (retfct != 1)
   {
      retfct = 0;

      /* EXEC SQL FETCH c_b_traitement INTO 
         :trt_numtrt, :trt_nomprog, :trt_libprog, :trt_libprog2, :trt_type,
         :trt_media_edt, :trt_dir_prog, :trt_dir_edt, :trt_dir_dem,
         :trt_destinataire, :trt_imprimante, :trt_orientation, :trt_copies,
         :trt_format, :trt_recto_verso, :trt_sens_rv, :trt_bac, :trt_utimaj; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 18;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )20;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&trt_numtrt;
      sqlstm.sqhstl[0] = (unsigned int  )4;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&trt_nomprog;
      sqlstm.sqhstl[1] = (unsigned int  )23;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&trt_libprog;
      sqlstm.sqhstl[2] = (unsigned int  )53;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&trt_libprog2;
      sqlstm.sqhstl[3] = (unsigned int  )53;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&trt_type;
      sqlstm.sqhstl[4] = (unsigned int  )4;
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)0;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqhstv[5] = (         void  *)&trt_media_edt;
      sqlstm.sqhstl[5] = (unsigned int  )4;
      sqlstm.sqhsts[5] = (         int  )0;
      sqlstm.sqindv[5] = (         void  *)0;
      sqlstm.sqinds[5] = (         int  )0;
      sqlstm.sqharm[5] = (unsigned int  )0;
      sqlstm.sqadto[5] = (unsigned short )0;
      sqlstm.sqtdso[5] = (unsigned short )0;
      sqlstm.sqhstv[6] = (         void  *)&trt_dir_prog;
      sqlstm.sqhstl[6] = (unsigned int  )63;
      sqlstm.sqhsts[6] = (         int  )0;
      sqlstm.sqindv[6] = (         void  *)0;
      sqlstm.sqinds[6] = (         int  )0;
      sqlstm.sqharm[6] = (unsigned int  )0;
      sqlstm.sqadto[6] = (unsigned short )0;
      sqlstm.sqtdso[6] = (unsigned short )0;
      sqlstm.sqhstv[7] = (         void  *)&trt_dir_edt;
      sqlstm.sqhstl[7] = (unsigned int  )63;
      sqlstm.sqhsts[7] = (         int  )0;
      sqlstm.sqindv[7] = (         void  *)0;
      sqlstm.sqinds[7] = (         int  )0;
      sqlstm.sqharm[7] = (unsigned int  )0;
      sqlstm.sqadto[7] = (unsigned short )0;
      sqlstm.sqtdso[7] = (unsigned short )0;
      sqlstm.sqhstv[8] = (         void  *)&trt_dir_dem;
      sqlstm.sqhstl[8] = (unsigned int  )63;
      sqlstm.sqhsts[8] = (         int  )0;
      sqlstm.sqindv[8] = (         void  *)0;
      sqlstm.sqinds[8] = (         int  )0;
      sqlstm.sqharm[8] = (unsigned int  )0;
      sqlstm.sqadto[8] = (unsigned short )0;
      sqlstm.sqtdso[8] = (unsigned short )0;
      sqlstm.sqhstv[9] = (         void  *)&trt_destinataire;
      sqlstm.sqhstl[9] = (unsigned int  )33;
      sqlstm.sqhsts[9] = (         int  )0;
      sqlstm.sqindv[9] = (         void  *)0;
      sqlstm.sqinds[9] = (         int  )0;
      sqlstm.sqharm[9] = (unsigned int  )0;
      sqlstm.sqadto[9] = (unsigned short )0;
      sqlstm.sqtdso[9] = (unsigned short )0;
      sqlstm.sqhstv[10] = (         void  *)&trt_imprimante;
      sqlstm.sqhstl[10] = (unsigned int  )19;
      sqlstm.sqhsts[10] = (         int  )0;
      sqlstm.sqindv[10] = (         void  *)0;
      sqlstm.sqinds[10] = (         int  )0;
      sqlstm.sqharm[10] = (unsigned int  )0;
      sqlstm.sqadto[10] = (unsigned short )0;
      sqlstm.sqtdso[10] = (unsigned short )0;
      sqlstm.sqhstv[11] = (         void  *)&trt_orientation;
      sqlstm.sqhstl[11] = (unsigned int  )12;
      sqlstm.sqhsts[11] = (         int  )0;
      sqlstm.sqindv[11] = (         void  *)0;
      sqlstm.sqinds[11] = (         int  )0;
      sqlstm.sqharm[11] = (unsigned int  )0;
      sqlstm.sqadto[11] = (unsigned short )0;
      sqlstm.sqtdso[11] = (unsigned short )0;
      sqlstm.sqhstv[12] = (         void  *)&trt_copies;
      sqlstm.sqhstl[12] = (unsigned int  )4;
      sqlstm.sqhsts[12] = (         int  )0;
      sqlstm.sqindv[12] = (         void  *)0;
      sqlstm.sqinds[12] = (         int  )0;
      sqlstm.sqharm[12] = (unsigned int  )0;
      sqlstm.sqadto[12] = (unsigned short )0;
      sqlstm.sqtdso[12] = (unsigned short )0;
      sqlstm.sqhstv[13] = (         void  *)&trt_format;
      sqlstm.sqhstl[13] = (unsigned int  )5;
      sqlstm.sqhsts[13] = (         int  )0;
      sqlstm.sqindv[13] = (         void  *)0;
      sqlstm.sqinds[13] = (         int  )0;
      sqlstm.sqharm[13] = (unsigned int  )0;
      sqlstm.sqadto[13] = (unsigned short )0;
      sqlstm.sqtdso[13] = (unsigned short )0;
      sqlstm.sqhstv[14] = (         void  *)&trt_recto_verso;
      sqlstm.sqhstl[14] = (unsigned int  )4;
      sqlstm.sqhsts[14] = (         int  )0;
      sqlstm.sqindv[14] = (         void  *)0;
      sqlstm.sqinds[14] = (         int  )0;
      sqlstm.sqharm[14] = (unsigned int  )0;
      sqlstm.sqadto[14] = (unsigned short )0;
      sqlstm.sqtdso[14] = (unsigned short )0;
      sqlstm.sqhstv[15] = (         void  *)&trt_sens_rv;
      sqlstm.sqhstl[15] = (unsigned int  )4;
      sqlstm.sqhsts[15] = (         int  )0;
      sqlstm.sqindv[15] = (         void  *)0;
      sqlstm.sqinds[15] = (         int  )0;
      sqlstm.sqharm[15] = (unsigned int  )0;
      sqlstm.sqadto[15] = (unsigned short )0;
      sqlstm.sqtdso[15] = (unsigned short )0;
      sqlstm.sqhstv[16] = (         void  *)&trt_bac;
      sqlstm.sqhstl[16] = (unsigned int  )23;
      sqlstm.sqhsts[16] = (         int  )0;
      sqlstm.sqindv[16] = (         void  *)0;
      sqlstm.sqinds[16] = (         int  )0;
      sqlstm.sqharm[16] = (unsigned int  )0;
      sqlstm.sqadto[16] = (unsigned short )0;
      sqlstm.sqtdso[16] = (unsigned short )0;
      sqlstm.sqhstv[17] = (         void  *)&trt_utimaj;
      sqlstm.sqhstl[17] = (unsigned int  )15;
      sqlstm.sqhsts[17] = (         int  )0;
      sqlstm.sqindv[17] = (         void  *)0;
      sqlstm.sqinds[17] = (         int  )0;
      sqlstm.sqharm[17] = (unsigned int  )0;
      sqlstm.sqadto[17] = (unsigned short )0;
      sqlstm.sqtdso[17] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}


		if ( sqlca.sqlcode != 0 )
		{
			CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
			return(KO);
		}

		trt_nomprog.arr[trt_nomprog.len]='\0';
		trt_libprog.arr[trt_libprog.len]='\0';
		trt_libprog2.arr[trt_libprog2.len]='\0';
		trt_type.arr[trt_type.len]='\0';
		trt_media_edt.arr[trt_media_edt.len]='\0';
		trt_dir_prog.arr[trt_dir_prog.len]='\0';
		trt_dir_edt.arr[trt_dir_edt.len]='\0';
		trt_dir_dem.arr[trt_dir_dem.len]='\0';
		trt_destinataire.arr[trt_destinataire.len]='\0';
		trt_imprimante.arr[trt_imprimante.len]='\0';
		trt_orientation.arr[trt_orientation.len]='\0';
		trt_copies.arr[trt_copies.len]='\0';
		trt_format.arr[trt_format.len]='\0';
		trt_recto_verso.arr[trt_recto_verso.len]='\0';
		trt_sens_rv.arr[trt_sens_rv.len]='\0';
		trt_bac.arr[trt_bac.len]='\0';
		trt_utimaj.arr[trt_utimaj.len]='\0';

		v_enr_b_traitement.numtrt = trt_numtrt;
		v_enr_b_traitement.nomprog = trt_nomprog.arr;
		v_enr_b_traitement.libprog1 = trt_libprog.arr;
		v_enr_b_traitement.libprog2 = trt_libprog2.arr;
		v_enr_b_traitement.type = trt_type.arr;
		v_enr_b_traitement.media_edt = trt_media_edt.arr;
		v_enr_b_traitement.dir_prog = trt_dir_prog.arr;
		v_enr_b_traitement.dir_edt = trt_dir_edt.arr;
		v_enr_b_traitement.dir_dem = trt_dir_dem.arr;
		v_enr_b_traitement.destinataire = trt_destinataire.arr;
		v_enr_b_traitement.imprimante = trt_imprimante.arr;
		v_enr_b_traitement.orientation = trt_orientation.arr;
		v_enr_b_traitement.copies = trt_copies.arr;
		v_enr_b_traitement.cod_format = trt_format.arr;
		v_enr_b_traitement.recto_verso = trt_recto_verso.arr;
		v_enr_b_traitement.sens_rv = trt_sens_rv.arr;
		v_enr_b_traitement.bac = trt_bac.arr;
		v_enr_b_traitement.uti_maj = trt_utimaj.arr;




		sprintf(exploit_tmp,"%s (%s)", trt_libprog2.arr, trt_nomprog.arr);
		CBASE_affiche_message(EXPLOIT_INF_LANCE,  COMMUN_BALISE_INFORMATIVE,  exploit_tmp,  NULL, NULL);

		/*--------------------------------------------------*/
		/* Determination du nom du fichier log de la chaine */
		/*--------------------------------------------------*/
		COMMUN_Date_du_jour(COMMUN_FRMT_EXT_F_LOG, exploit_tmp);
		sprintf(v_fic_log, "%s%s%s_%s_%s.log", exploit_rep_log, exploit_separateur_chemin, trt_nomprog.arr, trt_utimaj.arr, exploit_tmp);

		/*-----------------------------------------------------*/
		/* MAJ de la table B_TRAITEMENT --> STATUT = L (lancé) */
		/*-----------------------------------------------------*/     
		//if (CBASE_change_etat_traitement(trt_numtrt, CBASE_CODE_PROG_POSTE, NULL, OK, NULL) != OK)
		   //return(KO);

		memset(exploit_dernier_message, 0, COMMUN_LG_LIBL_ERR);
		  /*----------------------------------
		   Cas des traitements de type chaine
		   -----------------------------------*/
		if ( strcmp(trt_type.arr, EXPLOIT_BATC_CHAINE_TRT) == 0)
		{
			v_retour = EXPLOIT_intTraiterChaine(&v_enr_b_traitement, v_fic_log) ;
			
		} /* FIN Cas des traitements de type chaine */
		else{
				v_retour = EXPLOIT_traiter_une_tache(&v_enr_b_traitement, v_fic_log);
		}

		if (v_retour == OK){
			CBASE_affiche_message(COMMUN_ERR_000007,  COMMUN_BALISE_INFORMATIVE,  v_enr_b_traitement.nomprog,  NULL, NULL);
			if (strlen(exploit_dernier_message) == 0)
	    		COMMUN_dernier_message_erreur(exploit_dernier_message);
		}

		if (v_retour != OK && strlen(exploit_dernier_message) == 0){
	    	COMMUN_dernier_message_erreur(exploit_dernier_message);
			CBASE_affiche_message(COMMUN_ERR_000029,  COMMUN_BALISE_ERREUR,  trt_nomprog.arr,  NULL, NULL);
			if (strlen(exploit_dernier_message) == 0)
				COMMUN_dernier_message_erreur(exploit_dernier_message);
		}

		if (CBASE_change_etat_traitement(trt_numtrt, CBASE_CODE_PROG_LANCE, NULL, v_retour, exploit_dernier_message) != OK)
			return(KO);

		if (v_retour == EXPLOIT_ERREUR_GRAVE)
			break;
	}	/* retcft != 1 */
   /*----------------------------------*/
   /* Fermeture curseur C_B_TRAITEMENT */
   /*----------------------------------*/
   /* EXEC SQL CLOSE c_b_traitement; */ 

{
   struct sqlexd sqlstm;

   sqlstm.sqlvsn = 10;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )107;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   if ( sqlca.sqlcode != 0 )
   {
		CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
		return(KO);
   }
   return(v_retour);
}



/*
 ====================================================================================
   Nom 			: EXPLOIT_traiter_une_tache
   Description 	: Traitement d'une ligne extraite de la liste des taches a traiter
   Auteur		: Sofiane NEKERE
   Date creation: 15/02/2001 
   retour		:                                                     
			<p_enreg> - caracteristiques de la tache en cours de traitement
			<p_fic_log> - Nom du fichier log a creer à l'issu du traitement
   Historique	:
	---------------------------------------------------------------------------
	Fonction					|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_traiter_une_tache	|15/02/2001 | SNE	| Creation (@fonction)
 ====================================================================================
*/

int EXPLOIT_traiter_une_tache(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_fic_log)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	   int nbparam;
	   int nbparambat;
	   /* VARCHAR sql_site_util[06]; */ 
struct { unsigned short len; unsigned char arr[6]; } sql_site_util;

	   /* VARCHAR v_sql_nomprog[21]; */ 
struct { unsigned short len; unsigned char arr[21]; } v_sql_nomprog;

	   int v_sql_numtrt;
	/* EXEC SQL END DECLARE SECTION; */ 

	char v_fcmd[1000];
	int v_retour = OK;
	
	memset(v_fcmd, 0, 1000);



    memset(sql_site_util.arr, 0, 06);
	memset(v_sql_nomprog.arr, 0, 21);
	v_sql_numtrt = p_enreg->numtrt;
	strcpy(v_sql_nomprog.arr, p_enreg->nomprog);
	v_sql_nomprog.len = strlen(v_sql_nomprog.arr);


         /*------------------------------------------------------------- */
         /* Recherche du nombre de parametres utilisateurs du traitement */
         /*------------------------------------------------------------- */

	 /* EXEC SQL WHENEVER NOT FOUND continue; */ 

     /* EXEC SQL SELECT COUNT(*) 
              INTO   :nbparam
              FROM   b_paramtrt
              WHERE  b_paramtrt.numtrt = :v_sql_numtrt; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 18;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select count(*)  into :b0  from b_paramtrt where b_param\
trt.numtrt=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )122;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&nbparam;
     sqlstm.sqhstl[0] = (unsigned int  )4;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&v_sql_numtrt;
     sqlstm.sqhstl[1] = (unsigned int  )4;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     if ( sqlca.sqlcode < 0 )
     {
		CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
		return(KO);
     }

     /*-------------------------------------------------------- */
     /* Recherche du nombre de parametres utilisateurs du batch */
     /*-------------------------------------------------------- */
     /* EXEC SQL WHENEVER NOT FOUND continue; */ 

     /* EXEC SQL SELECT COUNT(*) 
              INTO   :nbparambat
              FROM   b_parambat
              WHERE  b_parambat.nomprog = :v_sql_nomprog; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 18;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select count(*)  into :b0  from b_parambat where b_param\
bat.nomprog=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )145;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&nbparambat;
     sqlstm.sqhstl[0] = (unsigned int  )4;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&v_sql_nomprog;
     sqlstm.sqhstl[1] = (unsigned int  )23;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


     if ( sqlca.sqlcode < 0 )
     {
		CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
		return(KO);
     }

         /*-----------------------------------------------*/
         /* Controle que tous les parametres utilisateurs */
         /* du traitement sont valorises                  */
         /*-----------------------------------------------*/
     if ( nbparam < nbparambat )
     {
        sprintf(exploit_tmp, "%d\0", nbparam);
		CBASE_affiche_message(COMMUN_ERR_NBR_PRM,  COMMUN_BALISE_ERREUR,  exploit_tmp,  NULL, NULL);
		COMMUN_dernier_message_erreur(exploit_dernier_message);
		CBASE_change_etat_traitement(v_sql_numtrt, CBASE_CODE_PROG_LANCE, NULL, KO, exploit_dernier_message);
		return(EXPLOIT_ERREUR_APPLICATIVE);
     }
     else
     {

        /* ---------------------------------- */
        /* Traitement des parametres generaux */
        /* ---------------------------------- */
		/*
				SNE, Lancement par le lanceur
		*/

		if ((v_retour = EXPLOIT_parametres_generaux(p_enreg, v_fcmd, p_fic_log, nbparam, EXPLOIT_PAR_GEN_PREFIXE)) == OK)
			if ( (v_retour = EXPLOIT_intRechParam(p_enreg, v_fcmd)) == OK)
			{
				COMMUN_Date_du_jour(COMMUN_FRMT_EXT_F_LOG, exploit_dat_systeme);
				if ( (v_retour = EXPLOIT_parametres_generaux(p_enreg, v_fcmd, p_fic_log, nbparam, EXPLOIT_PAR_GEN_SUFFIXE)) == OK)
				{
					memset(exploit_dernier_message, 0, COMMUN_LG_LIBL_ERR);
					CBASE_affiche_message(EXPLOIT_INF_LANCE,  COMMUN_BALISE_INFORMATIVE,  v_fcmd,  NULL, NULL);
					v_retour = CBASE_lancer_traitement(p_enreg->nomprog, v_fcmd,  exploit_fic_exec, p_fic_log, COMMUN_VRAI, exploit_dernier_message);
				}
			}
	}
return(v_retour);
}


/*
 ====================================================================================
   Nom 		: EXPLOIT_intRechParam
   Description 	: Fonction de recherche des parametres d'un traitement
   Auteur	: Sofiane NEKERE
   Date creation: 08/08/2000
   retour		:                                                     
			<p_enreg> - caracteristiques de la tache en cours de traitement
			<p_ligne_cmd> - Chaine de caractère destinée aacceuillir les parametres en retour
						(les parametres sont ajoutes a la fin de la chaine)
   Historique	:
	---------------------------------------------------------------------------
	Fonction				|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_intRechParam	|08/08/2000 | SNE	| Creation (@fonction)
 ====================================================================================
*/
int EXPLOIT_intRechParam(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_ligne_cmd)
{

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* table b_paramtrt */
	   /* VARCHAR v_sql_nomparam[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_sql_nomparam;

	   /* VARCHAR v_sql_param[33]; */ 
struct { unsigned short len; unsigned char arr[33]; } v_sql_param;

	   int v_sql_numtrt;
	   /* VARCHAR v_sql_trt_type[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } v_sql_trt_type;

	/* EXEC SQL END DECLARE SECTION; */ 


	/*
		SNE, Recuperation des parametres de la requetes dans les variables hotes locales
	*/
	 v_sql_numtrt = p_enreg->numtrt;
	 memset(v_sql_trt_type.arr, 0, 2);
	 strcpy(v_sql_trt_type.arr, p_enreg->type);
	 v_sql_trt_type.len = strlen(v_sql_trt_type.arr);

   /* Curseur de recherche des parametres utilisateurs d'un traitement */
	/* EXEC SQL DECLARE c_b_paramtrt CURSOR FOR
      SELECT   b_paramtrt.nomparam,
               NVL(b_paramtrt.param,DECODE(:v_sql_trt_type,'B','""',' '))
      FROM     b_paramtrt
      WHERE    b_paramtrt.numtrt = :v_sql_numtrt
      ORDER BY b_paramtrt.indpar; */ 

     

            /*-----------------------------------------*/
            /* Ouverture curseur C_B_PARAMFCT          */
            /* (parametres utilisateurs du traitement) */
            /*-----------------------------------------*/
        /* EXEC SQL OPEN c_b_paramtrt; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 18;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0004;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )168;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&v_sql_trt_type;
        sqlstm.sqhstl[0] = (unsigned int  )4;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_sql_numtrt;
        sqlstm.sqhstl[1] = (unsigned int  )4;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if ( sqlca.sqlcode != 0 )
        {
			CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
			return(KO);
        }
   
            /*--------------------------------------------------------------*/
            /* boucle de parcours des parametres utilisateurs du traitement */
            /*--------------------------------------------------------------*/
       /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

        while (1)
        {
           /* EXEC SQL FETCH c_b_paramtrt INTO :v_sql_nomparam, :v_sql_param; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 18;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )191;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&v_sql_nomparam;
           sqlstm.sqhstl[0] = (unsigned int  )17;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&v_sql_param;
           sqlstm.sqhstl[1] = (unsigned int  )35;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqphss = sqlstm.sqhsts;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqpins = sqlstm.sqinds;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlstm.sqpadto = sqlstm.sqadto;
           sqlstm.sqptdso = sqlstm.sqtdso;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
           if (sqlca.sqlcode == 1403) break;
}


             
           v_sql_nomparam.arr[v_sql_nomparam.len]='\0';
           v_sql_param.arr[v_sql_param.len]='\0'; 
           
           if ( sqlca.sqlcode != 0 )
           {
				CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
				return(KO);
           }
			EXPLOIT_formatte_param_trt(p_ligne_cmd, v_sql_nomparam.arr, v_sql_param.arr, p_enreg);
           /* -----------------------------------------------*/
           /* Traitement des parametres utilisateurs REPORTS */
           /* Formatage : "PAR=xx yy zz"                     */           
           /* pour prendre en compte les parametres de type  */
           /* libelle par exemple                            */
           /* -----------------------------------------------*/
        } /* Fin boucle de parcours des parametres util. du traitement */
          
        /*--------------------------------*/
        /* Fermeture curseur C_B_PARAMTRT */
        /*--------------------------------*/
        /* EXEC SQL CLOSE c_b_paramtrt; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 18;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )214;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if ( sqlca.sqlcode != 0 )
        {
			CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
			return(KO);
        }
   return(OK);
}


/*
 ====================================================================================
   Nom 			: EXPLOIT_intTraiterChaine
   Description 	: Fonction de lancement des programmes d'une chaine de traitement
   Auteur		: Sofiane NEKERE
   Date creation: 08/08/2000
   retour		:                                                     
			<p_enreg> - caracteristiques de la tache en cours de traitement
			<p_fic_log> - Nom du fichier de trace (log)
   Historique	:
	---------------------------------------------------------------------------
	Fonction					|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_intTraiterChaine	|08/08/2000 | SNE	| Creation (@fonction)
 ====================================================================================
*/

int EXPLOIT_intTraiterChaine(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_fic_log)
{
   t_EXPLOIT_enr_b_traitement v_enreg_tache;
     
   int v_retsh;

   char v_destinataire[31];
   char v_copies[2];
   char v_utimaj[13];
   char v_fcmd[512];

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

/* table b_batch */
   /* VARCHAR v_sql_nomprog[21]; */ 
struct { unsigned short len; unsigned char arr[21]; } v_sql_nomprog;

   /* VARCHAR fct_nomprog[21]; */ 
struct { unsigned short len; unsigned char arr[21]; } fct_nomprog;

   /* VARCHAR fct_libprog[51]; */ 
struct { unsigned short len; unsigned char arr[51]; } fct_libprog;

   /* VARCHAR fct_type[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } fct_type;

   /* VARCHAR fct_dir_prog[61]; */ 
struct { unsigned short len; unsigned char arr[61]; } fct_dir_prog;


   /* VARCHAR fct_media_edt[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } fct_media_edt;

   /* VARCHAR fct_dir_edt[61]; */ 
struct { unsigned short len; unsigned char arr[61]; } fct_dir_edt;

   /* VARCHAR fct_dir_dem[61]; */ 
struct { unsigned short len; unsigned char arr[61]; } fct_dir_dem;

   /* VARCHAR fct_imprimante[17]; */ 
struct { unsigned short len; unsigned char arr[17]; } fct_imprimante;

   /* VARCHAR fct_orientation[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } fct_orientation;

   /* VARCHAR lib_orientation[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } lib_orientation;

   /* VARCHAR cod_orientation[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } cod_orientation;

   int ret;

   /* VARCHAR fct_format[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } fct_format;

   /* VARCHAR fct_recto_verso[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } fct_recto_verso;

   /* VARCHAR fct_sens_rv[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } fct_sens_rv;

   /* VARCHAR fct_bac[21]; */ 
struct { unsigned short len; unsigned char arr[21]; } fct_bac;


/* table rc_declenche */
   int     num_ordre;
   int v_sql_nbparam;
  fprintf(stdout,"OK TOTO");
   /* EXEC SQL END DECLARE SECTION; */ 


   /* Curseur de recherche des fonctions d'un traitement de type chaine */
   /* EXEC SQL DECLARE c_b_batch CURSOR FOR
      SELECT   b_batch.nomprog, 
			   b_batch.libprog,
               b_batch.type,
               nvl(b_batch.dir_prog,' '),
               rc_declenche.num_ordre,
/o	SNE, 13/12/2000 : Pour le traitement des chaines on rafraichit les caracteristiques pour chaque traitement o/
		   b_batch.media_edt,
               nvl(b_batch.dir_edt,' '),
               nvl(b_batch.dir_dem,' '),
               nvl(b_batch.imprimante,' '),
               nvl(b_batch.orientation,' '),
               nvl(b_batch.cod_format,'XX'),	
               nvl(b_batch.recto_verso,'X'),
               nvl(b_batch.sens_rv,'X'),
               nvl(b_batch.bac,'X')
/o SNE, 13/12/2000 : Fin des ajouts o/
      FROM     b_batch, rc_declenche, sh_fonction
      WHERE    sh_fonction.cod_role = b_batch.nomprog AND 
               rc_declenche.ide_fct = sh_fonction.ide_fct 
	  AND  rc_declenche.num_ordre > :num_ordre
          AND  rc_declenche.ide_chaine = :v_sql_nomprog  
      ORDER BY rc_declenche.num_ordre; */ 


	memset(&v_enreg_tache, 0, sizeof(t_EXPLOIT_enr_b_traitement));
    memset(v_destinataire, 0, 31);
    memset(v_copies,0, 2);
    memset(v_utimaj, 0, 13);
    strcpy(v_copies, p_enreg->copies);
    strcpy(v_utimaj, p_enreg->uti_maj);
	strcpy(v_destinataire, p_enreg->destinataire);

	memset(v_sql_nomprog.arr, 0, EXPLOIT_LG_NOMPROG);
	strcpy(v_sql_nomprog.arr, p_enreg->nomprog);
	v_sql_nomprog.len = strlen(v_sql_nomprog.arr);

         /*-----------------------------------------------*/
         /* Controle que tous les parametres utilisateurs */
         /* des traitements de la chaine sont valorises   */
         /*-----------------------------------------------*/
            /*--------------------------------------------------------*/
            /* Ouverture curseur C_B_BATCH (fonctions d'un traitement */
            /* de type chaine)                                        */
            /*--------------------------------------------------------*/
	num_ordre = -1;
    /* EXEC SQL OPEN c_b_batch; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 18;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0005;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )229;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&num_ordre;
    sqlstm.sqhstl[0] = (unsigned int  )4;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_sql_nomprog;
    sqlstm.sqhstl[1] = (unsigned int  )23;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    if ( sqlca.sqlcode != 0 )
    {
		CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
		return(KO);
    }
  fprintf(stdout,"OK TOTO2");   
            /*----------------------------------------------------------*/
            /* boucle de parcours des fonctions d'une chaine            */
            /* tant qu'il n'y a pas d'erreur (systeme ou fonctionnelle) */
            /*----------------------------------------------------------*/
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

    v_retsh = 0;
    while (1)
    {
           /* EXEC SQL FETCH c_b_batch INTO 
			  :fct_nomprog	
			, :fct_libprog	
			, :fct_type		
			, :fct_dir_prog	
			, :num_ordre	
   			, :fct_media_edt
   			, :fct_dir_edt
   			, :fct_dir_dem
   			, :fct_imprimante
   			, :fct_orientation
   			, :fct_format
   			, :fct_recto_verso
   			, :fct_sens_rv
   			, :fct_bac; */ 

{
           struct sqlexd sqlstm;

           sqlstm.sqlvsn = 10;
           sqlstm.arrsiz = 18;
           sqlstm.sqladtp = &sqladt;
           sqlstm.sqltdsp = &sqltds;
           sqlstm.iters = (unsigned int  )1;
           sqlstm.offset = (unsigned int  )252;
           sqlstm.cud = sqlcud0;
           sqlstm.sqlest = (unsigned char  *)&sqlca;
           sqlstm.sqlety = (unsigned short)256;
           sqlstm.occurs = (unsigned int  )0;
           sqlstm.sqhstv[0] = (         void  *)&fct_nomprog;
           sqlstm.sqhstl[0] = (unsigned int  )23;
           sqlstm.sqhsts[0] = (         int  )0;
           sqlstm.sqindv[0] = (         void  *)0;
           sqlstm.sqinds[0] = (         int  )0;
           sqlstm.sqharm[0] = (unsigned int  )0;
           sqlstm.sqadto[0] = (unsigned short )0;
           sqlstm.sqtdso[0] = (unsigned short )0;
           sqlstm.sqhstv[1] = (         void  *)&fct_libprog;
           sqlstm.sqhstl[1] = (unsigned int  )53;
           sqlstm.sqhsts[1] = (         int  )0;
           sqlstm.sqindv[1] = (         void  *)0;
           sqlstm.sqinds[1] = (         int  )0;
           sqlstm.sqharm[1] = (unsigned int  )0;
           sqlstm.sqadto[1] = (unsigned short )0;
           sqlstm.sqtdso[1] = (unsigned short )0;
           sqlstm.sqhstv[2] = (         void  *)&fct_type;
           sqlstm.sqhstl[2] = (unsigned int  )4;
           sqlstm.sqhsts[2] = (         int  )0;
           sqlstm.sqindv[2] = (         void  *)0;
           sqlstm.sqinds[2] = (         int  )0;
           sqlstm.sqharm[2] = (unsigned int  )0;
           sqlstm.sqadto[2] = (unsigned short )0;
           sqlstm.sqtdso[2] = (unsigned short )0;
           sqlstm.sqhstv[3] = (         void  *)&fct_dir_prog;
           sqlstm.sqhstl[3] = (unsigned int  )63;
           sqlstm.sqhsts[3] = (         int  )0;
           sqlstm.sqindv[3] = (         void  *)0;
           sqlstm.sqinds[3] = (         int  )0;
           sqlstm.sqharm[3] = (unsigned int  )0;
           sqlstm.sqadto[3] = (unsigned short )0;
           sqlstm.sqtdso[3] = (unsigned short )0;
           sqlstm.sqhstv[4] = (         void  *)&num_ordre;
           sqlstm.sqhstl[4] = (unsigned int  )4;
           sqlstm.sqhsts[4] = (         int  )0;
           sqlstm.sqindv[4] = (         void  *)0;
           sqlstm.sqinds[4] = (         int  )0;
           sqlstm.sqharm[4] = (unsigned int  )0;
           sqlstm.sqadto[4] = (unsigned short )0;
           sqlstm.sqtdso[4] = (unsigned short )0;
           sqlstm.sqhstv[5] = (         void  *)&fct_media_edt;
           sqlstm.sqhstl[5] = (unsigned int  )4;
           sqlstm.sqhsts[5] = (         int  )0;
           sqlstm.sqindv[5] = (         void  *)0;
           sqlstm.sqinds[5] = (         int  )0;
           sqlstm.sqharm[5] = (unsigned int  )0;
           sqlstm.sqadto[5] = (unsigned short )0;
           sqlstm.sqtdso[5] = (unsigned short )0;
           sqlstm.sqhstv[6] = (         void  *)&fct_dir_edt;
           sqlstm.sqhstl[6] = (unsigned int  )63;
           sqlstm.sqhsts[6] = (         int  )0;
           sqlstm.sqindv[6] = (         void  *)0;
           sqlstm.sqinds[6] = (         int  )0;
           sqlstm.sqharm[6] = (unsigned int  )0;
           sqlstm.sqadto[6] = (unsigned short )0;
           sqlstm.sqtdso[6] = (unsigned short )0;
           sqlstm.sqhstv[7] = (         void  *)&fct_dir_dem;
           sqlstm.sqhstl[7] = (unsigned int  )63;
           sqlstm.sqhsts[7] = (         int  )0;
           sqlstm.sqindv[7] = (         void  *)0;
           sqlstm.sqinds[7] = (         int  )0;
           sqlstm.sqharm[7] = (unsigned int  )0;
           sqlstm.sqadto[7] = (unsigned short )0;
           sqlstm.sqtdso[7] = (unsigned short )0;
           sqlstm.sqhstv[8] = (         void  *)&fct_imprimante;
           sqlstm.sqhstl[8] = (unsigned int  )19;
           sqlstm.sqhsts[8] = (         int  )0;
           sqlstm.sqindv[8] = (         void  *)0;
           sqlstm.sqinds[8] = (         int  )0;
           sqlstm.sqharm[8] = (unsigned int  )0;
           sqlstm.sqadto[8] = (unsigned short )0;
           sqlstm.sqtdso[8] = (unsigned short )0;
           sqlstm.sqhstv[9] = (         void  *)&fct_orientation;
           sqlstm.sqhstl[9] = (unsigned int  )12;
           sqlstm.sqhsts[9] = (         int  )0;
           sqlstm.sqindv[9] = (         void  *)0;
           sqlstm.sqinds[9] = (         int  )0;
           sqlstm.sqharm[9] = (unsigned int  )0;
           sqlstm.sqadto[9] = (unsigned short )0;
           sqlstm.sqtdso[9] = (unsigned short )0;
           sqlstm.sqhstv[10] = (         void  *)&fct_format;
           sqlstm.sqhstl[10] = (unsigned int  )5;
           sqlstm.sqhsts[10] = (         int  )0;
           sqlstm.sqindv[10] = (         void  *)0;
           sqlstm.sqinds[10] = (         int  )0;
           sqlstm.sqharm[10] = (unsigned int  )0;
           sqlstm.sqadto[10] = (unsigned short )0;
           sqlstm.sqtdso[10] = (unsigned short )0;
           sqlstm.sqhstv[11] = (         void  *)&fct_recto_verso;
           sqlstm.sqhstl[11] = (unsigned int  )4;
           sqlstm.sqhsts[11] = (         int  )0;
           sqlstm.sqindv[11] = (         void  *)0;
           sqlstm.sqinds[11] = (         int  )0;
           sqlstm.sqharm[11] = (unsigned int  )0;
           sqlstm.sqadto[11] = (unsigned short )0;
           sqlstm.sqtdso[11] = (unsigned short )0;
           sqlstm.sqhstv[12] = (         void  *)&fct_sens_rv;
           sqlstm.sqhstl[12] = (unsigned int  )4;
           sqlstm.sqhsts[12] = (         int  )0;
           sqlstm.sqindv[12] = (         void  *)0;
           sqlstm.sqinds[12] = (         int  )0;
           sqlstm.sqharm[12] = (unsigned int  )0;
           sqlstm.sqadto[12] = (unsigned short )0;
           sqlstm.sqtdso[12] = (unsigned short )0;
           sqlstm.sqhstv[13] = (         void  *)&fct_bac;
           sqlstm.sqhstl[13] = (unsigned int  )23;
           sqlstm.sqhsts[13] = (         int  )0;
           sqlstm.sqindv[13] = (         void  *)0;
           sqlstm.sqinds[13] = (         int  )0;
           sqlstm.sqharm[13] = (unsigned int  )0;
           sqlstm.sqadto[13] = (unsigned short )0;
           sqlstm.sqtdso[13] = (unsigned short )0;
           sqlstm.sqphsv = sqlstm.sqhstv;
           sqlstm.sqphsl = sqlstm.sqhstl;
           sqlstm.sqphss = sqlstm.sqhsts;
           sqlstm.sqpind = sqlstm.sqindv;
           sqlstm.sqpins = sqlstm.sqinds;
           sqlstm.sqparm = sqlstm.sqharm;
           sqlstm.sqparc = sqlstm.sqharc;
           sqlstm.sqpadto = sqlstm.sqadto;
           sqlstm.sqptdso = sqlstm.sqtdso;
           sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
           if (sqlca.sqlcode == 1403) break;
}


		

              if ( sqlca.sqlcode != 0 )
              {
					CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
					return(KO);
              }

			fct_nomprog.arr[fct_nomprog.len]='\0';
			fct_libprog.arr[fct_libprog.len]='\0';
			fct_type.arr[fct_type.len]='\0';
			fct_media_edt.arr[fct_media_edt.len]='\0';
			fct_dir_prog.arr[fct_dir_prog.len]='\0';
			fct_dir_edt.arr[fct_dir_edt.len]='\0';
			fct_dir_dem.arr[fct_dir_dem.len]='\0';
			fct_imprimante.arr[fct_imprimante.len]='\0';
			fct_orientation.arr[fct_orientation.len]='\0';
			fct_format.arr[fct_format.len]='\0';
			fct_recto_verso.arr[fct_recto_verso.len]='\0';
			fct_sens_rv.arr[fct_sens_rv.len]='\0';
			fct_bac.arr[fct_bac.len]='\0';

			/*
				SNE, Pour les editions on a besoin de decoder la presentation
			*/
			memset(lib_orientation.arr, 0, 80);
			memset(cod_orientation.arr, 0, 80);
			cod_orientation.len = lib_orientation.len = 0;
			if ( strcmp(fct_type.arr, COMMUN_CODE_TYP_PRG_EDIT) == 0 ){
				if (CBASE_get_codif(EXPLOIT_COD_CODIF_ORIENT, fct_orientation.arr, lib_orientation.arr, cod_orientation.arr, CBASE_RECH_CODEXT) != OK)
					return KO;
			}
  fprintf(stdout,"OK TOTO3");
			lib_orientation.len=strlen(lib_orientation.arr);
			cod_orientation.len=strlen(cod_orientation.arr);

			v_enreg_tache.numtrt = p_enreg->numtrt;
			v_enreg_tache.nomprog = fct_nomprog.arr;
			v_enreg_tache.libprog1 = fct_libprog.arr;
			v_enreg_tache.libprog2 = fct_libprog.arr;
			v_enreg_tache.type = fct_type.arr;
			v_enreg_tache.media_edt = fct_media_edt.arr;
			v_enreg_tache.dir_prog = fct_dir_prog.arr;
			v_enreg_tache.dir_edt = fct_dir_edt.arr;
			v_enreg_tache.dir_dem = fct_dir_dem.arr;
			v_enreg_tache.destinataire = v_destinataire;
			v_enreg_tache.imprimante = fct_imprimante.arr;
			v_enreg_tache.orientation = cod_orientation.arr;
			v_enreg_tache.copies = v_copies;
			v_enreg_tache.cod_format = fct_format.arr;
			v_enreg_tache.recto_verso = fct_recto_verso.arr;
			v_enreg_tache.sens_rv = fct_sens_rv.arr;
			v_enreg_tache.bac = fct_bac.arr;
			v_enreg_tache.uti_maj = v_utimaj;



		   ret=0;

           if ( strcmp(fct_type.arr, EXPLOIT_BATC_CHAINE_TRT) == 0 )
		   {
				/* EXEC SQL CLOSE c_b_batch; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 18;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )323;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


               	if ( sqlca.sqlcode != 0 )
              	{
					CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
					return(KO);
		   		}

				/* SNE : On traite la sous-chaine par un appel recursif */
				if ( (v_retsh = EXPLOIT_intTraiterChaine(&v_enreg_tache, p_fic_log)) == OK){
  					/* 
						SNE : On restitue le contexte du traitement precedent
					*/ 
					strcpy(v_sql_nomprog.arr, p_enreg->nomprog);
					v_sql_nomprog.len = strlen(v_sql_nomprog.arr);
					/* EXEC SQL OPEN c_b_batch; */ 

{
     struct sqlexd sqlstm;

     sqlstm.sqlvsn = 10;
     sqlstm.arrsiz = 18;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = sq0005;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )338;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&num_ordre;
     sqlstm.sqhstl[0] = (unsigned int  )4;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&v_sql_nomprog;
     sqlstm.sqhstl[1] = (unsigned int  )23;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


               		if ( sqlca.sqlcode != 0 )
               		{
						CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
						return(KO);
		   			}
				}
			}
			else
			{
			   /*------------------------------------------------*/
			   /* Recherche du nombre de parametres utilisateurs */
			   /* de la fonction                                 */
			   /*------------------------------------------------*/
			   /* EXEC SQL WHENEVER NOT FOUND continue; */ 

			   /* EXEC SQL SELECT COUNT(*) 
						INTO   :v_sql_nbparam
						FROM   b_parambat
						WHERE  b_parambat.nomprog = :fct_nomprog; */ 

{
      struct sqlexd sqlstm;

      sqlstm.sqlvsn = 10;
      sqlstm.arrsiz = 18;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select count(*)  into :b0  from b_parambat where b_parambat.nomprog=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )361;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&v_sql_nbparam;
      sqlstm.sqhstl[0] = (unsigned int  )4;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&fct_nomprog;
      sqlstm.sqhstl[1] = (unsigned int  )23;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

fprintf(stdout,"OK TOTO4");

			   if ( sqlca.sqlcode < 0 )
			   {
				   						fprintf(stdout,"OK TOTO5");
					CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
					return(KO);
			   }
			   fprintf(stdout,"OK TOTO6");
			   fprintf(stdout,"OK TOTO6.5");
				if ((v_retsh = EXPLOIT_parametres_generaux(&v_enreg_tache, v_fcmd, p_fic_log, v_sql_nbparam, EXPLOIT_PAR_GEN_PREFIXE)) == OK)
					fprintf(stdout,"OK TOTO7");
					if ((v_retsh = EXPLOIT_intRechParamfct(v_fcmd, &v_enreg_tache)) == OK)
					{
						if ( (v_retsh = EXPLOIT_parametres_generaux(&v_enreg_tache, v_fcmd, p_fic_log, v_sql_nbparam, EXPLOIT_PAR_GEN_SUFFIXE)) == OK)
						{
							memset(exploit_dernier_message, 0, COMMUN_LG_LIBL_ERR);
							CBASE_affiche_message(EXPLOIT_INF_LANCE,  COMMUN_BALISE_INFORMATIVE,  v_fcmd,  NULL, NULL);
							v_retsh = CBASE_lancer_traitement(v_enreg_tache.nomprog, v_fcmd,  exploit_fic_exec, p_fic_log, COMMUN_VRAI, exploit_dernier_message);
						}
					}
			}
		
		if (v_retsh == COMMUN_ERREUR_GRAVE || v_retsh == COMMUN_ERREUR_APPLICATIVE) break;
    } /* FIN boucle de parcours des fonctions d'une chaine */
	/* EXEC SQL CLOSE c_b_batch; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )384;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


fprintf(stdout,"OK TOTO10");
   return(v_retsh);
}


/*
 ====================================================================================
   Nom 			: EXPLOIT_parametres_generaux
   Description 	: Renseignement de la ligne de commande pour le lancement d'un traitement
				: Cette fonction renseigne les parametres communs a tous les traitements
   Auteur		: Sofiane NEKERE
   Date creation: 08/08/2000
   retour		:                                                     
			<p_enreg> - caracteristiques de la tache en cours de traitement
			<p_ligne_cmd> - Ligne de commande a modifier
			<p_fic_log> - Nom du fichier de trace (log)
			<p_nbparam>	- Nombre de parametres attendus pour le traitement
			<p_partie>	- type d'information a fournir:
			    * EXPLOIT_PAR_GEN_PREFIXE : Informations a mettre avant les parametres fonctionnels du
											traitement appele
				* EXPLOIT_PAR_GEN_SUFFIXE : Informations a mettre apres les parametres fonctionnels du
						traitement appele
   Historique	:
	---------------------------------------------------------------------------
	Fonction						|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_parametres_generaux	|08/08/2000 | SNE	| Creation (@fonction)
 ====================================================================================
*/
int EXPLOIT_parametres_generaux(t_EXPLOIT_enr_b_traitement *p_enreg, char *p_ligne_cmd, char *p_fic_log, int p_nbparam, int p_partie)
{
	char v_passwd_util[31];
    char v_fic_edt[EXPLOIT_LG_NOM_FICHIER];
fprintf(stdout,"OK TITI");
            /* -------------------------------------------*/
            /* Traitement des parametres generaux REPORTS */
            /* -------------------------------------------*/
	switch(p_partie){
		case EXPLOIT_PAR_GEN_PREFIXE:
			sprintf(exploit_fic_exec, "%s%s%s_%s_%s" COMMUN_CHAINE_SEP_1_POINT COMMUN_EXTENSION_FIC_SHELL "\0", exploit_rep_tmp, exploit_separateur_chemin, EXPLOIT_NOM_CODIQUE_PROG, p_enreg->uti_maj, exploit_dat_systeme);
			memset(exploit_fic_exec, 0, EXPLOIT_LG_NOM_FICHIER);
			if (CBASE_decrypt_mot_depasse(p_enreg->uti_maj, v_passwd_util) != OK)
				return(EXPLOIT_ERREUR_APPLICATIVE);

			memset(v_fic_edt, 0, EXPLOIT_LG_NOM_FICHIER);
			sprintf(p_ligne_cmd, COMMUN_CMD_RUN_CMD "" COMMUN_LANCEUR_ASTER" %s %s %s %s %s %d %s %s %s \"%s\" %d\0", exploit_ctx_exec.fichier_erreur, exploit_ctx_exec.fichier_config, exploit_instance, p_enreg->uti_maj, v_passwd_util, p_enreg->numtrt, p_enreg->nomprog, p_enreg->type, p_enreg->dir_prog, p_enreg->libprog1, p_nbparam);
fprintf(stdout,"OK TITI2");
			if ( strcmp(p_enreg->type, COMMUN_CODE_TYP_PRG_EDIT) == 0 )
			{
				   /* Sortie fichier */
				   if (strcmp(p_enreg->media_edt, COMMUN_DST_TRT_FICHIER) == 0 )
				   {

						COMMUN_Date_du_jour(COMMUN_FRMT_EXT_F_LOG, exploit_dat_systeme);
						sprintf(v_fic_edt, "%s%s%s_%s_%s_%s" COMMUN_CHAINE_SEP_1_POINT COMMUN_EXTENSION_FIC_EDIT,  p_enreg->dir_edt
										, exploit_separateur_chemin
										, p_enreg->nomprog
										, p_enreg->destinataire 
										, p_enreg->uti_maj
										, exploit_dat_systeme); 
						strcat(p_ligne_cmd," DESTYPE=FILE\0");
						strcat(p_ligne_cmd," DESNAME=\0");
						strcat(p_ligne_cmd,v_fic_edt);
						strcat(p_ligne_cmd," DESFORMAT=\0");
						strcat(p_ligne_cmd,p_enreg->imprimante);
				   }
				   /* Sortie imprimante */
				   else
				   {
					  strcat(p_ligne_cmd," DESTYPE=printer\0");
					  strcat(p_ligne_cmd," DESNAME=\0");
					  strcat(p_ligne_cmd,p_enreg->imprimante);
					  strcat(p_ligne_cmd," DESFORMAT=dflt\0");
				   }
				   strcat(p_ligne_cmd," ORIENTATION=\0");
				   strcat(p_ligne_cmd,p_enreg->orientation);
				   strcat(p_ligne_cmd," COPIES=\0");
				   strcat(p_ligne_cmd,p_enreg->copies); 
				   strcat(p_ligne_cmd," ");
				   strcat(p_ligne_cmd,p_enreg->cod_format);
				   strcat(p_ligne_cmd," ");
				   strcat(p_ligne_cmd,p_enreg->recto_verso);
				   strcat(p_ligne_cmd," ");
				   strcat(p_ligne_cmd,p_enreg->sens_rv);
				   strcat(p_ligne_cmd," ");
				   strcat(p_ligne_cmd,p_enreg->bac);
			}
		break;
		case EXPLOIT_PAR_GEN_SUFFIXE:
			strcat(p_ligne_cmd," \"");
			strcat(p_ligne_cmd, p_fic_log);
			strcat(p_ligne_cmd,"\" \"");
			strcat(p_ligne_cmd, exploit_user);
			strcat(p_ligne_cmd,"\" \"");
			strcat(p_ligne_cmd, exploit_fichier_utilisateur);
			strcat(p_ligne_cmd,"\"");
		break;
	}
 return OK;
}


/*
 ====================================================================================
   Nom 			: EXPLOIT_formatte_param_trt
   Description 	: Formattage des parametres de la ligne de commande du traitement 
   Auteur		: Sofiane NEKERE
   Date creation: 08/08/2000
   Parametres :                                                     
			<p_ligne_cmd> - Ligne de commande a modifier
			<p_nom_param> - Nom du parametre 
			<p_val_param> - Valeur du parametre
			<p_enreg> - caracteristiques de la tache en cours de traitement
   Historique	:
	---------------------------------------------------------------------------
	Fonction					|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_formatte_param_trt	|08/08/2000 | SNE	| Creation (@fonction)
 ====================================================================================
*/
void EXPLOIT_formatte_param_trt(char *p_ligne_cmd, char *p_nom_param, char *p_val_param, t_EXPLOIT_enr_b_traitement *p_enreg)
{
   if (strcmp(p_enreg->type, COMMUN_CODE_TYP_PRG_EDIT) == 0)
   {   
      strcat(p_ligne_cmd," \0");
      if (*p_nom_param != '\"') 
		strcat(p_ligne_cmd," \"\0");
      strcat(p_ligne_cmd,p_nom_param);
      if (p_nom_param[strlen(p_nom_param) - 1] != '\"') strcat(p_ligne_cmd,"\"\0");
      strcat(p_ligne_cmd,"=\0");
      if (p_val_param[0] != '\"') strcat(p_ligne_cmd,"\"\0");
      strcat(p_ligne_cmd,p_val_param);
      if (p_val_param[strlen(p_val_param) - 1] != '\"') strcat(p_ligne_cmd,"\"\0");
   }
   else
   {   
      strcat(p_ligne_cmd," \0");
      if (p_val_param[0] != EXPLOIT_CAR_DLIMITR_CHAINE) 
		  strcat(p_ligne_cmd, EXPLOIT_STR_DLIMITR_CHAINE);
      strcat(p_ligne_cmd,p_val_param);
      if (p_val_param[strlen(p_val_param) - 1] != EXPLOIT_CAR_DLIMITR_CHAINE) 
		  strcat(p_ligne_cmd, EXPLOIT_STR_DLIMITR_CHAINE);
   }
} 

/*
 ====================================================================================
   Nom 			: EXPLOIT_intRechParamfct	
   Description 	: Fonction d'extraction des parametres effectifs d'un traitement
				: parmi tous les parametres de la chaine
   Auteur		: Sofiane NEKERE
   Date creation: 08/08/2000
   Parametres :                                                     
			<p_ligne_cmd> - Ligne de commande a modifier
			<p_enreg> - caracteristiques de la tache en cours de traitement
   Historique	:
	---------------------------------------------------------------------------
	Fonction					|Date	    |Initiales	|Commentaires 
	---------------------------------------------------------------------------
@(#) EXPLOIT_intRechParamfct	|08/08/2000 | SNE	| Creation (@fonction)
 ====================================================================================
*/
EXPLOIT_intRechParamfct(char *p_ligne_cmd, t_EXPLOIT_enr_b_traitement *p_enreg)
{
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

	   /* VARCHAR v_sql_nomprog[21]; */ 
struct { unsigned short len; unsigned char arr[21]; } v_sql_nomprog;

	   /* VARCHAR v_sql_type_fct[2]; */ 
struct { unsigned short len; unsigned char arr[2]; } v_sql_type_fct;

	   /* VARCHAR v_sql_nomparam[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_sql_nomparam;

	   /* VARCHAR v_sql_param[33]; */ 
struct { unsigned short len; unsigned char arr[33]; } v_sql_param;

	   unsigned long v_sql_numtrt;

   /* EXEC SQL END DECLARE SECTION; */ 


   /* Curseur de recherche des parametres utilisateurs d'une fonction */
   /* EXEC SQL DECLARE c_b_paramfct CURSOR FOR
      SELECT   b_parambat.nomparam,
               NVL(b_paramtrt.param, DECODE(:v_sql_type_fct,'B','""',' '))
      FROM     b_paramtrt,b_parambat
      WHERE    b_paramtrt.nomparam(+) = b_parambat.nomparam AND
               b_parambat.nomprog = :v_sql_nomprog AND
               b_paramtrt.numtrt(+) = :v_sql_numtrt
      ORDER BY b_parambat.indparlib; */ 


	memset(v_sql_type_fct.arr, 0, EXPLOIT_LG_TYPE);
	strcpy (v_sql_type_fct.arr, p_enreg->type);
	v_sql_type_fct.len=strlen(v_sql_type_fct.arr);

	memset(v_sql_nomprog.arr, 0, EXPLOIT_LG_NOMPROG);
	strcpy (v_sql_nomprog.arr, p_enreg->nomprog);
	v_sql_nomprog.len=strlen(v_sql_nomprog.arr);
	v_sql_numtrt = p_enreg->numtrt;

        /*---------------------------------------------------------*/
        /* Ouverture curseur C_B_PARAMFCT (parametres utilisateurs */
        /* de la fonction)                                         */
        /*---------------------------------------------------------*/
               /* EXEC SQL OPEN c_b_paramfct; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 18;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.stmt = sq0007;
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )399;
               sqlstm.selerr = (unsigned short)1;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)256;
               sqlstm.occurs = (unsigned int  )0;
               sqlstm.sqhstv[0] = (         void  *)&v_sql_type_fct;
               sqlstm.sqhstl[0] = (unsigned int  )4;
               sqlstm.sqhsts[0] = (         int  )0;
               sqlstm.sqindv[0] = (         void  *)0;
               sqlstm.sqinds[0] = (         int  )0;
               sqlstm.sqharm[0] = (unsigned int  )0;
               sqlstm.sqadto[0] = (unsigned short )0;
               sqlstm.sqtdso[0] = (unsigned short )0;
               sqlstm.sqhstv[1] = (         void  *)&v_sql_nomprog;
               sqlstm.sqhstl[1] = (unsigned int  )23;
               sqlstm.sqhsts[1] = (         int  )0;
               sqlstm.sqindv[1] = (         void  *)0;
               sqlstm.sqinds[1] = (         int  )0;
               sqlstm.sqharm[1] = (unsigned int  )0;
               sqlstm.sqadto[1] = (unsigned short )0;
               sqlstm.sqtdso[1] = (unsigned short )0;
               sqlstm.sqhstv[2] = (         void  *)&v_sql_numtrt;
               sqlstm.sqhstl[2] = (unsigned int  )4;
               sqlstm.sqhsts[2] = (         int  )0;
               sqlstm.sqindv[2] = (         void  *)0;
               sqlstm.sqinds[2] = (         int  )0;
               sqlstm.sqharm[2] = (unsigned int  )0;
               sqlstm.sqadto[2] = (unsigned short )0;
               sqlstm.sqtdso[2] = (unsigned short )0;
               sqlstm.sqphsv = sqlstm.sqhstv;
               sqlstm.sqphsl = sqlstm.sqhstl;
               sqlstm.sqphss = sqlstm.sqhsts;
               sqlstm.sqpind = sqlstm.sqindv;
               sqlstm.sqpins = sqlstm.sqinds;
               sqlstm.sqparm = sqlstm.sqharm;
               sqlstm.sqparc = sqlstm.sqharc;
               sqlstm.sqpadto = sqlstm.sqadto;
               sqlstm.sqptdso = sqlstm.sqtdso;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


               if ( sqlca.sqlcode != 0 )
               {
					CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
					return(KO);
               }
   
               /*------------------------------------------------*/
               /* boucle de parcours des parametres utilisateurs */
               /* de la fonction                                 */
               /*------------------------------------------------*/
               /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

               while (1)
               {
                  /* EXEC SQL FETCH c_b_paramfct INTO :v_sql_nomparam, :v_sql_param; */ 

{
                  struct sqlexd sqlstm;

                  sqlstm.sqlvsn = 10;
                  sqlstm.arrsiz = 18;
                  sqlstm.sqladtp = &sqladt;
                  sqlstm.sqltdsp = &sqltds;
                  sqlstm.iters = (unsigned int  )1;
                  sqlstm.offset = (unsigned int  )426;
                  sqlstm.cud = sqlcud0;
                  sqlstm.sqlest = (unsigned char  *)&sqlca;
                  sqlstm.sqlety = (unsigned short)256;
                  sqlstm.occurs = (unsigned int  )0;
                  sqlstm.sqhstv[0] = (         void  *)&v_sql_nomparam;
                  sqlstm.sqhstl[0] = (unsigned int  )17;
                  sqlstm.sqhsts[0] = (         int  )0;
                  sqlstm.sqindv[0] = (         void  *)0;
                  sqlstm.sqinds[0] = (         int  )0;
                  sqlstm.sqharm[0] = (unsigned int  )0;
                  sqlstm.sqadto[0] = (unsigned short )0;
                  sqlstm.sqtdso[0] = (unsigned short )0;
                  sqlstm.sqhstv[1] = (         void  *)&v_sql_param;
                  sqlstm.sqhstl[1] = (unsigned int  )35;
                  sqlstm.sqhsts[1] = (         int  )0;
                  sqlstm.sqindv[1] = (         void  *)0;
                  sqlstm.sqinds[1] = (         int  )0;
                  sqlstm.sqharm[1] = (unsigned int  )0;
                  sqlstm.sqadto[1] = (unsigned short )0;
                  sqlstm.sqtdso[1] = (unsigned short )0;
                  sqlstm.sqphsv = sqlstm.sqhstv;
                  sqlstm.sqphsl = sqlstm.sqhstl;
                  sqlstm.sqphss = sqlstm.sqhsts;
                  sqlstm.sqpind = sqlstm.sqindv;
                  sqlstm.sqpins = sqlstm.sqinds;
                  sqlstm.sqparm = sqlstm.sqharm;
                  sqlstm.sqparc = sqlstm.sqharc;
                  sqlstm.sqpadto = sqlstm.sqadto;
                  sqlstm.sqptdso = sqlstm.sqtdso;
                  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                  if (sqlca.sqlcode == 1403) break;
}


                 
                  v_sql_nomparam.arr[v_sql_nomparam.len]='\0';
                  v_sql_param.arr[v_sql_param.len]='\0'; 
               
					if ( sqlca.sqlcode != 0 )
					{
						CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
						return(KO);
					}
   
					EXPLOIT_formatte_param_trt(p_ligne_cmd, v_sql_nomparam.arr, v_sql_param.arr, p_enreg);
               } /* Fin boucle de parcours des parametres util. la fonction */
              
               /*--------------------------------*/
               /* Fermeture curseur C_B_PARAMFCT */
               /*--------------------------------*/
               /* EXEC SQL CLOSE c_b_paramfct; */ 

{
               struct sqlexd sqlstm;

               sqlstm.sqlvsn = 10;
               sqlstm.arrsiz = 18;
               sqlstm.sqladtp = &sqladt;
               sqlstm.sqltdsp = &sqltds;
               sqlstm.iters = (unsigned int  )1;
               sqlstm.offset = (unsigned int  )449;
               sqlstm.cud = sqlcud0;
               sqlstm.sqlest = (unsigned char  *)&sqlca;
               sqlstm.sqlety = (unsigned short)256;
               sqlstm.occurs = (unsigned int  )0;
               sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


               if ( sqlca.sqlcode != 0 )
               {
					CBASE_affiche_message(COMMUN_ERR_00002,  COMMUN_BALISE_ERREUR,  sqlca.sqlerrm.sqlerrmc,  NULL, NULL);
					return(KO);
               }
                  
	return(OK);
}

