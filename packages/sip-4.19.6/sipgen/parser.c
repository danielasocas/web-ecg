/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_API = 258,
     TK_AUTOPYNAME = 259,
     TK_DEFDOCSTRING = 260,
     TK_DEFENCODING = 261,
     TK_PLUGIN = 262,
     TK_VIRTERRORHANDLER = 263,
     TK_EXPTYPEHINTCODE = 264,
     TK_TYPEHINTCODE = 265,
     TK_DOCSTRING = 266,
     TK_DOC = 267,
     TK_EXPORTEDDOC = 268,
     TK_EXTRACT = 269,
     TK_MAKEFILE = 270,
     TK_ACCESSCODE = 271,
     TK_GETCODE = 272,
     TK_SETCODE = 273,
     TK_PREINITCODE = 274,
     TK_INITCODE = 275,
     TK_POSTINITCODE = 276,
     TK_FINALCODE = 277,
     TK_UNITCODE = 278,
     TK_UNITPOSTINCLUDECODE = 279,
     TK_MODCODE = 280,
     TK_TYPECODE = 281,
     TK_PREPYCODE = 282,
     TK_COPYING = 283,
     TK_MAPPEDTYPE = 284,
     TK_CODELINE = 285,
     TK_IF = 286,
     TK_END = 287,
     TK_NAME_VALUE = 288,
     TK_PATH_VALUE = 289,
     TK_STRING_VALUE = 290,
     TK_VIRTUALCATCHERCODE = 291,
     TK_TRAVERSECODE = 292,
     TK_CLEARCODE = 293,
     TK_GETBUFFERCODE = 294,
     TK_RELEASEBUFFERCODE = 295,
     TK_READBUFFERCODE = 296,
     TK_WRITEBUFFERCODE = 297,
     TK_SEGCOUNTCODE = 298,
     TK_CHARBUFFERCODE = 299,
     TK_PICKLECODE = 300,
     TK_VIRTUALCALLCODE = 301,
     TK_METHODCODE = 302,
     TK_PREMETHODCODE = 303,
     TK_INSTANCECODE = 304,
     TK_FROMTYPE = 305,
     TK_TOTYPE = 306,
     TK_TOSUBCLASS = 307,
     TK_INCLUDE = 308,
     TK_OPTINCLUDE = 309,
     TK_IMPORT = 310,
     TK_EXPHEADERCODE = 311,
     TK_MODHEADERCODE = 312,
     TK_TYPEHEADERCODE = 313,
     TK_MODULE = 314,
     TK_CMODULE = 315,
     TK_CONSMODULE = 316,
     TK_COMPOMODULE = 317,
     TK_CLASS = 318,
     TK_STRUCT = 319,
     TK_PUBLIC = 320,
     TK_PROTECTED = 321,
     TK_PRIVATE = 322,
     TK_SIGNALS = 323,
     TK_SIGNAL_METHOD = 324,
     TK_SLOTS = 325,
     TK_SLOT_METHOD = 326,
     TK_BOOL = 327,
     TK_SHORT = 328,
     TK_INT = 329,
     TK_LONG = 330,
     TK_FLOAT = 331,
     TK_DOUBLE = 332,
     TK_CHAR = 333,
     TK_WCHAR_T = 334,
     TK_VOID = 335,
     TK_PYOBJECT = 336,
     TK_PYTUPLE = 337,
     TK_PYLIST = 338,
     TK_PYDICT = 339,
     TK_PYCALLABLE = 340,
     TK_PYSLICE = 341,
     TK_PYTYPE = 342,
     TK_PYBUFFER = 343,
     TK_VIRTUAL = 344,
     TK_ENUM = 345,
     TK_SIGNED = 346,
     TK_UNSIGNED = 347,
     TK_SCOPE = 348,
     TK_LOGICAL_OR = 349,
     TK_CONST = 350,
     TK_STATIC = 351,
     TK_SIPSIGNAL = 352,
     TK_SIPSLOT = 353,
     TK_SIPANYSLOT = 354,
     TK_SIPRXCON = 355,
     TK_SIPRXDIS = 356,
     TK_SIPSLOTCON = 357,
     TK_SIPSLOTDIS = 358,
     TK_SIPSSIZET = 359,
     TK_NUMBER_VALUE = 360,
     TK_REAL_VALUE = 361,
     TK_TYPEDEF = 362,
     TK_NAMESPACE = 363,
     TK_TIMELINE = 364,
     TK_PLATFORMS = 365,
     TK_FEATURE = 366,
     TK_LICENSE = 367,
     TK_QCHAR_VALUE = 368,
     TK_TRUE_VALUE = 369,
     TK_FALSE_VALUE = 370,
     TK_NULL_VALUE = 371,
     TK_OPERATOR = 372,
     TK_THROW = 373,
     TK_QOBJECT = 374,
     TK_EXCEPTION = 375,
     TK_RAISECODE = 376,
     TK_VIRTERRORCODE = 377,
     TK_EXPLICIT = 378,
     TK_TEMPLATE = 379,
     TK_FINAL = 380,
     TK_ELLIPSIS = 381,
     TK_DEFMETATYPE = 382,
     TK_DEFSUPERTYPE = 383,
     TK_PROPERTY = 384,
     TK_HIDE_NS = 385,
     TK_FORMAT = 386,
     TK_GET = 387,
     TK_ID = 388,
     TK_KWARGS = 389,
     TK_LANGUAGE = 390,
     TK_LICENSEE = 391,
     TK_NAME = 392,
     TK_OPTIONAL = 393,
     TK_ORDER = 394,
     TK_REMOVELEADING = 395,
     TK_SET = 396,
     TK_SIGNATURE = 397,
     TK_TIMESTAMP = 398,
     TK_TYPE = 399,
     TK_USEARGNAMES = 400,
     TK_USELIMITEDAPI = 401,
     TK_ALLRAISEPYEXC = 402,
     TK_CALLSUPERINIT = 403,
     TK_DEFERRORHANDLER = 404,
     TK_VERSION = 405
   };
#endif
/* Tokens.  */
#define TK_API 258
#define TK_AUTOPYNAME 259
#define TK_DEFDOCSTRING 260
#define TK_DEFENCODING 261
#define TK_PLUGIN 262
#define TK_VIRTERRORHANDLER 263
#define TK_EXPTYPEHINTCODE 264
#define TK_TYPEHINTCODE 265
#define TK_DOCSTRING 266
#define TK_DOC 267
#define TK_EXPORTEDDOC 268
#define TK_EXTRACT 269
#define TK_MAKEFILE 270
#define TK_ACCESSCODE 271
#define TK_GETCODE 272
#define TK_SETCODE 273
#define TK_PREINITCODE 274
#define TK_INITCODE 275
#define TK_POSTINITCODE 276
#define TK_FINALCODE 277
#define TK_UNITCODE 278
#define TK_UNITPOSTINCLUDECODE 279
#define TK_MODCODE 280
#define TK_TYPECODE 281
#define TK_PREPYCODE 282
#define TK_COPYING 283
#define TK_MAPPEDTYPE 284
#define TK_CODELINE 285
#define TK_IF 286
#define TK_END 287
#define TK_NAME_VALUE 288
#define TK_PATH_VALUE 289
#define TK_STRING_VALUE 290
#define TK_VIRTUALCATCHERCODE 291
#define TK_TRAVERSECODE 292
#define TK_CLEARCODE 293
#define TK_GETBUFFERCODE 294
#define TK_RELEASEBUFFERCODE 295
#define TK_READBUFFERCODE 296
#define TK_WRITEBUFFERCODE 297
#define TK_SEGCOUNTCODE 298
#define TK_CHARBUFFERCODE 299
#define TK_PICKLECODE 300
#define TK_VIRTUALCALLCODE 301
#define TK_METHODCODE 302
#define TK_PREMETHODCODE 303
#define TK_INSTANCECODE 304
#define TK_FROMTYPE 305
#define TK_TOTYPE 306
#define TK_TOSUBCLASS 307
#define TK_INCLUDE 308
#define TK_OPTINCLUDE 309
#define TK_IMPORT 310
#define TK_EXPHEADERCODE 311
#define TK_MODHEADERCODE 312
#define TK_TYPEHEADERCODE 313
#define TK_MODULE 314
#define TK_CMODULE 315
#define TK_CONSMODULE 316
#define TK_COMPOMODULE 317
#define TK_CLASS 318
#define TK_STRUCT 319
#define TK_PUBLIC 320
#define TK_PROTECTED 321
#define TK_PRIVATE 322
#define TK_SIGNALS 323
#define TK_SIGNAL_METHOD 324
#define TK_SLOTS 325
#define TK_SLOT_METHOD 326
#define TK_BOOL 327
#define TK_SHORT 328
#define TK_INT 329
#define TK_LONG 330
#define TK_FLOAT 331
#define TK_DOUBLE 332
#define TK_CHAR 333
#define TK_WCHAR_T 334
#define TK_VOID 335
#define TK_PYOBJECT 336
#define TK_PYTUPLE 337
#define TK_PYLIST 338
#define TK_PYDICT 339
#define TK_PYCALLABLE 340
#define TK_PYSLICE 341
#define TK_PYTYPE 342
#define TK_PYBUFFER 343
#define TK_VIRTUAL 344
#define TK_ENUM 345
#define TK_SIGNED 346
#define TK_UNSIGNED 347
#define TK_SCOPE 348
#define TK_LOGICAL_OR 349
#define TK_CONST 350
#define TK_STATIC 351
#define TK_SIPSIGNAL 352
#define TK_SIPSLOT 353
#define TK_SIPANYSLOT 354
#define TK_SIPRXCON 355
#define TK_SIPRXDIS 356
#define TK_SIPSLOTCON 357
#define TK_SIPSLOTDIS 358
#define TK_SIPSSIZET 359
#define TK_NUMBER_VALUE 360
#define TK_REAL_VALUE 361
#define TK_TYPEDEF 362
#define TK_NAMESPACE 363
#define TK_TIMELINE 364
#define TK_PLATFORMS 365
#define TK_FEATURE 366
#define TK_LICENSE 367
#define TK_QCHAR_VALUE 368
#define TK_TRUE_VALUE 369
#define TK_FALSE_VALUE 370
#define TK_NULL_VALUE 371
#define TK_OPERATOR 372
#define TK_THROW 373
#define TK_QOBJECT 374
#define TK_EXCEPTION 375
#define TK_RAISECODE 376
#define TK_VIRTERRORCODE 377
#define TK_EXPLICIT 378
#define TK_TEMPLATE 379
#define TK_FINAL 380
#define TK_ELLIPSIS 381
#define TK_DEFMETATYPE 382
#define TK_DEFSUPERTYPE 383
#define TK_PROPERTY 384
#define TK_HIDE_NS 385
#define TK_FORMAT 386
#define TK_GET 387
#define TK_ID 388
#define TK_KWARGS 389
#define TK_LANGUAGE 390
#define TK_LICENSEE 391
#define TK_NAME 392
#define TK_OPTIONAL 393
#define TK_ORDER 394
#define TK_REMOVELEADING 395
#define TK_SET 396
#define TK_SIGNATURE 397
#define TK_TIMESTAMP 398
#define TK_TYPE 399
#define TK_USEARGNAMES 400
#define TK_USELIMITEDAPI 401
#define TK_ALLRAISEPYEXC 402
#define TK_CALLSUPERINIT 403
#define TK_DEFERRORHANDLER 404
#define TK_VERSION 405




/* Copy the first part of user declarations.  */
#line 19 "sip-4.19.6/sipgen/metasrc/parser.y"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "sip.h"


#define MAX_NESTED_IF       10
#define MAX_NESTED_SCOPE    10

#define inMainModule()      (currentSpec->module == currentModule || currentModule->container != NULL)


static sipSpec *currentSpec;            /* The current spec being parsed. */
static int strictParse;                 /* Set if the platform is enforced. */
static stringList *backstops;           /* The list of backstops. */
static stringList *neededQualifiers;    /* The list of required qualifiers. */
static stringList *excludedQualifiers;  /* The list of excluded qualifiers. */
static moduleDef *currentModule;        /* The current module being parsed. */
static mappedTypeDef *currentMappedType;    /* The current mapped type. */
static enumDef *currentEnum;            /* The current enum being parsed. */
static int sectionFlags;                /* The current section flags. */
static int currentOverIsVirt;           /* Set if the overload is virtual. */
static int currentCtorIsExplicit;       /* Set if the ctor is explicit. */
static int currentIsStatic;             /* Set if the current is static. */
static int currentIsSignal;             /* Set if the current is Q_SIGNAL. */
static int currentIsSlot;               /* Set if the current is Q_SLOT. */
static int currentIsTemplate;           /* Set if the current is a template. */
static char *previousFile;              /* The file just parsed. */
static parserContext currentContext;    /* The current context. */
static int stackPtr;                    /* The stack pointer. */
static int skipStack[MAX_NESTED_IF];    /* Stack of skip flags. */
static classDef *scopeStack[MAX_NESTED_SCOPE];  /* The scope stack. */
static int sectFlagsStack[MAX_NESTED_SCOPE];    /* The section flags stack. */
static int currentScopeIdx;             /* The scope stack index. */
static int currentTimelineOrder;        /* The current timeline order. */
static classList *currentSupers;        /* The current super-class list. */
static platformDef *currentPlatforms;   /* The current platforms list. */
static platformDef *platformStack[MAX_NESTED_IF];   /* Stack of platforms. */
static KwArgs defaultKwArgs;            /* The default keyword arguments support. */
static int makeProtPublic;              /* Treat protected items as public. */
static int parsingCSignature;           /* An explicit C/C++ signature is being parsed. */


static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname);
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname, int tmpl_arg);
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff,
        int tmpl_arg);
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *snd,
        const char *virt_error_handler, typeHintDef *typehint_in,
        typeHintDef *typehint_out, const char *typehint_value);
static void finishClass(sipSpec *, moduleDef *, classDef *, optFlags *);
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new);
static mappedTypeDef *newMappedType(sipSpec *,argDef *, optFlags *);
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *of, int flags, int isscoped);
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td, const char *pyname, int use_template_name);
static void newTypedef(sipSpec *, moduleDef *, char *, argDef *, optFlags *);
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section);
static void newCtor(moduleDef *, char *, int, signatureDef *, optFlags *,
                    codeBlock *, throwArgs *, signatureDef *, int, codeBlock *,
                    codeBlock *);
static void newFunction(sipSpec *, moduleDef *, classDef *, ifaceFileDef *,
        mappedTypeDef *, int, int, int, int, int, char *, signatureDef *, int,
        int, optFlags *, codeBlock *, codeBlock *, codeBlock *, throwArgs *,
        signatureDef *, codeBlock *, int, codeBlock *);
static optFlag *findOptFlag(optFlags *flgs, const char *name);
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft);
static memberDef *findFunction(sipSpec *, moduleDef *, classDef *,
        ifaceFileDef *, mappedTypeDef *, const char *, int, int, int);
static void checkAttributes(sipSpec *, moduleDef *, classDef *,
        mappedTypeDef *, const char *, int);
static void newModule(FILE *fp, const char *filename);
static moduleDef *allocModule();
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional);
static void handleEOF(void);
static void handleEOM(void);
static qualDef *findQualifier(const char *name);
static const char *getInt(const char *cp, int *ip);
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text);
static scopedNameDef *scopeScopedName(ifaceFileDef *scope,
        scopedNameDef *name);
static void pushScope(classDef *);
static void popScope(void);
static classDef *currentScope(void);
static void newQualifier(moduleDef *, int, int, int, const char *, qualType);
static qualDef *allocQualifier(moduleDef *, int, int, int, const char *,
        qualType);
static void newImport(const char *filename);
static int timePeriod(const char *lname, const char *uname);
static int platOrFeature(char *name, int optnot);
static void addPlatform(qualDef *qd);
static int notSkipping(void);
static void getHooks(optFlags *,char **,char **);
static int getTransfer(optFlags *optflgs);
static int getReleaseGIL(optFlags *optflgs);
static int getHoldGIL(optFlags *optflgs);
static int getDeprecated(optFlags *optflgs);
static int getAllowNone(optFlags *optflgs);
static int getDisallowNone(optFlags *optflgs);
static const char *getVirtErrorHandler(optFlags *optflgs);
static const char *getDocType(optFlags *optflgs);
static const char *getTypeHintValue(optFlags *optflgs);
static void getTypeHints(optFlags *optflgs, typeHintDef **in,
        typeHintDef **out);
static int getNoTypeHint(optFlags *optflgs);
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd,
        templateDef *td, classDef *ncd, scopedNameDef *type_names,
        scopedNameDef *type_values);
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td,
        classDef *ncd, scopedNameDef *type_names, scopedNameDef *type_values);
static int search_back(const char *end, const char *start, const char *target);
static char *type2string(argDef *ad);
static char *scopedNameToString(scopedNameDef *name);
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname);
static int sameName(scopedNameDef *snd, const char *sname);
static int stringFind(stringList *sl, const char *s);
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname);
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name);
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of);
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def);
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod);
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, scopedNameDef *type_names,
        scopedNameDef *type_values);
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void resolveAnyTypedef(sipSpec *pt, argDef *ad);
static void addTypedef(sipSpec *pt, typedefDef *tdd);
static void addVariable(sipSpec *pt, varDef *vd);
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags);
static Format convertFormat(const char *format);
static argType convertEncoding(const char *encoding);
static apiVersionRangeDef *getAPIRange(optFlags *optflgs);
static apiVersionRangeDef *convertAPIRange(moduleDef *mod, nameDef *name,
        int from, int to);
static char *convertFeaturedString(char *fs);
static scopedNameDef *text2scopePart(char *text);
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name);
static char *strip(char *s);
static int isEnabledFeature(const char *name);
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        codeBlock *docstring);
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int c_module, KwArgs kwargs,
        int use_arg_names, int use_limited_api, int call_super_init,
        int all_raise_py_exc, const char *def_error_handler,
        codeBlock *docstring);
static void addAutoPyName(moduleDef *mod, const char *remove_leading);
static KwArgs convertKwArgs(const char *kwargs);
static void checkAnnos(optFlags *annos, const char *valid[]);
static void checkNoAnnos(optFlags *annos, const char *msg);
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb);
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod);
static void mappedTypeAnnos(mappedTypeDef *mtd, optFlags *optflgs);
static void add_new_deref(argDef *new, argDef *orig, int isconst);
static void add_derefs(argDef *dst, argDef *src);
static int isBackstop(qualDef *qd);
static void checkEllipsis(signatureDef *sd);
static scopedNameDef *fullyQualifiedName(scopedNameDef *snd);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 200 "sip-4.19.6/sipgen/metasrc/parser.y"
{
    char            qchar;
    char            *text;
    long            number;
    double          real;
    argDef          memArg;
    signatureDef    signature;
    signatureDef    *optsignature;
    throwArgs       *throwlist;
    codeBlock       *codeb;
    valueDef        value;
    valueDef        *valp;
    optFlags        optflags;
    optFlag         flag;
    scopedNameDef   *scpvalp;
    fcallDef        fcall;
    int             boolean;
    exceptionDef    exceptionbase;
    classDef        *klass;
    apiCfg          api;
    autoPyNameCfg   autopyname;
    compModuleCfg   compmodule;
    consModuleCfg   consmodule;
    defDocstringCfg defdocstring;
    defEncodingCfg  defencoding;
    defMetatypeCfg  defmetatype;
    defSupertypeCfg defsupertype;
    hiddenNsCfg     hiddenns;
    exceptionCfg    exception;
    docstringCfg    docstring;
    extractCfg      extract;
    featureCfg      feature;
    licenseCfg      license;
    importCfg       import;
    includeCfg      include;
    moduleCfg       module;
    pluginCfg       plugin;
    propertyCfg     property;
    variableCfg     variable;
    vehCfg          veh;
    int             token;
}
/* Line 193 of yacc.c.  */
#line 620 "sip-4.19.6/sipgen/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 633 "sip-4.19.6/sipgen/parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1604

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  250
/* YYNRULES -- Number of rules.  */
#define YYNRULES  586
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1024

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   405

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   158,     2,     2,     2,   171,   163,     2,
     151,   152,   161,   160,   153,   159,     2,   162,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   168,   157,
     166,   154,   167,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   169,     2,   170,   172,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   155,   164,   156,   165,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   113,   115,   119,   121,
     125,   129,   132,   134,   138,   140,   144,   148,   151,   153,
     157,   159,   163,   167,   171,   173,   177,   179,   183,   187,
     190,   193,   197,   199,   203,   207,   211,   217,   218,   222,
     227,   229,   232,   234,   236,   238,   240,   243,   244,   250,
     251,   258,   263,   265,   268,   270,   272,   274,   276,   279,
     282,   284,   286,   288,   303,   304,   310,   311,   315,   317,
     320,   321,   327,   329,   332,   334,   337,   339,   343,   345,
     349,   353,   354,   360,   362,   365,   367,   368,   374,   376,
     379,   383,   388,   390,   394,   396,   400,   401,   403,   407,
     409,   413,   417,   421,   425,   429,   432,   434,   438,   440,
     444,   448,   451,   453,   457,   459,   463,   467,   470,   472,
     476,   478,   482,   486,   490,   492,   496,   498,   502,   506,
     507,   512,   514,   517,   519,   521,   523,   527,   529,   533,
     535,   539,   543,   544,   549,   551,   554,   556,   558,   560,
     564,   568,   569,   573,   577,   579,   583,   587,   591,   595,
     599,   603,   607,   611,   615,   619,   620,   625,   627,   630,
     632,   634,   636,   638,   640,   642,   643,   645,   648,   650,
     654,   656,   660,   664,   668,   671,   674,   676,   680,   682,
     686,   690,   691,   694,   695,   698,   699,   702,   705,   708,
     711,   714,   717,   720,   723,   726,   729,   732,   735,   738,
     741,   744,   747,   750,   753,   756,   759,   762,   765,   768,
     771,   774,   777,   780,   783,   786,   789,   793,   795,   799,
     803,   807,   808,   810,   814,   816,   820,   824,   825,   827,
     831,   833,   837,   839,   843,   847,   851,   856,   859,   861,
     864,   865,   875,   876,   878,   880,   881,   883,   884,   886,
     887,   889,   891,   894,   896,   898,   903,   904,   906,   907,
     910,   911,   914,   916,   920,   922,   924,   926,   928,   930,
     932,   933,   935,   937,   939,   941,   943,   945,   949,   950,
     954,   957,   959,   961,   965,   967,   969,   971,   973,   978,
     980,   982,   984,   986,   988,   990,   991,   993,   997,  1003,
    1015,  1016,  1017,  1026,  1027,  1031,  1036,  1037,  1038,  1047,
    1048,  1051,  1053,  1057,  1060,  1061,  1063,  1065,  1067,  1068,
    1072,  1073,  1075,  1078,  1080,  1082,  1084,  1086,  1088,  1090,
    1092,  1094,  1096,  1098,  1100,  1102,  1104,  1106,  1108,  1110,
    1112,  1114,  1116,  1118,  1120,  1122,  1124,  1126,  1128,  1130,
    1132,  1134,  1137,  1140,  1143,  1147,  1151,  1155,  1158,  1162,
    1166,  1168,  1172,  1176,  1180,  1184,  1185,  1190,  1192,  1195,
    1197,  1199,  1201,  1203,  1205,  1206,  1208,  1221,  1222,  1226,
    1228,  1240,  1241,  1242,  1249,  1250,  1251,  1259,  1260,  1262,
    1280,  1288,  1306,  1323,  1325,  1327,  1329,  1331,  1333,  1335,
    1337,  1339,  1342,  1345,  1348,  1351,  1354,  1357,  1360,  1363,
    1366,  1369,  1373,  1377,  1379,  1382,  1385,  1387,  1390,  1393,
    1396,  1398,  1401,  1402,  1404,  1405,  1407,  1408,  1411,  1412,
    1416,  1418,  1422,  1424,  1428,  1430,  1436,  1438,  1440,  1441,
    1444,  1445,  1448,  1449,  1452,  1453,  1456,  1458,  1459,  1461,
    1465,  1470,  1475,  1480,  1484,  1488,  1495,  1502,  1506,  1509,
    1510,  1514,  1515,  1519,  1521,  1522,  1526,  1528,  1530,  1532,
    1533,  1537,  1539,  1548,  1549,  1553,  1555,  1558,  1560,  1562,
    1565,  1568,  1571,  1576,  1580,  1584,  1585,  1587,  1588,  1592,
    1595,  1597,  1602,  1605,  1608,  1610,  1612,  1615,  1617,  1619,
    1622,  1625,  1629,  1631,  1633,  1635,  1638,  1641,  1643,  1645,
    1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,  1665,
    1667,  1669,  1673,  1674,  1679,  1680,  1682
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     174,     0,    -1,   175,    -1,   174,   175,    -1,    -1,   176,
     177,    -1,   264,    -1,   250,    -1,   257,    -1,   187,    -1,
     286,    -1,   274,    -1,   278,    -1,   279,    -1,   195,    -1,
     225,    -1,   217,    -1,   221,    -1,   234,    -1,   179,    -1,
     183,    -1,   238,    -1,   242,    -1,   246,    -1,   287,    -1,
     288,    -1,   301,    -1,   303,    -1,   304,    -1,   305,    -1,
     306,    -1,   307,    -1,   308,    -1,   309,    -1,   310,    -1,
     312,    -1,   313,    -1,   323,    -1,   327,    -1,   205,    -1,
     207,    -1,   191,    -1,   178,    -1,   229,    -1,   233,    -1,
     213,    -1,   353,    -1,   359,    -1,   356,    -1,   199,    -1,
     352,    -1,   330,    -1,   387,    -1,   411,    -1,   289,    -1,
       5,   180,    -1,    35,    -1,   151,   181,   152,    -1,   182,
      -1,   181,   153,   182,    -1,   137,   154,    35,    -1,     6,
     184,    -1,    35,    -1,   151,   185,   152,    -1,   186,    -1,
     185,   153,   186,    -1,   137,   154,    35,    -1,     7,   188,
      -1,    33,    -1,   151,   189,   152,    -1,   190,    -1,   189,
     153,   190,    -1,   137,   154,    33,    -1,     8,   192,   328,
      -1,    33,    -1,   151,   193,   152,    -1,   194,    -1,   193,
     153,   194,    -1,   137,   154,    33,    -1,     3,   196,    -1,
      33,   105,    -1,   151,   197,   152,    -1,   198,    -1,   197,
     153,   198,    -1,   137,   154,   376,    -1,   150,   154,   105,
      -1,   120,   346,   200,   392,   201,    -1,    -1,   151,   346,
     152,    -1,   155,   202,   156,   157,    -1,   203,    -1,   202,
     203,    -1,   229,    -1,   233,    -1,   204,    -1,   289,    -1,
     121,   328,    -1,    -1,    29,   419,   392,   206,   209,    -1,
      -1,   358,    29,   419,   392,   208,   209,    -1,   155,   210,
     156,   157,    -1,   211,    -1,   210,   211,    -1,   229,    -1,
     233,    -1,   289,    -1,   302,    -1,    50,   328,    -1,    51,
     328,    -1,   298,    -1,   330,    -1,   212,    -1,    96,   415,
      33,   151,   400,   152,   389,   421,   392,   384,   157,   322,
     398,   397,    -1,    -1,   108,    33,   214,   215,   157,    -1,
      -1,   155,   216,   156,    -1,   178,    -1,   216,   178,    -1,
      -1,   110,   218,   155,   219,   156,    -1,   220,    -1,   219,
     220,    -1,    33,    -1,   111,   222,    -1,    33,    -1,   151,
     223,   152,    -1,   224,    -1,   223,   153,   224,    -1,   137,
     154,   376,    -1,    -1,   109,   226,   155,   227,   156,    -1,
     228,    -1,   227,   228,    -1,    33,    -1,    -1,    31,   151,
     230,   232,   152,    -1,    33,    -1,   158,    33,    -1,   231,
      94,    33,    -1,   231,    94,   158,    33,    -1,   231,    -1,
     334,   159,   334,    -1,    32,    -1,   112,   235,   392,    -1,
      -1,    35,    -1,   151,   236,   152,    -1,   237,    -1,   236,
     153,   237,    -1,   144,   154,    35,    -1,   136,   154,    35,
      -1,   142,   154,    35,    -1,   143,   154,    35,    -1,   127,
     239,    -1,   272,    -1,   151,   240,   152,    -1,   241,    -1,
     240,   153,   241,    -1,   137,   154,   272,    -1,   128,   243,
      -1,   272,    -1,   151,   244,   152,    -1,   245,    -1,   244,
     153,   245,    -1,   137,   154,   272,    -1,   130,   247,    -1,
     346,    -1,   151,   248,   152,    -1,   249,    -1,   248,   153,
     249,    -1,   137,   154,   346,    -1,    61,   251,   254,    -1,
     272,    -1,   151,   252,   152,    -1,   253,    -1,   252,   153,
     253,    -1,   137,   154,   272,    -1,    -1,   155,   255,   156,
     157,    -1,   256,    -1,   255,   256,    -1,   229,    -1,   233,
      -1,   318,    -1,    62,   258,   261,    -1,   272,    -1,   151,
     259,   152,    -1,   260,    -1,   259,   153,   260,    -1,   137,
     154,   272,    -1,    -1,   155,   262,   156,   157,    -1,   263,
      -1,   262,   263,    -1,   229,    -1,   233,    -1,   318,    -1,
      59,   265,   269,    -1,    60,   272,   273,    -1,    -1,   272,
     266,   273,    -1,   151,   267,   152,    -1,   268,    -1,   267,
     153,   268,    -1,   134,   154,    35,    -1,   135,   154,    35,
      -1,   137,   154,   272,    -1,   145,   154,   349,    -1,   146,
     154,   349,    -1,   147,   154,   349,    -1,   148,   154,   349,
      -1,   149,   154,    33,    -1,   150,   154,   105,    -1,    -1,
     155,   270,   156,   157,    -1,   271,    -1,   270,   271,    -1,
     229,    -1,   233,    -1,   314,    -1,   318,    -1,    33,    -1,
      34,    -1,    -1,   105,    -1,    53,   275,    -1,    34,    -1,
     151,   276,   152,    -1,   277,    -1,   276,   153,   277,    -1,
     137,   154,    34,    -1,   138,   154,   349,    -1,    54,    34,
      -1,    55,   280,    -1,    34,    -1,   151,   281,   152,    -1,
     282,    -1,   281,   153,   282,    -1,   137,   154,    34,    -1,
      -1,    16,   328,    -1,    -1,    17,   328,    -1,    -1,    18,
     328,    -1,    28,   328,    -1,    56,   328,    -1,    57,   328,
      -1,    58,   328,    -1,    37,   328,    -1,    38,   328,    -1,
      39,   328,    -1,    40,   328,    -1,    41,   328,    -1,    42,
     328,    -1,    43,   328,    -1,    44,   328,    -1,    49,   328,
      -1,    45,   328,    -1,    22,   328,    -1,    25,   328,    -1,
      26,   328,    -1,    19,   328,    -1,    20,   328,    -1,    21,
     328,    -1,    23,   328,    -1,    24,   328,    -1,    27,   328,
      -1,     9,   328,    -1,    10,   328,    -1,    10,   328,    -1,
      12,   328,    -1,    13,   328,    -1,     4,   315,    -1,   151,
     316,   152,    -1,   317,    -1,   316,   153,   317,    -1,   140,
     154,    35,    -1,    11,   319,   328,    -1,    -1,    35,    -1,
     151,   320,   152,    -1,   321,    -1,   320,   153,   321,    -1,
     131,   154,    35,    -1,    -1,   318,    -1,    14,   324,   328,
      -1,    33,    -1,   151,   325,   152,    -1,   326,    -1,   325,
     153,   326,    -1,   133,   154,    33,    -1,   139,   154,   105,
      -1,    15,    34,   333,   328,    -1,   329,    32,    -1,    30,
      -1,   329,    30,    -1,    -1,    90,   332,   334,   392,   331,
     155,   335,   156,   157,    -1,    -1,    63,    -1,    64,    -1,
      -1,    34,    -1,    -1,    33,    -1,    -1,   336,    -1,   337,
      -1,   336,   337,    -1,   229,    -1,   233,    -1,    33,   339,
     392,   338,    -1,    -1,   153,    -1,    -1,   154,   344,    -1,
      -1,   154,   341,    -1,   344,    -1,   341,   342,   344,    -1,
     159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,
     164,    -1,    -1,   158,    -1,   165,    -1,   159,    -1,   160,
      -1,   161,    -1,   163,    -1,   345,   343,   350,    -1,    -1,
     151,   346,   152,    -1,    93,   347,    -1,   347,    -1,   348,
      -1,   347,    93,   348,    -1,    33,    -1,   114,    -1,   115,
      -1,   346,    -1,   419,   151,   351,   152,    -1,   106,    -1,
     105,    -1,   349,    -1,   116,    -1,    35,    -1,   113,    -1,
      -1,   341,    -1,   351,   153,   341,    -1,   107,   415,    33,
     392,   157,    -1,   107,   415,   151,   161,    33,   152,   151,
     420,   152,   392,   157,    -1,    -1,    -1,    64,   346,   354,
     362,   392,   355,   366,   157,    -1,    -1,   358,   357,   359,
      -1,   124,   166,   420,   167,    -1,    -1,    -1,    63,   346,
     360,   362,   392,   361,   366,   157,    -1,    -1,   168,   363,
      -1,   364,    -1,   363,   153,   364,    -1,   365,   346,    -1,
      -1,    65,    -1,    66,    -1,    67,    -1,    -1,   155,   367,
     156,    -1,    -1,   368,    -1,   367,   368,    -1,   229,    -1,
     233,    -1,   213,    -1,   353,    -1,   359,    -1,   356,    -1,
     199,    -1,   352,    -1,   330,    -1,   369,    -1,   318,    -1,
     302,    -1,   289,    -1,   290,    -1,   291,    -1,   292,    -1,
     293,    -1,   294,    -1,   295,    -1,   296,    -1,   297,    -1,
     298,    -1,   299,    -1,   300,    -1,   311,    -1,   379,    -1,
     378,    -1,   403,    -1,    52,   328,    -1,    51,   328,    -1,
      50,   328,    -1,    65,   377,   168,    -1,    66,   377,   168,
      -1,    67,   377,   168,    -1,    68,   168,    -1,   129,   370,
     373,    -1,   151,   371,   152,    -1,   372,    -1,   371,   153,
     372,    -1,   132,   154,    33,    -1,   137,   154,   376,    -1,
     141,   154,    33,    -1,    -1,   155,   374,   156,   157,    -1,
     375,    -1,   374,   375,    -1,   229,    -1,   233,    -1,   318,
      -1,    33,    -1,    35,    -1,    -1,    70,    -1,   386,   165,
      33,   151,   152,   421,   391,   392,   157,   398,   397,   399,
      -1,    -1,   123,   380,   381,    -1,   381,    -1,    33,   151,
     400,   152,   421,   392,   382,   157,   322,   398,   397,    -1,
      -1,    -1,   169,   383,   151,   400,   152,   170,    -1,    -1,
      -1,   169,   385,   415,   151,   400,   152,   170,    -1,    -1,
      89,    -1,   415,    33,   151,   400,   152,   389,   390,   421,
     391,   392,   384,   157,   322,   398,   397,   399,   396,    -1,
     415,   117,   154,   151,   415,   152,   157,    -1,   415,   117,
     388,   151,   400,   152,   389,   390,   421,   391,   392,   384,
     157,   398,   397,   399,   396,    -1,   117,   415,   151,   400,
     152,   389,   390,   421,   391,   392,   384,   157,   398,   397,
     399,   396,    -1,   160,    -1,   159,    -1,   161,    -1,   162,
      -1,   171,    -1,   163,    -1,   164,    -1,   172,    -1,   166,
     166,    -1,   167,   167,    -1,   160,   154,    -1,   159,   154,
      -1,   161,   154,    -1,   162,   154,    -1,   171,   154,    -1,
     163,   154,    -1,   164,   154,    -1,   172,   154,    -1,   166,
     166,   154,    -1,   167,   167,   154,    -1,   165,    -1,   151,
     152,    -1,   169,   170,    -1,   166,    -1,   166,   154,    -1,
     154,   154,    -1,   158,   154,    -1,   167,    -1,   167,   154,
      -1,    -1,    95,    -1,    -1,   125,    -1,    -1,   154,   105,
      -1,    -1,   162,   393,   162,    -1,   394,    -1,   393,   153,
     394,    -1,    33,    -1,    33,   154,   395,    -1,   272,    -1,
      33,   168,   273,   159,   273,    -1,    35,    -1,   105,    -1,
      -1,    46,   328,    -1,    -1,    47,   328,    -1,    -1,    48,
     328,    -1,    -1,    36,   328,    -1,   401,    -1,    -1,   402,
      -1,   401,   153,   402,    -1,    97,   334,   392,   340,    -1,
      98,   334,   392,   340,    -1,    99,   334,   392,   340,    -1,
     100,   334,   392,    -1,   101,   334,   392,    -1,   102,   151,
     400,   152,   334,   392,    -1,   103,   151,   400,   152,   334,
     392,    -1,   119,   334,   392,    -1,   416,   340,    -1,    -1,
      69,   404,   406,    -1,    -1,    71,   405,   406,    -1,   406,
      -1,    -1,    96,   407,   408,    -1,   408,    -1,   409,    -1,
     411,    -1,    -1,    89,   410,   387,    -1,   387,    -1,   415,
      33,   392,   412,   157,   283,   284,   285,    -1,    -1,   155,
     413,   156,    -1,   414,    -1,   413,   414,    -1,   229,    -1,
     233,    -1,    16,   328,    -1,    17,   328,    -1,    18,   328,
      -1,    95,   419,   418,   417,    -1,   419,   418,   417,    -1,
     415,   334,   392,    -1,    -1,   163,    -1,    -1,   418,   161,
      95,    -1,   418,   161,    -1,   346,    -1,   346,   166,   420,
     167,    -1,    64,   346,    -1,    92,    73,    -1,    73,    -1,
      92,    -1,    92,    74,    -1,    74,    -1,    75,    -1,    92,
      75,    -1,    75,    75,    -1,    92,    75,    75,    -1,    76,
      -1,    77,    -1,    72,    -1,    91,    78,    -1,    92,    78,
      -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,
      -1,    88,    -1,   104,    -1,   126,    -1,   415,    -1,   420,
     153,   415,    -1,    -1,   118,   151,   422,   152,    -1,    -1,
     346,    -1,   422,   153,   346,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   566,   566,   567,   570,   570,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   652,   658,   663,   668,   669,
     679,   686,   695,   700,   705,   706,   716,   723,   734,   739,
     744,   745,   755,   762,   791,   796,   801,   802,   812,   819,
     845,   853,   858,   859,   870,   876,   884,   931,   935,  1042,
    1047,  1048,  1059,  1062,  1065,  1079,  1095,  1100,  1100,  1123,
    1123,  1190,  1204,  1205,  1208,  1209,  1210,  1214,  1218,  1227,
    1236,  1245,  1246,  1249,  1264,  1264,  1301,  1302,  1305,  1306,
    1309,  1309,  1338,  1339,  1342,  1348,  1354,  1359,  1364,  1365,
    1375,  1382,  1382,  1408,  1409,  1412,  1418,  1418,  1437,  1440,
    1443,  1446,  1451,  1452,  1457,  1465,  1502,  1510,  1516,  1521,
    1522,  1535,  1543,  1551,  1559,  1569,  1580,  1585,  1590,  1591,
    1601,  1608,  1619,  1624,  1629,  1630,  1640,  1647,  1659,  1664,
    1669,  1670,  1680,  1687,  1707,  1712,  1717,  1718,  1728,  1735,
    1739,  1744,  1745,  1755,  1758,  1761,  1775,  1793,  1798,  1803,
    1804,  1814,  1821,  1825,  1830,  1831,  1841,  1844,  1847,  1861,
    1872,  1882,  1882,  1895,  1900,  1901,  1918,  1930,  1948,  1960,
    1972,  1984,  1996,  2008,  2020,  2039,  2043,  2048,  2049,  2059,
    2062,  2065,  2068,  2082,  2083,  2099,  2102,  2105,  2114,  2120,
    2125,  2126,  2137,  2143,  2151,  2159,  2165,  2170,  2175,  2176,
    2186,  2193,  2196,  2201,  2204,  2209,  2212,  2217,  2223,  2229,
    2235,  2240,  2245,  2250,  2255,  2260,  2265,  2270,  2275,  2280,
    2285,  2290,  2295,  2301,  2306,  2312,  2318,  2324,  2330,  2336,
    2341,  2347,  2353,  2358,  2364,  2370,  2376,  2381,  2382,  2392,
    2399,  2479,  2482,  2487,  2492,  2493,  2503,  2510,  2513,  2516,
    2525,  2531,  2536,  2537,  2548,  2554,  2565,  2570,  2573,  2574,
    2584,  2584,  2608,  2611,  2614,  2619,  2622,  2627,  2630,  2635,
    2636,  2639,  2640,  2643,  2644,  2645,  2684,  2685,  2688,  2689,
    2692,  2695,  2700,  2701,  2719,  2722,  2725,  2728,  2731,  2734,
    2739,  2742,  2745,  2748,  2751,  2754,  2757,  2762,  2777,  2780,
    2785,  2791,  2794,  2795,  2803,  2808,  2811,  2816,  2825,  2835,
    2839,  2843,  2847,  2851,  2855,  2861,  2866,  2872,  2890,  2912,
    2951,  2957,  2951,  3000,  3000,  3026,  3031,  3037,  3031,  3076,
    3077,  3080,  3081,  3084,  3136,  3139,  3142,  3145,  3150,  3153,
    3158,  3159,  3160,  3163,  3164,  3165,  3166,  3167,  3168,  3169,
    3170,  3171,  3172,  3173,  3177,  3181,  3185,  3196,  3207,  3218,
    3229,  3240,  3251,  3262,  3273,  3284,  3295,  3306,  3317,  3318,
    3319,  3320,  3331,  3342,  3353,  3360,  3367,  3374,  3383,  3396,
    3401,  3402,  3414,  3421,  3428,  3437,  3441,  3446,  3447,  3457,
    3460,  3463,  3477,  3478,  3481,  3484,  3489,  3553,  3553,  3554,
    3557,  3603,  3606,  3606,  3617,  3620,  3620,  3632,  3635,  3640,
    3658,  3678,  3722,  3803,  3804,  3805,  3806,  3807,  3808,  3809,
    3810,  3811,  3812,  3813,  3814,  3815,  3816,  3817,  3818,  3819,
    3820,  3821,  3822,  3823,  3824,  3825,  3826,  3827,  3828,  3829,
    3830,  3831,  3834,  3837,  3842,  3845,  3850,  3853,  3861,  3864,
    3870,  3874,  3886,  3890,  3896,  3900,  3923,  3927,  3933,  3936,
    3941,  3944,  3949,  3952,  3957,  3960,  3965,  4017,  4022,  4028,
    4051,  4063,  4075,  4087,  4106,  4117,  4134,  4151,  4160,  4167,
    4167,  4168,  4168,  4169,  4173,  4173,  4174,  4178,  4179,  4183,
    4183,  4184,  4187,  4242,  4248,  4253,  4254,  4266,  4269,  4272,
    4287,  4302,  4319,  4324,  4338,  4441,  4444,  4452,  4455,  4458,
    4463,  4471,  4482,  4497,  4501,  4505,  4509,  4513,  4517,  4521,
    4525,  4529,  4533,  4537,  4541,  4545,  4549,  4553,  4557,  4561,
    4565,  4569,  4573,  4577,  4581,  4585,  4589,  4593,  4597,  4601,
    4607,  4613,  4629,  4632,  4640,  4646,  4653
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_API", "TK_AUTOPYNAME",
  "TK_DEFDOCSTRING", "TK_DEFENCODING", "TK_PLUGIN", "TK_VIRTERRORHANDLER",
  "TK_EXPTYPEHINTCODE", "TK_TYPEHINTCODE", "TK_DOCSTRING", "TK_DOC",
  "TK_EXPORTEDDOC", "TK_EXTRACT", "TK_MAKEFILE", "TK_ACCESSCODE",
  "TK_GETCODE", "TK_SETCODE", "TK_PREINITCODE", "TK_INITCODE",
  "TK_POSTINITCODE", "TK_FINALCODE", "TK_UNITCODE",
  "TK_UNITPOSTINCLUDECODE", "TK_MODCODE", "TK_TYPECODE", "TK_PREPYCODE",
  "TK_COPYING", "TK_MAPPEDTYPE", "TK_CODELINE", "TK_IF", "TK_END",
  "TK_NAME_VALUE", "TK_PATH_VALUE", "TK_STRING_VALUE",
  "TK_VIRTUALCATCHERCODE", "TK_TRAVERSECODE", "TK_CLEARCODE",
  "TK_GETBUFFERCODE", "TK_RELEASEBUFFERCODE", "TK_READBUFFERCODE",
  "TK_WRITEBUFFERCODE", "TK_SEGCOUNTCODE", "TK_CHARBUFFERCODE",
  "TK_PICKLECODE", "TK_VIRTUALCALLCODE", "TK_METHODCODE",
  "TK_PREMETHODCODE", "TK_INSTANCECODE", "TK_FROMTYPE", "TK_TOTYPE",
  "TK_TOSUBCLASS", "TK_INCLUDE", "TK_OPTINCLUDE", "TK_IMPORT",
  "TK_EXPHEADERCODE", "TK_MODHEADERCODE", "TK_TYPEHEADERCODE", "TK_MODULE",
  "TK_CMODULE", "TK_CONSMODULE", "TK_COMPOMODULE", "TK_CLASS", "TK_STRUCT",
  "TK_PUBLIC", "TK_PROTECTED", "TK_PRIVATE", "TK_SIGNALS",
  "TK_SIGNAL_METHOD", "TK_SLOTS", "TK_SLOT_METHOD", "TK_BOOL", "TK_SHORT",
  "TK_INT", "TK_LONG", "TK_FLOAT", "TK_DOUBLE", "TK_CHAR", "TK_WCHAR_T",
  "TK_VOID", "TK_PYOBJECT", "TK_PYTUPLE", "TK_PYLIST", "TK_PYDICT",
  "TK_PYCALLABLE", "TK_PYSLICE", "TK_PYTYPE", "TK_PYBUFFER", "TK_VIRTUAL",
  "TK_ENUM", "TK_SIGNED", "TK_UNSIGNED", "TK_SCOPE", "TK_LOGICAL_OR",
  "TK_CONST", "TK_STATIC", "TK_SIPSIGNAL", "TK_SIPSLOT", "TK_SIPANYSLOT",
  "TK_SIPRXCON", "TK_SIPRXDIS", "TK_SIPSLOTCON", "TK_SIPSLOTDIS",
  "TK_SIPSSIZET", "TK_NUMBER_VALUE", "TK_REAL_VALUE", "TK_TYPEDEF",
  "TK_NAMESPACE", "TK_TIMELINE", "TK_PLATFORMS", "TK_FEATURE",
  "TK_LICENSE", "TK_QCHAR_VALUE", "TK_TRUE_VALUE", "TK_FALSE_VALUE",
  "TK_NULL_VALUE", "TK_OPERATOR", "TK_THROW", "TK_QOBJECT", "TK_EXCEPTION",
  "TK_RAISECODE", "TK_VIRTERRORCODE", "TK_EXPLICIT", "TK_TEMPLATE",
  "TK_FINAL", "TK_ELLIPSIS", "TK_DEFMETATYPE", "TK_DEFSUPERTYPE",
  "TK_PROPERTY", "TK_HIDE_NS", "TK_FORMAT", "TK_GET", "TK_ID", "TK_KWARGS",
  "TK_LANGUAGE", "TK_LICENSEE", "TK_NAME", "TK_OPTIONAL", "TK_ORDER",
  "TK_REMOVELEADING", "TK_SET", "TK_SIGNATURE", "TK_TIMESTAMP", "TK_TYPE",
  "TK_USEARGNAMES", "TK_USELIMITEDAPI", "TK_ALLRAISEPYEXC",
  "TK_CALLSUPERINIT", "TK_DEFERRORHANDLER", "TK_VERSION", "'('", "')'",
  "','", "'='", "'{'", "'}'", "';'", "'!'", "'-'", "'+'", "'*'", "'/'",
  "'&'", "'|'", "'~'", "'<'", "'>'", "':'", "'['", "']'", "'%'", "'^'",
  "$accept", "specification", "statement", "@1", "modstatement",
  "nsstatement", "defdocstring", "defdocstring_args",
  "defdocstring_arg_list", "defdocstring_arg", "defencoding",
  "defencoding_args", "defencoding_arg_list", "defencoding_arg", "plugin",
  "plugin_args", "plugin_arg_list", "plugin_arg", "virterrorhandler",
  "veh_args", "veh_arg_list", "veh_arg", "api", "api_args", "api_arg_list",
  "api_arg", "exception", "baseexception", "exception_body",
  "exception_body_directives", "exception_body_directive", "raisecode",
  "mappedtype", "@2", "mappedtypetmpl", "@3", "mtdefinition", "mtbody",
  "mtline", "mtfunction", "namespace", "@4", "optnsbody", "nsbody",
  "platforms", "@5", "platformlist", "platform", "feature", "feature_args",
  "feature_arg_list", "feature_arg", "timeline", "@6", "qualifierlist",
  "qualifiername", "ifstart", "@7", "oredqualifiers", "qualifiers",
  "ifend", "license", "license_args", "license_arg_list", "license_arg",
  "defmetatype", "defmetatype_args", "defmetatype_arg_list",
  "defmetatype_arg", "defsupertype", "defsupertype_args",
  "defsupertype_arg_list", "defsupertype_arg", "hiddenns", "hiddenns_args",
  "hiddenns_arg_list", "hiddenns_arg", "consmodule", "consmodule_args",
  "consmodule_arg_list", "consmodule_arg", "consmodule_body",
  "consmodule_body_directives", "consmodule_body_directive", "compmodule",
  "compmodule_args", "compmodule_arg_list", "compmodule_arg",
  "compmodule_body", "compmodule_body_directives",
  "compmodule_body_directive", "module", "module_args", "@8",
  "module_arg_list", "module_arg", "module_body", "module_body_directives",
  "module_body_directive", "dottedname", "optnumber", "include",
  "include_args", "include_arg_list", "include_arg", "optinclude",
  "import", "import_args", "import_arg_list", "import_arg",
  "optaccesscode", "optgetcode", "optsetcode", "copying", "exphdrcode",
  "modhdrcode", "typehdrcode", "travcode", "clearcode", "getbufcode",
  "releasebufcode", "readbufcode", "writebufcode", "segcountcode",
  "charbufcode", "instancecode", "picklecode", "finalcode", "modcode",
  "typecode", "preinitcode", "initcode", "postinitcode", "unitcode",
  "unitpostinccode", "prepycode", "exptypehintcode", "modtypehintcode",
  "classtypehintcode", "doc", "exporteddoc", "autopyname",
  "autopyname_args", "autopyname_arg_list", "autopyname_arg", "docstring",
  "docstring_args", "docstring_arg_list", "docstring_arg", "optdocstring",
  "extract", "extract_args", "extract_arg_list", "extract_arg", "makefile",
  "codeblock", "codelines", "enum", "@9", "optenumkey", "optfilename",
  "optname", "optenumbody", "enumbody", "enumline", "optcomma",
  "optenumassign", "optassign", "expr", "binop", "optunop", "value",
  "optcast", "scopedname", "scopednamehead", "scopepart", "bool_value",
  "simplevalue", "exprlist", "typedef", "struct", "@10", "@11",
  "classtmpl", "@12", "template", "class", "@13", "@14", "superclasses",
  "superlist", "superclass", "class_access", "optclassbody", "classbody",
  "classline", "property", "property_args", "property_arg_list",
  "property_arg", "property_body", "property_body_directives",
  "property_body_directive", "name_or_string", "optslot", "dtor", "ctor",
  "@15", "simplector", "optctorsig", "@16", "optsig", "@17", "optvirtual",
  "function", "operatorname", "optconst", "optfinal", "optabstract",
  "optflags", "flaglist", "flag", "flagvalue", "virtualcallcode",
  "methodcode", "premethodcode", "virtualcatchercode", "arglist",
  "rawarglist", "argvalue", "varmember", "@18", "@19", "simple_varmem",
  "@20", "varmem", "member", "@21", "variable", "variable_body",
  "variable_body_directives", "variable_body_directive", "cpptype",
  "argtype", "optref", "deref", "basetype", "cpptypelist", "optexceptions",
  "exceptionlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,    40,    41,    44,    61,   123,   125,    59,    33,    45,
      43,    42,    47,    38,   124,   126,    60,    62,    58,    91,
      93,    37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   173,   174,   174,   176,   175,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   180,   180,   181,   181,
     182,   183,   184,   184,   185,   185,   186,   187,   188,   188,
     189,   189,   190,   191,   192,   192,   193,   193,   194,   195,
     196,   196,   197,   197,   198,   198,   199,   200,   200,   201,
     202,   202,   203,   203,   203,   203,   204,   206,   205,   208,
     207,   209,   210,   210,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   212,   214,   213,   215,   215,   216,   216,
     218,   217,   219,   219,   220,   221,   222,   222,   223,   223,
     224,   226,   225,   227,   227,   228,   230,   229,   231,   231,
     231,   231,   232,   232,   233,   234,   235,   235,   235,   236,
     236,   237,   237,   237,   237,   238,   239,   239,   240,   240,
     241,   242,   243,   243,   244,   244,   245,   246,   247,   247,
     248,   248,   249,   250,   251,   251,   252,   252,   253,   254,
     254,   255,   255,   256,   256,   256,   257,   258,   258,   259,
     259,   260,   261,   261,   262,   262,   263,   263,   263,   264,
     264,   266,   265,   265,   267,   267,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   269,   269,   270,   270,   271,
     271,   271,   271,   272,   272,   273,   273,   274,   275,   275,
     276,   276,   277,   277,   278,   279,   280,   280,   281,   281,
     282,   283,   283,   284,   284,   285,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   316,   317,
     318,   319,   319,   319,   320,   320,   321,   322,   322,   323,
     324,   324,   325,   325,   326,   326,   327,   328,   329,   329,
     331,   330,   332,   332,   332,   333,   333,   334,   334,   335,
     335,   336,   336,   337,   337,   337,   338,   338,   339,   339,
     340,   340,   341,   341,   342,   342,   342,   342,   342,   342,
     343,   343,   343,   343,   343,   343,   343,   344,   345,   345,
     346,   346,   347,   347,   348,   349,   349,   350,   350,   350,
     350,   350,   350,   350,   350,   351,   351,   351,   352,   352,
     354,   355,   353,   357,   356,   358,   360,   361,   359,   362,
     362,   363,   363,   364,   365,   365,   365,   365,   366,   366,
     367,   367,   367,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   369,   370,
     371,   371,   372,   372,   372,   373,   373,   374,   374,   375,
     375,   375,   376,   376,   377,   377,   378,   380,   379,   379,
     381,   382,   383,   382,   384,   385,   384,   386,   386,   387,
     387,   387,   387,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   389,   389,   390,   390,   391,   391,   392,   392,
     393,   393,   394,   394,   395,   395,   395,   395,   396,   396,
     397,   397,   398,   398,   399,   399,   400,   401,   401,   401,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   404,
     403,   405,   403,   403,   407,   406,   406,   408,   408,   410,
     409,   409,   411,   412,   412,   413,   413,   414,   414,   414,
     414,   414,   415,   415,   416,   417,   417,   418,   418,   418,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     420,   420,   421,   421,   422,   422,   422
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     3,
       3,     2,     1,     3,     1,     3,     3,     2,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     2,
       2,     3,     1,     3,     3,     3,     5,     0,     3,     4,
       1,     2,     1,     1,     1,     1,     2,     0,     5,     0,
       6,     4,     1,     2,     1,     1,     1,     1,     2,     2,
       1,     1,     1,    14,     0,     5,     0,     3,     1,     2,
       0,     5,     1,     2,     1,     2,     1,     3,     1,     3,
       3,     0,     5,     1,     2,     1,     0,     5,     1,     2,
       3,     4,     1,     3,     1,     3,     0,     1,     3,     1,
       3,     3,     3,     3,     3,     2,     1,     3,     1,     3,
       3,     2,     1,     3,     1,     3,     3,     2,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     0,
       4,     1,     2,     1,     1,     1,     3,     1,     3,     1,
       3,     3,     0,     4,     1,     2,     1,     1,     1,     3,
       3,     0,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     0,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     3,
       1,     3,     3,     3,     2,     2,     1,     3,     1,     3,
       3,     0,     2,     0,     2,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     1,     3,     3,
       3,     0,     1,     3,     1,     3,     3,     0,     1,     3,
       1,     3,     1,     3,     3,     3,     4,     2,     1,     2,
       0,     9,     0,     1,     1,     0,     1,     0,     1,     0,
       1,     1,     2,     1,     1,     4,     0,     1,     0,     2,
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     3,     0,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     5,    11,
       0,     0,     8,     0,     3,     4,     0,     0,     8,     0,
       2,     1,     3,     2,     0,     1,     1,     1,     0,     3,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     3,     3,     2,     3,     3,
       1,     3,     3,     3,     3,     0,     4,     1,     2,     1,
       1,     1,     1,     1,     0,     1,    12,     0,     3,     1,
      11,     0,     0,     6,     0,     0,     7,     0,     1,    17,
       7,    17,    16,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     1,     2,     2,     1,     2,     2,     2,
       1,     2,     0,     1,     0,     1,     0,     2,     0,     3,
       1,     3,     1,     3,     1,     5,     1,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     1,     0,     1,     3,
       4,     4,     4,     3,     3,     6,     6,     3,     2,     0,
       3,     0,     3,     1,     0,     3,     1,     1,     1,     0,
       3,     1,     8,     0,     3,     1,     2,     1,     1,     2,
       2,     2,     4,     3,     3,     0,     1,     0,     3,     2,
       1,     4,     2,     2,     1,     1,     2,     1,     1,     2,
       2,     3,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     4,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   564,   554,   557,   558,   562,   563,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   302,     0,
     555,     0,     0,   578,     0,     0,   131,   120,     0,   146,
       0,     0,     0,   579,     0,     0,     0,     5,    42,    19,
      20,     9,    41,    14,    49,    39,    40,    45,    16,    17,
      15,    43,    44,    18,    21,    22,    23,     7,     8,     6,
      11,    12,    13,    10,    24,    25,    54,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      51,   550,   341,   342,    50,    46,    48,   363,    47,    52,
      53,     0,   547,     0,     0,    79,    56,     0,    55,    62,
       0,    61,    68,     0,    67,    74,     0,     0,   298,   270,
       0,   271,   273,   274,   290,     0,     0,   305,   264,   265,
     266,   267,   268,   262,   269,   247,     0,   488,   136,   228,
       0,   227,   234,   236,     0,   235,   248,   249,   250,   223,
     224,     0,   215,   201,   225,     0,   179,   174,     0,   192,
     187,   366,   360,   560,   303,   304,   307,   565,   553,   556,
     559,   566,   340,   547,     0,   114,     0,     0,   126,     0,
     125,   147,     0,   488,     0,    87,     0,     0,   155,   156,
       0,   161,   162,     0,   167,   168,     0,     0,     0,     0,
     488,     0,   545,    80,     0,     0,     0,    82,     0,     0,
      58,     0,     0,    64,     0,     0,    70,     0,     0,    76,
      73,   299,   297,     0,     0,     0,   292,   289,   306,     0,
     552,     0,    97,   307,     0,     0,     0,   230,     0,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,   199,   225,   226,   200,     0,     0,   176,
       0,   173,     0,     0,   189,     0,   186,   369,   369,   308,
     488,   561,   545,   488,     0,   116,     0,     0,     0,     0,
     128,     0,     0,     0,     0,     0,   149,   145,   507,     0,
     488,   580,     0,     0,     0,   158,     0,     0,   164,     0,
       0,   170,     0,   343,   488,   364,   507,   533,     0,     0,
       0,   454,   453,   455,   456,   458,   459,   473,   476,   480,
       0,   457,   460,     0,   549,   546,   543,     0,     0,    81,
       0,     0,    57,     0,     0,    63,     0,     0,    69,     0,
       0,    75,     0,     0,     0,   291,     0,   296,   492,     0,
     490,     0,   138,     0,   142,     0,     0,     0,     0,   229,
       0,     0,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,     0,   281,   219,   220,     0,
     217,   221,   222,   202,     0,   175,     0,   183,   184,     0,
     181,   185,     0,   188,     0,   196,   197,     0,   194,   198,
     374,   488,   488,   300,   542,     0,     0,     0,     0,   135,
       0,   133,   124,     0,   122,     0,   127,     0,     0,     0,
       0,     0,   148,     0,   307,   307,   307,   307,   307,     0,
       0,   307,     0,   506,   508,   307,   320,     0,     0,     0,
     365,     0,   157,     0,     0,   163,     0,     0,   169,     0,
     551,    99,     0,     0,     0,   474,     0,   478,   479,   464,
     463,   465,   466,   468,   469,   477,   461,   481,   462,   475,
     467,   470,   507,   548,   432,   433,    84,    85,    83,    60,
      59,    66,    65,    72,    71,    78,    77,   294,   295,   293,
       0,     0,   489,     0,    98,   139,     0,   137,   307,   232,
     345,   346,   233,   231,   240,   239,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   205,     0,   275,   282,     0,
       0,     0,   218,   178,   177,     0,   182,   191,   190,     0,
     195,   375,   376,   377,   370,   371,     0,   367,   361,     0,
     358,     0,   118,     0,   363,   115,   132,   134,   121,   123,
     130,   129,   152,   153,   154,   151,   150,   488,   488,   488,
     488,   488,   507,   507,   488,   482,     0,   488,   338,   518,
      88,     0,    86,   581,   160,   159,   166,   165,   172,   171,
       0,   482,     0,     0,     0,   537,   538,     0,   535,   241,
       0,   471,   472,     0,   223,   496,   497,   494,   493,   491,
       0,     0,     0,     0,     0,     0,   102,   112,   104,   105,
     106,   110,   107,   111,   140,     0,   143,     0,     0,   277,
       0,     0,   284,   280,   216,   180,   193,   374,   373,   378,
     378,   309,     0,   117,   119,   320,   320,   320,   513,   514,
       0,     0,   517,   483,   484,   509,   544,     0,   321,   322,
     330,     0,     0,    90,    94,    92,    93,    95,   100,   484,
     539,   540,   541,   534,   536,     0,   243,     0,   482,   225,
     263,   259,   108,   109,     0,     0,   103,   141,     0,   276,
       0,     0,   283,     0,   372,   380,     0,     0,   318,   313,
     314,     0,   310,   311,     0,   510,   511,   512,   307,   307,
     485,   582,     0,   324,   325,   326,   327,   328,   329,   338,
     331,   333,   334,   335,   336,   332,     0,    96,     0,    91,
     582,   242,     0,   245,   450,   484,     0,     0,   101,   279,
     278,   286,   285,     0,     0,   344,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   434,   434,
     434,     0,   519,   521,   529,   524,   437,     0,   389,   385,
     383,   384,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   394,   407,   393,   391,   390,   386,
     388,   387,   447,   381,   392,   409,   408,   439,     0,   531,
     410,   523,   526,   527,   528,   368,   362,   338,   488,     0,
     312,     0,   488,   488,     0,   486,   339,   323,   353,   350,
     349,   354,   352,   347,   351,   337,     0,    89,   486,   244,
       0,   532,   582,   225,   507,   272,   261,   507,   251,   252,
     253,   254,   255,   256,   257,   258,   260,   413,   412,   411,
     435,     0,     0,     0,   417,     0,     0,     0,     0,     0,
       0,   425,   379,   382,     0,   319,   316,   301,   488,   515,
     516,   584,     0,   488,   338,   488,   246,   486,   495,     0,
       0,   414,   415,   416,   529,   520,   522,   530,     0,   525,
       0,   438,     0,     0,     0,     0,   420,     0,   418,     0,
     317,   315,     0,   585,     0,   487,   444,   356,     0,   444,
     488,   482,   582,     0,     0,     0,     0,   419,     0,   429,
     430,   431,     0,   427,     0,   359,   583,     0,   445,     0,
     348,   338,     0,   444,   582,   488,   422,   423,   424,   421,
       0,   428,   582,   586,     0,   502,   357,   287,     0,   488,
     441,   426,   486,     0,     0,   500,   288,   502,   502,   444,
     442,     0,   488,   507,   503,     0,   504,   500,   500,     0,
       0,   287,     0,     0,   501,     0,   498,   504,   504,   287,
     507,   502,   502,     0,   505,     0,   452,   498,   498,   502,
       0,   500,   500,   446,   499,   449,   451,   500,     0,   440,
     504,   113,   443,   436
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    77,    78,    79,   138,   239,   240,
      80,   141,   242,   243,    81,   144,   245,   246,    82,   147,
     248,   249,    83,   135,   236,   237,    84,   320,   602,   682,
     683,   684,    85,   381,    86,   610,   524,   635,   636,   637,
      87,   305,   438,   573,    88,   207,   443,   444,    89,   210,
     309,   310,    90,   206,   440,   441,    91,   263,   384,   385,
      92,    93,   213,   315,   316,    94,   218,   324,   325,    95,
     221,   327,   328,    96,   224,   330,   331,    97,   186,   288,
     289,   291,   419,   420,    98,   189,   293,   294,   296,   427,
     428,    99,   182,   284,   280,   281,   283,   409,   410,   183,
     286,   100,   171,   266,   267,   101,   102,   175,   269,   270,
     696,   753,   851,   103,   104,   105,   106,   793,   794,   795,
     796,   797,   798,   799,   800,   641,   802,   803,   107,   642,
     108,   109,   110,   111,   112,   113,   114,   115,   805,   116,
     117,   411,   547,   648,   649,   976,   550,   651,   652,   977,
     118,   156,   255,   256,   119,   149,   150,   120,   569,   196,
     259,   300,   721,   722,   723,   921,   828,   599,   678,   739,
     746,   679,   680,   121,   122,   123,   532,   845,   928,   124,
     125,   298,   660,   126,   229,   574,   128,   297,   659,   431,
     564,   565,   566,   716,   812,   813,   814,   881,   915,   916,
     918,   942,   943,   506,   871,   815,   816,   879,   817,   981,
     990,   949,   964,   818,   819,   353,   674,   731,   893,   262,
     379,   380,   628,  1006,   986,   975,   996,   462,   463,   464,
     820,   875,   876,   821,   878,   822,   823,   877,   824,   484,
     617,   618,   465,   466,   356,   232,   132,   322,   835,   924
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -861
static const yytype_int16 yypact[] =
{
    -861,   181,  -861,   991,  -861,  -861,    66,    45,    57,    83,
      90,   176,   176,   176,   176,    94,   184,   176,   176,   176,
     176,   176,   176,   176,   176,  1478,    87,  -861,  -861,    34,
     237,    50,   176,   176,   176,    54,   117,    61,    74,    63,
      63,  -861,  -861,  -861,   186,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,   297,   210,
     318,   259,  1478,  -861,  1442,   279,  -861,  -861,    95,    62,
    1442,    63,   159,  -861,    79,    86,    89,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,   172,   280,  -861,  -861,  -861,  -861,   312,  -861,  -861,
    -861,    72,  -861,   246,   120,  -861,  -861,   257,  -861,  -861,
     267,  -861,  -861,   272,  -861,  -861,   278,   176,  -861,  -861,
     139,  -861,  -861,  -861,  -861,   220,   176,   383,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,    63,   264,  -861,  -861,
     291,  -861,  -861,  -861,   293,  -861,  -861,  -861,  -861,  -861,
    -861,   240,   281,  -861,   343,   315,   295,  -861,   331,   308,
    -861,  -861,    48,  -861,  -861,  -861,   426,  -861,  -861,  -861,
     395,  -861,   280,  -861,    97,  -861,   336,   351,  -861,   356,
    -861,  -861,   193,   264,   357,   364,  1442,   387,  -861,  -861,
     390,  -861,  -861,   393,  -861,  -861,  1442,   259,  1478,   469,
      -5,   338,   215,  -861,   381,   388,   212,  -861,   389,   282,
    -861,   391,   286,  -861,   392,   288,  -861,   394,   290,  -861,
    -861,  -861,  -861,   396,   397,   292,  -861,  -861,  -861,   176,
    -861,   504,  -861,     1,   398,   399,   294,  -861,   400,   302,
    -861,   402,   404,   405,   406,   408,   409,   410,   411,   412,
     304,  -861,   258,  -861,   343,  -861,  -861,   413,   309,  -861,
     252,  -861,   414,   313,  -861,   252,  -861,   373,   373,  -861,
     264,  -861,   215,   264,   386,   415,   511,   516,   417,   320,
    -861,   418,   420,   421,   422,   322,  -861,  -861,  1155,    63,
     264,  -861,   -24,   423,   324,  -861,   424,   326,  -861,   425,
     328,  -861,   -14,  -861,   264,  -861,  1155,   427,   428,   188,
     429,   430,   434,   436,   437,   438,   439,  -861,    13,   106,
     433,   440,   441,   445,   474,  -861,  -861,   362,   476,  -861,
     120,   562,  -861,   257,   563,  -861,   267,   566,  -861,   272,
     571,  -861,   278,   572,   501,  -861,   220,  -861,   453,   129,
    -861,   454,   449,   577,   517,   460,   455,   579,   369,  -861,
     291,   581,  -861,   293,   582,   587,   117,   369,   369,   369,
     369,   583,   518,  -861,   240,   473,    98,  -861,  -861,    47,
    -861,  -861,  -861,  -861,   117,  -861,   315,  -861,  -861,    31,
    -861,  -861,   117,  -861,   331,  -861,  -861,    35,  -861,  -861,
     289,   264,   264,  -861,  -861,   468,   593,   742,   470,  -861,
      32,  -861,  -861,    38,  -861,   362,  -861,   356,   594,   595,
     596,   597,  -861,   193,   426,   426,   426,   426,   426,   477,
     482,   426,   483,   484,  -861,   426,   486,   489,   481,  1442,
    -861,   117,  -861,   387,   117,  -861,   390,    63,  -861,   393,
    -861,  -861,   490,   248,   488,  -861,  1442,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,   492,  -861,   493,  -861,
    -861,  -861,  1155,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
     217,   504,  -861,   227,  -861,  -861,     3,  -861,   426,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,   498,  -861,  -861,   519,
     176,   491,  -861,  -861,  -861,   495,  -861,  -861,  -861,   496,
    -861,  -861,  -861,  -861,   502,  -861,    63,  -861,  -861,   494,
    -861,   505,  -861,   223,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,   264,   264,   264,
     264,   264,  1155,  1155,   264,   559,  1155,   264,   507,  -861,
    -861,   146,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
     454,   559,   176,   176,   176,  -861,  -861,    43,  -861,   640,
     509,  -861,  -861,   512,   499,  -861,  -861,  -861,  -861,  -861,
     176,   176,   176,   176,  1442,    51,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,   626,  -861,   514,   335,  -861,
     520,   359,  -861,  -861,  -861,  -861,  -861,   289,  -861,   508,
     508,   350,   521,  -861,  -861,   486,   486,   486,  -861,  -861,
     523,   524,  -861,  -861,   545,  -861,  -861,    63,   208,  -861,
     253,   176,    59,  -861,  -861,  -861,  -861,  -861,  -861,   545,
    -861,  -861,  -861,  -861,  -861,   176,   654,   522,   559,   343,
    -861,  -861,  -861,  -861,   644,   527,  -861,  -861,   638,  -861,
     498,   643,  -861,   519,  -861,  1094,   529,   531,   526,  -861,
    -861,   525,   350,  -861,  1442,  -861,  -861,  -861,   426,   426,
    -861,   574,   537,  -861,  -861,  -861,  -861,  -861,  -861,   507,
    -861,  -861,  -861,  -861,  -861,  -861,  1216,  -861,   533,  -861,
     574,  -861,   176,   675,  -861,   545,   535,   544,  -861,  -861,
    -861,  -861,  -861,   176,   176,   546,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   628,   628,
     628,   528,  -861,  -861,   536,  -861,  -861,   549,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,   861,  -861,  -861,  -861,  -861,  -861,   538,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,   507,   264,   548,
    -861,   361,   264,   264,   551,   553,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,   -41,  -861,  -861,   557,  -861,   553,  -861,
     176,  -861,   574,   343,  1155,  -861,  -861,  1155,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,   541,   542,   543,  -861,  1272,  1272,  1386,  1329,   679,
     187,   558,  -861,  -861,   681,  -861,   564,  -861,   264,  -861,
    -861,    63,   611,   264,   268,   264,  -861,   553,  -861,   567,
     569,  -861,  -861,  -861,  -861,  -861,  -861,  -861,    93,  -861,
     546,  -861,   568,   573,   575,   365,  -861,   252,  -861,   580,
    -861,  -861,   561,  -861,   367,  -861,   554,   208,   370,   554,
     264,   559,   574,   584,   692,   362,   693,  -861,   187,  -861,
    -861,  -861,    41,  -861,   576,  -861,  -861,    63,  -861,   585,
    -861,   507,   586,   554,   574,   264,  -861,  -861,  -861,  -861,
     588,  -861,   574,  -861,  1442,   682,   208,   721,   589,   264,
     565,  -861,   553,   598,   176,   686,  -861,   682,   682,   554,
    -861,   590,   264,  1155,  -861,   176,   700,   686,   686,   591,
     599,   721,   610,   592,  -861,   176,   707,   700,   700,   721,
    1155,   682,   682,   600,  -861,   176,  -861,   707,   707,   682,
     616,   686,   686,  -861,  -861,  -861,  -861,   686,   601,  -861,
     700,  -861,  -861,  -861
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -861,  -861,   737,  -861,  -861,  -407,  -861,  -861,  -861,   376,
    -861,  -861,  -861,   403,  -861,  -861,  -861,   407,  -861,  -861,
    -861,   416,  -861,  -861,  -861,   419,  -639,  -861,  -861,  -861,
      96,  -861,  -861,  -861,  -861,  -861,   162,  -861,   142,  -861,
    -626,  -861,  -861,  -861,  -861,  -861,  -861,   339,  -861,  -861,
    -861,   334,  -861,  -861,  -861,   344,  -255,  -861,  -861,  -861,
    -251,  -861,  -861,  -861,   330,  -861,  -861,  -861,   314,  -861,
    -861,  -861,   310,  -861,  -861,  -861,   306,  -861,  -861,  -861,
     374,  -861,  -861,   372,  -861,  -861,  -861,   368,  -861,  -861,
     371,  -861,  -861,  -861,  -861,   385,  -861,  -861,   401,    11,
    -267,  -861,  -861,  -861,   446,  -861,  -861,  -861,  -861,   447,
    -861,  -861,  -861,  -861,  -861,  -861,  -480,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,  -861,  -622,  -861,  -861,  -861,  -617,
    -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,  -861,
    -861,  -861,  -861,  -861,    84,  -257,  -861,  -861,    82,  -816,
    -861,  -861,  -861,   431,  -861,   -12,  -861,  -486,  -861,  -861,
    -861,  -234,  -861,  -861,    75,  -861,  -861,  -243,  -788,  -861,
    -861,  -635,  -861,   -26,   735,   604,  -343,  -861,  -861,  -612,
    -579,  -861,  -861,  -573,  -861,   796,  -225,  -861,  -861,   503,
    -861,   145,  -861,   143,  -861,    -8,  -861,  -861,  -861,  -130,
    -861,  -861,  -133,  -419,  -254,  -861,  -861,  -861,   -68,  -861,
    -861,  -805,  -861,  -861,    12,  -861,  -583,  -557,  -779,  -189,
    -861,   321,  -861,  -479,  -654,  -657,  -860,  -318,  -861,   243,
    -861,  -861,  -861,  -342,  -861,   -65,  -861,  -861,    16,  -861,
    -861,   224,     0,  -861,   550,   641,    -9,  -203,  -718,  -861
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -553
static const yytype_int16 yytable[] =
{
     151,   152,   153,   131,   335,   158,   159,   160,   161,   162,
     163,   164,   165,   191,   192,   129,   167,   413,   482,   130,
     176,   177,   178,   332,   317,   412,   580,   407,   689,   386,
     572,   408,   848,   421,   382,   417,   644,   643,   429,   418,
     425,   337,   406,   640,   426,   215,   406,   184,   187,   190,
     225,   405,   406,   203,   539,   540,   541,   542,   406,   612,
     613,   614,    26,    27,   204,   439,    26,    27,   169,   895,
     214,   442,    26,    27,    26,    27,   788,   630,    26,    27,
     136,  -552,    26,    27,   173,   219,   222,   179,   180,   789,
      26,    27,   139,   801,   179,   180,    28,   211,   804,   133,
     631,   632,   633,   808,   837,   230,   927,   179,   180,    34,
    -550,   433,   179,   180,   435,   755,   142,    34,   930,   179,
     180,   687,    28,   145,   952,   226,   933,   154,   208,   469,
     303,   468,   750,   548,   897,   250,   809,  1007,  1008,   469,
     260,    58,   810,   470,   257,   481,   336,   634,   968,   643,
     179,   180,   412,   480,   407,   640,    61,   261,   408,   383,
    1023,   645,   421,   966,   417,  -552,   664,   495,   418,   251,
     429,   252,   425,   788,   989,  1001,   426,    26,    27,   496,
     681,     4,    61,  1009,   623,   170,   789,   555,   576,   231,
     801,   559,   885,   982,   578,   804,   137,   960,   852,   693,
     808,   174,   687,   551,    34,   181,   148,   705,   140,  -552,
     231,  -552,   185,   212,   955,   748,   321,   134,   157,   334,
     587,   588,   589,   590,   591,   188,   321,   594,   615,   807,
     217,   597,   616,   809,   143,   792,   969,   220,   168,   810,
     223,   146,   567,   568,   972,   155,   209,   377,   304,   549,
     624,   180,   625,   630,    26,    27,    28,   234,    26,    27,
     497,   193,   405,   406,   612,   613,   614,   681,   638,   406,
     235,   172,   639,   498,   670,   671,   631,   632,   633,    26,
      27,    34,   521,    26,    27,    34,    39,    40,   197,    26,
      27,   522,    28,   467,   646,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,   205,    58,    59,    60,    61,    58,    62,   912,
     987,   988,   626,   634,   913,   216,   807,    63,   914,   311,
      64,    65,   792,   997,   998,   312,   313,   314,   226,   486,
      70,   228,   487,    71,  1011,  1012,   685,    72,   954,    73,
     686,   233,  1017,   253,   561,   562,   563,  1019,  1020,   254,
     194,   195,   615,  1021,   359,   360,   616,   733,   734,   735,
     736,   737,   738,   227,   271,   272,   354,   273,   355,   663,
     638,    26,    27,   718,   639,   274,   275,   276,   277,   278,
     279,   198,   199,   200,   238,   504,   201,   505,   665,   666,
     667,   668,   669,   844,   241,   672,   719,   538,   676,   244,
     720,   740,   741,   742,   743,   247,   744,   258,   745,   677,
    -355,  -355,   725,   726,   727,   553,   261,   685,   264,   265,
     268,   686,   756,   557,   362,   363,   282,   131,   365,   366,
     368,   369,   371,   372,   375,   376,   389,   390,   285,   129,
     290,   608,   287,   130,   392,   393,   403,   404,   806,   299,
     790,   415,   416,   295,   791,   423,   424,   719,   292,   603,
     301,   720,   446,   447,   452,   453,   472,   473,   475,   476,
     478,   479,   604,   530,   531,   606,   620,   709,   710,   338,
     811,   306,   339,   308,   832,   833,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   307,   350,   318,   351,
     352,   712,   713,   888,   469,   319,   957,   937,   938,   946,
     947,   831,   950,   951,   323,   872,   873,   326,  1015,  1016,
     329,   627,    39,   905,   906,   357,   899,   378,   653,   900,
     658,   430,   358,   361,   439,   364,   367,   436,   370,   442,
     373,   374,   387,   388,   391,   806,   394,   790,   395,   396,
     397,   791,   398,   399,   400,   401,   402,   414,   422,   503,
     437,   445,   448,   131,   449,   450,   451,   471,   474,   477,
     485,   507,   483,   488,   489,   129,   898,   811,   490,   130,
     491,   492,   493,   494,   500,   501,   502,   509,   511,   513,
     690,   691,   692,   499,   515,   517,   518,   520,  -308,   523,
     525,   526,   527,   529,   528,   534,   543,   536,   700,   701,
     702,   703,   537,   544,   546,   570,   571,   575,   592,   582,
     583,   584,   585,   593,   704,   595,   601,   596,   647,   886,
     598,   600,   611,   889,   890,   619,   621,   622,   654,   661,
     650,   732,   655,   656,   673,   657,   695,   662,   677,   707,
     941,   697,   939,   715,   698,   993,   940,   699,   708,   747,
     730,   752,   724,   759,   711,   728,   729,   757,   761,   754,
     827,   829,  1010,   751,   758,   941,   825,   939,   826,   836,
     847,   940,   834,   850,   853,   854,   874,   857,   870,   922,
     880,  -448,   891,   884,   926,   887,   929,   892,   894,   901,
     902,   903,   910,   917,   919,   131,   925,   920,   945,   931,
     843,   932,   934,   948,   321,   956,   958,   935,   962,   936,
     974,   944,   406,   985,   980,   336,   995,   846,     5,   510,
     849,   953,   965,   967,  1003,   971,   978,   991,   999,   983,
    1000,   855,   856,  1005,   858,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   970,  1002,  1018,   512,
    1013,  1022,   688,    26,    27,    28,   514,   706,   749,   508,
     979,   581,   579,   586,   577,   609,   607,   605,   516,   545,
     554,   556,   558,   992,   760,   762,   202,   830,   560,   127,
      34,   432,   714,   717,   883,    39,    40,   519,   959,   961,
     552,   911,   131,   909,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   333,    58,    59,    60,    61,   533,    62,   896,   675,
     535,   694,   629,     0,   302,     0,    63,     0,     0,    64,
      65,     0,   434,     0,     0,     0,     0,     0,     0,    70,
       0,     0,    71,     0,     0,   923,    72,     0,    73,     0,
       0,   763,   406,     0,     0,   131,   131,   908,   131,     0,
       0,     0,     0,   764,     0,     0,     0,   630,     0,   907,
       0,     0,    26,    27,   765,     0,     0,     0,   766,   767,
     768,   769,   770,   771,   772,   773,   774,     0,     0,     0,
     631,   775,   776,   777,     0,     0,     0,     0,     0,    34,
       0,   963,     0,     0,    39,    40,   778,   779,   780,   781,
     782,     0,   783,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     784,    58,    59,    60,    61,     0,    62,   785,     0,     0,
       0,     0,   984,     0,   973,    63,     0,     0,    64,    65,
       0,     0,     0,   994,     0,     0,     0,     0,    70,     0,
       0,    71,     0,  1004,   786,    72,     0,    73,     0,     0,
     787,     0,     0,  1014,     6,     0,     7,     8,     9,    10,
      11,    12,     0,    13,    14,    15,    16,     0,     0,     0,
      17,    18,    19,     0,    20,    21,    22,   882,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,    58,    59,    60,    61,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    65,
      66,    67,    68,    69,   763,   406,     0,     0,    70,     0,
       0,    71,     0,     0,     0,    72,   764,    73,    74,    75,
     630,    76,     0,     0,     0,    26,    27,   765,     0,     0,
       0,   766,   767,   768,   769,   770,   771,   772,   773,   774,
       0,     0,     0,   631,   775,   776,   777,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,    39,    40,   778,
     779,   780,   781,   782,     0,   783,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   784,    58,    59,    60,    61,    28,    62,
     785,     0,     0,     0,     0,     0,     0,     0,    63,     0,
       0,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,    71,     0,     0,   786,    72,   166,
      73,     0,     0,   787,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,     0,     0,    59,    60,    61,    28,
      62,   838,   454,   455,   456,   457,   458,   459,   460,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   461,     0,     0,     0,     0,     0,
     166,    73,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,     0,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,   839,   840,     0,     0,     0,     0,     0,     0,   841,
     530,   531,   842,     0,     0,     0,   166,     0,     0,     0,
       0,     0,    73,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   904,    28,    59,    60,    61,     0,    62,   785,     0,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   166,     0,     0,     0,     0,    73,     0,
       0,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,   904,    28,
      59,    60,    61,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
     166,     0,     0,     0,     0,    73,     0,     0,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,     0,    59,    60,    61,
       0,    62,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,   166,     0,     0,     0,
       0,    28,    73,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,    59,    60,    61,     0,    62,     0,     0,
       0,     0,   166,     0,     0,     0,    63,     0,     0,     0,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     0,    73,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      12,    13,    14,     3,   229,    17,    18,    19,    20,    21,
      22,    23,    24,    39,    40,     3,    25,   284,   336,     3,
      32,    33,    34,   226,   213,   282,   445,   282,   611,   263,
     437,   282,   750,   290,    33,   290,    33,   523,   295,   290,
     295,   230,    11,   523,   295,    71,    11,    36,    37,    38,
      76,     4,    11,    62,   397,   398,   399,   400,    11,    16,
      17,    18,    31,    32,    64,    33,    31,    32,    34,   848,
      70,    33,    31,    32,    31,    32,   715,    26,    31,    32,
      35,    33,    31,    32,    34,    74,    75,    33,    34,   715,
      31,    32,    35,   715,    33,    34,    33,    35,   715,    33,
      49,    50,    51,   715,   739,    33,   894,    33,    34,    58,
     151,   300,    33,    34,   303,   698,    33,    58,   897,    33,
      34,   601,    33,    33,   929,   166,    33,    33,    33,   153,
      33,   320,   689,    35,   852,   147,   715,   997,   998,   153,
     166,    90,   715,   167,   156,   334,   151,    96,   953,   635,
      33,    34,   409,   167,   409,   635,    93,   162,   409,   158,
    1020,   158,   419,   951,   419,   117,   573,   154,   419,    30,
     427,    32,   427,   812,   979,   991,   427,    31,    32,   166,
     121,     0,    93,   999,   502,   151,   812,   156,   156,   117,
     812,   156,   827,   972,   156,   812,   151,   156,   755,   156,
     812,   151,   682,   156,    58,   151,    30,   156,   151,   161,
     117,   163,   151,   151,   932,   156,   216,   151,    34,   228,
     454,   455,   456,   457,   458,   151,   226,   461,   483,   715,
     151,   465,   483,   812,   151,   715,   954,   151,   151,   812,
     151,   151,   431,   432,   962,   151,   151,   259,   151,   151,
      33,    34,    35,    26,    31,    32,    33,   137,    31,    32,
     154,    75,     4,    11,    16,    17,    18,   121,   523,    11,
     150,    34,   523,   167,   592,   593,    49,    50,    51,    31,
      32,    58,   153,    31,    32,    58,    63,    64,    78,    31,
      32,   162,    33,   319,   528,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    33,    90,    91,    92,    93,    90,    95,   132,
     977,   978,   105,    96,   137,   166,   812,   104,   141,   136,
     107,   108,   812,   987,   988,   142,   143,   144,   166,   151,
     117,    29,   154,   120,  1001,  1002,   601,   124,   931,   126,
     601,   105,  1009,   133,    65,    66,    67,  1011,  1012,   139,
      63,    64,   617,  1017,   152,   153,   617,   159,   160,   161,
     162,   163,   164,    93,   134,   135,   161,   137,   163,   156,
     635,    31,    32,    33,   635,   145,   146,   147,   148,   149,
     150,    73,    74,    75,   137,    33,    78,    35,   587,   588,
     589,   590,   591,   746,   137,   594,   661,   396,   597,   137,
     661,   158,   159,   160,   161,   137,   163,    34,   165,   151,
     152,   153,   665,   666,   667,   414,   162,   682,   137,   138,
     137,   682,   699,   422,   152,   153,   155,   437,   152,   153,
     152,   153,   152,   153,   152,   153,   152,   153,   105,   437,
     155,   477,   137,   437,   152,   153,   152,   153,   715,    33,
     715,   152,   153,   155,   715,   152,   153,   722,   137,   469,
      75,   722,   152,   153,   152,   153,   152,   153,   152,   153,
     152,   153,   471,   114,   115,   474,   486,   152,   153,   151,
     715,   155,   154,   137,   728,   729,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   155,   169,   151,   171,
     172,   152,   153,   152,   153,   151,   935,   152,   153,   152,
     153,   724,   152,   153,   137,   779,   780,   137,  1007,  1008,
     137,   520,    63,   875,   876,   154,   854,    33,   550,   857,
     566,   168,   154,   154,    33,   154,   154,   161,   154,    33,
     154,   154,   154,   154,   154,   812,   154,   812,   154,   154,
     154,   812,   154,   154,   154,   154,   154,   154,   154,    95,
     155,   154,   154,   573,   154,   154,   154,   154,   154,   154,
     152,   105,   155,   154,   154,   573,   853,   812,   154,   573,
     154,   154,   154,   154,   154,   154,   151,    35,    35,    33,
     612,   613,   614,   170,    33,    33,   105,   154,   159,   155,
      33,    94,   152,    34,   159,    34,    33,    35,   630,   631,
     632,   633,    35,   105,   151,   157,    33,   157,   151,    35,
      35,    35,    35,   151,   634,   152,   155,   153,   140,   828,
     154,   152,   152,   832,   833,   157,   154,   154,   157,   155,
     131,   677,   157,   157,    95,   153,    16,   152,   151,    33,
     917,   152,   917,   155,   152,   983,   917,   168,   154,   681,
     125,    17,   151,    35,   154,   152,   152,    33,    35,   157,
     154,   156,  1000,   695,   157,   942,   157,   942,   157,   152,
     157,   942,   118,    18,   159,   151,   168,   151,    70,   888,
     151,   165,   151,   165,   893,   157,   895,   154,   151,   168,
     168,   168,    33,   155,    33,   715,   105,   153,   157,   152,
     746,   152,   154,   169,   724,    33,    33,   154,   152,   154,
      48,   151,    11,    47,   169,   151,    36,   746,     1,   363,
     752,   930,   157,   157,   152,   157,   157,   157,   157,   151,
     151,   763,   764,    46,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   955,   157,   152,   366,
     170,   170,   610,    31,    32,    33,   369,   635,   682,   360,
     969,   447,   443,   453,   440,   479,   476,   473,   372,   404,
     416,   419,   424,   982,   710,   713,    61,   722,   427,     3,
      58,   298,   657,   660,   812,    63,    64,   376,   938,   942,
     409,   879,   812,   878,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,   227,    90,    91,    92,    93,   390,    95,   850,   596,
     393,   617,   521,    -1,   203,    -1,   104,    -1,    -1,   107,
     108,    -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,   120,    -1,    -1,   891,   124,    -1,   126,    -1,
      -1,    10,    11,    -1,    -1,   875,   876,   877,   878,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,   877,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      -1,   947,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    95,    96,    -1,    -1,
      -1,    -1,   974,    -1,   964,   104,    -1,    -1,   107,   108,
      -1,    -1,    -1,   985,    -1,    -1,    -1,    -1,   117,    -1,
      -1,   120,    -1,   995,   123,   124,    -1,   126,    -1,    -1,
     129,    -1,    -1,  1005,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    25,   156,    27,    28,
      29,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,   107,   108,
     109,   110,   111,   112,    10,    11,    -1,    -1,   117,    -1,
      -1,   120,    -1,    -1,    -1,   124,    22,   126,   127,   128,
      26,   130,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    33,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,    -1,   120,    -1,    -1,   123,   124,    64,
     126,    -1,    -1,   129,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    91,    92,    93,    33,
      95,    35,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      64,   126,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    33,    -1,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    33,    91,    92,    93,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    33,
      91,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,   126,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    33,    -1,    91,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    33,   126,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    91,    92,    93,    -1,    95,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,   126,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   174,   175,   176,     0,   175,     3,     5,     6,     7,
       8,     9,    10,    12,    13,    14,    15,    19,    20,    21,
      23,    24,    25,    27,    28,    29,    31,    32,    33,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    90,    91,
      92,    93,    95,   104,   107,   108,   109,   110,   111,   112,
     117,   120,   124,   126,   127,   128,   130,   177,   178,   179,
     183,   187,   191,   195,   199,   205,   207,   213,   217,   221,
     225,   229,   233,   234,   238,   242,   246,   250,   257,   264,
     274,   278,   279,   286,   287,   288,   289,   301,   303,   304,
     305,   306,   307,   308,   309,   310,   312,   313,   323,   327,
     330,   346,   347,   348,   352,   353,   356,   358,   359,   387,
     411,   415,   419,    33,   151,   196,    35,   151,   180,    35,
     151,   184,    33,   151,   188,    33,   151,   192,    30,   328,
     329,   328,   328,   328,    33,   151,   324,    34,   328,   328,
     328,   328,   328,   328,   328,   328,    64,   419,   151,    34,
     151,   275,    34,    34,   151,   280,   328,   328,   328,    33,
      34,   151,   265,   272,   272,   151,   251,   272,   151,   258,
     272,   346,   346,    75,    63,    64,   332,    78,    73,    74,
      75,    78,   347,   419,   415,    33,   226,   218,    33,   151,
     222,    35,   151,   235,   415,   346,   166,   151,   239,   272,
     151,   243,   272,   151,   247,   346,   166,    93,    29,   357,
      33,   117,   418,   105,   137,   150,   197,   198,   137,   181,
     182,   137,   185,   186,   137,   189,   190,   137,   193,   194,
     328,    30,    32,   133,   139,   325,   326,   328,    34,   333,
     346,   162,   392,   230,   137,   138,   276,   277,   137,   281,
     282,   134,   135,   137,   145,   146,   147,   148,   149,   150,
     267,   268,   155,   269,   266,   105,   273,   137,   252,   253,
     155,   254,   137,   259,   260,   155,   261,   360,   354,    33,
     334,    75,   418,    33,   151,   214,   155,   155,   137,   223,
     224,   136,   142,   143,   144,   236,   237,   392,   151,   151,
     200,   415,   420,   137,   240,   241,   137,   244,   245,   137,
     248,   249,   420,   348,   419,   359,   151,   392,   151,   154,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     169,   171,   172,   388,   161,   163,   417,   154,   154,   152,
     153,   154,   152,   153,   154,   152,   153,   154,   152,   153,
     154,   152,   153,   154,   154,   152,   153,   328,    33,   393,
     394,   206,    33,   158,   231,   232,   334,   154,   154,   152,
     153,   154,   152,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   152,   153,     4,    11,   229,   233,   270,
     271,   314,   318,   273,   154,   152,   153,   229,   233,   255,
     256,   318,   154,   152,   153,   229,   233,   262,   263,   318,
     168,   362,   362,   392,   417,   392,   161,   155,   215,    33,
     227,   228,    33,   219,   220,   154,   152,   153,   154,   154,
     154,   154,   152,   153,    97,    98,    99,   100,   101,   102,
     103,   119,   400,   401,   402,   415,   416,   346,   392,   153,
     167,   154,   152,   153,   154,   152,   153,   154,   152,   153,
     167,   392,   400,   155,   412,   152,   151,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   166,   154,   167,   170,
     154,   154,   151,    95,    33,    35,   376,   105,   198,    35,
     182,    35,   186,    33,   190,    33,   194,    33,   105,   326,
     154,   153,   162,   155,   209,    33,    94,   152,   159,    34,
     114,   115,   349,   277,    34,   282,    35,    35,   272,   349,
     349,   349,   349,    33,   105,   268,   151,   315,    35,   151,
     319,   156,   271,   272,   253,   156,   256,   272,   260,   156,
     263,    65,    66,    67,   363,   364,   365,   392,   392,   331,
     157,    33,   178,   216,   358,   157,   156,   228,   156,   220,
     376,   224,    35,    35,    35,    35,   237,   334,   334,   334,
     334,   334,   151,   151,   334,   152,   153,   334,   154,   340,
     152,   155,   201,   415,   272,   241,   272,   245,   346,   249,
     208,   152,    16,    17,    18,   229,   233,   413,   414,   157,
     415,   154,   154,   400,    33,    35,   105,   272,   395,   394,
      26,    49,    50,    51,    96,   210,   211,   212,   229,   233,
     289,   298,   302,   330,    33,   158,   334,   140,   316,   317,
     131,   320,   321,   328,   157,   157,   157,   153,   346,   361,
     355,   155,   152,   156,   178,   392,   392,   392,   392,   392,
     400,   400,   392,    95,   389,   402,   392,   151,   341,   344,
     345,   121,   202,   203,   204,   229,   233,   289,   209,   389,
     328,   328,   328,   156,   414,    16,   283,   152,   152,   168,
     328,   328,   328,   328,   415,   156,   211,    33,   154,   152,
     153,   154,   152,   153,   364,   155,   366,   366,    33,   229,
     233,   335,   336,   337,   151,   340,   340,   340,   152,   152,
     125,   390,   346,   159,   160,   161,   162,   163,   164,   342,
     158,   159,   160,   161,   163,   165,   343,   328,   156,   203,
     390,   328,    17,   284,   157,   389,   273,    33,   157,    35,
     317,    35,   321,    10,    22,    33,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    50,    51,    52,    65,    66,
      67,    68,    69,    71,    89,    96,   123,   129,   199,   213,
     229,   233,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   302,   311,   318,   330,   352,   353,
     356,   359,   367,   368,   369,   378,   379,   381,   386,   387,
     403,   406,   408,   409,   411,   157,   157,   154,   339,   156,
     337,   420,   334,   334,   118,   421,   152,   344,    35,   105,
     106,   113,   116,   346,   349,   350,   419,   157,   421,   328,
      18,   285,   390,   159,   151,   328,   328,   151,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
      70,   377,   377,   377,   168,   404,   405,   410,   407,   380,
     151,   370,   156,   368,   165,   344,   392,   157,   152,   392,
     392,   151,   154,   391,   151,   391,   328,   421,   273,   400,
     400,   168,   168,   168,    89,   406,   406,   387,   415,   408,
      33,   381,   132,   137,   141,   371,   372,   155,   373,    33,
     153,   338,   392,   346,   422,   105,   392,   341,   351,   392,
     391,   152,   152,    33,   154,   154,   154,   152,   153,   229,
     233,   318,   374,   375,   151,   157,   152,   153,   169,   384,
     152,   153,   384,   392,   389,   421,    33,   376,    33,   372,
     156,   375,   152,   346,   385,   157,   341,   157,   384,   421,
     392,   157,   421,   415,    48,   398,   318,   322,   157,   392,
     169,   382,   391,   151,   328,    47,   397,   398,   398,   384,
     383,   157,   392,   400,   328,    36,   399,   397,   397,   157,
     151,   322,   157,   152,   328,    46,   396,   399,   399,   322,
     400,   398,   398,   170,   328,   396,   396,   398,   152,   397,
     397,   397,   170,   399
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 570 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /*
             * We don't do these in parserEOF() because the parser is reading
             * ahead and that would be too early.
             */

            if (previousFile != NULL)
            {
                handleEOF();

                if (currentContext.prevmod != NULL)
                    handleEOM();

                free(previousFile);
                previousFile = NULL;
            }
    }
    break;

  case 54:
#line 639 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope == NULL)
                    yyerror("%TypeHeaderCode can only be used in a namespace, class or mapped type");

                appendCodeBlock(&scope->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 55:
#line 652 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                currentModule->defdocstring = convertFormat((yyvsp[(2) - (2)].defdocstring).name);
        }
    break;

  case 56:
#line 658 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defdocstring).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 57:
#line 663 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defdocstring) = (yyvsp[(2) - (3)].defdocstring);
        }
    break;

  case 59:
#line 669 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defdocstring) = (yyvsp[(1) - (3)].defdocstring);

            switch ((yyvsp[(3) - (3)].defdocstring).token)
            {
            case TK_NAME: (yyval.defdocstring).name = (yyvsp[(3) - (3)].defdocstring).name; break;
            }
        }
    break;

  case 60:
#line 679 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defdocstring).token = TK_NAME;

            (yyval.defdocstring).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 61:
#line 686 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if ((currentModule->encoding = convertEncoding((yyvsp[(2) - (2)].defencoding).name)) == no_type)
                    yyerror("The %DefaultEncoding name must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
            }
        }
    break;

  case 62:
#line 695 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defencoding).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 63:
#line 700 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(2) - (3)].defencoding);
        }
    break;

  case 65:
#line 706 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(1) - (3)].defencoding);

            switch ((yyvsp[(3) - (3)].defencoding).token)
            {
            case TK_NAME: (yyval.defencoding).name = (yyvsp[(3) - (3)].defencoding).name; break;
            }
        }
    break;

  case 66:
#line 716 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defencoding).token = TK_NAME;

            (yyval.defencoding).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 67:
#line 723 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /*
             * Note that %Plugin is internal in SIP v4.  The current thinking
             * is that it won't be needed for SIP v5.
             */

            if (notSkipping())
                appendString(&currentSpec->plugins, (yyvsp[(2) - (2)].plugin).name);
        }
    break;

  case 68:
#line 734 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.plugin).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 69:
#line 739 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.plugin) = (yyvsp[(2) - (3)].plugin);
        }
    break;

  case 71:
#line 745 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.plugin) = (yyvsp[(1) - (3)].plugin);

            switch ((yyvsp[(3) - (3)].plugin).token)
            {
            case TK_NAME: (yyval.plugin).name = (yyvsp[(3) - (3)].plugin).name; break;
            }
        }
    break;

  case 72:
#line 755 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.plugin).token = TK_NAME;

            (yyval.plugin).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 73:
#line 762 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].veh).name == NULL)
                yyerror("%VirtualErrorHandler must have a 'name' argument");

            if (notSkipping())
            {
                virtErrorHandler *veh, **tailp;

                /* Check there isn't already a handler with the same name. */
                for (tailp = &currentSpec->errorhandlers; (veh = *tailp) != NULL; tailp = &veh->next)
                    if (strcmp(veh->name, (yyvsp[(2) - (3)].veh).name) == 0)
                        break;

                if (veh != NULL)
                    yyerror("A virtual error handler with that name has already been defined");

                veh = sipMalloc(sizeof (virtErrorHandler));

                veh->name = (yyvsp[(2) - (3)].veh).name;
                appendCodeBlock(&veh->code, (yyvsp[(3) - (3)].codeb));
                veh->mod = currentModule;
                veh->index = -1;
                veh->next = NULL;

                *tailp = veh;
            }
        }
    break;

  case 74:
#line 791 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.veh).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 75:
#line 796 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.veh) = (yyvsp[(2) - (3)].veh);
        }
    break;

  case 77:
#line 802 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.veh) = (yyvsp[(1) - (3)].veh);

            switch ((yyvsp[(3) - (3)].veh).token)
            {
            case TK_NAME: (yyval.veh).name = (yyvsp[(3) - (3)].veh).name; break;
            }
        }
    break;

  case 78:
#line 812 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.veh).token = TK_NAME;

            (yyval.veh).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 79:
#line 819 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                apiVersionRangeDef *avd;

                if (findAPI(currentSpec, (yyvsp[(2) - (2)].api).name) != NULL)
                    yyerror("The API name in the %API directive has already been defined");

                if ((yyvsp[(2) - (2)].api).version < 1)
                    yyerror("The version number in the %API directive must be greater than or equal to 1");

                avd = sipMalloc(sizeof (apiVersionRangeDef));

                avd->api_name = cacheName(currentSpec, (yyvsp[(2) - (2)].api).name);
                avd->from = (yyvsp[(2) - (2)].api).version;
                avd->to = -1;

                avd->next = currentModule->api_versions;
                currentModule->api_versions = avd;

                if (inMainModule())
                    setIsUsedName(avd->api_name);
            }
        }
    break;

  case 80:
#line 845 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            deprecated("%API name and version number should be specified using the 'name' and 'version' arguments");

            (yyval.api).name = (yyvsp[(1) - (2)].text);
            (yyval.api).version = (yyvsp[(2) - (2)].number);
        }
    break;

  case 81:
#line 853 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.api) = (yyvsp[(2) - (3)].api);
        }
    break;

  case 83:
#line 859 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.api) = (yyvsp[(1) - (3)].api);

            switch ((yyvsp[(3) - (3)].api).token)
            {
            case TK_NAME: (yyval.api).name = (yyvsp[(3) - (3)].api).name; break;
            case TK_VERSION: (yyval.api).version = (yyvsp[(3) - (3)].api).version; break;
            }
        }
    break;

  case 84:
#line 870 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.api).token = TK_NAME;

            (yyval.api).name = (yyvsp[(3) - (3)].text);
            (yyval.api).version = 0;
        }
    break;

  case 85:
#line 876 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.api).token = TK_VERSION;

            (yyval.api).name = NULL;
            (yyval.api).version = (yyvsp[(3) - (3)].number);
        }
    break;

  case 86:
#line 884 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "Default",
                    "PyName",
                    NULL
                };

                exceptionDef *xd;
                const char *pyname;

                checkAnnos(&(yyvsp[(4) - (5)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%Exception not allowed in a C module");

                if ((yyvsp[(5) - (5)].exception).raise_code == NULL)
                    yyerror("%Exception must have a %RaiseCode sub-directive");

                pyname = getPythonName(currentModule, &(yyvsp[(4) - (5)].optflags), scopedNameTail((yyvsp[(2) - (5)].scpvalp)));

                checkAttributes(currentSpec, currentModule, NULL, NULL,
                        pyname, FALSE);

                xd = findException(currentSpec, (yyvsp[(2) - (5)].scpvalp), TRUE);

                if (xd->cd != NULL)
                    yyerror("%Exception name has already been seen as a class name - it must be defined before being used");

                if (xd->iff->module != NULL)
                    yyerror("The %Exception has already been defined");

                /* Complete the definition. */
                xd->iff->module = currentModule;
                appendCodeBlock(&xd->iff->hdrcode, (yyvsp[(5) - (5)].exception).type_header_code);
                xd->pyname = pyname;
                xd->bibase = (yyvsp[(3) - (5)].exceptionbase).bibase;
                xd->base = (yyvsp[(3) - (5)].exceptionbase).base;
                appendCodeBlock(&xd->raisecode, (yyvsp[(5) - (5)].exception).raise_code);

                if (getOptFlag(&(yyvsp[(4) - (5)].optflags), "Default", bool_flag) != NULL)
                    currentModule->defexception = xd;
            }
        }
    break;

  case 87:
#line 931 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;
        }
    break;

  case 88:
#line 935 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            exceptionDef *xd;

            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;

            /* See if it is a defined exception. */
            for (xd = currentSpec->exceptions; xd != NULL; xd = xd->next)
                if (compareScopedNames(xd->iff->fqcname, (yyvsp[(2) - (3)].scpvalp)) == 0)
                {
                    (yyval.exceptionbase).base = xd;
                    break;
                }

            if (xd == NULL && (yyvsp[(2) - (3)].scpvalp)->next == NULL && strncmp((yyvsp[(2) - (3)].scpvalp)->name, "SIP_", 4) == 0)
            {
                /* See if it is a builtin exception. */

                static char *builtins[] = {
                    "BaseException",
                    "Exception",
                    "StopIteration",
                    "GeneratorExit",
                    "ArithmeticError",
                    "LookupError",
                    "StandardError",                /* Python v2. */

                    "AssertionError",
                    "AttributeError",
                    "BufferError",
                    "EOFError",
                    "FloatingPointError",
                    "OSError",
                    "ImportError",
                    "IndexError",
                    "KeyError",
                    "KeyboardInterrupt",
                    "MemoryError",
                    "NameError",
                    "OverflowError",
                    "RuntimeError",
                    "NotImplementedError",
                    "SyntaxError",
                    "IndentationError",
                    "TabError",
                    "ReferenceError",
                    "SystemError",
                    "SystemExit",
                    "TypeError",
                    "UnboundLocalError",
                    "UnicodeError",
                    "UnicodeEncodeError",
                    "UnicodeDecodeError",
                    "UnicodeTranslateError",
                    "ValueError",
                    "ZeroDivisionError",
                    "EnvironmentError",             /* Python v2. */
                    "IOError",                      /* Python v2. */
                    "WindowsError",                 /* Python v2. */
                    "VMSError",                     /* Python v2. */

                    "BlockingIOError",
                    "BrokenPipeError",
                    "ChildProcessError",
                    "ConnectionError",
                    "ConnectionAbortedError",
                    "ConnectionRefusedError",
                    "ConnectionResetError",
                    "FileExistsError",
                    "FileNotFoundError",
                    "InterruptedError",
                    "IsADirectoryError",
                    "NotADirectoryError",
                    "PermissionError",
                    "ProcessLookupError",
                    "TimeoutError",

                    "Warning",
                    "UserWarning",
                    "DeprecationWarning",
                    "PendingDeprecationWarning",
                    "SyntaxWarning",
                    "RuntimeWarning",
                    "FutureWarning",
                    "ImportWarning",
                    "UnicodeWarning",
                    "BytesWarning",
                    "ResourceWarning",

                    NULL
                };

                char **cp;

                for (cp = builtins; *cp != NULL; ++cp)
                    if (strcmp((yyvsp[(2) - (3)].scpvalp)->name + 4, *cp) == 0)
                    {
                        (yyval.exceptionbase).bibase = *cp;
                        break;
                    }
            }

            if ((yyval.exceptionbase).bibase == NULL && (yyval.exceptionbase).base == NULL)
                yyerror("Unknown exception base type");
        }
    break;

  case 89:
#line 1042 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.exception) = (yyvsp[(2) - (4)].exception);
        }
    break;

  case 91:
#line 1048 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.exception) = (yyvsp[(1) - (2)].exception);

            switch ((yyvsp[(2) - (2)].exception).token)
            {
            case TK_RAISECODE: (yyval.exception).raise_code = (yyvsp[(2) - (2)].exception).raise_code; break;
            case TK_TYPEHEADERCODE: (yyval.exception).type_header_code = (yyvsp[(2) - (2)].exception).type_header_code; break;
            }
        }
    break;

  case 92:
#line 1059 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.exception).token = TK_IF;
        }
    break;

  case 93:
#line 1062 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.exception).token = TK_END;
        }
    break;

  case 94:
#line 1065 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_RAISECODE;
                (yyval.exception).raise_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).raise_code = NULL;
            }

            (yyval.exception).type_header_code = NULL;
        }
    break;

  case 95:
#line 1079 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_TYPEHEADERCODE;
                (yyval.exception).type_header_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).type_header_code = NULL;
            }

            (yyval.exception).raise_code = NULL;
        }
    break;

  case 96:
#line 1095 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 97:
#line 1100 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "AllowNone",
                    "API",
                    "DocType",
                    "NoRelease",
                    "PyName",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

                currentMappedType = newMappedType(currentSpec, &(yyvsp[(2) - (3)].memArg), &(yyvsp[(3) - (3)].optflags));
            }
        }
    break;

  case 99:
#line 1123 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "AllowNone",
                    "DocType",
                    "NoRelease",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    NULL
                };

                int a;
                mappedTypeTmplDef *mtt;
                ifaceFileDef *iff;

                checkAnnos(&(yyvsp[(4) - (4)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%MappedType templates not allowed in a C module");

                /*
                 * Check the template arguments are basic types or simple
                 * names.
                 */
                for (a = 0; a < (yyvsp[(1) - (4)].signature).nrArgs; ++a)
                {
                    argDef *ad = &(yyvsp[(1) - (4)].signature).args[a];

                    if (ad->atype == defined_type && ad->u.snd->next != NULL)
                        yyerror("%MappedType template arguments must be simple names");
                }

                if ((yyvsp[(3) - (4)].memArg).atype != template_type)
                    yyerror("%MappedType template must map a template type");

                (yyvsp[(3) - (4)].memArg).u.td->fqname  = fullyQualifiedName((yyvsp[(3) - (4)].memArg).u.td->fqname);

                /* Check a template hasn't already been provided. */
                for (mtt = currentSpec->mappedtypetemplates; mtt != NULL; mtt = mtt->next)
                    if (compareScopedNames(mtt->mt->type.u.td->fqname, (yyvsp[(3) - (4)].memArg).u.td->fqname ) == 0 && sameTemplateSignature(&mtt->mt->type.u.td->types, &(yyvsp[(3) - (4)].memArg).u.td->types, TRUE))
                        yyerror("%MappedType template for this type has already been defined");

                (yyvsp[(3) - (4)].memArg).nrderefs = 0;
                (yyvsp[(3) - (4)].memArg).argflags = 0;

                mtt = sipMalloc(sizeof (mappedTypeTmplDef));

                mtt->sig = (yyvsp[(1) - (4)].signature);
                mtt->mt = allocMappedType(currentSpec, &(yyvsp[(3) - (4)].memArg));
                mappedTypeAnnos(mtt->mt, &(yyvsp[(4) - (4)].optflags));
                mtt->next = currentSpec->mappedtypetemplates;

                currentSpec->mappedtypetemplates = mtt;

                currentMappedType = mtt->mt;

                /* Create a dummy interface file. */
                iff = sipMalloc(sizeof (ifaceFileDef));
                iff->hdrcode = NULL;
                mtt->mt->iff = iff;
            }
        }
    break;

  case 101:
#line 1190 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode == NULL)
                    yyerror("%MappedType must have a %ConvertFromTypeCode directive");

                if (currentMappedType->convtocode == NULL)
                    yyerror("%MappedType must have a %ConvertToTypeCode directive");

                currentMappedType = NULL;
            }
        }
    break;

  case 106:
#line 1210 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 107:
#line 1214 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->typecode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 108:
#line 1218 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode != NULL)
                    yyerror("%MappedType has more than one %ConvertFromTypeCode directive");

                appendCodeBlock(&currentMappedType->convfromcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 109:
#line 1227 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convtocode != NULL)
                    yyerror("%MappedType has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&currentMappedType->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 110:
#line 1236 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->instancecode != NULL)
                    yyerror("%MappedType has more than one %InstanceCode directive");

                appendCodeBlock(&currentMappedType->instancecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 113:
#line 1249 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(2) - (14)].memArg), &(yyvsp[(9) - (14)].optflags));

                (yyvsp[(5) - (14)].signature).result = (yyvsp[(2) - (14)].memArg);

                newFunction(currentSpec, currentModule, NULL, NULL,
                        currentMappedType, 0, TRUE, FALSE, FALSE, FALSE, (yyvsp[(3) - (14)].text),
                        &(yyvsp[(5) - (14)].signature), (yyvsp[(7) - (14)].number), FALSE, &(yyvsp[(9) - (14)].optflags), (yyvsp[(14) - (14)].codeb), NULL, NULL, (yyvsp[(8) - (14)].throwlist), (yyvsp[(10) - (14)].optsignature), (yyvsp[(12) - (14)].codeb),
                        FALSE, (yyvsp[(13) - (14)].codeb));
            }
        }
    break;

  case 114:
#line 1264 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("namespace definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *ns, *c_scope;
                ifaceFileDef *scope;

                if ((c_scope = currentScope()) != NULL)
                    scope = c_scope->iff;
                else
                    scope = NULL;

                ns = newClass(currentSpec, namespace_iface, NULL,
                        text2scopedName(scope, (yyvsp[(2) - (2)].text)), NULL, NULL, NULL, NULL);

                pushScope(ns);

                sectionFlags = 0;
            }
        }
    break;

  case 115:
#line 1285 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (inMainModule())
                {
                    classDef *ns = currentScope();

                    setIsUsedName(ns->iff->name);
                    setIsUsedName(ns->pyname);
                }

                popScope();
            }
        }
    break;

  case 120:
#line 1309 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier)
                        yyerror("%Platforms has already been defined for this module");
            }
        }
    break;

  case 121:
#line 1319 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /* Check that exactly one platform in the set was requested. */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier && selectedQualifier(neededQualifiers, qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("No more than one of these %Platforms must be specified with the -t flag");
            }
        }
    break;

  case 124:
#line 1342 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            newQualifier(currentModule, -1, -1, notSkipping(), (yyvsp[(1) - (1)].text),
                    platform_qualifier);
        }
    break;

  case 125:
#line 1348 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            newQualifier(currentModule, -1, -1, notSkipping(), (yyvsp[(2) - (2)].feature).name,
                    feature_qualifier);
        }
    break;

  case 126:
#line 1354 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.feature).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 127:
#line 1359 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.feature) = (yyvsp[(2) - (3)].feature);
        }
    break;

  case 129:
#line 1365 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.feature) = (yyvsp[(1) - (3)].feature);

            switch ((yyvsp[(3) - (3)].feature).token)
            {
            case TK_NAME: (yyval.feature).name = (yyvsp[(3) - (3)].feature).name; break;
            }
        }
    break;

  case 130:
#line 1375 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.feature).token = TK_NAME;

            (yyval.feature).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 131:
#line 1382 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            currentTimelineOrder = 0;
        }
    break;

  case 132:
#line 1385 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /*
                 * Check that exactly one time slot in the set was requested.
                 */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == time_qualifier && selectedQualifier(neededQualifiers, qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("At most one of this %Timeline must be specified with the -t flag");

                currentModule->nrtimelines++;
            }
        }
    break;

  case 135:
#line 1412 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            newQualifier(currentModule, currentModule->nrtimelines,
                    currentTimelineOrder++, TRUE, (yyvsp[(1) - (1)].text), time_qualifier);
        }
    break;

  case 136:
#line 1418 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            currentPlatforms = NULL;
        }
    break;

  case 137:
#line 1420 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (stackPtr >= MAX_NESTED_IF)
                yyerror("Internal error: increase the value of MAX_NESTED_IF");

            /* Nested %Ifs are implicit logical ands. */

            if (stackPtr > 0)
                (yyvsp[(4) - (5)].boolean) = ((yyvsp[(4) - (5)].boolean) && skipStack[stackPtr - 1]);

            skipStack[stackPtr] = (yyvsp[(4) - (5)].boolean);

            platformStack[stackPtr] = currentPlatforms;

            ++stackPtr;
        }
    break;

  case 138:
#line 1437 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(1) - (1)].text), FALSE);
        }
    break;

  case 139:
#line 1440 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(2) - (2)].text), TRUE);
        }
    break;

  case 140:
#line 1443 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(3) - (3)].text), FALSE) || (yyvsp[(1) - (3)].boolean));
        }
    break;

  case 141:
#line 1446 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(4) - (4)].text), TRUE) || (yyvsp[(1) - (4)].boolean));
        }
    break;

  case 143:
#line 1452 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = timePeriod((yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        }
    break;

  case 144:
#line 1457 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (stackPtr-- <= 0)
                yyerror("Too many %End directives");

            currentPlatforms = (stackPtr == 0 ? NULL : platformStack[stackPtr - 1]);
        }
    break;

  case 145:
#line 1465 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            optFlag *of;

            if ((yyvsp[(3) - (3)].optflags).nrFlags != 0)
                deprecated("%License annotations are deprecated, use arguments instead");

            if ((yyvsp[(2) - (3)].license).type == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Type", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).type = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).licensee == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Licensee", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).licensee = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).signature == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Signature", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).signature = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).timestamp == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Timestamp", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).timestamp = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).type == NULL)
                yyerror("%License must have a 'type' argument");

            if (notSkipping())
            {
                currentModule->license = sipMalloc(sizeof (licenseDef));

                currentModule->license->type = (yyvsp[(2) - (3)].license).type;
                currentModule->license->licensee = (yyvsp[(2) - (3)].license).licensee;
                currentModule->license->sig = (yyvsp[(2) - (3)].license).signature;
                currentModule->license->timestamp = (yyvsp[(2) - (3)].license).timestamp;
            }
        }
    break;

  case 146:
#line 1502 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 147:
#line 1510 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.license).type = (yyvsp[(1) - (1)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 148:
#line 1516 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.license) = (yyvsp[(2) - (3)].license);
        }
    break;

  case 150:
#line 1522 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.license) = (yyvsp[(1) - (3)].license);

            switch ((yyvsp[(3) - (3)].license).token)
            {
            case TK_TYPE: (yyval.license).type = (yyvsp[(3) - (3)].license).type; break;
            case TK_LICENSEE: (yyval.license).licensee = (yyvsp[(3) - (3)].license).licensee; break;
            case TK_SIGNATURE: (yyval.license).signature = (yyvsp[(3) - (3)].license).signature; break;
            case TK_TIMESTAMP: (yyval.license).timestamp = (yyvsp[(3) - (3)].license).timestamp; break;
            }
        }
    break;

  case 151:
#line 1535 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.license).token = TK_NAME;

            (yyval.license).type = (yyvsp[(3) - (3)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 152:
#line 1543 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.license).token = TK_LICENSEE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = (yyvsp[(3) - (3)].text);
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 153:
#line 1551 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.license).token = TK_SIGNATURE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = (yyvsp[(3) - (3)].text);
            (yyval.license).timestamp = NULL;
        }
    break;

  case 154:
#line 1559 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.license).token = TK_TIMESTAMP;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = (yyvsp[(3) - (3)].text);
        }
    break;

  case 155:
#line 1569 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defmetatype != NULL)
                    yyerror("%DefaultMetatype has already been defined for this module");

                currentModule->defmetatype = cacheName(currentSpec, (yyvsp[(2) - (2)].defmetatype).name);
            }
        }
    break;

  case 156:
#line 1580 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defmetatype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 157:
#line 1585 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(2) - (3)].defmetatype);
        }
    break;

  case 159:
#line 1591 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(1) - (3)].defmetatype);

            switch ((yyvsp[(3) - (3)].defmetatype).token)
            {
            case TK_NAME: (yyval.defmetatype).name = (yyvsp[(3) - (3)].defmetatype).name; break;
            }
        }
    break;

  case 160:
#line 1601 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defmetatype).token = TK_NAME;

            (yyval.defmetatype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 161:
#line 1608 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defsupertype != NULL)
                    yyerror("%DefaultSupertype has already been defined for this module");

                currentModule->defsupertype = cacheName(currentSpec, (yyvsp[(2) - (2)].defsupertype).name);
            }
        }
    break;

  case 162:
#line 1619 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.defsupertype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 163:
#line 1624 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(2) - (3)].defsupertype);
        }
    break;

  case 165:
#line 1630 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(1) - (3)].defsupertype);

            switch ((yyvsp[(3) - (3)].defsupertype).token)
            {
            case TK_NAME: (yyval.defsupertype).name = (yyvsp[(3) - (3)].defsupertype).name; break;
            }
        }
    break;

  case 166:
#line 1640 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.defsupertype).token = TK_NAME;

            (yyval.defsupertype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 167:
#line 1647 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *ns;

                ns = newClass(currentSpec, namespace_iface, NULL,
                        fullyQualifiedName((yyvsp[(2) - (2)].hiddenns).name), NULL, NULL, NULL, NULL);
                setHiddenNamespace(ns);
            }
        }
    break;

  case 168:
#line 1659 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.hiddenns).name = (yyvsp[(1) - (1)].scpvalp);
        }
    break;

  case 169:
#line 1664 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.hiddenns) = (yyvsp[(2) - (3)].hiddenns);
        }
    break;

  case 171:
#line 1670 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.hiddenns) = (yyvsp[(1) - (3)].hiddenns);

            switch ((yyvsp[(3) - (3)].hiddenns).token)
            {
            case TK_NAME: (yyval.hiddenns).name = (yyvsp[(3) - (3)].hiddenns).name; break;
            }
        }
    break;

  case 172:
#line 1680 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.hiddenns).token = TK_NAME;

            (yyval.hiddenns).name = (yyvsp[(3) - (3)].scpvalp);
        }
    break;

  case 173:
#line 1687 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("%ConsolidatedModule is deprecated and will not be supported by SIP v5");

            if (notSkipping())
            {
                /* Make sure this is the first mention of a module. */
                if (currentSpec->module != currentModule)
                    yyerror("A %ConsolidatedModule cannot be %Imported");

                if (currentModule->fullname != NULL)
                    yyerror("%ConsolidatedModule must appear before any %Module or %CModule directive");

                setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].consmodule).name);
                appendCodeBlock(&currentModule->docstring, (yyvsp[(3) - (3)].consmodule).docstring);

                setIsConsolidated(currentModule);
            }
        }
    break;

  case 174:
#line 1707 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.consmodule).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 175:
#line 1712 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(2) - (3)].consmodule);
        }
    break;

  case 177:
#line 1718 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(1) - (3)].consmodule);

            switch ((yyvsp[(3) - (3)].consmodule).token)
            {
            case TK_NAME: (yyval.consmodule).name = (yyvsp[(3) - (3)].consmodule).name; break;
            }
        }
    break;

  case 178:
#line 1728 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule).token = TK_NAME;

            (yyval.consmodule).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 179:
#line 1735 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule).token = 0;
            (yyval.consmodule).docstring = NULL;
        }
    break;

  case 180:
#line 1739 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(2) - (4)].consmodule);
        }
    break;

  case 182:
#line 1745 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(1) - (2)].consmodule);

            switch ((yyvsp[(2) - (2)].consmodule).token)
            {
            case TK_DOCSTRING: (yyval.consmodule).docstring = (yyvsp[(2) - (2)].consmodule).docstring; break;
            }
        }
    break;

  case 183:
#line 1755 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule).token = TK_IF;
        }
    break;

  case 184:
#line 1758 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.consmodule).token = TK_END;
        }
    break;

  case 185:
#line 1761 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.consmodule).token = TK_DOCSTRING;
                (yyval.consmodule).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.consmodule).token = 0;
                (yyval.consmodule).docstring = NULL;
            }
        }
    break;

  case 186:
#line 1775 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                /* Make sure this is the first mention of a module. */
                if (currentSpec->module != currentModule)
                    yyerror("A %CompositeModule cannot be %Imported");

                if (currentModule->fullname != NULL)
                    yyerror("%CompositeModule must appear before any %Module directive");

                setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].compmodule).name);
                appendCodeBlock(&currentModule->docstring, (yyvsp[(3) - (3)].compmodule).docstring);

                setIsComposite(currentModule);
            }
        }
    break;

  case 187:
#line 1793 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.compmodule).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 188:
#line 1798 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (3)].compmodule);
        }
    break;

  case 190:
#line 1804 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (3)].compmodule);

            switch ((yyvsp[(3) - (3)].compmodule).token)
            {
            case TK_NAME: (yyval.compmodule).name = (yyvsp[(3) - (3)].compmodule).name; break;
            }
        }
    break;

  case 191:
#line 1814 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule).token = TK_NAME;

            (yyval.compmodule).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 192:
#line 1821 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule).token = 0;
            (yyval.compmodule).docstring = NULL;
        }
    break;

  case 193:
#line 1825 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (4)].compmodule);
        }
    break;

  case 195:
#line 1831 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (2)].compmodule);

            switch ((yyvsp[(2) - (2)].compmodule).token)
            {
            case TK_DOCSTRING: (yyval.compmodule).docstring = (yyvsp[(2) - (2)].compmodule).docstring; break;
            }
        }
    break;

  case 196:
#line 1841 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule).token = TK_IF;
        }
    break;

  case 197:
#line 1844 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.compmodule).token = TK_END;
        }
    break;

  case 198:
#line 1847 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.compmodule).token = TK_DOCSTRING;
                (yyval.compmodule).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.compmodule).token = 0;
                (yyval.compmodule).docstring = NULL;
            }
        }
    break;

  case 199:
#line 1861 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].module).name == NULL)
                yyerror("%Module must have a 'name' argument");

            if (notSkipping())
                currentModule = configureModule(currentSpec, currentModule,
                        currentContext.filename, (yyvsp[(2) - (3)].module).name, (yyvsp[(2) - (3)].module).c_module,
                        (yyvsp[(2) - (3)].module).kwargs, (yyvsp[(2) - (3)].module).use_arg_names, (yyvsp[(2) - (3)].module).use_limited_api,
                        (yyvsp[(2) - (3)].module).call_super_init, (yyvsp[(2) - (3)].module).all_raise_py_exc,
                        (yyvsp[(2) - (3)].module).def_error_handler, (yyvsp[(3) - (3)].module).docstring);
        }
    break;

  case 200:
#line 1872 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("%CModule is deprecated, use %Module and the 'language' argument instead");

            if (notSkipping())
                currentModule = configureModule(currentSpec, currentModule,
                        currentContext.filename, (yyvsp[(2) - (3)].text), TRUE, defaultKwArgs,
                        FALSE, FALSE, -1, FALSE, NULL, NULL);
        }
    break;

  case 201:
#line 1882 "sip-4.19.6/sipgen/metasrc/parser.y"
    {resetLexerState();}
    break;

  case 202:
#line 1882 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(3) - (3)].number) >= 0)
                deprecated("%Module version number should be specified using the 'version' argument");

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(1) - (3)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 203:
#line 1895 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (3)].module);
        }
    break;

  case 205:
#line 1901 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (3)].module);

            switch ((yyvsp[(3) - (3)].module).token)
            {
            case TK_KWARGS: (yyval.module).kwargs = (yyvsp[(3) - (3)].module).kwargs; break;
            case TK_LANGUAGE: (yyval.module).c_module = (yyvsp[(3) - (3)].module).c_module; break;
            case TK_NAME: (yyval.module).name = (yyvsp[(3) - (3)].module).name; break;
            case TK_USEARGNAMES: (yyval.module).use_arg_names = (yyvsp[(3) - (3)].module).use_arg_names; break;
            case TK_USELIMITEDAPI: (yyval.module).use_limited_api = (yyvsp[(3) - (3)].module).use_limited_api; break;
            case TK_ALLRAISEPYEXC: (yyval.module).all_raise_py_exc = (yyvsp[(3) - (3)].module).all_raise_py_exc; break;
            case TK_CALLSUPERINIT: (yyval.module).call_super_init = (yyvsp[(3) - (3)].module).call_super_init; break;
            case TK_DEFERRORHANDLER: (yyval.module).def_error_handler = (yyvsp[(3) - (3)].module).def_error_handler; break;
            }
        }
    break;

  case 206:
#line 1918 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_KWARGS;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = convertKwArgs((yyvsp[(3) - (3)].text));
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 207:
#line 1930 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_LANGUAGE;

            if (strcmp((yyvsp[(3) - (3)].text), "C++") == 0)
                (yyval.module).c_module = FALSE;
            else if (strcmp((yyvsp[(3) - (3)].text), "C") == 0)
                (yyval.module).c_module = TRUE;
            else
                yyerror("%Module 'language' argument must be either \"C++\" or \"C\"");

            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 208:
#line 1948 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_NAME;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(3) - (3)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 209:
#line 1960 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_USEARGNAMES;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = (yyvsp[(3) - (3)].boolean);
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 210:
#line 1972 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_USELIMITEDAPI;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = (yyvsp[(3) - (3)].boolean);
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 211:
#line 1984 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_ALLRAISEPYEXC;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = (yyvsp[(3) - (3)].boolean);
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 212:
#line 1996 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_CALLSUPERINIT;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = (yyvsp[(3) - (3)].boolean);
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 213:
#line 2008 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_DEFERRORHANDLER;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = (yyvsp[(3) - (3)].text);
        }
    break;

  case 214:
#line 2020 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("%Module version numbers are deprecated and ignored");

            if ((yyvsp[(3) - (3)].number) < 0)
                yyerror("%Module 'version' argument cannot be negative");

            (yyval.module).token = TK_VERSION;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).use_limited_api = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).call_super_init = -1;
            (yyval.module).def_error_handler = NULL;
        }
    break;

  case 215:
#line 2039 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = 0;
            (yyval.module).docstring = NULL;
        }
    break;

  case 216:
#line 2043 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (4)].module);
        }
    break;

  case 218:
#line 2049 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (2)].module);

            switch ((yyvsp[(2) - (2)].module).token)
            {
            case TK_DOCSTRING: (yyval.module).docstring = (yyvsp[(2) - (2)].module).docstring; break;
            }
        }
    break;

  case 219:
#line 2059 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_IF;
        }
    break;

  case 220:
#line 2062 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_END;
        }
    break;

  case 221:
#line 2065 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.module).token = TK_AUTOPYNAME;
        }
    break;

  case 222:
#line 2068 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.module).token = TK_DOCSTRING;
                (yyval.module).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.module).token = 0;
                (yyval.module).docstring = NULL;
            }
        }
    break;

  case 224:
#line 2083 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /*
             * The grammar design is a bit broken and this is the easiest way
             * to allow periods in names.
             */

            char *cp;

            for (cp = (yyvsp[(1) - (1)].text); *cp != '\0'; ++cp)
                if (*cp != '.' && *cp != '_' && !isalnum(*cp))
                    yyerror("Invalid character in name");

            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 225:
#line 2099 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = -1;
        }
    break;

  case 227:
#line 2105 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (2)].include).name == NULL)
                yyerror("%Include must have a 'name' argument");

            if (notSkipping())
                parseFile(NULL, (yyvsp[(2) - (2)].include).name, NULL, (yyvsp[(2) - (2)].include).optional);
        }
    break;

  case 228:
#line 2114 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.include).name = (yyvsp[(1) - (1)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 229:
#line 2120 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.include) = (yyvsp[(2) - (3)].include);
        }
    break;

  case 231:
#line 2126 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.include) = (yyvsp[(1) - (3)].include);

            switch ((yyvsp[(3) - (3)].include).token)
            {
            case TK_NAME: (yyval.include).name = (yyvsp[(3) - (3)].include).name; break;
            case TK_OPTIONAL: (yyval.include).optional = (yyvsp[(3) - (3)].include).optional; break;
            }
        }
    break;

  case 232:
#line 2137 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.include).token = TK_NAME;

            (yyval.include).name = (yyvsp[(3) - (3)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 233:
#line 2143 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.include).token = TK_OPTIONAL;

            (yyval.include).name = NULL;
            (yyval.include).optional = (yyvsp[(3) - (3)].boolean);
        }
    break;

  case 234:
#line 2151 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("%OptionalInclude is deprecated, use %Include and the 'optional' argument instead");

            if (notSkipping())
                parseFile(NULL, (yyvsp[(2) - (2)].text), NULL, TRUE);
        }
    break;

  case 235:
#line 2159 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                newImport((yyvsp[(2) - (2)].import).name);
        }
    break;

  case 236:
#line 2165 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.import).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 237:
#line 2170 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.import) = (yyvsp[(2) - (3)].import);
        }
    break;

  case 239:
#line 2176 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.import) = (yyvsp[(1) - (3)].import);

            switch ((yyvsp[(3) - (3)].import).token)
            {
            case TK_NAME: (yyval.import).name = (yyvsp[(3) - (3)].import).name; break;
            }
        }
    break;

  case 240:
#line 2186 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.import).token = TK_NAME;

            (yyval.import).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 241:
#line 2193 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 242:
#line 2196 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 243:
#line 2201 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 244:
#line 2204 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 245:
#line 2209 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 246:
#line 2212 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 247:
#line 2217 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->copying, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 248:
#line 2223 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 249:
#line 2229 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 250:
#line 2235 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 251:
#line 2240 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 252:
#line 2245 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 253:
#line 2250 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 254:
#line 2255 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 255:
#line 2260 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 256:
#line 2265 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 257:
#line 2270 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 258:
#line 2275 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 259:
#line 2280 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 260:
#line 2285 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 261:
#line 2290 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 262:
#line 2295 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 263:
#line 2301 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 264:
#line 2306 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 265:
#line 2312 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->initcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 266:
#line 2318 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 267:
#line 2324 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 268:
#line 2330 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitpostinccode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 269:
#line 2336 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Deprecated. */
        }
    break;

  case 270:
#line 2341 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping() && !inMainModule())
                appendCodeBlock(&currentSpec->exptypehintcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 271:
#line 2347 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->typehintcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 272:
#line 2353 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 273:
#line 2358 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping() && inMainModule())
                appendCodeBlock(&currentSpec->docs, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 274:
#line 2364 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->docs, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 275:
#line 2370 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                addAutoPyName(currentModule, (yyvsp[(2) - (2)].autopyname).remove_leading);
        }
    break;

  case 276:
#line 2376 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(2) - (3)].autopyname);
        }
    break;

  case 278:
#line 2382 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(1) - (3)].autopyname);

            switch ((yyvsp[(3) - (3)].autopyname).token)
            {
            case TK_REMOVELEADING: (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].autopyname).remove_leading; break;
            }
        }
    break;

  case 279:
#line 2392 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.autopyname).token = TK_REMOVELEADING;

            (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].text);
        }
    break;

  case 280:
#line 2399 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(3) - (3)].codeb);

            /* Format the docstring. */
            if ((yyvsp[(2) - (3)].docstring).format == deindented)
            {
                const char *cp;
                char *dp;
                int min_indent, indent, skipping;

                /* Find the common indent. */
                min_indent = -1;
                indent = 0;
                skipping = FALSE;

                for (cp = (yyval.codeb)->frag; *cp != '\0'; ++cp)
                {
                    if (skipping)
                    {
                        /*
                         * We have handled the indent and are just looking for
                         * the end of the line.
                         */
                        if (*cp == '\n')
                            skipping = FALSE;
                    }
                    else
                    {
                        if (*cp == ' ')
                        {
                            ++indent;
                        }
                        else if (*cp != '\n')
                        {
                            if (min_indent < 0 || min_indent > indent)
                                min_indent = indent;

                            /* Ignore the remaining characters of the line. */
                            skipping = TRUE;
                        }
                    }
                }

                /* In case the last line doesn't have a trailing newline. */
                if (min_indent < 0 || min_indent > indent)
                    min_indent = indent;

                /*
                 * Go through the text again removing the common indentation.
                 */
                cp = dp = (yyval.codeb)->frag;

                while (*cp != '\0')
                {
                    const char *start = cp;
                    int non_blank = FALSE;

                    /* Find the end of the line. */
                    while (*cp != '\n' && *cp != '\0')
                        if (*cp++ != ' ')
                            non_blank = TRUE;

                    /* Find where we are copying from. */
                    if (non_blank)
                    {
                        start += min_indent;

                        while (*start != '\n' && *start != '\0')
                            *dp++ = *start++;
                    }

                    if (*cp == '\n')
                        *dp++ = *cp++;
                }

                *dp = '\0';
            }
        }
    break;

  case 281:
#line 2479 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.docstring).format = currentModule->defdocstring;
        }
    break;

  case 282:
#line 2482 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.docstring).format = convertFormat((yyvsp[(1) - (1)].text));
        }
    break;

  case 283:
#line 2487 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.docstring) = (yyvsp[(2) - (3)].docstring);
        }
    break;

  case 285:
#line 2493 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.docstring) = (yyvsp[(1) - (3)].docstring);

            switch ((yyvsp[(3) - (3)].docstring).token)
            {
            case TK_FORMAT: (yyval.docstring).format = (yyvsp[(3) - (3)].docstring).format; break;
            }
        }
    break;

  case 286:
#line 2503 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.docstring).token = TK_FORMAT;

            (yyval.docstring).format = convertFormat((yyvsp[(3) - (3)].text));
        }
    break;

  case 287:
#line 2510 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 289:
#line 2516 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].extract).id == NULL)
                yyerror("%Extract must have an 'id' argument");

            if (notSkipping())
                addExtractPart(currentSpec, (yyvsp[(2) - (3)].extract).id, (yyvsp[(2) - (3)].extract).order, (yyvsp[(3) - (3)].codeb));
        }
    break;

  case 290:
#line 2525 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            resetLexerState();

            (yyval.extract).id = (yyvsp[(1) - (1)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 291:
#line 2531 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.extract) = (yyvsp[(2) - (3)].extract);
        }
    break;

  case 293:
#line 2537 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.extract) = (yyvsp[(1) - (3)].extract);

            switch ((yyvsp[(3) - (3)].extract).token)
            {
            case TK_ID: (yyval.extract).id = (yyvsp[(3) - (3)].extract).id; break;
            case TK_ORDER: (yyval.extract).order = (yyvsp[(3) - (3)].extract).order; break;
            }
        }
    break;

  case 294:
#line 2548 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.extract).token = TK_ID;

            (yyval.extract).id = (yyvsp[(3) - (3)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 295:
#line 2554 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.extract).token = TK_ORDER;

            if ((yyvsp[(3) - (3)].number) < 0)
                yyerror("The 'order' of an %Extract directive must not be negative");

            (yyval.extract).id = NULL;
            (yyval.extract).order = (yyvsp[(3) - (3)].number);
        }
    break;

  case 296:
#line 2565 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Deprecated. */
        }
    break;

  case 299:
#line 2574 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(1) - (2)].codeb);

            append(&(yyval.codeb)->frag, (yyvsp[(2) - (2)].codeb)->frag);

            free((yyvsp[(2) - (2)].codeb)->frag);
            free((yyvsp[(2) - (2)].codeb));
        }
    break;

  case 300:
#line 2584 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "NoScope",
                    "NoTypeHint",
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(4) - (4)].optflags), annos);

                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                if (currentSpec->genc && (yyvsp[(2) - (4)].boolean))
                    yyerror("Scoped enums not allowed in a C module");

                currentEnum = newEnum(currentSpec, currentModule,
                        currentMappedType, (yyvsp[(3) - (4)].text), &(yyvsp[(4) - (4)].optflags), sectionFlags, (yyvsp[(2) - (4)].boolean));
            }
        }
    break;

  case 302:
#line 2608 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 303:
#line 2611 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 304:
#line 2614 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 305:
#line 2619 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.text) = NULL;
        }
    break;

  case 306:
#line 2622 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 307:
#line 2627 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.text) = NULL;
        }
    break;

  case 308:
#line 2630 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 315:
#line 2645 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "NoTypeHint",
                    "PyName",
                    NULL
                };

                enumMemberDef *emd, **tail;

                checkAnnos(&(yyvsp[(3) - (4)].optflags), annos);

                /* Note that we don't use the assigned value. */
                emd = sipMalloc(sizeof (enumMemberDef));

                emd->pyname = cacheName(currentSpec,
                        getPythonName(currentModule, &(yyvsp[(3) - (4)].optflags), (yyvsp[(1) - (4)].text)));
                emd->cname = (yyvsp[(1) - (4)].text);
                emd->no_typehint = getNoTypeHint(&(yyvsp[(3) - (4)].optflags));
                emd->ed = currentEnum;
                emd->platforms = currentPlatforms;
                emd->next = NULL;

                checkAttributes(currentSpec, currentModule, emd->ed->ecd,
                        emd->ed->emtd, emd->pyname->text, FALSE);

                /* Append to preserve the order. */
                for (tail = &currentEnum->members; *tail != NULL; tail = &(*tail)->next)
                    ;

                *tail = emd;

                if (inMainModule())
                    setIsUsedName(emd->pyname);
            }
        }
    break;

  case 320:
#line 2692 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.valp) = NULL;
        }
    break;

  case 321:
#line 2695 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.valp) = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 323:
#line 2701 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            valueDef *vd;
 
            if ((yyvsp[(1) - (3)].valp) -> vtype == string_value || (yyvsp[(3) - (3)].valp) -> vtype == string_value)
                yyerror("Invalid binary operator for string");
 
            /* Find the last value in the existing expression. */
 
            for (vd = (yyvsp[(1) - (3)].valp); vd -> next != NULL; vd = vd -> next)
                ;
 
            vd -> vbinop = (yyvsp[(2) - (3)].qchar);
            vd -> next = (yyvsp[(3) - (3)].valp);

            (yyval.valp) = (yyvsp[(1) - (3)].valp);
        }
    break;

  case 324:
#line 2719 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 325:
#line 2722 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 326:
#line 2725 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 327:
#line 2728 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '/';
        }
    break;

  case 328:
#line 2731 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 329:
#line 2734 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '|';
        }
    break;

  case 330:
#line 2739 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '\0';
        }
    break;

  case 331:
#line 2742 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '!';
        }
    break;

  case 332:
#line 2745 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '~';
        }
    break;

  case 333:
#line 2748 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 334:
#line 2751 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 335:
#line 2754 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 336:
#line 2757 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 337:
#line 2762 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].qchar) != '\0' && (yyvsp[(3) - (3)].value).vtype == string_value)
                yyerror("Invalid unary operator for string");
 
            /* Convert the value to a simple expression on the heap. */
            (yyval.valp) = sipMalloc(sizeof (valueDef));
 
            *(yyval.valp) = (yyvsp[(3) - (3)].value);
            (yyval.valp)->vunop = (yyvsp[(2) - (3)].qchar);
            (yyval.valp)->vbinop = '\0';
            (yyval.valp)->cast = (yyvsp[(1) - (3)].scpvalp);
            (yyval.valp)->next = NULL;
        }
    break;

  case 338:
#line 2777 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.scpvalp) = NULL;
        }
    break;

  case 339:
#line 2780 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.scpvalp) = (yyvsp[(2) - (3)].scpvalp);
        }
    break;

  case 340:
#line 2785 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Scoped names are not allowed in a C module");

            (yyval.scpvalp) = scopeScopedName(NULL, (yyvsp[(2) - (2)].scpvalp));
        }
    break;

  case 343:
#line 2795 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&(yyvsp[(1) - (3)].scpvalp), (yyvsp[(3) - (3)].scpvalp));
        }
    break;

  case 344:
#line 2803 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.scpvalp) = text2scopePart((yyvsp[(1) - (1)].text));
        }
    break;

  case 345:
#line 2808 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 346:
#line 2811 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 347:
#line 2816 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a valid one - no
             * point in building a full C++ parser here.
             */

            (yyval.value).vtype = scoped_value;
            (yyval.value).u.vscp = (yyvsp[(1) - (1)].scpvalp);
        }
    break;

  case 348:
#line 2825 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = (yyvsp[(3) - (4)].fcall);
            fcd -> type = (yyvsp[(1) - (4)].memArg);

            (yyval.value).vtype = fcall_value;
            (yyval.value).u.fcd = fcd;
        }
    break;

  case 349:
#line 2835 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.value).vtype = real_value;
            (yyval.value).u.vreal = (yyvsp[(1) - (1)].real);
        }
    break;

  case 350:
#line 2839 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].number);
        }
    break;

  case 351:
#line 2843 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].boolean);
        }
    break;

  case 352:
#line 2847 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = 0;
        }
    break;

  case 353:
#line 2851 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.value).vtype = string_value;
            (yyval.value).u.vstr = (yyvsp[(1) - (1)].text);
        }
    break;

  case 354:
#line 2855 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.value).vtype = qchar_value;
            (yyval.value).u.vqchar = (yyvsp[(1) - (1)].qchar);
        }
    break;

  case 355:
#line 2861 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* No values. */

            (yyval.fcall).nrArgs = 0;
        }
    break;

  case 356:
#line 2866 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* The single or first expression. */

            (yyval.fcall).args[0] = (yyvsp[(1) - (1)].valp);
            (yyval.fcall).nrArgs = 1;
        }
    break;

  case 357:
#line 2872 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Check that it wasn't ...(,expression...). */

            if ((yyval.fcall).nrArgs == 0)
                yyerror("First argument to function call is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].fcall).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.fcall) = (yyvsp[(1) - (3)].fcall);

            (yyval.fcall).args[(yyval.fcall).nrArgs] = (yyvsp[(3) - (3)].valp);
            (yyval.fcall).nrArgs++;
        }
    break;

  case 358:
#line 2890 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Capsule",
                    "DocType",
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    "PyName",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    NULL
                };

                checkAnnos(&(yyvsp[(4) - (5)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
                newTypedef(currentSpec, currentModule, (yyvsp[(3) - (5)].text), &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
            }
        }
    break;

  case 359:
#line 2912 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "DocType",
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    "PyName",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    NULL
                };

                signatureDef *sig;
                argDef ftype;

                checkAnnos(&(yyvsp[(10) - (11)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (11)].memArg), &(yyvsp[(10) - (11)].optflags));

                memset(&ftype, 0, sizeof (argDef));

                /* Create the full signature on the heap. */
                sig = sipMalloc(sizeof (signatureDef));
                *sig = (yyvsp[(8) - (11)].signature);
                sig->result = (yyvsp[(2) - (11)].memArg);

                /* Create the full type. */
                ftype.atype = function_type;
                ftype.nrderefs = 1;
                ftype.u.sa = sig;

                newTypedef(currentSpec, currentModule, (yyvsp[(5) - (11)].text), &ftype, &(yyvsp[(10) - (11)].optflags));
            }
        }
    break;

  case 360:
#line 2951 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec -> genc && (yyvsp[(2) - (2)].scpvalp)->next != NULL)
                yyerror("Namespaces not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 361:
#line 2957 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "API",
                    "DelayDtor",
                    "Deprecated",
                    "ExportDerived",
                    "External",
                    "FileExtension",
                    "Metatype",
                    "Mixin",
                    "NoDefaultCtors",
                    "NoTypeHint",
                    "PyName",
                    "PyQtFlags",
                    "PyQtInterface",
                    "PyQtNoQMetaObject",
                    "Supertype",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    "VirtualErrorHandler",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                if (currentSpec->genc && currentSupers != NULL)
                    yyerror("Super-classes not allowed in a C module struct");

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PUBLIC;
            }
        }
    break;

  case 362:
#line 2994 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 363:
#line 3000 "sip-4.19.6/sipgen/metasrc/parser.y"
    {currentIsTemplate = TRUE;}
    break;

  case 364:
#line 3000 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class templates not allowed in a C module");

            if (notSkipping())
            {
                classTmplDef *tcd;

                /*
                 * Make sure there is room for the extra class name argument.
                 */
                if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                    yyerror("Internal error - increase the value of MAX_NR_ARGS");

                tcd = sipMalloc(sizeof (classTmplDef));
                tcd->sig = (yyvsp[(1) - (3)].signature);
                tcd->cd = (yyvsp[(3) - (3)].klass);
                tcd->next = currentSpec->classtemplates;

                currentSpec->classtemplates = tcd;
            }

            currentIsTemplate = FALSE;
        }
    break;

  case 365:
#line 3026 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.signature) = (yyvsp[(3) - (4)].signature);
        }
    break;

  case 366:
#line 3031 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class definition not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 367:
#line 3037 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "API",
                    "DelayDtor",
                    "Deprecated",
                    "ExportDerived",
                    "External",
                    "FileExtension",
                    "Metatype",
                    "Mixin",
                    "NoDefaultCtors",
                    "PyName",
                    "PyQtFlags",
                    "PyQtInterface",
                    "PyQtNoQMetaObject",
                    "Supertype",
                    "TypeHint",
                    "TypeHintIn",
                    "TypeHintOut",
                    "TypeHintValue",
                    "VirtualErrorHandler",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PRIVATE;
            }
        }
    break;

  case 368:
#line 3070 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                (yyval.klass) = completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 373:
#line 3084 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping() && (yyvsp[(1) - (2)].token) == TK_PUBLIC)
            {
                argDef ad;
                classDef *super;
                scopedNameDef *snd = (yyvsp[(2) - (2)].scpvalp);

                /*
                 * This is a hack to allow typedef'ed classes to be used before
                 * we have resolved the typedef definitions.  Unlike elsewhere,
                 * we require that the typedef is defined before being used.
                 */
                for (;;)
                {
                    ad.atype = no_type;
                    ad.argflags = 0;
                    ad.nrderefs = 0;
                    ad.original_type = NULL;

                    searchTypedefs(currentSpec, snd, &ad);

                    if (ad.atype != defined_type)
                        break;

                    if (ad.nrderefs != 0 || isConstArg(&ad) || isReference(&ad))
                        break;

                    snd = ad.u.snd;
                }

                if (ad.atype != no_type)
                    yyerror("Super-class list contains an invalid type");

                /*
                 * This is a bug because we should look in the local scope
                 * rather than assume it is in the global scope.
                 */
                if (snd->name[0] != '\0')
                    snd = scopeScopedName(NULL, snd);

                /*
                 * Note that passing NULL as the API is a bug.  Instead we
                 * should pass the API of the sub-class being defined,
                 * otherwise we cannot create sub-classes of versioned classes.
                 */
                super = findClass(currentSpec, class_iface, NULL, snd,
                        currentIsTemplate);
                appendToClassList(&currentSupers, super);
            }
        }
    break;

  case 374:
#line 3136 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
        (yyval.token) = TK_PUBLIC;
        }
    break;

  case 375:
#line 3139 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
        (yyval.token) = TK_PUBLIC;
        }
    break;

  case 376:
#line 3142 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
        (yyval.token) = TK_PROTECTED;
        }
    break;

  case 377:
#line 3145 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
        (yyval.token) = TK_PRIVATE;
        }
    break;

  case 378:
#line 3150 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 379:
#line 3153 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 393:
#line 3173 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->docstring, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 394:
#line 3177 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 395:
#line 3181 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 396:
#line 3185 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->travcode != NULL)
                    yyerror("%GCTraverseCode already given for class");

                appendCodeBlock(&scope->travcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 397:
#line 3196 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->clearcode != NULL)
                    yyerror("%GCClearCode already given for class");

                appendCodeBlock(&scope->clearcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 398:
#line 3207 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->getbufcode != NULL)
                    yyerror("%BIGetBufferCode already given for class");

                appendCodeBlock(&scope->getbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 399:
#line 3218 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->releasebufcode != NULL)
                    yyerror("%BIReleaseBufferCode already given for class");

                appendCodeBlock(&scope->releasebufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 400:
#line 3229 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->readbufcode != NULL)
                    yyerror("%BIGetReadBufferCode already given for class");

                appendCodeBlock(&scope->readbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 401:
#line 3240 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->writebufcode != NULL)
                    yyerror("%BIGetWriteBufferCode already given for class");

                appendCodeBlock(&scope->writebufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 402:
#line 3251 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->segcountcode != NULL)
                    yyerror("%BIGetSegCountCode already given for class");

                appendCodeBlock(&scope->segcountcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 403:
#line 3262 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->charbufcode != NULL)
                    yyerror("%BIGetCharBufferCode already given for class");

                appendCodeBlock(&scope->charbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 404:
#line 3273 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->instancecode != NULL)
                    yyerror("%InstanceCode already given for class");

                appendCodeBlock(&scope->instancecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 405:
#line 3284 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->picklecode != NULL)
                    yyerror("%PickleCode already given for class");

                appendCodeBlock(&scope->picklecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 406:
#line 3295 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->finalcode != NULL)
                    yyerror("%FinalisationCode already given for class");

                appendCodeBlock(&scope->finalcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 407:
#line 3306 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->typehintcode != NULL)
                    yyerror("%TypeHintCode already given for class");

                appendCodeBlock(&scope->typehintcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 411:
#line 3320 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtosubcode != NULL)
                    yyerror("Class has more than one %ConvertToSubClassCode directive");

                appendCodeBlock(&scope->convtosubcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 412:
#line 3331 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtocode != NULL)
                    yyerror("Class has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&scope->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 413:
#line 3342 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convfromcode != NULL)
                    yyerror("Class has more than one %ConvertFromTypeCode directive");

                appendCodeBlock(&scope->convfromcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 414:
#line 3353 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | (yyvsp[(2) - (3)].number);
        }
    break;

  case 415:
#line 3360 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | (yyvsp[(2) - (3)].number);
        }
    break;

  case 416:
#line 3367 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | (yyvsp[(2) - (3)].number);
        }
    break;

  case 417:
#line 3374 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        }
    break;

  case 418:
#line 3383 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (3)].property).name == NULL)
                yyerror("A %Property directive must have a 'name' argument");

            if ((yyvsp[(2) - (3)].property).get == NULL)
                yyerror("A %Property directive must have a 'get' argument");

            if (notSkipping())
                addProperty(currentSpec, currentModule, currentScope(),
                        (yyvsp[(2) - (3)].property).name, (yyvsp[(2) - (3)].property).get, (yyvsp[(2) - (3)].property).set, (yyvsp[(3) - (3)].property).docstring);
        }
    break;

  case 419:
#line 3396 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (3)].property);
        }
    break;

  case 421:
#line 3402 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (3)].property);

            switch ((yyvsp[(3) - (3)].property).token)
            {
            case TK_GET: (yyval.property).get = (yyvsp[(3) - (3)].property).get; break;
            case TK_NAME: (yyval.property).name = (yyvsp[(3) - (3)].property).name; break;
            case TK_SET: (yyval.property).set = (yyvsp[(3) - (3)].property).set; break;
            }
        }
    break;

  case 422:
#line 3414 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property).token = TK_GET;

            (yyval.property).get = (yyvsp[(3) - (3)].text);
            (yyval.property).name = NULL;
            (yyval.property).set = NULL;
        }
    break;

  case 423:
#line 3421 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property).token = TK_NAME;

            (yyval.property).get = NULL;
            (yyval.property).name = (yyvsp[(3) - (3)].text);
            (yyval.property).set = NULL;
        }
    break;

  case 424:
#line 3428 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property).token = TK_SET;

            (yyval.property).get = NULL;
            (yyval.property).name = NULL;
            (yyval.property).set = (yyvsp[(3) - (3)].text);
        }
    break;

  case 425:
#line 3437 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property).token = 0;
            (yyval.property).docstring = NULL;
        }
    break;

  case 426:
#line 3441 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (4)].property);
        }
    break;

  case 428:
#line 3447 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (2)].property);

            switch ((yyvsp[(2) - (2)].property).token)
            {
            case TK_DOCSTRING: (yyval.property).docstring = (yyvsp[(2) - (2)].property).docstring; break;
            }
        }
    break;

  case 429:
#line 3457 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property).token = TK_IF;
        }
    break;

  case 430:
#line 3460 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.property).token = TK_END;
        }
    break;

  case 431:
#line 3463 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.property).token = TK_DOCSTRING;
                (yyval.property).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.property).token = 0;
                (yyval.property).docstring = NULL;
            }
        }
    break;

  case 434:
#line 3481 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 435:
#line 3484 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = SECT_IS_SLOT;
        }
    break;

  case 436:
#line 3489 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Note that we allow non-virtual dtors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "HoldGIL",
                    "ReleaseGIL",
                    NULL
                };

                classDef *cd = currentScope();

                checkAnnos(&(yyvsp[(8) - (12)].optflags), annos);

                if (strcmp(classBaseName(cd),(yyvsp[(3) - (12)].text)) != 0)
                    yyerror("Destructor doesn't have the same name as its class");

                if (isDtor(cd))
                    yyerror("Destructor has already been defined");

                if (currentSpec -> genc && (yyvsp[(10) - (12)].codeb) == NULL)
                    yyerror("Destructor in C modules must include %MethodCode");


                appendCodeBlock(&cd->dealloccode, (yyvsp[(10) - (12)].codeb)); /* premethodcode */
                appendCodeBlock(&cd->dealloccode, (yyvsp[(11) - (12)].codeb)); /* methodcode */
                appendCodeBlock(&cd->dtorcode, (yyvsp[(12) - (12)].codeb));
                cd -> dtorexceptions = (yyvsp[(6) - (12)].throwlist);

                /*
                 * Note that we don't apply the protected/public hack to dtors
                 * as it (I think) may change the behaviour of the wrapped API.
                 */
                cd->classflags |= sectionFlags;

                if ((yyvsp[(7) - (12)].number))
                {
                    if (!(yyvsp[(1) - (12)].number))
                        yyerror("Abstract destructor must be virtual");

                    setIsAbstractClass(cd);
                }

                /*
                 * The class has a shadow if we have a virtual dtor or some
                 * dtor code.
                 */
                if ((yyvsp[(1) - (12)].number) || (yyvsp[(11) - (12)].codeb) != NULL)
                {
                    if (currentSpec -> genc)
                        yyerror("Virtual destructor or %VirtualCatcherCode not allowed in a C module");

                    setNeedsShadow(cd);
                }

                if (getReleaseGIL(&(yyvsp[(8) - (12)].optflags)))
                    setIsReleaseGILDtor(cd);
                else if (getHoldGIL(&(yyvsp[(8) - (12)].optflags)))
                    setIsHoldGILDtor(cd);
            }
        }
    break;

  case 437:
#line 3553 "sip-4.19.6/sipgen/metasrc/parser.y"
    {currentCtorIsExplicit = TRUE;}
    break;

  case 440:
#line 3557 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Note that we allow ctors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "API",
                    "Default",
                    "Deprecated",
                    "HoldGIL",
                    "KeywordArgs",
                    "NoDerived",
                    "NoRaisesPyException",
                    "NoTypeHint",
                    "PostHook",
                    "PreHook",
                    "RaisesPyException",
                    "ReleaseGIL",
                    "Transfer",
                    NULL
                };

                checkAnnos(&(yyvsp[(6) - (11)].optflags), annos);

                if (currentSpec -> genc)
                {
                    if ((yyvsp[(10) - (11)].codeb) == NULL && (yyvsp[(3) - (11)].signature).nrArgs != 0)
                        yyerror("Constructors with arguments in C modules must include %MethodCode");

                    if (currentCtorIsExplicit)
                        yyerror("Explicit constructors not allowed in a C module");
                }

                if ((sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE)) == 0)
                    yyerror("Constructor must be in the public, private or protected sections");

                newCtor(currentModule, (yyvsp[(1) - (11)].text), sectionFlags, &(yyvsp[(3) - (11)].signature), &(yyvsp[(6) - (11)].optflags), (yyvsp[(11) - (11)].codeb), (yyvsp[(5) - (11)].throwlist), (yyvsp[(7) - (11)].optsignature),
                        currentCtorIsExplicit, (yyvsp[(9) - (11)].codeb), (yyvsp[(10) - (11)].codeb));
            }

            free((yyvsp[(1) - (11)].text));

            currentCtorIsExplicit = FALSE;
        }
    break;

  case 441:
#line 3603 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 442:
#line 3606 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 443:
#line 3608 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(4) - (6)].signature);

            parsingCSignature = FALSE;
        }
    break;

  case 444:
#line 3617 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 445:
#line 3620 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 446:
#line 3622 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(5) - (7)].signature);
            (yyval.optsignature)->result = (yyvsp[(3) - (7)].memArg);

            parsingCSignature = FALSE;
        }
    break;

  case 447:
#line 3632 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 448:
#line 3635 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 449:
#line 3640 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(1) - (17)].memArg), &(yyvsp[(10) - (17)].optflags));

                (yyvsp[(4) - (17)].signature).result = (yyvsp[(1) - (17)].memArg);

                newFunction(currentSpec, currentModule, currentScope(), NULL,
                        NULL, sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentOverIsVirt, (yyvsp[(2) - (17)].text), &(yyvsp[(4) - (17)].signature), (yyvsp[(6) - (17)].number), (yyvsp[(9) - (17)].number),
                        &(yyvsp[(10) - (17)].optflags), (yyvsp[(15) - (17)].codeb), (yyvsp[(16) - (17)].codeb), (yyvsp[(17) - (17)].codeb), (yyvsp[(8) - (17)].throwlist), (yyvsp[(11) - (17)].optsignature), (yyvsp[(13) - (17)].codeb), (yyvsp[(7) - (17)].number), (yyvsp[(14) - (17)].codeb));
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 450:
#line 3658 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /*
             * It looks like an assignment operator (though we don't bother to
             * check the types) so make sure it is private.
             */
            if (notSkipping())
            {
                classDef *cd = currentScope();

                if (cd == NULL || !(sectionFlags & SECT_IS_PRIVATE))
                    yyerror("Assignment operators may only be defined as private");

                setCannotAssign(cd);
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 451:
#line 3678 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = currentScope();
                ifaceFileDef *ns_scope;

                /*
                 * If the scope is a namespace then make sure the operator is
                 * handled as a global, but remember it's C++ scope..
                 */
                if (cd != NULL && cd->iff->type == namespace_iface)
                {
                    ns_scope = cd->iff;
                    cd = NULL;
                }
                else
                {
                    ns_scope = NULL;
                }

                applyTypeFlags(currentModule, &(yyvsp[(1) - (17)].memArg), &(yyvsp[(11) - (17)].optflags));

                /* Handle the unary '+' and '-' operators. */
                if ((cd != NULL && (yyvsp[(5) - (17)].signature).nrArgs == 0) || (cd == NULL && (yyvsp[(5) - (17)].signature).nrArgs == 1))
                {
                    if (strcmp((yyvsp[(3) - (17)].text), "__add__") == 0)
                        (yyvsp[(3) - (17)].text) = "__pos__";
                    else if (strcmp((yyvsp[(3) - (17)].text), "__sub__") == 0)
                        (yyvsp[(3) - (17)].text) = "__neg__";
                }

                (yyvsp[(5) - (17)].signature).result = (yyvsp[(1) - (17)].memArg);

                newFunction(currentSpec, currentModule, cd, ns_scope, NULL,
                        sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentOverIsVirt, (yyvsp[(3) - (17)].text), &(yyvsp[(5) - (17)].signature), (yyvsp[(7) - (17)].number), (yyvsp[(10) - (17)].number),
                        &(yyvsp[(11) - (17)].optflags), (yyvsp[(15) - (17)].codeb), (yyvsp[(16) - (17)].codeb), (yyvsp[(17) - (17)].codeb), (yyvsp[(9) - (17)].throwlist), (yyvsp[(12) - (17)].optsignature), NULL, (yyvsp[(8) - (17)].number), (yyvsp[(14) - (17)].codeb));
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 452:
#line 3722 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                char *sname;
                classDef *scope = currentScope();

                if (scope == NULL || (yyvsp[(4) - (16)].signature).nrArgs != 0)
                    yyerror("Operator casts must be specified in a class and have no arguments");

                applyTypeFlags(currentModule, &(yyvsp[(2) - (16)].memArg), &(yyvsp[(10) - (16)].optflags));

                switch ((yyvsp[(2) - (16)].memArg).atype)
                {
                case defined_type:
                    sname = NULL;
                    break;

                case bool_type:
                case cbool_type:
                case byte_type:
                case sbyte_type:
                case ubyte_type:
                case short_type:
                case ushort_type:
                case int_type:
                case cint_type:
                case uint_type:
                    sname = "__int__";
                    break;

                case long_type:
                case ulong_type:
                case longlong_type:
                case ulonglong_type:
                    sname = "__long__";
                    break;

                case float_type:
                case cfloat_type:
                case double_type:
                case cdouble_type:
                    sname = "__float__";
                    break;

                default:
                    yyerror("Unsupported operator cast");
                }

                if (sname != NULL)
                {
                    (yyvsp[(4) - (16)].signature).result = (yyvsp[(2) - (16)].memArg);

                    newFunction(currentSpec, currentModule, scope, NULL, NULL,
                            sectionFlags, currentIsStatic, currentIsSignal,
                            currentIsSlot, currentOverIsVirt, sname, &(yyvsp[(4) - (16)].signature), (yyvsp[(6) - (16)].number),
                            (yyvsp[(9) - (16)].number), &(yyvsp[(10) - (16)].optflags), (yyvsp[(14) - (16)].codeb), (yyvsp[(15) - (16)].codeb), (yyvsp[(16) - (16)].codeb), (yyvsp[(8) - (16)].throwlist), (yyvsp[(11) - (16)].optsignature), NULL, (yyvsp[(7) - (16)].number), (yyvsp[(13) - (16)].codeb));
                }
                else
                {
                    argList *al;

                    /* Check it doesn't already exist. */
                    for (al = scope->casts; al != NULL; al = al->next)
                        if (compareScopedNames((yyvsp[(2) - (16)].memArg).u.snd, al->arg.u.snd) == 0)
                            yyerror("This operator cast has already been specified in this class");

                    al = sipMalloc(sizeof (argList));
                    al->arg = (yyvsp[(2) - (16)].memArg);
                    al->next = scope->casts;

                    scope->casts = al;
                }
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 453:
#line 3803 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__add__";}
    break;

  case 454:
#line 3804 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__sub__";}
    break;

  case 455:
#line 3805 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__mul__";}
    break;

  case 456:
#line 3806 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__div__";}
    break;

  case 457:
#line 3807 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__mod__";}
    break;

  case 458:
#line 3808 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__and__";}
    break;

  case 459:
#line 3809 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__or__";}
    break;

  case 460:
#line 3810 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__xor__";}
    break;

  case 461:
#line 3811 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__lshift__";}
    break;

  case 462:
#line 3812 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__rshift__";}
    break;

  case 463:
#line 3813 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__iadd__";}
    break;

  case 464:
#line 3814 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__isub__";}
    break;

  case 465:
#line 3815 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__imul__";}
    break;

  case 466:
#line 3816 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__idiv__";}
    break;

  case 467:
#line 3817 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__imod__";}
    break;

  case 468:
#line 3818 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__iand__";}
    break;

  case 469:
#line 3819 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__ior__";}
    break;

  case 470:
#line 3820 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__ixor__";}
    break;

  case 471:
#line 3821 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__ilshift__";}
    break;

  case 472:
#line 3822 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__irshift__";}
    break;

  case 473:
#line 3823 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__invert__";}
    break;

  case 474:
#line 3824 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__call__";}
    break;

  case 475:
#line 3825 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__getitem__";}
    break;

  case 476:
#line 3826 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__lt__";}
    break;

  case 477:
#line 3827 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__le__";}
    break;

  case 478:
#line 3828 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__eq__";}
    break;

  case 479:
#line 3829 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__ne__";}
    break;

  case 480:
#line 3830 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__gt__";}
    break;

  case 481:
#line 3831 "sip-4.19.6/sipgen/metasrc/parser.y"
    {(yyval.text) = "__ge__";}
    break;

  case 482:
#line 3834 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 483:
#line 3837 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 484:
#line 3842 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 485:
#line 3845 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 486:
#line 3850 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 487:
#line 3853 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if ((yyvsp[(2) - (2)].number) != 0)
                yyerror("Abstract virtual function '= 0' expected");

            (yyval.number) = TRUE;
        }
    break;

  case 488:
#line 3861 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.optflags).nrFlags = 0;
        }
    break;

  case 489:
#line 3864 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.optflags) = (yyvsp[(2) - (3)].optflags);
        }
    break;

  case 490:
#line 3870 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.optflags).flags[0] = (yyvsp[(1) - (1)].flag);
            (yyval.optflags).nrFlags = 1;
        }
    break;

  case 491:
#line 3874 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Check there is room. */

            if ((yyvsp[(1) - (3)].optflags).nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            (yyval.optflags) = (yyvsp[(1) - (3)].optflags);

            (yyval.optflags).flags[(yyval.optflags).nrFlags++] = (yyvsp[(3) - (3)].flag);
        }
    break;

  case 492:
#line 3886 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.flag).ftype = bool_flag;
            (yyval.flag).fname = (yyvsp[(1) - (1)].text);
        }
    break;

  case 493:
#line 3890 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.flag) = (yyvsp[(3) - (3)].flag);
            (yyval.flag).fname = (yyvsp[(1) - (3)].text);
        }
    break;

  case 494:
#line 3896 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.flag).ftype = (strchr((yyvsp[(1) - (1)].text), '.') != NULL) ? dotted_name_flag : name_flag;
            (yyval.flag).fvalue.sval = (yyvsp[(1) - (1)].text);
        }
    break;

  case 495:
#line 3900 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            apiVersionRangeDef *avd;
            int from, to;

            (yyval.flag).ftype = api_range_flag;

            /* Check that the API is known. */
            if ((avd = findAPI(currentSpec, (yyvsp[(1) - (5)].text))) == NULL)
                yyerror("unknown API name in API annotation");

            if (inMainModule())
                setIsUsedName(avd->api_name);

            /* Unbounded values are represented by 0. */
            if ((from = (yyvsp[(3) - (5)].number)) < 0)
                from = 0;

            if ((to = (yyvsp[(5) - (5)].number)) < 0)
                to = 0;

            (yyval.flag).fvalue.aval = convertAPIRange(currentModule, avd->api_name,
                    from, to);
        }
    break;

  case 496:
#line 3923 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.flag).ftype = string_flag;
            (yyval.flag).fvalue.sval = convertFeaturedString((yyvsp[(1) - (1)].text));
        }
    break;

  case 497:
#line 3927 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.flag).ftype = integer_flag;
            (yyval.flag).fvalue.ival = (yyvsp[(1) - (1)].number);
        }
    break;

  case 498:
#line 3933 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 499:
#line 3936 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 500:
#line 3941 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 501:
#line 3944 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 502:
#line 3949 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 503:
#line 3952 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 504:
#line 3957 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 505:
#line 3960 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 506:
#line 3965 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            int a, nrrxcon, nrrxdis, nrslotcon, nrslotdis, nrarray, nrarraysize;

            nrrxcon = nrrxdis = nrslotcon = nrslotdis = nrarray = nrarraysize = 0;

            for (a = 0; a < (yyvsp[(1) - (1)].signature).nrArgs; ++a)
            {
                argDef *ad = &(yyvsp[(1) - (1)].signature).args[a];

                switch (ad -> atype)
                {
                case rxcon_type:
                    ++nrrxcon;
                    break;

                case rxdis_type:
                    ++nrrxdis;
                    break;

                case slotcon_type:
                    ++nrslotcon;
                    break;

                case slotdis_type:
                    ++nrslotdis;
                    break;

                /* Suppress a compiler warning. */
                default:
                    ;
                }

                if (isArray(ad))
                    ++nrarray;

                if (isArraySize(ad))
                    ++nrarraysize;
            }

            if (nrrxcon != nrslotcon || nrrxcon > 1)
                yyerror("SIP_RXOBJ_CON and SIP_SLOT_CON must both be given and at most once");

            if (nrrxdis != nrslotdis || nrrxdis > 1)
                yyerror("SIP_RXOBJ_DIS and SIP_SLOT_DIS must both be given and at most once");

            if (nrarray != nrarraysize || nrarray > 1)
                yyerror("/Array/ and /ArraySize/ must both be given and at most once");

            (yyval.signature) = (yyvsp[(1) - (1)].signature);
        }
    break;

  case 507:
#line 4017 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* No arguments. */

            (yyval.signature).nrArgs = 0;
        }
    break;

  case 508:
#line 4022 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* The single or first argument. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 509:
#line 4028 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */
            if ((yyvsp[(1) - (3)].signature).nrArgs == 0)
                yyerror("First argument of the list is missing");

            /*
             * If this argument has no default value, then the
             * previous one mustn't either.
             */
            if ((yyvsp[(3) - (3)].memArg).defval == NULL && (yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].defval != NULL)
                yyerror("Compulsory argument given after optional argument");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 510:
#line 4051 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("SIP_SIGNAL is deprecated\n");
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_SIGNAL has no annotations");

            (yyval.memArg).atype = signal_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 511:
#line 4063 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("SIP_SLOT is deprecated\n");
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_SLOT has no annotations");

            (yyval.memArg).atype = slot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 512:
#line 4075 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("SIP_ANYSLOT is deprecated\n");
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_ANYSLOT has no annotations");

            (yyval.memArg).atype = anyslot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 513:
#line 4087 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            const char *annos[] = {
                "SingleShot",
                NULL
            };

            deprecated("SIP_RXOBJ_CON is deprecated\n");
            checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

            (yyval.memArg).atype = rxcon_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "SingleShot", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_SINGLE_SHOT;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 514:
#line 4106 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("SIP_RXOBJ_DIS is deprecated\n");
            checkNoAnnos(&(yyvsp[(3) - (3)].optflags), "SIP_RXOBJ_DIS has no annotations");

            (yyval.memArg).atype = rxdis_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 515:
#line 4117 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("SIP_SLOT_CON is deprecated\n");
            checkNoAnnos(&(yyvsp[(6) - (6)].optflags), "SIP_SLOT_CON has no annotations");

            (yyval.memArg).atype = slotcon_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(5) - (6)].text));

            memset(&(yyvsp[(3) - (6)].signature).result, 0, sizeof (argDef));
            (yyvsp[(3) - (6)].signature).result.atype = void_type;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 516:
#line 4134 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("SIP_SLOT_DIS is deprecated\n");
            checkNoAnnos(&(yyvsp[(6) - (6)].optflags), "SIP_SLOT_DIS has no annotations");

            (yyval.memArg).atype = slotdis_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(5) - (6)].text));

            memset(&(yyvsp[(3) - (6)].signature).result, 0, sizeof (argDef));
            (yyvsp[(3) - (6)].signature).result.atype = void_type;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 517:
#line 4151 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            deprecated("SIP_QOBJECT is deprecated\n");
            checkNoAnnos(&(yyvsp[(3) - (3)].optflags), "SIP_QOBJECT has no annotations");

            (yyval.memArg).atype = qobject_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));
        }
    break;

  case 518:
#line 4160 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (2)].memArg);
            (yyval.memArg).defval = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 519:
#line 4167 "sip-4.19.6/sipgen/metasrc/parser.y"
    {currentIsSignal = TRUE;}
    break;

  case 521:
#line 4168 "sip-4.19.6/sipgen/metasrc/parser.y"
    {currentIsSlot = TRUE;}
    break;

  case 524:
#line 4173 "sip-4.19.6/sipgen/metasrc/parser.y"
    {currentIsStatic = TRUE;}
    break;

  case 529:
#line 4183 "sip-4.19.6/sipgen/metasrc/parser.y"
    {currentOverIsVirt = TRUE;}
    break;

  case 532:
#line 4187 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "DocType",
                    "Encoding",
                    "NoSetter",
                    "NoTypeHint",
                    "PyInt",
                    "PyName",
                    "TypeHint",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (8)].optflags), annos);

                if ((yyvsp[(6) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).access_code != NULL)
                        yyerror("%AccessCode already defined");

                    (yyvsp[(4) - (8)].variable).access_code = (yyvsp[(6) - (8)].codeb);

                    deprecated("%AccessCode should be used as a sub-directive");
                }

                if ((yyvsp[(7) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).get_code != NULL)
                        yyerror("%GetCode already defined");

                    (yyvsp[(4) - (8)].variable).get_code = (yyvsp[(7) - (8)].codeb);

                    deprecated("%GetCode should be used as a sub-directive");
                }

                if ((yyvsp[(8) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).set_code != NULL)
                        yyerror("%SetCode already defined");

                    (yyvsp[(4) - (8)].variable).set_code = (yyvsp[(8) - (8)].codeb);

                    deprecated("%SetCode should be used as a sub-directive");
                }

                newVar(currentSpec, currentModule, (yyvsp[(2) - (8)].text), currentIsStatic, &(yyvsp[(1) - (8)].memArg),
                        &(yyvsp[(3) - (8)].optflags), (yyvsp[(4) - (8)].variable).access_code, (yyvsp[(4) - (8)].variable).get_code, (yyvsp[(4) - (8)].variable).set_code,
                        sectionFlags);
            }

            currentIsStatic = FALSE;
        }
    break;

  case 533:
#line 4242 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.variable).token = 0;
            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 534:
#line 4248 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.variable) = (yyvsp[(2) - (3)].variable);
        }
    break;

  case 536:
#line 4254 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.variable) = (yyvsp[(1) - (2)].variable);

            switch ((yyvsp[(2) - (2)].variable).token)
            {
            case TK_ACCESSCODE: (yyval.variable).access_code = (yyvsp[(2) - (2)].variable).access_code; break;
            case TK_GETCODE: (yyval.variable).get_code = (yyvsp[(2) - (2)].variable).get_code; break;
            case TK_SETCODE: (yyval.variable).set_code = (yyvsp[(2) - (2)].variable).set_code; break;
            }
        }
    break;

  case 537:
#line 4266 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.variable).token = TK_IF;
        }
    break;

  case 538:
#line 4269 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.variable).token = TK_END;
        }
    break;

  case 539:
#line 4272 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_ACCESSCODE;
                (yyval.variable).access_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).access_code = NULL;
            }

            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 540:
#line 4287 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_GETCODE;
                (yyval.variable).get_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).get_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 541:
#line 4302 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_SETCODE;
                (yyval.variable).set_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).set_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
        }
    break;

  case 542:
#line 4319 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.memArg) = (yyvsp[(2) - (4)].memArg);
            add_derefs(&(yyval.memArg), &(yyvsp[(3) - (4)].memArg));
            (yyval.memArg).argflags |= ARG_IS_CONST | (yyvsp[(4) - (4)].number);
        }
    break;

  case 543:
#line 4324 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            add_derefs(&(yyval.memArg), &(yyvsp[(2) - (3)].memArg));
            (yyval.memArg).argflags |= (yyvsp[(3) - (3)].number);

            /* PyObject * is a synonym for SIP_PYOBJECT. */
            if ((yyvsp[(1) - (3)].memArg).atype == defined_type && strcmp((yyvsp[(1) - (3)].memArg).u.snd->name, "PyObject") == 0 && (yyvsp[(1) - (3)].memArg).u.snd->next == NULL && (yyvsp[(2) - (3)].memArg).nrderefs == 1 && (yyvsp[(3) - (3)].number) == 0)
            {
                (yyval.memArg).atype = pyobject_type;
                (yyval.memArg).nrderefs = 0;
            }
        }
    break;

  case 544:
#line 4338 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            const char *annos[] = {
                "AllowNone",
                "Array",
                "ArraySize",
                "Constrained",
                "DisallowNone",
                "DocType",
                "DocValue",
                "Encoding",
                "GetWrapper",
                "In",
                "KeepReference",
                "NoCopy",
                "Out",
                "PyInt",
                "ResultSize",
                "Transfer",
                "TransferBack",
                "TransferThis",
                "TypeHint",
                "TypeHintIn",
                "TypeHintOut",
                "TypeHintValue",
                NULL
            };

            checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            handleKeepReference(&(yyvsp[(3) - (3)].optflags), &(yyval.memArg), currentModule);

            if (getAllowNone(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_ALLOW_NONE;

            if (getDisallowNone(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_DISALLOW_NONE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"GetWrapper",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_GET_WRAPPER;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Array",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"ArraySize",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY_SIZE;

            if (getTransfer(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferThis",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_THIS_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferBack",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_XFERRED_BACK;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"In",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_IN;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Out",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_OUT;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "ResultSize", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_RESULT_SIZE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "NoCopy", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_NO_COPY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Constrained",bool_flag) != NULL)
            {
                (yyval.memArg).argflags |= ARG_CONSTRAINED;

                switch ((yyval.memArg).atype)
                {
                case bool_type:
                    (yyval.memArg).atype = cbool_type;
                    break;

                case int_type:
                    (yyval.memArg).atype = cint_type;
                    break;

                case float_type:
                    (yyval.memArg).atype = cfloat_type;
                    break;

                case double_type:
                    (yyval.memArg).atype = cdouble_type;
                    break;

                /* Suppress a compiler warning. */
                default:
                    ;
                }
            }

            applyTypeFlags(currentModule, &(yyval.memArg), &(yyvsp[(3) - (3)].optflags));
            (yyval.memArg).typehint_value = getTypeHintValue(&(yyvsp[(3) - (3)].optflags));
        }
    break;

  case 545:
#line 4441 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 546:
#line 4444 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            (yyval.number) = ARG_IS_REF;
        }
    break;

  case 547:
#line 4452 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.memArg).nrderefs = 0;
        }
    break;

  case 548:
#line 4455 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            add_new_deref(&(yyval.memArg), &(yyvsp[(1) - (3)].memArg), TRUE);
        }
    break;

  case 549:
#line 4458 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            add_new_deref(&(yyval.memArg), &(yyvsp[(1) - (2)].memArg), FALSE);
        }
    break;

  case 550:
#line 4463 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = defined_type;
            (yyval.memArg).u.snd = (yyvsp[(1) - (1)].scpvalp);

            /* Try and resolve typedefs as early as possible. */
            resolveAnyTypedef(currentSpec, &(yyval.memArg));
        }
    break;

  case 551:
#line 4471 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            templateDef *td;

            td = sipMalloc(sizeof(templateDef));
            td->fqname = (yyvsp[(1) - (4)].scpvalp);
            td->types = (yyvsp[(3) - (4)].signature);

            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = template_type;
            (yyval.memArg).u.td = td;
        }
    break;

  case 552:
#line 4482 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));

            /* In a C module all structures must be defined. */
            if (currentSpec -> genc)
            {
                (yyval.memArg).atype = defined_type;
                (yyval.memArg).u.snd = (yyvsp[(2) - (2)].scpvalp);
            }
            else
            {
                (yyval.memArg).atype = struct_type;
                (yyval.memArg).u.sname = (yyvsp[(2) - (2)].scpvalp);
            }
        }
    break;

  case 553:
#line 4497 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ushort_type;
        }
    break;

  case 554:
#line 4501 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = short_type;
        }
    break;

  case 555:
#line 4505 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 556:
#line 4509 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 557:
#line 4513 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = int_type;
        }
    break;

  case 558:
#line 4517 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = long_type;
        }
    break;

  case 559:
#line 4521 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulong_type;
        }
    break;

  case 560:
#line 4525 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = longlong_type;
        }
    break;

  case 561:
#line 4529 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulonglong_type;
        }
    break;

  case 562:
#line 4533 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = float_type;
        }
    break;

  case 563:
#line 4537 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = double_type;
        }
    break;

  case 564:
#line 4541 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = bool_type;
        }
    break;

  case 565:
#line 4545 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = sstring_type;
        }
    break;

  case 566:
#line 4549 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ustring_type;
        }
    break;

  case 567:
#line 4553 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = string_type;
        }
    break;

  case 568:
#line 4557 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = wstring_type;
        }
    break;

  case 569:
#line 4561 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = void_type;
        }
    break;

  case 570:
#line 4565 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyobject_type;
        }
    break;

  case 571:
#line 4569 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytuple_type;
        }
    break;

  case 572:
#line 4573 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pylist_type;
        }
    break;

  case 573:
#line 4577 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pydict_type;
        }
    break;

  case 574:
#line 4581 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pycallable_type;
        }
    break;

  case 575:
#line 4585 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyslice_type;
        }
    break;

  case 576:
#line 4589 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytype_type;
        }
    break;

  case 577:
#line 4593 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pybuffer_type;
        }
    break;

  case 578:
#line 4597 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ssize_type;
        }
    break;

  case 579:
#line 4601 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ellipsis_type;
        }
    break;

  case 580:
#line 4607 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* The single or first type. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 581:
#line 4613 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 582:
#line 4629 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            (yyval.throwlist) = NULL;
        }
    break;

  case 583:
#line 4632 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            (yyval.throwlist) = (yyvsp[(3) - (4)].throwlist);
        }
    break;

  case 584:
#line 4640 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Empty list so use a blank. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 0;
        }
    break;

  case 585:
#line 4646 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* The only or first exception. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 1;
            (yyval.throwlist) -> args[0] = findException(currentSpec, (yyvsp[(1) - (1)].scpvalp), FALSE);
        }
    break;

  case 586:
#line 4653 "sip-4.19.6/sipgen/metasrc/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == 0)
                yyerror("First exception of throw specifier is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.throwlist) = (yyvsp[(1) - (3)].throwlist);
            (yyval.throwlist) -> args[(yyval.throwlist) -> nrArgs++] = findException(currentSpec, (yyvsp[(3) - (3)].scpvalp), FALSE);
        }
    break;


/* Line 1267 of yacc.c.  */
#line 8286 "sip-4.19.6/sipgen/parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4669 "sip-4.19.6/sipgen/metasrc/parser.y"



/*
 * Parse the specification.
 */
void parse(sipSpec *spec, FILE *fp, char *filename, int strict,
        stringList *tsl, stringList *bsl, stringList *xfl, KwArgs kwArgs,
        int protHack)
{
    classTmplDef *tcd;

    /* Initialise the spec. */
 
    memset(spec, 0, sizeof (sipSpec));
    spec->genc = -1;

    currentSpec = spec;
    strictParse = strict;
    backstops = bsl;
    neededQualifiers = tsl;
    excludedQualifiers = xfl;
    currentModule = NULL;
    currentMappedType = NULL;
    currentOverIsVirt = FALSE;
    currentCtorIsExplicit = FALSE;
    currentIsStatic = FALSE;
    currentIsSignal = FALSE;
    currentIsSlot = FALSE;
    currentIsTemplate = FALSE;
    previousFile = NULL;
    stackPtr = 0;
    currentPlatforms = NULL;
    currentScopeIdx = 0;
    sectionFlags = 0;
    defaultKwArgs = kwArgs;
    makeProtPublic = protHack;

    newModule(fp, filename);
    spec->module = currentModule;

    yyparse();

    handleEOF();
    handleEOM();

    /*
     * Go through each template class and remove it from the list of classes.
     */
    for (tcd = spec->classtemplates; tcd != NULL; tcd = tcd->next)
    {
        classDef **cdp;

        for (cdp = &spec->classes; *cdp != NULL; cdp = &(*cdp)->next)
            if (*cdp == tcd->cd)
            {
                ifaceFileDef **ifdp;

                /* Remove the interface file as well. */
                for (ifdp = &spec->ifacefiles; *ifdp != NULL; ifdp = &(*ifdp)->next)
                    if (*ifdp == tcd->cd->iff)
                    {
                        *ifdp = (*ifdp)->next;
                        break;
                    }

                *cdp = (*cdp)->next;
                break;
            }
    }
}


/*
 * Tell the parser that a complete file has now been read.
 */
void parserEOF(const char *name, parserContext *pc)
{
    previousFile = sipStrdup(name);
    currentContext = *pc;
}


/*
 * Append a class definition to a class list if it doesn't already appear.
 * Append is needed specifically for the list of super-classes because the
 * order is important to Python.
 */
void appendToClassList(classList **clp,classDef *cd)
{
    classList *new;

    /* Find the end of the list. */

    while (*clp != NULL)
    {
        if ((*clp) -> cd == cd)
            return;

        clp = &(*clp) -> next;
    }

    new = sipMalloc(sizeof (classList));

    new -> cd = cd;
    new -> next = NULL;

    *clp = new;
}


/*
 * Create a new module for the current specification and make it current.
 */
static void newModule(FILE *fp, const char *filename)
{
    moduleDef *mod;

    parseFile(fp, filename, currentModule, FALSE);

    mod = allocModule();
    mod->file = filename;

    if (currentModule != NULL)
        mod->defexception = currentModule->defexception;

    currentModule = mod;
}


/*
 * Allocate and initialise the memory for a new module.
 */
static moduleDef *allocModule()
{
    moduleDef *newmod, **tailp;

    newmod = sipMalloc(sizeof (moduleDef));

    newmod->defdocstring = raw;
    newmod->encoding = no_type;
    newmod->next_key = -1;

    /*
     * The consolidated module support needs these to be in order that they
     * appeared.
     */
    for (tailp = &currentSpec->modules; *tailp != NULL; tailp = &(*tailp)->next)
        ;

    *tailp = newmod;

    return newmod;
}


/*
 * Switch to parsing a new file.
 */
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional)
{
    parserContext pc;

    pc.filename = name;
    pc.ifdepth = stackPtr;
    pc.prevmod = prevmod;

    if (setInputFile(fp, &pc, optional))
        currentContext = pc;
}


/*
 * Find an interface file, or create a new one.
 */
ifaceFileDef *findIfaceFile(sipSpec *pt, moduleDef *mod, scopedNameDef *fqname,
        ifaceFileType iftype, apiVersionRangeDef *api_range, argDef *ad)
{
    ifaceFileDef *iff, *first_alt = NULL;

    /* See if the name is already used. */

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (compareScopedNames(iff->fqcname, fqname) != 0)
            continue;

        /*
         * If they are both versioned then assume the user knows what they are
         * doing.
         */
        if (iff->api_range != NULL && api_range != NULL && iff->module == mod)
        {
            /* Remember the first of the alternate APIs. */
            if ((first_alt = iff->first_alt) == NULL)
                first_alt = iff;

            break;
        }

        /*
         * They must be the same type except that we allow a class if we want
         * an exception.  This is because we allow classes to be used before
         * they are defined.
         */
        if (iff->type != iftype)
            if (iftype != exception_iface || iff->type != class_iface)
                yyerror("A class, exception, namespace or mapped type has already been defined with the same name");

        /* Ignore an external class declared in another module. */
        if (iftype == class_iface && iff->module != mod)
        {
            classDef *cd;

            for (cd = pt->classes; cd != NULL; cd = cd->next)
                if (cd->iff == iff)
                    break;

            if (cd != NULL && iff->module != NULL && isExternal(cd))
                continue;
        }

        /*
         * If this is a mapped type with the same name defined in a different
         * module, then check that this type isn't the same as any of the
         * mapped types defined in that module.
         */
        if (iftype == mappedtype_iface && iff->module != mod)
        {
            mappedTypeDef *mtd;

            /*
             * This is a bit of a cheat.  With consolidated modules it's
             * possible to have two implementations of a mapped type in
             * different branches of the module hierarchy.  We assume that, if
             * there really are multiple implementations in the same branch,
             * then it will be picked up in a non-consolidated build.
             */
            if (isConsolidated(pt->module))
                continue;

            for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
            {
                if (mtd->iff != iff)
                    continue;

                if (ad->atype != template_type ||
                    mtd->type.atype != template_type ||
                    sameBaseType(ad, &mtd->type))
                    yyerror("Mapped type has already been defined in another module");
            }

            /*
             * If we got here then we have a mapped type based on an existing
             * template, but with unique parameters.  We don't want to use
             * interface files from other modules, so skip this one.
             */

            continue;
        }

        /* Ignore a namespace defined in another module. */
        if (iftype == namespace_iface && iff->module != mod)
            continue;

        return iff;
    }

    iff = sipMalloc(sizeof (ifaceFileDef));

    iff->name = cacheName(pt, scopedNameToString(fqname));
    iff->api_range = api_range;

    if (first_alt != NULL)
    {
        iff->first_alt = first_alt;
        iff->next_alt = first_alt->next_alt;

        first_alt->next_alt = iff;
    }
    else
    {
        /* This is the first alternate so point to itself. */
        iff->first_alt = iff;
    }

    /*
     * Note that we assume that the type (ie. class vs. mapped type vs.
     * exception) will be the same across all platforms.
     */
    iff->platforms = currentPlatforms;

    iff->type = iftype;
    iff->ifacenr = -1;
    iff->fqcname = fqname;
    iff->module = NULL;
    iff->hdrcode = NULL;
    iff->used = NULL;
    iff->file_extension = NULL;
    iff->next = pt->ifacefiles;

    pt->ifacefiles = iff;

    return iff;
}


/*
 * Find a class definition in a parse tree.
 */
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname, int tmpl_arg)
{
    return findClassWithInterface(pt,
            findIfaceFile(pt, currentModule, fqname, iftype, api_range, NULL),
            tmpl_arg);
}


/*
 * Find a class definition given an existing interface file.
 */
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff,
        int tmpl_arg)
{
    classDef *cd;

    for (cd = pt->classes; cd != NULL; cd = cd->next)
        if (cd->iff == iff)
        {
            if (isTemplateArg(cd) && !tmpl_arg)
                resetTemplateArg(cd);

            return cd;
        }

    /* Create a new one. */
    cd = sipMalloc(sizeof (classDef));

    if (tmpl_arg)
        setTemplateArg(cd);

    cd->iff = iff;
    cd->pyname = cacheName(pt, classBaseName(cd));
    cd->next = pt->classes;

    pt->classes = cd;

    return cd;
}


/*
 * Add an interface file to an interface file list if it isn't already there.
 */
void appendToIfaceFileList(ifaceFileList **ifflp, ifaceFileDef *iff)
{
    /* Make sure we don't try to add an interface file to its own list. */
    if (&iff->used != ifflp)
    {
        ifaceFileList *iffl;

        while ((iffl = *ifflp) != NULL)
        {
            /* Don't bother if it is already there. */
            if (iffl->iff == iff)
                return;

            ifflp = &iffl -> next;
        }

        iffl = sipMalloc(sizeof (ifaceFileList));

        iffl->iff = iff;
        iffl->next = NULL;

        *ifflp = iffl;
    }
}


/*
 * Find an undefined (or create a new) exception definition in a parse tree.
 */
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new)
{
    exceptionDef *xd, **tail;
    ifaceFileDef *iff;
    classDef *cd;

    iff = findIfaceFile(pt, currentModule, fqname, exception_iface, NULL, NULL);

    /* See if it is an existing one. */
    for (xd = pt->exceptions; xd != NULL; xd = xd->next)
        if (xd->iff == iff)
            return xd;

    /*
     * If it is an exception interface file then we have never seen this name
     * before.  We require that exceptions are defined before being used, but
     * don't make the same requirement of classes (for reasons of backwards
     * compatibility).  Therefore the name must be reinterpreted as a (as yet
     * undefined) class.
     */
    if (new)
    {
        if (iff->type == exception_iface)
            cd = NULL;
        else
            yyerror("There is already a class with the same name or the exception has been used before being defined");
    }
    else
    {
        if (iff->type == exception_iface)
            iff->type = class_iface;

        cd = findClassWithInterface(pt, iff, FALSE);
    }

    /* Create a new one. */
    xd = sipMalloc(sizeof (exceptionDef));

    xd->exceptionnr = -1;
    xd->needed = FALSE;
    xd->iff = iff;
    xd->pyname = NULL;
    xd->cd = cd;
    xd->bibase = NULL;
    xd->base = NULL;
    xd->raisecode = NULL;
    xd->next = NULL;

    /* Append it to the list. */
    for (tail = &pt->exceptions; *tail != NULL; tail = &(*tail)->next)
        ;

    *tail = xd;

    return xd;
}


/*
 * Find an undefined (or create a new) class definition in a parse tree.
 */
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname,
        const char *virt_error_handler, typeHintDef *typehint_in,
        typeHintDef *typehint_out, const char *typehint_value)
{
    int flags;
    classDef *cd, *scope;
    codeBlockList *hdrcode;

    if (sectionFlags & SECT_IS_PRIVATE)
        yyerror("Classes, structs and namespaces must be in the public or protected sections");

    flags = 0;

    if ((scope = currentScope()) != NULL)
    {
        if (sectionFlags & SECT_IS_PROT && !makeProtPublic)
        {
            flags = CLASS_IS_PROTECTED;

            if (scope->iff->type == class_iface)
                setNeedsShadow(scope);
        }

        /* Header code from outer scopes is also included. */
        hdrcode = scope->iff->hdrcode;
    }
    else
        hdrcode = NULL;

    if (pt -> genc)
    {
        /* C structs are always global types. */
        while (fqname -> next != NULL)
            fqname = fqname -> next;

        scope = NULL;
    }

    cd = findClass(pt, iftype, api_range, fqname, FALSE);

    /* Check it hasn't already been defined. */
    if (iftype != namespace_iface && cd->iff->module != NULL)
        yyerror("The struct/class has already been defined");

    /* Complete the initialisation. */
    cd->classflags |= flags;
    cd->ecd = scope;
    cd->iff->module = currentModule;
    cd->virt_error_handler = virt_error_handler;
    cd->typehint_in = typehint_in;
    cd->typehint_out = typehint_out;
    cd->typehint_value = typehint_value;

    if (currentIsTemplate)
        setIsTemplateClass(cd);

    appendCodeBlockList(&cd->iff->hdrcode, hdrcode);

    /* See if it is a namespace extender. */
    if (iftype == namespace_iface)
    {
        classDef *ns;

        for (ns = pt->classes; ns != NULL; ns = ns->next)
        {
            if (ns == cd)
                continue;

            if (ns->iff->type != namespace_iface)
                continue;

            if (compareScopedNames(ns->iff->fqcname, fqname) != 0)
                continue;

            cd->real = ns;

            if (inMainModule())
                ns->iff->first_alt->needed = TRUE;

            break;
        }
    }

    return cd;
}


/*
 * Tidy up after finishing a class definition.
 */
static void finishClass(sipSpec *pt, moduleDef *mod, classDef *cd,
        optFlags *of)
{
    const char *pyname;
    optFlag *flg;

    /* Get the Python name and see if it is different to the C++ name. */
    pyname = getPythonName(mod, of, classBaseName(cd));

    cd->pyname = NULL;
    checkAttributes(pt, mod, cd->ecd, NULL, pyname, FALSE);
    cd->pyname = cacheName(pt, pyname);
    cd->no_typehint = getNoTypeHint(of);

    if ((flg = getOptFlag(of, "Metatype", dotted_name_flag)) != NULL)
        cd->metatype = cacheName(pt, flg->fvalue.sval);

    if ((flg = getOptFlag(of, "Supertype", dotted_name_flag)) != NULL)
        cd->supertype = cacheName(pt, flg->fvalue.sval);

    if (getOptFlag(of, "ExportDerived", bool_flag) != NULL)
        setExportDerived(cd);

    if (getOptFlag(of, "Mixin", bool_flag) != NULL)
        setMixin(cd);

    if ((flg = getOptFlag(of, "FileExtension", string_flag)) != NULL)
        cd->iff->file_extension = flg->fvalue.sval;

    if ((flg = getOptFlag(of, "PyQtFlags", integer_flag)) != NULL)
        cd->pyqt_flags = flg->fvalue.ival;

    if (getOptFlag(of, "PyQtNoQMetaObject", bool_flag) != NULL)
        setPyQtNoQMetaObject(cd);

    if ((flg = getOptFlag(of, "PyQtInterface", string_flag)) != NULL)
        cd->pyqt_interface = flg->fvalue.sval;

    if (isOpaque(cd))
    {
        if (getOptFlag(of, "External", bool_flag) != NULL)
            setIsExternal(cd);
    }
    else
    {
        int seq_might, seq_not, default_to_sequence;
        memberDef *md;

        if (getOptFlag(of, "NoDefaultCtors", bool_flag) != NULL)
            setNoDefaultCtors(cd);

        if (cd -> ctors == NULL)
        {
            if (!noDefaultCtors(cd))
            {
                /* Provide a default ctor. */

                cd->ctors = sipMalloc(sizeof (ctorDef));
 
                cd->ctors->ctorflags = SECT_IS_PUBLIC;
                cd->ctors->pysig.result.atype = void_type;
                cd->ctors->cppsig = &cd->ctors->pysig;

                cd->defctor = cd->ctors;

                setCanCreate(cd);
            }
        }
        else if (cd -> defctor == NULL)
        {
            ctorDef *ct, *last = NULL;

            for (ct = cd -> ctors; ct != NULL; ct = ct -> next)
            {
                if (!isPublicCtor(ct))
                    continue;

                if (ct -> pysig.nrArgs == 0 || ct -> pysig.args[0].defval != NULL)
                {
                    cd -> defctor = ct;
                    break;
                }

                if (last == NULL)
                    last = ct;
            }

            /* The last resort is the first public ctor. */
            if (cd->defctor == NULL)
                cd->defctor = last;
        }

        if (getDeprecated(of))
            setIsDeprecatedClass(cd);

        if (cd->convtocode != NULL && getAllowNone(of))
            setClassHandlesNone(cd);

        if (getOptFlag(of,"Abstract",bool_flag) != NULL)
        {
            setIsAbstractClass(cd);
            setIsIncomplete(cd);
            resetCanCreate(cd);
        }

        /* We assume a public dtor if nothing specific was provided. */
        if (!isDtor(cd))
            setIsPublicDtor(cd);

        if (getOptFlag(of, "DelayDtor", bool_flag) != NULL)
        {
            setIsDelayedDtor(cd);
            setHasDelayedDtors(mod);
        }

        /*
         * There are subtle differences between the add and concat methods and
         * the multiply and repeat methods.  The number versions can have their
         * operands swapped and may return NotImplemented.  If the user has
         * used the /Numeric/ annotation or there are other numeric operators
         * then we use add/multiply.  Otherwise, if the user has used the
         * /Sequence/ annotation or there are indexing operators then we use
         * concat/repeat.
         */
        seq_might = seq_not = FALSE;

        for (md = cd->members; md != NULL; md = md->next)
            switch (md->slot)
            {
            case getitem_slot:
            case setitem_slot:
            case delitem_slot:
                /* This might be a sequence. */
                seq_might = TRUE;
                break;

            case sub_slot:
            case isub_slot:
            case div_slot:
            case idiv_slot:
            case mod_slot:
            case imod_slot:
            case floordiv_slot:
            case ifloordiv_slot:
            case truediv_slot:
            case itruediv_slot:
            case pos_slot:
            case neg_slot:
                /* This is definately not a sequence. */
                seq_not = TRUE;
                break;

            /* Suppress a compiler warning. */
            default:
                ;
            }

        default_to_sequence = (!seq_not && seq_might);

        for (md = cd->members; md != NULL; md = md->next)
        {
            /* Ignore if it is explicitly numeric. */
            if (isNumeric(md))
                continue;

            if (isSequence(md) || default_to_sequence)
                switch (md->slot)
                {
                case add_slot:
                    md->slot = concat_slot;
                    break;

                case iadd_slot:
                    md->slot = iconcat_slot;
                    break;

                case mul_slot:
                    md->slot = repeat_slot;
                    break;

                case imul_slot:
                    md->slot = irepeat_slot;
                    break;

                /* Suppress a compiler warning. */
                default:
                    ;
                }
        }
    }

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }
}


/*
 * Return the encoded name of a template (ie. including its argument types) as
 * a scoped name.
 */
scopedNameDef *encodedTemplateName(templateDef *td)
{
    int a;
    scopedNameDef *snd;

    snd = copyScopedName(td->fqname);

    for (a = 0; a < td->types.nrArgs; ++a)
    {
        char buf[50];
        int flgs;
        scopedNameDef *arg_snd;
        argDef *ad = &td->types.args[a];

        flgs = 0;

        if (isConstArg(ad))
            flgs += 1;

        if (isReference(ad))
            flgs += 2;

        /* We use numbers so they don't conflict with names. */
        sprintf(buf, "%02d%d%d", ad->atype, flgs, ad->nrderefs);

        switch (ad->atype)
        {
        case defined_type:
            arg_snd = copyScopedName(ad->u.snd);
            break;

        case template_type:
            arg_snd = encodedTemplateName(ad->u.td);
            break;

        case struct_type:
            arg_snd = copyScopedName(ad->u.sname);
            break;

        default:
            arg_snd = NULL;
        }

        /*
         * Replace the first element of the argument name with a copy with the
         * encoding prepended.
         */
        if (arg_snd != NULL)
            arg_snd->name = concat(buf, arg_snd->name, NULL);
        else
            arg_snd = text2scopePart(sipStrdup(buf));

        appendScopedName(&snd, arg_snd);
    }

    return snd;
}


/*
 * Create a new mapped type.
 */
static mappedTypeDef *newMappedType(sipSpec *pt, argDef *ad, optFlags *of)
{
    mappedTypeDef *mtd;
    scopedNameDef *snd;
    ifaceFileDef *iff;
    const char *cname;

    /* Check that the type is one we want to map. */
    switch (ad->atype)
    {
    case defined_type:
        snd = ad->u.snd = fullyQualifiedName(ad->u.snd);
        cname = scopedNameTail(snd);
        break;

    case template_type:
        ad->u.td->fqname = fullyQualifiedName(ad->u.td->fqname);
        snd = encodedTemplateName(ad->u.td);
        cname = NULL;
        break;

    case struct_type:
        snd = ad->u.sname = fullyQualifiedName(ad->u.sname);
        cname = scopedNameTail(snd);
        break;

    default:
        yyerror("Invalid type for %MappedType");
    }

    iff = findIfaceFile(pt, currentModule, snd, mappedtype_iface,
            getAPIRange(of), ad);

    /* Check it hasn't already been defined. */
    for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
        if (mtd->iff == iff)
        {
            /*
             * We allow types based on the same template but with different
             * arguments.
             */
            if (ad->atype != template_type || sameBaseType(ad, &mtd->type))
                yyerror("Mapped type has already been defined in this module");
        }

    /* The module may not have been set yet. */
    iff->module = currentModule;

    /* Create a new mapped type. */
    mtd = allocMappedType(pt, ad);

    if (cname != NULL)
        mtd->pyname = cacheName(pt, getPythonName(currentModule, of, cname));

    mappedTypeAnnos(mtd, of);

    mtd->iff = iff;
    mtd->next = pt->mappedtypes;

    pt->mappedtypes = mtd;

    if (inMainModule())
    {
        setIsUsedName(mtd->cname);

        if (mtd->pyname)
            setIsUsedName(mtd->pyname);
    }

    return mtd;
}


/*
 * Allocate, initialise and return a mapped type structure.
 */
mappedTypeDef *allocMappedType(sipSpec *pt, argDef *type)
{
    mappedTypeDef *mtd;

    mtd = sipMalloc(sizeof (mappedTypeDef));

    mtd->type = *type;
    mtd->type.argflags = 0;
    mtd->type.nrderefs = 0;

    mtd->cname = cacheName(pt, type2string(&mtd->type));

    /* Keep track of the original definition as it gets copied. */
    mtd->real = mtd;

    return mtd;
}


/*
 * Create a new enum.
 */
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *of, int flags, int isscoped)
{
    enumDef *ed, *first_alt, *next_alt;
    classDef *c_scope;
    ifaceFileDef *scope;

    if (mt_scope != NULL)
    {
        scope = mt_scope->iff;
        c_scope = NULL;
    }
    else
    {
        if ((c_scope = currentScope()) != NULL)
            scope = c_scope->iff;
        else
            scope = NULL;
    }

    ed = sipMalloc(sizeof (enumDef));

    /* Assume the enum isn't versioned. */
    first_alt = ed;
    next_alt = NULL;

    if (name != NULL)
    {
        ed->pyname = cacheName(pt, getPythonName(mod, of, name));
        checkAttributes(pt, mod, c_scope, mt_scope, ed->pyname->text, FALSE);

        ed->fqcname = text2scopedName(scope, name);
        ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));

        if (inMainModule())
        {
            setIsUsedName(ed->pyname);
            setIsUsedName(ed->cname);
        }

        /* If the scope is versioned then look for any alternate. */
        if (scope != NULL && scope->api_range != NULL)
        {
            enumDef *alt;

            for (alt = pt->enums; alt != NULL; alt = alt->next)
            {
                if (alt->module != mod || alt->fqcname == NULL)
                    continue;

                if (compareScopedNames(alt->fqcname, ed->fqcname) == 0)
                {
                    first_alt = alt->first_alt;
                    next_alt = first_alt->next_alt;
                    first_alt->next_alt = ed;

                    break;
                }
            }
        }
    }
    else
    {
        ed->pyname = NULL;
        ed->fqcname = NULL;
        ed->cname = NULL;
    }

    if (flags & SECT_IS_PROT)
    {
        if (makeProtPublic)
        {
            flags &= ~SECT_IS_PROT;
            flags |= SECT_IS_PUBLIC;
        }
        else if (c_scope != NULL)
        {
            setNeedsShadow(c_scope);
        }
    }

    ed->enumflags = flags;
    ed->no_typehint = getNoTypeHint(of);
    ed->enumnr = -1;
    ed->ecd = c_scope;
    ed->emtd = mt_scope;
    ed->first_alt = first_alt;
    ed->next_alt = next_alt;
    ed->module = mod;
    ed->members = NULL;
    ed->slots = NULL;
    ed->overs = NULL;
    ed->platforms = currentPlatforms;
    ed->next = pt -> enums;

    pt->enums = ed;

    if (getOptFlag(of, "NoScope", bool_flag) != NULL)
        setIsNoScope(ed);

    if (isscoped)
        setIsScopedEnum(ed);

    return ed;
}


/*
 * Get the type values and (optionally) the type names for substitution in
 * handwritten code.
 */
void appendTypeStrings(scopedNameDef *ename, signatureDef *patt, signatureDef *src, signatureDef *known, scopedNameDef **names, scopedNameDef **values)
{
    int a;

    for (a = 0; a < patt->nrArgs; ++a)
    {
        argDef *pad = &patt->args[a];

        if (pad->atype == defined_type)
        {
            char *nam = NULL, *val;
            argDef *sad;

            /*
             * If the type names are already known then check that this is one
             * of them.
             */
            if (known == NULL)
                nam = scopedNameTail(pad->u.snd);
            else if (pad->u.snd->next == NULL)
            {
                int k;

                for (k = 0; k < known->nrArgs; ++k)
                {
                    /* Skip base types. */
                    if (known->args[k].atype != defined_type)
                        continue;

                    if (strcmp(pad->u.snd->name, known->args[k].u.snd->name) == 0)
                    {
                        nam = pad->u.snd->name;
                        break;
                    }
                }
            }

            if (nam == NULL)
                continue;

            /* Add the name. */
            appendScopedName(names, text2scopePart(nam));

            /*
             * Add the corresponding value.  For defined types we don't want 
             * any indirection or references.
             */
            sad = &src->args[a];

            if (sad->atype == defined_type)
                val = scopedNameToString(sad->u.snd);
            else
                val = type2string(sad);

            /* We do want const. */
            if (isConstArg(sad))
            {
                char *const_val = sipStrdup("const ");

                append(&const_val, val);
                free(val);

                val = const_val;
            }

            appendScopedName(values, text2scopePart(val));
        }
        else if (pad->atype == template_type)
        {
            argDef *sad = &src->args[a];

            /* These checks shouldn't be necessary, but... */
            if (sad->atype == template_type && pad->u.td->types.nrArgs == sad->u.td->types.nrArgs)
                appendTypeStrings(ename, &pad->u.td->types, &sad->u.td->types, known, names, values);
        }
    }
}


/*
 * Convert a type to a string on the heap.  The string will use the minimum
 * whitespace while still remaining valid C++.
 */
static char *type2string(argDef *ad)
{
    int i, on_heap = FALSE;
    int nr_derefs = ad->nrderefs;
    int is_reference = isReference(ad);
    char *s;

    /* Use the original type if possible. */
    if (ad->original_type != NULL && !noTypeName(ad->original_type))
    {
        s = scopedNameToString(ad->original_type->fqname);
        on_heap = TRUE;

        nr_derefs -= ad->original_type->type.nrderefs;

        if (isReference(&ad->original_type->type))
            is_reference = FALSE;
    }
    else
        switch (ad->atype)
        {
        case template_type:
            {
                templateDef *td = ad->u.td;

                s = scopedNameToString(td->fqname);
                append(&s, "<");

                for (i = 0; i < td->types.nrArgs; ++i)
                {
                    char *sub_type = type2string(&td->types.args[i]);

                    if (i > 0)
                        append(&s, ",");

                    append(&s, sub_type);
                    free(sub_type);
                }

                if (s[strlen(s) - 1] == '>')
                    append(&s, " >");
                else
                    append(&s, ">");

                on_heap = TRUE;
                break;
            }

        case struct_type:
            s = scopedNameToString(ad->u.sname);
            on_heap = TRUE;
            break;

        case defined_type:
            s = scopedNameToString(ad->u.snd);
            on_heap = TRUE;
            break;

        case ubyte_type:
        case ustring_type:
            s = "unsigned char";
            break;

        case byte_type:
        case ascii_string_type:
        case latin1_string_type:
        case utf8_string_type:
        case string_type:
            s = "char";
            break;

        case sbyte_type:
        case sstring_type:
            s = "signed char";
            break;

        case wstring_type:
            s = "wchar_t";
            break;

        case ushort_type:
            s = "unsigned short";
            break;

        case short_type:
            s = "short";
            break;

        case uint_type:
            s = "uint";
            break;

        case int_type:
        case cint_type:
            s = "int";
            break;

        case ulong_type:
            s = "unsigned long";
            break;

        case long_type:
            s = "long";
            break;

        case ulonglong_type:
            s = "unsigned long long";
            break;

        case longlong_type:
            s = "long long";
            break;

        case float_type:
        case cfloat_type:
            s = "float";
            break;

        case double_type:
        case cdouble_type:
            s = "double";
            break;

        case bool_type:
        case cbool_type:
            s = "bool";
            break;

        case void_type:
            s = "void";
            break;

        case capsule_type:
            s = "void *";
            break;

        default:
            fatal("Unsupported type argument to type2string(): %d\n", ad->atype);
        }

    /* Make sure the string is on the heap. */
    if (!on_heap)
        s = sipStrdup(s);

    while (nr_derefs-- > 0)
        append(&s, "*");

    if (is_reference)
        append(&s, "&");

    return s;
}


/*
 * Remove any explicit global scope.
 */
scopedNameDef *removeGlobalScope(scopedNameDef *snd)
{
    return ((snd != NULL && snd->name[0] == '\0') ? snd->next : snd);
}


/*
 * Convert a scoped name to a string on the heap.
 */
static char *scopedNameToString(scopedNameDef *name)
{
    static const char scope_string[] = "::";
    size_t len;
    scopedNameDef *snd;
    char *s, *dp;

    /*
     * We don't want the global scope (which probably should always be there,
     * but we check anyway).
     */
    name = removeGlobalScope(name);

    /* Work out the length of buffer needed. */
    len = 0;

    for (snd = name; snd != NULL; snd = snd->next)
    {
        len += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            len += strlen(scope_string);
        }
    }

    /* Allocate and populate the buffer. */
    dp = s = sipMalloc(len + 1);

    for (snd = name; snd != NULL; snd = snd->next)
    {
        strcpy(dp, snd->name);
        dp += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            strcpy(dp, scope_string);
            dp += strlen(scope_string);
        }
    }

    return s;
}


/*
 * Instantiate a class template.
 */
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td, const char *pyname, int use_template_name)
{
    scopedNameDef *type_names, *type_values;
    classDef *cd;
    ctorDef *oct, **cttail;
    argDef *ad;
    ifaceFileList *iffl, **used;
    classList *cl;

    type_names = type_values = NULL;
    appendTypeStrings(classFQCName(tcd->cd), &tcd->sig, &td->types, NULL, &type_names, &type_values);

    /*
     * Add a mapping from the template name to the instantiated name.  If we
     * have got this far we know there is room for it.
     */
    ad = &tcd->sig.args[tcd->sig.nrArgs++];
    memset(ad, 0, sizeof (argDef));
    ad->atype = defined_type;
    ad->u.snd = classFQCName(tcd->cd);

    appendScopedName(&type_names, text2scopePart(scopedNameTail(classFQCName(tcd->cd))));
    appendScopedName(&type_values, text2scopePart(scopedNameToString(fqname)));

    /* Create the new class. */
    cd = sipMalloc(sizeof (classDef));

    /* Start with a shallow copy. */
    *cd = *tcd->cd;

    resetIsTemplateClass(cd);
    cd->pyname = cacheName(pt, pyname);
    cd->td = td;

    if (use_template_name)
        setUseTemplateName(cd);

    /* Handle the interface file. */
    cd->iff = findIfaceFile(pt, mod, fqname, class_iface,
            (scope != NULL ? scope->iff->api_range : NULL), NULL);
    cd->iff->module = mod;

    appendCodeBlockList(&cd->iff->hdrcode, tcd->cd->iff->hdrcode);

    /* Make a copy of the used list and add the enclosing scope. */
    used = &cd->iff->used;

    for (iffl = tcd->cd->iff->used; iffl != NULL; iffl = iffl->next)
        appendToIfaceFileList(used, iffl->iff);

    /* Include any scope header code. */
    if (scope != NULL)
        appendCodeBlockList(&cd->iff->hdrcode, scope->iff->hdrcode);

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }

    cd->ecd = currentScope();

    /* Handle any type hints. */
    if (cd->typehint_in != NULL)
        cd->typehint_in = newTypeHint(
                templateString(cd->typehint_in->raw_hint, type_names,
                        type_values));

    if (cd->typehint_out != NULL)
        cd->typehint_out = newTypeHint(
                templateString(cd->typehint_out->raw_hint, type_names,
                        type_values));

    /* Handle the super-classes. */
    for (cl = cd->supers; cl != NULL; cl = cl->next)
    {
        int a;
        scopedNameDef *unscoped;

        unscoped = removeGlobalScope(cl->cd->iff->fqcname);

        /* Ignore defined or scoped classes. */
        if (cl->cd->iff->module != NULL || unscoped->next != NULL)
            continue;

        for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
            if (strcmp(unscoped->name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
            {
                argDef *tad = &td->types.args[a];
                classDef *icd;

                if (tad->atype == defined_type)
                    icd = findClass(pt, class_iface, NULL, tad->u.snd, FALSE);
                else if (tad->atype == class_type)
                    icd = tad->u.cd;
                else
                    fatal("Template argument %s must expand to a class\n",
                            unscoped->name);

                cl->cd = icd;
            }
    }

    /* Handle the enums. */
    instantiateTemplateEnums(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the variables. */
    instantiateTemplateVars(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the typedefs. */
    instantiateTemplateTypedefs(pt, tcd, td, cd, type_names, type_values);

    /* Handle the ctors. */
    cd->ctors = NULL;
    cttail = &cd->ctors;

    for (oct = tcd->cd->ctors; oct != NULL; oct = oct->next)
    {
        ctorDef *nct = sipMalloc(sizeof (ctorDef));

        /* Start with a shallow copy. */
        *nct = *oct;

        templateSignature(&nct->pysig, FALSE, tcd, td, cd, type_names,
                type_values);

        if (oct->cppsig == NULL)
            nct->cppsig = NULL;
        else if (oct->cppsig == &oct->pysig)
            nct->cppsig = &nct->pysig;
        else
        {
            nct->cppsig = sipMalloc(sizeof (signatureDef));

            *nct->cppsig = *oct->cppsig;

            templateSignature(nct->cppsig, FALSE, tcd, td, cd, type_names,
                    type_values);
        }

        nct->methodcode = templateCode(pt, used, nct->methodcode, type_names, type_values);
        nct->premethodcode = templateCode(pt, used, nct->premethodcode, type_names, type_values);

        nct->next = NULL;
        *cttail = nct;
        cttail = &nct->next;

        /* Handle the default ctor. */
        if (tcd->cd->defctor == oct)
            cd->defctor = nct;
    }

    cd->dealloccode = templateCode(pt, used, cd->dealloccode, type_names, type_values);
    cd->dtorcode = templateCode(pt, used, cd->dtorcode, type_names, type_values);

    /* Handle the methods. */
    cd->members = instantiateTemplateMethods(tcd->cd->members, mod);
    cd->overs = instantiateTemplateOverloads(pt, tcd->cd->overs,
            tcd->cd->members, cd->members, tcd, td, cd, used, type_names,
            type_values);

    cd->cppcode = templateCode(pt, used, cd->cppcode, type_names, type_values);
    cd->iff->hdrcode = templateCode(pt, used, cd->iff->hdrcode, type_names, type_values);
    cd->convtosubcode = templateCode(pt, used, cd->convtosubcode, type_names, type_values);
    cd->convtocode = templateCode(pt, used, cd->convtocode, type_names, type_values);
    cd->travcode = templateCode(pt, used, cd->travcode, type_names, type_values);
    cd->clearcode = templateCode(pt, used, cd->clearcode, type_names, type_values);
    cd->getbufcode = templateCode(pt, used, cd->getbufcode, type_names, type_values);
    cd->releasebufcode = templateCode(pt, used, cd->releasebufcode, type_names, type_values);
    cd->readbufcode = templateCode(pt, used, cd->readbufcode, type_names, type_values);
    cd->writebufcode = templateCode(pt, used, cd->writebufcode, type_names, type_values);
    cd->segcountcode = templateCode(pt, used, cd->segcountcode, type_names, type_values);
    cd->charbufcode = templateCode(pt, used, cd->charbufcode, type_names, type_values);
    cd->instancecode = templateCode(pt, used, cd->instancecode, type_names, type_values);
    cd->picklecode = templateCode(pt, used, cd->picklecode, type_names, type_values);
    cd->finalcode = templateCode(pt, used, cd->finalcode, type_names, type_values);
    cd->typehintcode = templateCode(pt, used, cd->typehintcode, type_names, type_values);
    cd->next = pt->classes;

    pt->classes = cd;

    tcd->sig.nrArgs--;

    freeScopedName(type_names);
    freeScopedName(type_values);
}


/*
 * Instantiate the methods of a template class.
 */
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod)
{
    memberDef *md, *methods, **mdtail;

    methods = NULL;
    mdtail = &methods;

    for (md = tmd; md != NULL; md = md->next)
    {
        memberDef *nmd = sipMalloc(sizeof (memberDef));

        /* Start with a shallow copy. */
        *nmd = *md;

        nmd->module = mod;

        if (inMainModule())
            setIsUsedName(nmd->pyname);

        nmd->next = NULL;
        *mdtail = nmd;
        mdtail = &nmd->next;
    }

    return methods;
}


/*
 * Instantiate the overloads of a template class.
 */
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    overDef *od, *overloads, **odtail;

    overloads = NULL;
    odtail = &overloads;

    for (od = tod; od != NULL; od = od->next)
    {
        overDef *nod = sipMalloc(sizeof (overDef));
        memberDef *nmd, *omd;

        /* Start with a shallow copy. */
        *nod = *od;

        for (nmd = methods, omd = tmethods; omd != NULL; omd = omd->next, nmd = nmd->next)
            if (omd == od->common)
            {
                nod->common = nmd;
                break;
            }

        templateSignature(&nod->pysig, TRUE, tcd, td, cd, type_names,
                type_values);

        if (od->cppsig == &od->pysig)
            nod->cppsig = &nod->pysig;
        else
        {
            nod->cppsig = sipMalloc(sizeof (signatureDef));

            *nod->cppsig = *od->cppsig;

            templateSignature(nod->cppsig, TRUE, tcd, td, cd, type_names,
                    type_values);
        }

        nod->methodcode = templateCode(pt, used, nod->methodcode, type_names, type_values);
        nod->premethodcode = templateCode(pt, used, nod->premethodcode, type_names, type_values);
        nod->virtcallcode = templateCode(pt, used, nod->virtcallcode, type_names, type_values);
        nod->virtcode = templateCode(pt, used, nod->virtcode, type_names, type_values);

        nod->next = NULL;
        *odtail = nod;
        odtail = &nod->next;
    }

    return overloads;
}


/*
 * Instantiate the enums of a template class.
 */
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    enumDef *ted;
    moduleDef *mod = cd->iff->module;

    for (ted = pt->enums; ted != NULL; ted = ted->next)
        if (ted->ecd == tcd->cd)
        {
            enumDef *ed;
            enumMemberDef *temd;

            ed = sipMalloc(sizeof (enumDef));

            /* Start with a shallow copy. */
            *ed = *ted;

            if (ed->fqcname != NULL)
            {
                ed->fqcname = text2scopedName(cd->iff,
                        scopedNameTail(ed->fqcname));
                ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));
            }

            if (inMainModule())
            {
                if (ed->pyname != NULL)
                    setIsUsedName(ed->pyname);

                if (ed->cname != NULL)
                    setIsUsedName(ed->cname);
            }

            ed->ecd = cd;
            ed->first_alt = ed;
            ed->module = mod;
            ed->members = NULL;

            for (temd = ted->members; temd != NULL; temd = temd->next)
            {
                enumMemberDef *emd;

                emd = sipMalloc(sizeof (enumMemberDef));

                /* Start with a shallow copy. */
                *emd = *temd;
                emd->ed = ed;

                emd->next = ed->members;
                ed->members = emd;
            }

            ed->slots = instantiateTemplateMethods(ted->slots, mod);
            ed->overs = instantiateTemplateOverloads(pt, ted->overs,
                    ted->slots, ed->slots, tcd, td, cd, used, type_names,
                    type_values);

            ed->next = pt->enums;
            pt->enums = ed;
        }
}


/*
 * Instantiate the variables of a template class.
 */
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    varDef *tvd;

    for (tvd = pt->vars; tvd != NULL; tvd = tvd->next)
        if (tvd->ecd == tcd->cd)
        {
            varDef *vd;

            vd = sipMalloc(sizeof (varDef));

            /* Start with a shallow copy. */
            *vd = *tvd;

            if (inMainModule())
                setIsUsedName(vd->pyname);

            vd->fqcname = text2scopedName(cd->iff,
                    scopedNameTail(vd->fqcname));
            vd->ecd = cd;
            vd->module = cd->iff->module;

            templateType(&vd->type, tcd, td, cd, type_names, type_values);

            vd->accessfunc = templateCode(pt, used, vd->accessfunc, type_names, type_values);
            vd->getcode = templateCode(pt, used, vd->getcode, type_names, type_values);
            vd->setcode = templateCode(pt, used, vd->setcode, type_names, type_values);

            addVariable(pt, vd);
        }
}


/*
 * Instantiate the typedefs of a template class.
 */
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, scopedNameDef *type_names,
        scopedNameDef *type_values)
{
    typedefDef *tdd;

    for (tdd = pt->typedefs; tdd != NULL; tdd = tdd->next)
    {
        typedefDef *new_tdd;

        if (tdd->ecd != tcd->cd)
            continue;

        new_tdd = sipMalloc(sizeof (typedefDef));

        /* Start with a shallow copy. */
        *new_tdd = *tdd;

        new_tdd->fqname = text2scopedName(cd->iff,
                scopedNameTail(new_tdd->fqname));
        new_tdd->ecd = cd;
        new_tdd->module = cd->iff->module;

        templateType(&new_tdd->type, tcd, td, cd, type_names, type_values);

        addTypedef(pt, new_tdd);
    }
}


/*
 * Replace any template arguments in a signature.
 */
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd,
        templateDef *td, classDef *ncd, scopedNameDef *type_names,
        scopedNameDef *type_values)
{
    int a;

    if (result)
        templateType(&sd->result, tcd, td, ncd, type_names, type_values);

    for (a = 0; a < sd->nrArgs; ++a)
        templateType(&sd->args[a], tcd, td, ncd, type_names, type_values);
}


/*
 * Replace any template arguments in a type.
 */
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td,
        classDef *ncd, scopedNameDef *type_names, scopedNameDef *type_values)
{
    int a;
    char *name;

    /* Descend into any sub-templates. */
    if (ad->atype == template_type)
    {
        templateDef *new_td = sipMalloc(sizeof (templateDef));

        /* Make a deep copy of the template definition. */
        *new_td = *ad->u.td;
        ad->u.td = new_td;

        templateSignature(&ad->u.td->types, FALSE, tcd, td, ncd, type_names,
                type_values);

        return;
    }

    /* Handle any default value. */
    if (ad->defval != NULL && ad->defval->vtype == fcall_value)
    {
        /*
         * We only handle the subset where the value is an function call, ie. a
         * template ctor.
         */
        valueDef *vd = ad->defval;

        if (vd->vtype == fcall_value && vd->u.fcd->type.atype == defined_type)
        {
            valueDef *new_vd;
            fcallDef *fcd;
            scopedNameDef *snd, **tailp;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = *vd->u.fcd;

            tailp = &fcd->type.u.snd;
            for (snd = vd->u.fcd->type.u.snd; snd != NULL; snd = snd->next)
            {
                *tailp = text2scopePart(
                        templateString(snd->name, type_names, type_values));
                tailp = &(*tailp)->next;
            }

            new_vd = sipMalloc(sizeof (valueDef));
            new_vd->vtype = fcall_value;
            new_vd->u.fcd = fcd;

            ad->defval = new_vd;
        }
    }

    /* Handle any type hints. */
    if (ad->typehint_in != NULL)
        ad->typehint_in = newTypeHint(
                templateString(ad->typehint_in->raw_hint, type_names,
                        type_values));

    if (ad->typehint_out != NULL)
        ad->typehint_out = newTypeHint(
                templateString(ad->typehint_out->raw_hint, type_names,
                        type_values));

    /* Ignore if it isn't an unscoped name. */
    if (ad->atype != defined_type || ad->u.snd->next != NULL)
        return;

    name = ad->u.snd->name;

    for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
        if (strcmp(name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
        {
            argDef *tad = &td->types.args[a];

            ad->atype = tad->atype;

            /* We take the constrained flag from the real type. */
            resetIsConstrained(ad);

            if (isConstrained(tad))
                setIsConstrained(ad);

            ad->u = tad->u;

            return;
        }

    /* Handle the class name itself. */
    if (strcmp(name, scopedNameTail(classFQCName(tcd->cd))) == 0)
    {
        ad->atype = class_type;
        ad->u.cd = ncd;
        ad->original_type = NULL;
    }
}


/*
 * Replace any template arguments in a literal code block.
 */
codeBlockList *templateCode(sipSpec *pt, ifaceFileList **used,
        codeBlockList *ocbl, scopedNameDef *names, scopedNameDef *values)
{
    codeBlockList *ncbl = NULL;

    while (ocbl != NULL)
    {
        char *at = ocbl->block->frag;
        int start_of_line = TRUE;

        do
        {
            char *from = at, *first = NULL;
            codeBlock *cb;
            scopedNameDef *nam, *val, *nam_first, *val_first;

            /* Suppress a compiler warning. */
            val_first = NULL;

            /*
             * Don't do any substitution in lines that appear to be
             * preprocessor directives.  This prevents #include'd file names
             * being broken.
             */
            if (start_of_line)
            {
                /* Strip leading whitespace. */
                while (isspace(*from))
                    ++from;

                if (*from == '#')
                {
                    /* Skip to the end of the line. */
                    do
                        ++from;
                    while (*from != '\n' && *from != '\0');
                }
                else
                {
                    start_of_line = FALSE;
                }
            }

            /*
             * Go through the rest of this fragment looking for each of the
             * types and the name of the class itself.
             */
            nam = names;
            val = values;

            while (nam != NULL && val != NULL)
            {
                char *cp;

                if ((cp = strstr(from, nam->name)) != NULL)
                    if (first == NULL || first > cp)
                    {
                        nam_first = nam;
                        val_first = val;
                        first = cp;
                    }

                nam = nam->next;
                val = val->next;
            }

            /* Create the new fragment. */
            cb = sipMalloc(sizeof (codeBlock));

            if (at == ocbl->block->frag)
            {
                cb->filename = ocbl->block->filename;
                cb->linenr = ocbl->block->linenr;
            }
            else
                cb->filename = NULL;

            appendCodeBlock(&ncbl, cb);

            /* See if anything was found. */
            if (first == NULL)
            {
                /* We can just point to this. */
                cb->frag = at;

                /* All done with this one. */
                at = NULL;
            }
            else
            {
                static char *gen_names[] = {
                    "sipType_",
                    "sipClass_",
                    "sipEnum_",
                    "sipException_",
                    NULL
                };

                char *dp, *sp, **gn;
                int genname = FALSE;

                /*
                 * If the context in which the text is used is in the name of a
                 * SIP generated object then translate any "::" scoping to "_"
                 * and remove any const.
                 */
                for (gn = gen_names; *gn != NULL; ++gn)
                    if (search_back(first, at, *gn))
                    {
                        addUsedFromCode(pt, used, val_first->name);
                        genname = TRUE;
                        break;
                    }

                /* Fragment the fragment. */
                cb->frag = sipMalloc(first - at + strlen(val_first->name) + 1);

                strncpy(cb->frag, at, first - at);

                dp = &cb->frag[first - at];
                sp = val_first->name;

                if (genname)
                {
                    char gch;

                    if (strlen(sp) > 6 && strncmp(sp, "const ", 6) == 0)
                        sp += 6;

                    while ((gch = *sp++) != '\0')
                        if (gch == ':' && *sp == ':')
                        {
                            *dp++ = '_';
                            ++sp;
                        }
                        else
                            *dp++ = gch;

                    *dp = '\0';
                }
                else
                    strcpy(dp, sp);

                /* Move past the replaced text. */
                at = first + strlen(nam_first->name);

                if (*at == '\n')
                    start_of_line = TRUE;
            }
        }
        while (at != NULL && *at != '\0');

        ocbl = ocbl->next;
    }

    return ncbl;
}


/*
 * Return TRUE if the text at the end of a string matches the target string.
 */
static int search_back(const char *end, const char *start, const char *target)
{
    size_t tlen = strlen(target);

    if (start + tlen >= end)
        return FALSE;

    return (strncmp(end - tlen, target, tlen) == 0);
}


/*
 * Add any needed interface files based on handwritten code.
 */
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname)
{
    ifaceFileDef *iff;
    enumDef *ed;

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (iff->type != class_iface && iff->type != exception_iface)
            continue;

        if (sameName(iff->fqcname, sname))
        {
            appendToIfaceFileList(used, iff);
            return;
        }
    }

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        if (ed->ecd == NULL)
            continue;

        if (sameName(ed->fqcname, sname))
        {
            appendToIfaceFileList(used, ed->ecd->iff);
            return;
        }
    }
}


/*
 * Compare a scoped name with its string equivalent.
 */
static int sameName(scopedNameDef *snd, const char *sname)
{
    /* Handle any explicit scopes. */
    if (sname[0] == ':' && sname[1] == ':')
    {
        if (snd->name[0] != '\0')
            return FALSE;

        sname += 2;
    }

    snd = removeGlobalScope(snd);

    while (snd != NULL && *sname != '\0')
    {
        const char *sp = snd->name;

        while (*sp != '\0' && *sname != ':' && *sname != '\0')
            if (*sp++ != *sname++)
                return FALSE;

        if (*sp != '\0' || (*sname != ':' && *sname != '\0'))
            return FALSE;

        snd = snd->next;

        if (*sname == ':')
            sname += 2;
    }

    return (snd == NULL && *sname == '\0');
}


/*
 * Compare a (possibly) relative scoped name with a fully qualified scoped name
 * while taking the current scope into account.
 */
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name)
{
    classDef *scope;

    for (scope = currentScope(); scope != NULL; scope = scope->ecd)
    {
        scopedNameDef *snd;
        int found;

        snd = copyScopedName(classFQCName(scope));
        appendScopedName(&snd, copyScopedName(rel_name));

        found = (compareScopedNames(fq_name, snd) == 0);

        freeScopedName(snd);

        if (found)
            return TRUE;
    }

    return compareScopedNames(fq_name, rel_name) == 0;
}


/*
 * Create a new typedef.
 */
static void newTypedef(sipSpec *pt, moduleDef *mod, char *name, argDef *type,
        optFlags *optflgs)
{
    int no_type_name;
    typedefDef *td;
    scopedNameDef *fqname;
    classDef *scope;

    scope = currentScope();
    fqname = text2scopedName((scope != NULL ? scope->iff : NULL), name);
    no_type_name = (getOptFlag(optflgs, "NoTypeName", bool_flag) != NULL);

    /* See if we are instantiating a template class. */
    if (type->atype == template_type)
    {
        classTmplDef *tcd;
        templateDef *td = type->u.td;

        for (tcd = pt->classtemplates; tcd != NULL; tcd = tcd->next)
            if (foundInScope(tcd->cd->iff->fqcname, td->fqname) &&
                sameTemplateSignature(&tcd->sig, &td->types, FALSE))
            {
                instantiateClassTemplate(pt, mod, scope, fqname, tcd, td,
                        getPythonName(mod, optflgs, name), no_type_name);

                /* All done. */
                return;
            }
    }

    td = sipMalloc(sizeof (typedefDef));

    td->tdflags = 0;
    td->fqname = fqname;
    td->ecd = scope;
    td->module = mod;
    td->platforms = currentPlatforms;
    td->type = *type;

    if (getOptFlag(optflgs, "Capsule", bool_flag) != NULL)
    {
        /* Make sure the type is void *. */
        if (type->atype != void_type || type->nrderefs != 1 || isConstArg(type) || isReference(type))
        {
            fatalScopedName(fqname);
            fatal(" must be a void* if /Capsule/ is specified\n");
        }

        td->type.atype = capsule_type;
        td->type.nrderefs = 0;
        td->type.u.cap = fqname;
    }

    if (no_type_name)
        setNoTypeName(td);

    addTypedef(pt, td);
}


/*
 * Add a typedef to the list so that the list remains sorted.
 */
static void addTypedef(sipSpec *pt, typedefDef *tdd)
{
    typedefDef **tdp;

    /*
     * Check it doesn't already exist (with a strict parse) and find the
     * position in the sorted list where it should be put.
     */
    for (tdp = &pt->typedefs; *tdp != NULL; tdp = &(*tdp)->next)
    {
        int res = compareScopedNames((*tdp)->fqname, tdd->fqname);

        if (res == 0 && strictParse)
        {
            fatalScopedName(tdd->fqname);
            fatal(" already defined\n");
        }

        if (res >= 0)
            break;
    }

    tdd->next = *tdp;
    *tdp = tdd;

    tdd->module->nrtypedefs++;
}


/*
 * Speculatively try and resolve any typedefs.  In some cases (eg. when
 * comparing template signatures) it helps to use the real type if it is known.
 * Note that this wouldn't be necessary if we required that all types be known
 * before they are used.
 */
static void resolveAnyTypedef(sipSpec *pt, argDef *ad)
{
    argDef orig = *ad;

    while (ad->atype == defined_type)
    {
        ad->atype = no_type;
        searchTypedefs(pt, ad->u.snd, ad);

        /*
         * Don't resolve to a template type as it may be superceded later on
         * by a more specific mapped type.
         */
        if (ad->atype == no_type || ad->atype == template_type)
        {
            *ad = orig;
            break;
        }
    }
}


/*
 * Return TRUE if the template signatures are the same.  A deep comparison is
 * used for mapped type templates where we want to recurse into any nested
 * templates.
 */
int sameTemplateSignature(signatureDef *tmpl_sd, signatureDef *args_sd,
        int deep)
{
    int a;

    if (tmpl_sd->nrArgs != args_sd->nrArgs)
        return FALSE;

    for (a = 0; a < tmpl_sd->nrArgs; ++a)
    {
        argDef *tmpl_ad = &tmpl_sd->args[a];
        argDef *args_ad = &args_sd->args[a];

        /*
         * If we are doing a shallow comparision (ie. for class templates) then
         * a type name in the template signature matches anything in the
         * argument signature.
         */
        if (tmpl_ad->atype == defined_type && !deep)
            continue;

        /*
         * For type names only compare the references and pointers, and do the
         * same for any nested templates.
         */
        if (tmpl_ad->atype == defined_type && args_ad->atype == defined_type)
        {
            if (isReference(tmpl_ad) != isReference(args_ad) || tmpl_ad->nrderefs != args_ad->nrderefs)
                return FALSE;
        }
        else if (tmpl_ad->atype == template_type && args_ad->atype == template_type)
        {
            if (!sameTemplateSignature(&tmpl_ad->u.td->types, &args_ad->u.td->types, deep))
                return FALSE;
        }
        else if (!sameBaseType(tmpl_ad, args_ad))
            return FALSE;
    }

    return TRUE;
}


/*
 * Create a new variable.
 */
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section)
{
    varDef *var;
    classDef *escope = currentScope();
    nameDef *nd;

    /*
     * For the moment we don't support capsule variables because it needs the
     * API major version increasing.
     */
    if (type->atype == capsule_type)
        yyerror("Capsule variables not yet supported");

    /* Check the section. */
    if (section != 0)
    {
        if ((section & SECT_IS_PUBLIC) == 0)
            yyerror("Class variables must be in the public section");

        if (!isstatic && acode != NULL)
            yyerror("%AccessCode cannot be specified for non-static class variables");
    }

    if (isstatic && pt->genc)
        yyerror("Cannot have static members in a C structure");

    if (gcode != NULL || scode != NULL)
    {
        if (acode != NULL)
            yyerror("Cannot mix %AccessCode and %GetCode or %SetCode");

        if (escope == NULL)
            yyerror("Cannot specify %GetCode or %SetCode for global variables");
    }

    applyTypeFlags(mod, type, of);

    nd = cacheName(pt, getPythonName(mod, of, name));

    if (inMainModule())
        setIsUsedName(nd);

    checkAttributes(pt, mod, escope, NULL, nd->text, FALSE);

    var = sipMalloc(sizeof (varDef));

    var->pyname = nd;
    var->fqcname = text2scopedName((escope != NULL ? escope->iff : NULL),
            name);
    var->ecd = escope;
    var->module = mod;
    var->varflags = 0;
    var->no_typehint = getNoTypeHint(of);
    var->platforms = currentPlatforms;
    var->type = *type;
    appendCodeBlock(&var->accessfunc, acode);
    appendCodeBlock(&var->getcode, gcode);
    appendCodeBlock(&var->setcode, scode);

    if (isstatic || (escope != NULL && escope->iff->type == namespace_iface))
        setIsStaticVar(var);

    if (getOptFlag(of, "NoSetter", bool_flag) != NULL)
        setNoSetter(var);

    addVariable(pt, var);
}


/*
 * Create a new ctor.
 */
static void newCtor(moduleDef *mod, char *name, int sectFlags,
        signatureDef *args, optFlags *optflgs, codeBlock *methodcode,
        throwArgs *exceptions, signatureDef *cppsig, int explicit,
        codeBlock *docstring, codeBlock *premethodcode)
{
    ctorDef *ct, **ctp;
    classDef *cd = currentScope();

    /* Check the name of the constructor. */
    if (strcmp(classBaseName(cd), name) != 0)
        yyerror("Constructor doesn't have the same name as its class");

    if (docstring != NULL)
        appendCodeBlock(&cd->docstring, docstring);

    /* Add to the list of constructors. */
    ct = sipMalloc(sizeof (ctorDef));

    if (sectFlags & SECT_IS_PROT && makeProtPublic)
    {
        sectFlags &= ~SECT_IS_PROT;
        sectFlags |= SECT_IS_PUBLIC;
    }

    /* Allow the signature to be used like an function signature. */
    memset(&args->result, 0, sizeof (argDef));
    args->result.atype = void_type;

    ct->ctorflags = sectFlags;
    ct->no_typehint = getNoTypeHint(optflgs);
    ct->api_range = getAPIRange(optflgs);
    ct->pysig = *args;
    ct->cppsig = (cppsig != NULL ? cppsig : &ct->pysig);
    ct->exceptions = exceptions;
    ct->platforms = currentPlatforms;
    appendCodeBlock(&ct->methodcode, methodcode);
    appendCodeBlock(&ct->premethodcode, premethodcode);

    if (!isPrivateCtor(ct))
        setCanCreate(cd);

    if (isProtectedCtor(ct))
        setNeedsShadow(cd);

    if (explicit)
        setIsExplicitCtor(ct);

    getHooks(optflgs, &ct->prehook, &ct->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGILCtor(ct);
    else if (getHoldGIL(optflgs))
        setIsHoldGILCtor(ct);

    if (getTransfer(optflgs))
        setIsResultTransferredCtor(ct);

    if (getDeprecated(optflgs))
        setIsDeprecatedCtor(ct);

    if (!isPrivateCtor(ct))
        ct->kwargs = keywordArgs(mod, optflgs, &ct->pysig, FALSE);

    if (methodcode == NULL && getOptFlag(optflgs, "NoRaisesPyException", bool_flag) == NULL)
    {
        if (allRaisePyException(mod) || getOptFlag(optflgs, "RaisesPyException", bool_flag) != NULL)
            setRaisesPyExceptionCtor(ct);
    }

    if (getOptFlag(optflgs, "NoDerived", bool_flag) != NULL)
    {
        if (cppsig != NULL)
            yyerror("The /NoDerived/ annotation cannot be used with a C++ signature");

        if (methodcode == NULL)
            yyerror("The /NoDerived/ annotation must be used with %MethodCode");

        ct->cppsig = NULL;
    }

    if (getOptFlag(optflgs, "Default", bool_flag) != NULL)
    {
        if (cd->defctor != NULL)
            yyerror("A constructor with the /Default/ annotation has already been defined");

        cd->defctor = ct;
    }

    /* Append to the list. */
    for (ctp = &cd->ctors; *ctp != NULL; ctp = &(*ctp)->next)
        ;

    *ctp = ct;
}


/*
 * Create a new function.
 */
static void newFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        ifaceFileDef *ns_scope, mappedTypeDef *mt_scope, int sflags,
        int isstatic, int issignal, int isslot, int isvirt, char *name,
        signatureDef *sig, int isconst, int isabstract, optFlags *optflgs,
        codeBlock *methodcode, codeBlock *vcode, codeBlock *virtcallcode,
        throwArgs *exceptions, signatureDef *cppsig, codeBlock *docstring,
        int isfinal, codeBlock *premethodcode)
{
    static const char *annos[] = {
        "__len__",
        "__imatmul__",
        "__matmul__",
        "AbortOnException",
        "AllowNone",
        "API",
        "AutoGen",
        "Deprecated",
        "DisallowNone",
        "DocType",
        "Encoding",
        "Factory",
        "HoldGIL",
        "KeywordArgs",
        "KeepReference",
        "NewThread",
        "NoArgParser",
        "NoCopy",
        "NoRaisesPyException",
        "NoTypeHint",
        "NoVirtualErrorHandler",
        "Numeric",
        "PostHook",
        "PreHook",
        "PyInt",
        "PyName",
        "PyQtSignalHack",
        "RaisesPyException",
        "ReleaseGIL",
        "Sequence",
        "VirtualErrorHandler",
        "Transfer",
        "TransferBack",
        "TransferThis",
        "TypeHint",
        NULL
    };

    const char *pyname, *virt_error_handler;
    int factory, xferback, no_arg_parser, no_virt_error_handler;
    overDef *od, **odp, **headp;
    optFlag *of;

    checkAnnos(optflgs, annos);

    /* Extra checks for a C module. */
    if (pt->genc)
    {
        if (c_scope != NULL)
            yyerror("Function declaration not allowed in a struct in a C module");

        if (isstatic)
            yyerror("Static functions not allowed in a C module");

        if (exceptions != NULL)
            yyerror("Exceptions not allowed in a C module");

        /* Handle C void prototypes. */
        if (sig->nrArgs == 1)
        {
            argDef *vad = &sig->args[0];

            if (vad->atype == void_type && vad->nrderefs == 0)
                sig->nrArgs = 0;
        }
    }

    if (mt_scope != NULL)
        headp = &mt_scope->overs;
    else if (c_scope != NULL)
        headp = &c_scope->overs;
    else
        headp = &mod->overs;

    /*
     * See if the function has a non-lazy method.  These are methods that
     * Python expects to see defined in the type before any instance of the
     * type is created.
     */
    if (c_scope != NULL)
    {
        static const char *lazy[] = {
            "__getattribute__",
            "__getattr__",
            "__enter__",
            "__exit__",
            "__aenter__",
            "__aexit__",
            NULL
        };

        const char **l;

        for (l = lazy; *l != NULL; ++l)
            if (strcmp(name, *l) == 0)
            {
                setHasNonlazyMethod(c_scope);
                break;
            }
    }

    /* See if it is a factory method. */
    if (getOptFlag(optflgs, "Factory", bool_flag) != NULL)
        factory = TRUE;
    else
    {
        int a;

        factory = FALSE;

        /* Check /TransferThis/ wasn't specified. */
        if (c_scope == NULL || isstatic)
            for (a = 0; a < sig->nrArgs; ++a)
                if (isThisTransferred(&sig->args[a]))
                    yyerror("/TransferThis/ may only be specified in constructors and class methods");
    }

    /* See if the result is to be returned to Python ownership. */
    xferback = (getOptFlag(optflgs, "TransferBack", bool_flag) != NULL);

    if (factory && xferback)
        yyerror("/TransferBack/ and /Factory/ cannot both be specified");

    /* Create a new overload definition. */

    od = sipMalloc(sizeof (overDef));

    getSourceLocation(&od->sloc);

    /* Set the overload flags. */

    if ((sflags & SECT_IS_PROT) && makeProtPublic)
    {
        sflags &= ~SECT_IS_PROT;
        sflags |= SECT_IS_PUBLIC | OVER_REALLY_PROT;
    }

    od->overflags = sflags;

    if (issignal)
    {
        resetIsSlot(od);
        setIsSignal(od);
    }
    else if (isslot)
    {
        resetIsSignal(od);
        setIsSlot(od);
    }

    od->no_typehint = getNoTypeHint(optflgs);

    if (isSignal(od))
        if ((of = getOptFlag(optflgs, "PyQtSignalHack", integer_flag)) != NULL)
            od->pyqt_signal_hack = of->fvalue.ival;

    if (factory)
        setIsFactory(od);

    if (xferback)
        setIsResultTransferredBack(od);

    if (getTransfer(optflgs))
        setIsResultTransferred(od);

    if (getOptFlag(optflgs, "TransferThis", bool_flag) != NULL)
        setIsThisTransferredMeth(od);

    if (methodcode == NULL && getOptFlag(optflgs, "NoRaisesPyException", bool_flag) == NULL)
    {
        if (allRaisePyException(mod) || getOptFlag(optflgs, "RaisesPyException", bool_flag) != NULL)
            setRaisesPyException(od);
    }

    if (isProtected(od))
        setNeedsShadow(c_scope);

    if ((isSlot(od) || isSignal(od)) && !isPrivate(od))
    {
        if (isSignal(od))
            setNeedsShadow(c_scope);

        pt->sigslots = TRUE;
    }

    if (isSignal(od) && (methodcode != NULL || vcode != NULL || virtcallcode != NULL))
        yyerror("Cannot provide code for signals");

    if (isstatic)
    {
        if (isSignal(od))
            yyerror("Static functions cannot be signals");

        if (isvirt)
            yyerror("Static functions cannot be virtual");

        setIsStatic(od);
    }

    if (isconst)
        setIsConst(od);

    if (isfinal)
        setIsFinal(od);

    if (isabstract)
    {
        if (sflags == 0)
            yyerror("Non-class function specified as abstract");

        setIsAbstract(od);
    }

    if ((of = getOptFlag(optflgs, "AutoGen", opt_name_flag)) != NULL)
    {
        if (of->fvalue.sval == NULL || isEnabledFeature(of->fvalue.sval))
            setIsAutoGen(od);
    }

    virt_error_handler = getVirtErrorHandler(optflgs);
    no_virt_error_handler = (getOptFlag(optflgs, "NoVirtualErrorHandler", bool_flag) != NULL);

    if (isvirt)
    {
        if (!isfinal)
        {
            setIsVirtual(od);
            setNeedsShadow(c_scope);
        }

        if (getOptFlag(optflgs, "AbortOnException", bool_flag) != NULL)
            setAbortOnException(od);

        if (no_virt_error_handler)
        {
            if (virt_error_handler != NULL)
                yyerror("/VirtualErrorHandler/ and /NoVirtualErrorHandler/ provided");

            setNoErrorHandler(od);
        }
        else
        {
            od->virt_error_handler = virt_error_handler;
        }
    }
    else
    {
        if (vcode != NULL)
            yyerror("%VirtualCatcherCode provided for non-virtual function");

        if (virt_error_handler != NULL)
            yyerror("/VirtualErrorHandler/ provided for non-virtual function");

        if (no_virt_error_handler)
            yyerror("/NoVirtualErrorHandler/ provided for non-virtual function");
    }

    od->cppname = name;
    od->pysig = *sig;
    od->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
    od->exceptions = exceptions;
    od->platforms = currentPlatforms;
    appendCodeBlock(&od->methodcode, methodcode);
    appendCodeBlock(&od->premethodcode, premethodcode);
    appendCodeBlock(&od->virtcallcode, virtcallcode);
    appendCodeBlock(&od->virtcode, vcode);

    no_arg_parser = (getOptFlag(optflgs, "NoArgParser", bool_flag) != NULL);

    if (no_arg_parser)
    {
        if (methodcode == NULL)
            yyerror("%MethodCode must be supplied if /NoArgParser/ is specified");
    }
    else
    {
        /*
         * The argument parser requires that there is nothing after an
         * ellipsis.
         */
        checkEllipsis(sig);
    }

    if (cppsig != NULL)
        checkEllipsis(cppsig);

    if (getOptFlag(optflgs, "NoCopy", bool_flag) != NULL)
        setNoCopy(&od->pysig.result);

    if (getAllowNone(optflgs))
        setAllowNone(&od->pysig.result);

    if (getDisallowNone(optflgs))
        setDisallowNone(&od->pysig.result);

    handleKeepReference(optflgs, &od->pysig.result, mod);

    pyname = getPythonName(mod, optflgs, name);

    od->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope, pyname,
            (methodcode != NULL), sig->nrArgs, no_arg_parser);

    if (isProtected(od))
        setHasProtected(od->common);

    if (strcmp(pyname, "__delattr__") == 0)
        setIsDelattr(od);

    if (docstring != NULL)
        appendCodeBlock(&od->common->docstring, docstring);

    od->api_range = getAPIRange(optflgs);

    if (od->api_range == NULL)
        setNotVersioned(od->common);

    if (getOptFlag(optflgs, "Numeric", bool_flag) != NULL)
    {
        if (isSequence(od->common))
            yyerror("/Sequence/ has already been specified");

        setIsNumeric(od->common);
    }

    if (getOptFlag(optflgs, "Sequence", bool_flag) != NULL)
    {
        if (isNumeric(od->common))
            yyerror("/Numeric/ has already been specified");

        setIsSequence(od->common);
    }

    /* Methods that run in new threads must be virtual. */
    if (getOptFlag(optflgs, "NewThread", bool_flag) != NULL)
    {
        argDef *res;

        if (!isvirt)
            yyerror("/NewThread/ may only be specified for virtual functions");

        /*
         * This is an arbitary limitation to make the code generator slightly
         * easier - laziness on my part.
         */
        res = &od->cppsig->result;

        if (res->atype != void_type || res->nrderefs != 0)
            yyerror("/NewThread/ may only be specified for void functions");

        setIsNewThread(od);
    }

    getHooks(optflgs, &od->prehook, &od->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGIL(od);
    else if (getHoldGIL(optflgs))
        setIsHoldGIL(od);

    if (getDeprecated(optflgs))
        setIsDeprecated(od);

    if (!isPrivate(od) && !isSignal(od) && (od->common->slot == no_slot || od->common->slot == call_slot))
    {
        od->kwargs = keywordArgs(mod, optflgs, &od->pysig, hasProtected(od->common));

        if (od->kwargs != NoKwArgs)
            setUseKeywordArgs(od->common);

        /*
         * If the overload is protected and defined in an imported module then
         * we need to make sure that any other overloads' keyword argument
         * names are marked as used.
         */
        if (isProtected(od) && !inMainModule())
        {
            overDef *kwod;

            for (kwod = c_scope->overs; kwod != NULL; kwod = kwod->next)
                if (kwod->common == od->common && kwod->kwargs != NoKwArgs)
                {
                    int a;

                    for (a = 0; a < kwod->pysig.nrArgs; ++a)
                    {
                        argDef *ad = &kwod->pysig.args[a];

                        if (kwod->kwargs == OptionalKwArgs && ad->defval == NULL)
                            continue;

                        if (ad->name != NULL)
                            setIsUsedName(ad->name);
                    }
                }
        }
    }

    od->next = NULL;

    /* See if we want to auto-generate some methods. */
    if (getOptFlag(optflgs, "__len__", bool_flag) != NULL)
    {
        overDef *len;

        len = sipMalloc(sizeof (overDef));

        len->cppname = "__len__";
        len->overflags = SECT_IS_PUBLIC;
        len->pysig.result.atype = ssize_type;
        len->pysig.nrArgs = 0;
        len->cppsig = &len->pysig;

        if ((len->methodcode = od->methodcode) == NULL)
        {
            char *buf = sipStrdup("            sipRes = (SIP_SSIZE_T)sipCpp->");
            codeBlock *code;

            append(&buf, od->cppname);
            append(&buf, "();\n");

            code = sipMalloc(sizeof (codeBlock));

            code->frag = buf;
            code->filename = "Auto-generated";
            code->linenr = 1;

            appendCodeBlock(&len->methodcode, code);
        }

        len->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope,
                len->cppname, TRUE, 0, FALSE);

        len->platforms = od->platforms;
        len->next = od->next;
        od->next = len;
    }

    if (getOptFlag(optflgs, "__matmul__", bool_flag) != NULL)
    {
        overDef *matmul;

        matmul = sipMalloc(sizeof (overDef));

        matmul->cppname = "__matmul__";
        matmul->overflags = SECT_IS_PUBLIC;
        matmul->pysig = od->pysig;
        matmul->cppsig = (cppsig != NULL ? cppsig : &matmul->pysig);

        matmul->methodcode = od->methodcode;

        matmul->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope,
                matmul->cppname, (matmul->methodcode != NULL),
                matmul->pysig.nrArgs, FALSE);

        matmul->platforms = od->platforms;
        matmul->next = od->next;
        od->next = matmul;
    }

    if (getOptFlag(optflgs, "__imatmul__", bool_flag) != NULL)
    {
        overDef *imatmul;

        imatmul = sipMalloc(sizeof (overDef));

        imatmul->cppname = "__imatmul__";
        imatmul->overflags = SECT_IS_PUBLIC;
        imatmul->pysig = od->pysig;
        imatmul->cppsig = (cppsig != NULL ? cppsig : &imatmul->pysig);

        imatmul->methodcode = od->methodcode;

        imatmul->common = findFunction(pt, mod, c_scope, ns_scope, mt_scope,
                imatmul->cppname, (imatmul->methodcode != NULL),
                imatmul->pysig.nrArgs, FALSE);

        imatmul->platforms = od->platforms;
        imatmul->next = od->next;
        od->next = imatmul;
    }

    /* Append to the list. */
    for (odp = headp; *odp != NULL; odp = &(*odp)->next)
        ;

    *odp = od;
}


/*
 * Return the Python name based on the C/C++ name and any /PyName/ annotation.
 */
static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname)
{
    const char *pname;
    optFlag *of;
    autoPyNameDef *apnd;

    /* Use the explicit name if given. */
    if ((of = getOptFlag(optflgs, "PyName", name_flag)) != NULL)
        return of->fvalue.sval;

    /* Apply any automatic naming rules. */
    pname = cname;

    for (apnd = mod->autopyname; apnd != NULL; apnd = apnd->next)
    {
        size_t len = strlen(apnd->remove_leading);

        if (strncmp(pname, apnd->remove_leading, len) == 0)
            pname += len;
    }

    return pname;
}


/*
 * Cache a name in a module.  Entries in the cache are stored in order of
 * decreasing length.
 */
nameDef *cacheName(sipSpec *pt, const char *name)
{
    nameDef *nd, **ndp;
    size_t len;

    /* Allow callers to be lazy about checking if there is really a name. */
    if (name == NULL)
        return NULL;

    /* Skip entries that are too large. */
    ndp = &pt->namecache;
    len = strlen(name);

    while (*ndp != NULL && (*ndp)->len > len)
        ndp = &(*ndp)->next;

    /* Check entries that are the right length. */
    for (nd = *ndp; nd != NULL && nd->len == len; nd = nd->next)
        if (memcmp(nd->text, name, len) == 0)
            return nd;

    /* Create a new one. */
    nd = sipMalloc(sizeof (nameDef));

    nd->nameflags = 0;
    nd->text = name;
    nd->len = len;
    nd->next = *ndp;

    *ndp = nd;

    return nd;
}


/*
 * Find (or create) an overloaded function name.
 */
static memberDef *findFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        ifaceFileDef *ns_scope, mappedTypeDef *mt_scope, const char *pname,
        int hwcode, int nrargs, int no_arg_parser)
{
    static struct slot_map {
        const char *name;   /* The slot name. */
        slotType type;      /* The corresponding type. */
        int needs_hwcode;   /* Set if handwritten code is required. */
        int nrargs;         /* Nr. of arguments. */
    } slot_table[] = {
        {"__str__", str_slot, TRUE, 0},
        {"__int__", int_slot, FALSE, 0},
        {"__long__", long_slot, FALSE, 0},
        {"__float__", float_slot, FALSE, 0},
        {"__len__", len_slot, TRUE, 0},
        {"__contains__", contains_slot, TRUE, 1},
        {"__add__", add_slot, FALSE, 1},
        {"__sub__", sub_slot, FALSE, 1},
        {"__mul__", mul_slot, FALSE, 1},
        {"__div__", div_slot, FALSE, 1},
        {"__mod__", mod_slot, FALSE, 1},
        {"__floordiv__", floordiv_slot, TRUE, 1},
        {"__truediv__", truediv_slot, FALSE, 1},
        {"__and__", and_slot, FALSE, 1},
        {"__or__", or_slot, FALSE, 1},
        {"__xor__", xor_slot, FALSE, 1},
        {"__lshift__", lshift_slot, FALSE, 1},
        {"__rshift__", rshift_slot, FALSE, 1},
        {"__iadd__", iadd_slot, FALSE, 1},
        {"__isub__", isub_slot, FALSE, 1},
        {"__imul__", imul_slot, FALSE, 1},
        {"__idiv__", idiv_slot, FALSE, 1},
        {"__imod__", imod_slot, FALSE, 1},
        {"__ifloordiv__", ifloordiv_slot, TRUE, 1},
        {"__itruediv__", itruediv_slot, FALSE, 1},
        {"__iand__", iand_slot, FALSE, 1},
        {"__ior__", ior_slot, FALSE, 1},
        {"__ixor__", ixor_slot, FALSE, 1},
        {"__ilshift__", ilshift_slot, FALSE, 1},
        {"__irshift__", irshift_slot, FALSE, 1},
        {"__invert__", invert_slot, FALSE, 0},
        {"__call__", call_slot, FALSE, -1},
        {"__getitem__", getitem_slot, FALSE, 1},
        {"__setitem__", setitem_slot, TRUE, 2},
        {"__delitem__", delitem_slot, TRUE, 1},
        {"__lt__", lt_slot, FALSE, 1},
        {"__le__", le_slot, FALSE, 1},
        {"__eq__", eq_slot, FALSE, 1},
        {"__ne__", ne_slot, FALSE, 1},
        {"__gt__", gt_slot, FALSE, 1},
        {"__ge__", ge_slot, FALSE, 1},
        {"__cmp__", cmp_slot, FALSE, 1},
        {"__bool__", bool_slot, TRUE, 0},
        {"__nonzero__", bool_slot, TRUE, 0},
        {"__neg__", neg_slot, FALSE, 0},
        {"__pos__", pos_slot, FALSE, 0},
        {"__abs__", abs_slot, TRUE, 0},
        {"__repr__", repr_slot, TRUE, 0},
        {"__hash__", hash_slot, TRUE, 0},
        {"__index__", index_slot, TRUE, 0},
        {"__iter__", iter_slot, TRUE, 0},
        {"__next__", next_slot, TRUE, 0},
        {"__setattr__", setattr_slot, TRUE, 2},
        {"__delattr__", delattr_slot, TRUE, 1},
        {"__matmul__", matmul_slot, FALSE, 1},
        {"__imatmul__", imatmul_slot, FALSE, 1},
        {"__await__", await_slot, TRUE, 0},
        {"__aiter__", aiter_slot, TRUE, 0},
        {"__anext__", anext_slot, TRUE, 0},
        {NULL, no_slot, FALSE, 0}
    };

    memberDef *md, **flist;
    struct slot_map *sm;
    slotType st;

    /* Get the slot type. */
    st = no_slot;

    for (sm = slot_table; sm->name != NULL; ++sm)
        if (strcmp(sm->name, pname) == 0)
        {
            if (sm->needs_hwcode && !hwcode)
                yyerror("This Python slot requires %MethodCode");

            if (sm->nrargs >= 0)
            {
                if (mt_scope == NULL && c_scope == NULL)
                {
                    /* Global operators need one extra argument. */
                    if (sm -> nrargs + 1 != nrargs)
                        yyerror("Incorrect number of arguments to global operator");
                }
                else if (sm->nrargs != nrargs)
                    yyerror("Incorrect number of arguments to Python slot");
            }

            st = sm->type;

            break;
        }

    /* Check there is no name clash. */
    checkAttributes(pt, mod, c_scope, mt_scope, pname, TRUE);

    /* See if it already exists. */
    if (mt_scope != NULL)
        flist = &mt_scope->members;
    else if (c_scope != NULL)
        flist = &c_scope->members;
    else
        flist = &mod->othfuncs;

    /* __delattr__ is implemented as __setattr__. */
    if (st == delattr_slot)
    {
        if (inMainModule())
            setIsUsedName(cacheName(pt, pname));

        st = setattr_slot;
        pname = "__setattr__";
    }

    for (md = *flist; md != NULL; md = md->next)
        if (strcmp(md->pyname->text, pname) == 0 && md->module == mod)
            break;

    if (md == NULL)
    {
        /* Create a new one. */
        md = sipMalloc(sizeof (memberDef));

        md->pyname = cacheName(pt, pname);
        md->memberflags = 0;
        md->slot = st;
        md->module = mod;
        md->ns_scope = ns_scope;
        md->next = *flist;

        *flist = md;

        if (inMainModule())
            setIsUsedName(md->pyname);

        if (no_arg_parser)
            setNoArgParser(md);
    }
    else if (noArgParser(md))
        yyerror("Another overload has already been defined that is annotated as /NoArgParser/");

    /* Global operators are a subset. */
    if (mt_scope == NULL && c_scope == NULL && st != no_slot && st != neg_slot && st != pos_slot && !isNumberSlot(md) && !isInplaceNumberSlot(md) && !isRichCompareSlot(md))
        yyerror("Global operators must be either numeric or comparison operators");

    return md;
}


/*
 * Search a set of flags for a particular one.
 */
static optFlag *findOptFlag(optFlags *flgs, const char *name)
{
    int f;

    for (f = 0; f < flgs->nrFlags; ++f)
    {
        optFlag *of = &flgs->flags[f];

        if (strcmp(of->fname, name) == 0)
            return of;
    }

    return NULL;
}


/*
 * Search a set of flags for a particular one and check its type.
 */
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft)
{
    optFlag *of = findOptFlag(flgs, name);

    if (of != NULL)
    {
        /* An optional name can look like a boolean or a name. */
        if (ft == opt_name_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_name_flag;
                of->fvalue.sval = NULL;
            }
            else if (of->ftype == name_flag)
            {
                of->ftype = opt_name_flag;
            }
        }

        /* An optional integer can look like a boolean or an integer. */
        if (ft == opt_integer_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_integer_flag;
                of->fvalue.ival = -1;
            }
            else if (of->ftype == integer_flag)
            {
                of->ftype = opt_integer_flag;
            }
        }

        if (ft != of->ftype)
            yyerror("Annotation has a value of the wrong type");
    }

    return of;
}


/*
 * A name is going to be used as a Python attribute name within a Python scope
 * (ie. a Python dictionary), so check against what we already know is going in
 * the same scope in case there is a clash.
 */
static void checkAttributes(sipSpec *pt, moduleDef *mod, classDef *py_c_scope,
        mappedTypeDef *py_mt_scope, const char *attr, int isfunc)
{
    enumDef *ed;
    varDef *vd;
    classDef *cd;

    /* We don't do any check for a non-strict parse. */
    if (!strictParse)
        return;

    /* Check the enums. */
    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        if (ed->pyname == NULL)
            continue;

        if (py_c_scope != NULL)
        {
            if (ed->ecd != py_c_scope)
                continue;
        }
        else if (py_mt_scope != NULL)
        {
            if (ed->emtd != py_mt_scope)
                continue;
        }
        else if (ed->ecd != NULL || ed->emtd != NULL)
        {
            continue;
        }

        if (strcmp(ed->pyname->text, attr) == 0)
            yyerror("There is already an enum in scope with the same Python name");

        if (!isScopedEnum(ed))
        {
            enumMemberDef *emd;

            for (emd = ed->members; emd != NULL; emd = emd->next)
                if (strcmp(emd->pyname->text, attr) == 0)
                    yyerror("There is already an enum member in scope with the same Python name");
        }
    }

    /*
     * Only check the members if this attribute isn't a member because we can
     * handle members with the same name in the same scope.
     */
    if (!isfunc)
    {
        memberDef *md, *membs;
        overDef *overs;

        if (py_mt_scope != NULL)
        {
            membs = py_mt_scope->members;
            overs = py_mt_scope->overs;
        }
        else if (py_c_scope != NULL)
        {
            membs = py_c_scope->members;
            overs = py_c_scope->overs;
        }
        else
        {
            membs = mod->othfuncs;
            overs = mod->overs;
        }

        for (md = membs; md != NULL; md = md->next)
        {
            overDef *od;

            if (strcmp(md->pyname->text, attr) != 0)
                continue;

            /* Check for a conflict with all overloads. */
            for (od = overs; od != NULL; od = od->next)
            {
                if (od->common != md)
                    continue;

                yyerror("There is already a function in scope with the same Python name");
            }
        }
    }

    /* If the scope was a mapped type then that's all we have to check. */
    if (py_mt_scope != NULL)
        return;

    /* Check the variables. */
    for (vd = pt->vars; vd != NULL; vd = vd->next)
    {
        if (vd->ecd != py_c_scope)
            continue;

        if (strcmp(vd->pyname->text,attr) == 0)
            yyerror("There is already a variable in scope with the same Python name");
    }

    /* Check the classes. */
    for (cd = pt->classes; cd != NULL; cd = cd->next)
    {
        if (cd->ecd != py_c_scope || cd->pyname == NULL)
            continue;

        if (strcmp(cd->pyname->text, attr) == 0 && !isExternal(cd))
            yyerror("There is already a class or namespace in scope with the same Python name");
    }

    /* Check the exceptions. */
    if (py_c_scope == NULL)
    {
        exceptionDef *xd;

        for (xd = pt->exceptions; xd != NULL; xd = xd->next)
            if (xd->pyname != NULL && strcmp(xd->pyname, attr) == 0)
                yyerror("There is already an exception with the same Python name");
    }

    /* Check the properties. */
    if (py_c_scope != NULL)
    {
        propertyDef *pd;

        for (pd = py_c_scope->properties; pd != NULL; pd = pd->next)
            if (strcmp(pd->name->text, attr) == 0)
                yyerror("There is already a property with the same name");
    }
}


/*
 * Append a code block to a list of them.
 */
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb)
{
    codeBlockList *cbl;

    /* Handle the trivial case. */
    if (cb == NULL)
        return;

    /* Find the end of the list. */
    while (*headp != NULL)
    {
        /* Ignore if the block is already in the list. */
        if ((*headp)->block == cb)
            return;

        headp = &(*headp)->next;
    }

    cbl = sipMalloc(sizeof (codeBlockList));
    cbl->block = cb;

    *headp = cbl;
}


/*
 * Append a code block list to an existing list.
 */
void appendCodeBlockList(codeBlockList **headp, codeBlockList *cbl)
{
    while (cbl != NULL)
    {
        appendCodeBlock(headp, cbl->block);
        cbl = cbl->next;
    }
}


/*
 * Handle the end of a fully parsed a file.
 */
static void handleEOF()
{
    /*
     * Check that the number of nested if's is the same as when we started
     * the file.
     */

    if (stackPtr > currentContext.ifdepth)
        fatal("Too many %%If statements in %s\n", previousFile);

    if (stackPtr < currentContext.ifdepth)
        fatal("Too many %%End statements in %s\n", previousFile);
}


/*
 * Handle the end of a fully parsed a module.
 */
static void handleEOM()
{
    moduleDef *from;

    /* Check it has been named. */
    if (currentModule->name == NULL)
        fatal("No %%Module has been specified for module defined in %s\n",
                previousFile);

    from = currentContext.prevmod;

    if (from != NULL)
    {
        if (from->encoding == no_type)
            from->encoding = currentModule->encoding;

        if (isCallSuperInitUndefined(from))
        {
            if (isCallSuperInitYes(currentModule))
                setCallSuperInitYes(from);
            else
                setCallSuperInitNo(from);
        }
    }

    /* The previous module is now current. */
    currentModule = from;
}


/*
 * Find an existing qualifier.
 */
static qualDef *findQualifier(const char *name)
{
    moduleDef *mod;

    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
    {
        qualDef *qd;

        for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
            if (strcmp(qd->name, name) == 0)
                return qd;
    }

    /* Qualifiers corresponding to the SIP version are created on the fly. */
    if (name[0] == 'S' && name[1] == 'I' && name[2] == 'P' && name[3] == '_')
    {
        const char *cp = &name[3];
        int major, minor, patch;

        cp = getInt(cp, &major);
        cp = getInt(cp, &minor);
        cp = getInt(cp, &patch);

        if (*cp != '\0')
            yyerror("Unexpected character after SIP version number");

        return allocQualifier(currentModule, -1,
                (major << 16) | (minor << 8) | patch, TRUE, name,
                time_qualifier);
    }

    return NULL;
}


/*
 * Get an integer from string.
 */
static const char *getInt(const char *cp, int *ip)
{
    /* Handle the default value. */
    *ip = 0;

    if (*cp == '\0')
        return cp;

    /* There must be a leading underscore. */
    if (*cp++ != '_')
        yyerror("An underscore must separate the parts of a SIP version number");

    while (isdigit(*cp))
    {
        *ip *= 10;
        *ip += *cp - '0';
        ++cp;
    }

    return cp;
}


/*
 * Find an existing API.
 */
apiVersionRangeDef *findAPI(sipSpec *pt, const char *name)
{
    moduleDef *mod;

    for (mod = pt->modules; mod != NULL; mod = mod->next)
    {
        apiVersionRangeDef *avd;

        for (avd = mod->api_versions; avd != NULL; avd = avd->next)
            if (strcmp(avd->api_name->text, name) == 0)
                return avd;
    }

    return NULL;
}


/*
 * Return a copy of a scoped name.
 */
scopedNameDef *copyScopedName(scopedNameDef *snd)
{
    scopedNameDef *head;

    head = NULL;

    while (snd != NULL)
    {
        appendScopedName(&head,text2scopePart(snd -> name));
        snd = snd -> next;
    }

    return head;
}


/*
 * Append a name to a list of scopes.
 */
void appendScopedName(scopedNameDef **headp,scopedNameDef *newsnd)
{
    while (*headp != NULL)
        headp = &(*headp) -> next;

    *headp = newsnd;
}


/*
 * Free a scoped name - but not the text itself.
 */
void freeScopedName(scopedNameDef *snd)
{
    while (snd != NULL)
    {
        scopedNameDef *next = snd -> next;

        free(snd);

        snd = next;
    }
}


/*
 * Convert a text string to a scope part structure.
 */
static scopedNameDef *text2scopePart(char *text)
{
    scopedNameDef *snd;

    snd = sipMalloc(sizeof (scopedNameDef));

    snd->name = text;
    snd->next = NULL;

    return snd;
}


/*
 * Convert a text string to a fully scoped name.
 */
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text)
{
    return scopeScopedName(scope, text2scopePart(text));
}


/*
 * Prepend any current scope to a scoped name.
 */
static scopedNameDef *scopeScopedName(ifaceFileDef *scope, scopedNameDef *name)
{
    scopedNameDef *snd;

    snd = (scope != NULL ? copyScopedName(scope->fqcname) : text2scopePart(""));

    appendScopedName(&snd, name);

    return snd;
}


/*
 * Return a pointer to the tail part of a scoped name.
 */
char *scopedNameTail(scopedNameDef *snd)
{
    if (snd == NULL)
        return NULL;

    while (snd->next != NULL)
        snd = snd->next;

    return snd->name;
}


/*
 * Push the given scope onto the scope stack.
 */
static void pushScope(classDef *scope)
{
    if (currentScopeIdx >= MAX_NESTED_SCOPE)
        fatal("Internal error: increase the value of MAX_NESTED_SCOPE\n");

    scopeStack[currentScopeIdx] = scope;
    sectFlagsStack[currentScopeIdx] = sectionFlags;

    ++currentScopeIdx;
}


/*
 * Pop the scope stack.
 */
static void popScope(void)
{
    if (currentScopeIdx > 0)
        sectionFlags = sectFlagsStack[--currentScopeIdx];
}


/*
 * Return non-zero if the current input should be parsed rather than be
 * skipped.
 */
static int notSkipping()
{
    return (stackPtr == 0 ? TRUE : skipStack[stackPtr - 1]);
}


/*
 * Return the value of an expression involving a time period.
 */
static int timePeriod(const char *lname, const char *uname)
{
    int line;
    qualDef *qd, *lower, *upper;
    moduleDef *mod;

    if (lname == NULL)
        lower = NULL;
    else if ((lower = findQualifier(lname)) == NULL || lower->qtype != time_qualifier)
        yyerror("Lower bound is not a time version");

    if (uname == NULL)
        upper = NULL;
    else if ((upper = findQualifier(uname)) == NULL || upper->qtype != time_qualifier)
        yyerror("Upper bound is not a time version");

    /* Sanity checks on the bounds. */
    if (lower == NULL && upper == NULL)
        yyerror("Lower and upper bounds cannot both be omitted");

    if (lower != NULL && upper != NULL)
    {
        if (lower->module != upper->module || lower->line != upper->line)
            yyerror("Lower and upper bounds are from different timelines");

        if (lower == upper)
            yyerror("Lower and upper bounds must be different");

        if (lower->order > upper->order)
            yyerror("Later version specified as lower bound");
    }

    /* Go through each slot in the relevant timeline. */
    if (lower != NULL)
    {
        mod = lower->module;
        line = lower->line;
    }
    else
    {
        mod = upper->module;
        line = upper->line;
    }

    /* Handle the SIP version number pseudo-timeline. */
    if (line < 0)
    {
        if (lower != NULL && SIP_VERSION < lower->order)
            return FALSE;

        if (upper != NULL && SIP_VERSION >= upper->order)
            return FALSE;

        return TRUE;
    }

    for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
    {
        if (qd->qtype != time_qualifier || qd->line != line)
            continue;

        if (selectedQualifier(neededQualifiers, qd))
        {
            if (lower != NULL && qd->order < lower->order)
                return FALSE;

            if (upper != NULL && qd->order >= upper->order)
                return FALSE;

            return TRUE;
        }
    }

    /*
     * If there is no upper bound then assume the expression is true unless
     * the lower bound is a backstop.
     */
    if (upper == NULL)
        return !isBackstop(lower);

    /*
     * If the upper limit corresponds to a backstop then assume the expression
     * is true.
     */
    return isBackstop(upper);
}


/*
 * See if a qualifier is a backstop.
 */
static int isBackstop(qualDef *qd)
{
    stringList *sl;

    for (sl = backstops; sl != NULL; sl = sl->next)
        if (strcmp(qd->name, sl->s) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Return the value of an expression involving a single platform or feature.
 */
static int platOrFeature(char *name, int optnot)
{
    int this;
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd->qtype == time_qualifier)
        yyerror("No such platform or feature");

    /* Assume this sub-expression is false. */

    this = FALSE;

    if (qd->qtype == feature_qualifier)
    {
        if (!excludedFeature(excludedQualifiers, qd))
            this = TRUE;
    }
    else
    {
        if (!strictParse)
        {
            if (optnot)
            {
                moduleDef *mod;

                /* Add every platform except the one we have. */
                for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
                {
                    qualDef *not_qd;

                    for (not_qd = mod->qualifiers; not_qd != NULL; not_qd = not_qd->next)
                        if (not_qd->qtype == platform_qualifier && strcmp(not_qd->name, qd->name) != 0)
                            addPlatform(not_qd);
                }
            }
            else
            {
                addPlatform(qd);
            }

            /*
             * If it is a non-strict parse then this is always TRUE, ie. we
             * never skip because of the platform.
             */
            return TRUE;
        }

        if (selectedQualifier(neededQualifiers, qd))
            this = TRUE;
    }

    if (optnot)
        this = !this;

    return this;
}


/*
 * Add a platform to the current list of platforms if it is not already there.
 */
static void addPlatform(qualDef *qd)
{
    platformDef *pd;

    for (pd = currentPlatforms; pd != NULL; pd = pd->next)
        if (pd->qualifier == qd)
            return;

    pd = sipMalloc(sizeof (platformDef));
    pd->qualifier = qd;
    pd->next = currentPlatforms;
    currentPlatforms = pd;
}


/*
 * Return TRUE if the given qualifier is excluded.
 */
int excludedFeature(stringList *xsl, qualDef *qd)
{
    while (xsl != NULL)
    {
        if (strcmp(qd->name, xsl->s) == 0)
            return TRUE;

        xsl = xsl->next;
    }

    return !qd->default_enabled;
}


/*
 * Return TRUE if the given qualifier is needed.
 */
int selectedQualifier(stringList *needed_qualifiers, qualDef *qd)
{
    stringList *sl;

    for (sl = needed_qualifiers; sl != NULL; sl = sl->next)
        if (strcmp(qd->name, sl->s) == 0)
            return qd->default_enabled;

    return FALSE;
}


/*
 * Return the current scope.  currentScope() is only valid if notSkipping()
 * returns non-zero.
 */
static classDef *currentScope(void)
{
    return (currentScopeIdx > 0 ? scopeStack[currentScopeIdx - 1] : NULL);
}


/*
 * Create a new qualifier.
 */
static void newQualifier(moduleDef *mod, int line, int order,
        int default_enabled, const char *name, qualType qt)
{
    /* Check it doesn't already exist. */
    if (findQualifier(name) != NULL)
        yyerror("Version is already defined");

    allocQualifier(mod, line, order, default_enabled, name, qt);
}


/*
 * Allocate a new qualifier.
 */
static qualDef *allocQualifier(moduleDef *mod, int line, int order,
        int default_enabled, const char *name, qualType qt)
{
    qualDef *qd;

    qd = sipMalloc(sizeof (qualDef));

    qd->name = name;
    qd->qtype = qt;
    qd->module = mod;
    qd->line = line;
    qd->order = order;
    qd->default_enabled = default_enabled;
    qd->next = mod->qualifiers;

    mod->qualifiers = qd;

    return qd;
}


/*
 * Create a new imported module.
 */
static void newImport(const char *filename)
{
    moduleDef *from, *mod;
    moduleListDef *mld;

    /* Create a new module if it has not already been defined. */
    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
        if (strcmp(mod->file, filename) == 0)
            break;

    from = currentModule;

    if (mod == NULL)
    {
        newModule(NULL, filename);
        mod = currentModule;
    }
    else if (from->encoding == no_type)
    {
        /* Import any defaults from the already parsed module. */
        from->encoding = mod->encoding;
    }

    /* Add the new import unless it has already been imported. */
    for (mld = from->imports; mld != NULL; mld = mld->next)
        if (mld->module == mod)
            return;

    mld = sipMalloc(sizeof (moduleListDef));
    mld->module = mod;
    mld->next = from->imports;

    from->imports = mld;
}


/*
 * Set up pointers to hook names.
 */
static void getHooks(optFlags *optflgs,char **pre,char **post)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs,"PreHook",name_flag)) != NULL)
        *pre = of -> fvalue.sval;
    else
        *pre = NULL;

    if ((of = getOptFlag(optflgs,"PostHook",name_flag)) != NULL)
        *post = of -> fvalue.sval;
    else
        *post = NULL;
}


/*
 * Get the /Transfer/ option flag.
 */
static int getTransfer(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Transfer", bool_flag) != NULL);
}


/*
 * Get the /ReleaseGIL/ option flag.
 */
static int getReleaseGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "ReleaseGIL", bool_flag) != NULL);
}


/*
 * Get the /HoldGIL/ option flag.
 */
static int getHoldGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "HoldGIL", bool_flag) != NULL);
}


/*
 * Get the /Deprecated/ option flag.
 */
static int getDeprecated(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Deprecated", bool_flag) != NULL);
}


/*
 * Get the /AllowNone/ option flag.
 */
static int getAllowNone(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "AllowNone", bool_flag) != NULL);
}


/*
 * Get the /DisallowNone/ option flag.
 */
static int getDisallowNone(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "DisallowNone", bool_flag) != NULL);
}


/*
 * Get the /VirtualErrorHandler/ option flag.
 */
static const char *getVirtErrorHandler(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "VirtualErrorHandler", name_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Get the /DocType/ option flag.
 */
static const char *getDocType(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "DocType", string_flag);

    if (of == NULL)
        return NULL;

    deprecated("/DocType/ is deprecated\n");

    return of->fvalue.sval;
}


/*
 * Get the /TypeHintValue/ option flag.
 */
static const char *getTypeHintValue(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "TypeHintValue", string_flag);

    if (of != NULL)
        return of->fvalue.sval;

    if ((of = getOptFlag(optflgs, "DocValue", string_flag)) != NULL)
    {
        deprecated("/DocValue/ is deprecated\n");

        return of->fvalue.sval;
    }

    return NULL;
}


/*
 * Get the /TypeHint/, /TypeHintIn/ and /TypeHintOut/ option flags.
 */
static void getTypeHints(optFlags *optflgs, typeHintDef **in,
        typeHintDef **out)
{
    optFlag *of;
    typeHintDef *thd;

    if ((of = getOptFlag(optflgs, "TypeHint", string_flag)) != NULL)
        thd = newTypeHint(of->fvalue.sval);
    else
        thd = NULL;

    if ((of = getOptFlag(optflgs, "TypeHintIn", string_flag)) != NULL)
    {
        if (thd != NULL)
            yywarning("/TypeHintIn/ overrides /TypeHint/");

        *in = newTypeHint(of->fvalue.sval);
    }
    else
    {
        *in = thd;
    }

    if ((of = getOptFlag(optflgs, "TypeHintOut", string_flag)) != NULL)
    {
        if (thd != NULL)
            yywarning("/TypeHintOut/ overrides /TypeHint/");

        *out = newTypeHint(of->fvalue.sval);
    }
    else
    {
        *out = thd;
    }
}


/*
 * Get the /NoTypeHint/ option flag.
 */
static int getNoTypeHint(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "NoTypeHint", bool_flag) != NULL);
}


/*
 * Return TRUE if the PyQt4 plugin was specified.
 */
int pluginPyQt4(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt4");
}


/*
 * Return TRUE if the PyQt5 plugin was specified.
 */
int pluginPyQt5(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt5");
}


/*
 * Return TRUE if a list of strings contains a given entry.
 */
static int stringFind(stringList *sl, const char *s)
{
    while (sl != NULL)
    {
        if (strcmp(sl->s, s) == 0)
            return TRUE;

        sl = sl->next;
    }

    return FALSE;
}


/*
 * Set the name of a module.
 */
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname)
{
    mod->fullname = cacheName(pt, fullname);

    if (inMainModule())
        setIsUsedName(mod->fullname);

    if ((mod->name = strrchr(fullname, '.')) != NULL)
        mod->name++;
    else
        mod->name = fullname;
}


/*
 * Define a new class and set its name.
 */
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of)
{
    classDef *cd;
    typeHintDef *in, *out;

    getTypeHints(of, &in, &out);

    cd = newClass(currentSpec, class_iface, getAPIRange(of),
            fullyQualifiedName(snd), getVirtErrorHandler(of), in, out,
            getTypeHintValue(of));
    cd->supers = supers;

    pushScope(cd);
}


/*
 * Return a fully qualified scoped name.
 */
static scopedNameDef *fullyQualifiedName(scopedNameDef *snd)
{
    classDef *scope = currentScope();

    return scopeScopedName((scope != NULL ? scope->iff : NULL), snd);
}


/*
 * Complete the definition of a class.
 */
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def)
{
    classDef *cd = currentScope();

    /* See if the class was defined or just declared. */
    if (has_def)
    {
        if (snd->next != NULL)
            yyerror("A scoped name cannot be given in a class/struct definition");

    }
    else if (cd->supers != NULL)
        yyerror("Class/struct has super-classes but no definition");
    else
        setIsOpaque(cd);

    finishClass(currentSpec, currentModule, cd, of);
    popScope();

    /*
     * Check that external classes have only been declared at the global scope.
     */
    if (isExternal(cd) && currentScope() != NULL)
        yyerror("External classes/structs can only be declared in the global scope");

    return cd;
}


/*
 * Add a variable to the list so that the list remains sorted.
 */
static void addVariable(sipSpec *pt, varDef *vd)
{
    varDef **at = &pt->vars;

    while (*at != NULL)
    {
        if (strcmp(vd->pyname->text, (*at)->pyname->text) < 0)
            break;

        at = &(*at)->next;
    }

    vd->next = *at;
    *at = vd;
}


/*
 * Update a type according to optional flags.
 */
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags)
{
    ad->doctype = getDocType(flags);
    getTypeHints(flags, &ad->typehint_in, &ad->typehint_out);

    if (getOptFlag(flags, "PyInt", bool_flag) != NULL)
    {
        if (ad->atype == string_type)
            ad->atype = byte_type;
        else if (ad->atype == sstring_type)
            ad->atype = sbyte_type;
        else if (ad->atype == ustring_type)
            ad->atype = ubyte_type;
    }

    if (ad->atype == string_type && !isArray(ad) && !isReference(ad))
    {
        optFlag *of;

        if ((of = getOptFlag(flags, "Encoding", string_flag)) == NULL)
        {
            if (mod->encoding != no_type)
                ad->atype = mod->encoding;
            else
                ad->atype = string_type;
        }
        else if ((ad->atype = convertEncoding(of->fvalue.sval)) == no_type)
            yyerror("The value of the /Encoding/ annotation must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
    }
}


/*
 * Return the keyword argument support converted from a string.
 */
static KwArgs convertKwArgs(const char *kwargs)
{
    if (strcmp(kwargs, "None") == 0)
        return NoKwArgs;

    if (strcmp(kwargs, "All") == 0)
        return AllKwArgs;

    if (strcmp(kwargs, "Optional") == 0)
        return OptionalKwArgs;

    yyerror("The style of keyword argument support must be one of \"All\", \"Optional\" or \"None\"");
}


/*
 * Return the Format for a string.
 */
static Format convertFormat(const char *format)
{
    if (strcmp(format, "raw") == 0)
        return raw;

    if (strcmp(format, "deindented") == 0)
        return deindented;

    yyerror("The docstring format must be either \"raw\" or \"deindented\"");
}


/*
 * Return the argument type for a string with the given encoding or no_type if
 * the encoding was invalid.
 */
static argType convertEncoding(const char *encoding)
{
    if (strcmp(encoding, "ASCII") == 0)
        return ascii_string_type;

    if (strcmp(encoding, "Latin-1") == 0)
        return latin1_string_type;

    if (strcmp(encoding, "UTF-8") == 0)
        return utf8_string_type;

    if (strcmp(encoding, "None") == 0)
        return string_type;

    return no_type;
}


/*
 * Get the /API/ option flag.
 */
static apiVersionRangeDef *getAPIRange(optFlags *optflgs)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs, "API", api_range_flag)) == NULL)
        return NULL;

    return of->fvalue.aval;
}


/*
 * Return the API range structure and version number corresponding to the
 * given API range.
 */
static apiVersionRangeDef *convertAPIRange(moduleDef *mod, nameDef *name,
        int from, int to)
{
    int index;
    apiVersionRangeDef *avd, **avdp;

    /* Handle the trivial case. */
    if (from == 0 && to == 0)
        return NULL;

    for (index = 0, avdp = &mod->api_ranges; (*avdp) != NULL; avdp = &(*avdp)->next, ++index)
    {
        avd = *avdp;

        if (avd->api_name == name && avd->from == from && avd->to == to)
            return avd;
    }

    /* The new one must be appended so that version numbers remain valid. */
    avd = sipMalloc(sizeof (apiVersionRangeDef));

    avd->api_name = name;
    avd->from = from;
    avd->to = to;
    avd->index = index;

    avd->next = NULL;
    *avdp = avd;

    return avd;
}


/*
 * Return the style of keyword argument support for a signature.
 */
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name)
{
    KwArgs kwargs;
    optFlag *ka_anno, *no_ka_anno;

    /* Get the default. */
    kwargs = mod->kwargs;

    /*
     * Get the possible annotations allowing /KeywordArgs/ to have different
     * types of values.
     */
    ka_anno = findOptFlag(optflgs, "KeywordArgs");
    no_ka_anno = getOptFlag(optflgs, "NoKeywordArgs", bool_flag);

    if (no_ka_anno != NULL)
    {
        if (ka_anno != NULL)
            yyerror("/KeywordArgs/ and /NoKeywordArgs/ cannot both be specified");

        deprecated("/NoKeywordArgs/ is deprecated, use /KeywordArgs=\"None\" instead");

        kwargs = NoKwArgs;
    }
    else if (ka_anno != NULL)
    {
        /* A string value is the non-deprecated type. */
        if (ka_anno->ftype == string_flag)
        {
            kwargs = convertKwArgs(ka_anno->fvalue.sval);
        }
        else
        {
            deprecated("/KeywordArgs/ is deprecated, use /KeywordArgs=\"All\" instead");

            /* Get it again to check the type. */
            ka_anno = getOptFlag(optflgs, "KeywordArgs", bool_flag);
        }
    }

    /* An ellipsis cannot be used with keyword arguments. */
    if (sd->nrArgs > 0 && sd->args[sd->nrArgs - 1].atype == ellipsis_type)
        kwargs = NoKwArgs;

    if (kwargs != NoKwArgs)
    {
        int a, is_name = FALSE;

        /*
         * Mark argument names as being used and check there is at least one.
         */
        for (a = 0; a < sd->nrArgs; ++a)
        {
            argDef *ad = &sd->args[a];

            if (kwargs == OptionalKwArgs && ad->defval == NULL)
                continue;

            if (ad->name != NULL)
            {
                if (need_name || inMainModule())
                    setIsUsedName(ad->name);

                is_name = TRUE;
            }
        }

        if (!is_name)
            kwargs = NoKwArgs;
    }

    return kwargs;
}


/*
 * Extract the version of a string value optionally associated with a
 * particular feature.
 */
static char *convertFeaturedString(char *fs)
{
    while (fs != NULL)
    {
        char *next, *value;

        /* Individual values are ';' separated. */
        if ((next = strchr(fs, ';')) != NULL)
            *next++ = '\0';

        /* Features and values are ':' separated. */
        if ((value = strchr(fs, ':')) == NULL)
        {
            /* This is an unconditional value so just return it. */
            return strip(fs);
        }

        *value++ = '\0';

        if (isEnabledFeature(strip(fs)))
            return strip(value);

        fs = next;
    }

    /* No value was enabled. */
    return NULL;
}


/*
 * Return the stripped version of a string.
 */
static char *strip(char *s)
{
    while (*s == ' ')
        ++s;

    if (*s != '\0')
    {
        char *cp = &s[strlen(s) - 1];

        while (*cp == ' ')
            *cp-- = '\0';
    }

    return s;
}


/*
 * Return TRUE if the given feature is enabled.
 */
static int isEnabledFeature(const char *name)
{
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd->qtype != feature_qualifier)
        yyerror("No such feature");

    return !excludedFeature(excludedQualifiers, qd);
}


/*
 * Add a property definition to a class.
 */
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        codeBlock *docstring)
{
    propertyDef *pd;

    checkAttributes(pt, mod, cd, NULL, name, FALSE);

    pd = sipMalloc(sizeof (propertyDef));

    pd->name = cacheName(pt, name);
    pd->get = get;
    pd->set = set;
    appendCodeBlock(&pd->docstring, docstring);
    pd->platforms = currentPlatforms;
    pd->next = cd->properties;

    cd->properties = pd;

    if (inMainModule())
        setIsUsedName(pd->name);
}


/*
 * Configure a module and return the (possibly new) current module.
 */
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int c_module, KwArgs kwargs,
        int use_arg_names, int use_limited_api, int call_super_init,
        int all_raise_py_exc, const char *def_error_handler,
        codeBlock *docstring)
{
    moduleDef *mod;

    /* Check the module hasn't already been defined. */
    for (mod = pt->modules; mod != NULL; mod = mod->next)
        if (mod->fullname != NULL && strcmp(mod->fullname->text, name) == 0)
            yyerror("Module is already defined");

    /*
     * If we are in a container module then create a component module and make
     * it current.
     */
    if (isContainer(module) || module->container != NULL)
    {
        mod = allocModule();

        mod->file = filename;
        mod->container = (isContainer(module) ? module : module->container);

        module = mod;
    }

    setModuleName(pt, module, name);
    module->kwargs = kwargs;
    module->virt_error_handler = def_error_handler;
    appendCodeBlock(&module->docstring, docstring);

    if (all_raise_py_exc)
        setAllRaisePyException(module);

    if (use_arg_names)
        setUseArgNames(module);

    if (use_limited_api)
        setUseLimitedAPI(module);

    if (call_super_init == 0)
        setCallSuperInitNo(module);
    else if (call_super_init > 0)
        setCallSuperInitYes(module);

    if (pt->genc < 0)
        pt->genc = c_module;
    else if (pt->genc != c_module)
        yyerror("Cannot mix C and C++ modules");

    return module;
}


/*
 * Add a Python naming rule to a module.
 */
static void addAutoPyName(moduleDef *mod, const char *remove_leading)
{
    autoPyNameDef *apnd, **apndp;

    for (apndp = &mod->autopyname; *apndp != NULL; apndp = &(*apndp)->next)
        ;

    apnd = sipMalloc(sizeof (autoPyNameDef));
    apnd->remove_leading = remove_leading;
    apnd->next = *apndp;

    *apndp = apnd;
}


/*
 * Check that no invalid or unknown annotations are given.
 */
static void checkAnnos(optFlags *annos, const char *valid[])
{
    if (parsingCSignature && annos->nrFlags != 0)
    {
        deprecated("Annotations should not be used in explicit C/C++ signatures");
    }
    else
    {
        int i;

        for (i = 0; i < annos->nrFlags; i++)
        {
            const char **name;

            for (name = valid; *name != NULL; ++name)
                if (strcmp(*name, annos->flags[i].fname) == 0)
                    break;

            if (*name == NULL)
                yywarning("Annotation is unknown");
        }
    }
}


/*
 * Check that no annotations were given.
 */
static void checkNoAnnos(optFlags *annos, const char *msg)
{
    if (annos->nrFlags != 0)
        deprecated(msg);
}


/*
 * Handle any /KeepReference/ annotation for a type.
 */
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs, "KeepReference", opt_integer_flag)) != NULL)
    {
        setKeepReference(ad);

        if ((ad->key = of->fvalue.ival) < -1)
            yyerror("/KeepReference/ key cannot be negative");

        /* If there was no explicit key then auto-allocate one. */
        if (ad->key == -1)
            ad->key = mod->next_key--;
    }
}


/*
 * Configure the mapped type annotations that are also valid with mapped type
 * templates.
 */
static void mappedTypeAnnos(mappedTypeDef *mtd, optFlags *optflgs)
{
    if (getOptFlag(optflgs, "NoRelease", bool_flag) != NULL)
        setNoRelease(mtd);

    if (getAllowNone(optflgs))
        setHandlesNone(mtd);

    mtd->doctype = getDocType(optflgs);
    getTypeHints(optflgs, &mtd->typehint_in, &mtd->typehint_out);
    mtd->typehint_value = getTypeHintValue(optflgs);
}


/*
 * Initialise an argument with the derefences of another, plus a new one.
 */
static void add_new_deref(argDef *new, argDef *orig, int isconst)
{
    if ((new->nrderefs = orig->nrderefs + 1) >= MAX_NR_DEREFS)
        yyerror("Internal error - increase the value of MAX_NR_DEREFS");

    memcpy(&new->derefs[0], &orig->derefs[0], sizeof (new->derefs));
    new->derefs[orig->nrderefs] = isconst;
}


/*
 * Add the dereferences from one type to another.
 */
static void add_derefs(argDef *dst, argDef *src)
{
    int i;

    for (i = 0; i < src->nrderefs; ++i)
    {
        if (dst->nrderefs >= MAX_NR_DEREFS - 1)
            fatal("Internal error - increase the value of MAX_NR_DEREFS\n");

        dst->derefs[dst->nrderefs++] = src->derefs[i];
    }
}


/*
 * Check if a word is a Python keyword (or has been at any time).
 */
int isPyKeyword(const char *word)
{
    static const char *kwds[] = {
        "False", "None", "True", "and", "as", "assert", "break", "class",
        "continue", "def", "del", "elif", "else", "except", "finally", "for",
        "from", "global", "if", "import", "in", "is", "lambda", "nonlocal",
        "not", "or", "pass", "raise", "return", "try", "while", "with'"
        "yield",
        /* Historical keywords. */
        "exec", "print",
        NULL
    };

    const char **kwd;

    for (kwd = kwds; *kwd != NULL; ++kwd)
        if (strcmp(*kwd, word) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Check there is nothing after an ellipsis.
 */
static void checkEllipsis(signatureDef *sd)
{
    int a;

    for (a = 0; a < sd->nrArgs; ++a)
        if (sd->args[a].atype == ellipsis_type && a < sd->nrArgs - 1)
            yyerror("An ellipsis must be at the end of the argument list if /NoArgParser/ is not specified");
}

