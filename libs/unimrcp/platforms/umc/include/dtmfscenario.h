/*
 * Copyright 2008-2010 Arsen Chaloyan
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * $Id: dtmfscenario.h 1474 2010-02-07 20:51:47Z achaloyan $
 */

#ifndef DTMF_SCENARIO_H
#define DTMF_SCENARIO_H

/**
 * @file dtmfscenario.h
 * @brief DTMF Recognition Scenario
 */ 

#include "umcscenario.h"

class DtmfScenario : public UmcScenario
{
public:
/* ============================ CREATORS =================================== */
	DtmfScenario();
	virtual ~DtmfScenario();

/* ============================ MANIPULATORS =============================== */
	virtual void Destroy();

	virtual UmcSession* CreateSession();

/* ============================ ACCESSORS ================================== */
	const char* GetContentType() const;
	const char* GetGrammar() const;
	const char* GetDigits() const;

/* ============================ INQUIRIES ================================== */

protected:
/* ============================ MANIPULATORS =============================== */
	virtual bool LoadElement(const apr_xml_elem* pElem, apr_pool_t* pool);

	bool LoadRecognize(const apr_xml_elem* pElem, apr_pool_t* pool);

/* ============================ DATA ======================================= */
	const char* m_ContentType;
	const char* m_Grammar;
	const char* m_Digits;
};

/* ============================ INLINE METHODS ============================= */
inline const char* DtmfScenario::GetContentType() const
{
	return m_ContentType;
}

inline const char* DtmfScenario::GetGrammar() const
{
	return m_Grammar;
}

inline const char* DtmfScenario::GetDigits() const
{
	return m_Digits;
}


#endif /* DTMF_SCENARIO_H */
