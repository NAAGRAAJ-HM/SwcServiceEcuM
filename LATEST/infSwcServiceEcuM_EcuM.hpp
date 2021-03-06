#pragma once
/******************************************************************************/
/* File   : infSwcServiceEcuM_EcuM.hpp                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_SwcServiceEcuM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infSwcServiceEcuM_EcuM{
   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      virtual FUNC(void, SWCSERVICEECUM_CODE) StartPreOs  (void) = 0;
      virtual FUNC(void, SWCSERVICEECUM_CODE) StartPostOs (void) = 0;
      virtual FUNC(void, SWCSERVICEECUM_CODE) OffPreOs    (void) = 0;
      virtual FUNC(void, SWCSERVICEECUM_CODE) OffPostOs   (void) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

