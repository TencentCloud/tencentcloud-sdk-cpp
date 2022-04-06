/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/bsca/v20210811/model/CVSSV3Info.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

CVSSV3Info::CVSSV3Info() :
    m_cVSSHasBeenSet(false),
    m_attackVectorHasBeenSet(false),
    m_attackComplexityHasBeenSet(false),
    m_privilegesRequiredHasBeenSet(false),
    m_userInteractionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_conImpactHasBeenSet(false),
    m_integrityImpactHasBeenSet(false),
    m_availabilityImpactHasBeenSet(false)
{
}

CoreInternalOutcome CVSSV3Info::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.CVSS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = value["CVSS"].GetDouble();
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("AttackVector") && !value["AttackVector"].IsNull())
    {
        if (!value["AttackVector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.AttackVector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackVector = string(value["AttackVector"].GetString());
        m_attackVectorHasBeenSet = true;
    }

    if (value.HasMember("AttackComplexity") && !value["AttackComplexity"].IsNull())
    {
        if (!value["AttackComplexity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.AttackComplexity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackComplexity = string(value["AttackComplexity"].GetString());
        m_attackComplexityHasBeenSet = true;
    }

    if (value.HasMember("PrivilegesRequired") && !value["PrivilegesRequired"].IsNull())
    {
        if (!value["PrivilegesRequired"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.PrivilegesRequired` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilegesRequired = string(value["PrivilegesRequired"].GetString());
        m_privilegesRequiredHasBeenSet = true;
    }

    if (value.HasMember("UserInteraction") && !value["UserInteraction"].IsNull())
    {
        if (!value["UserInteraction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.UserInteraction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userInteraction = string(value["UserInteraction"].GetString());
        m_userInteractionHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ConImpact") && !value["ConImpact"].IsNull())
    {
        if (!value["ConImpact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.ConImpact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conImpact = string(value["ConImpact"].GetString());
        m_conImpactHasBeenSet = true;
    }

    if (value.HasMember("IntegrityImpact") && !value["IntegrityImpact"].IsNull())
    {
        if (!value["IntegrityImpact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.IntegrityImpact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrityImpact = string(value["IntegrityImpact"].GetString());
        m_integrityImpactHasBeenSet = true;
    }

    if (value.HasMember("AvailabilityImpact") && !value["AvailabilityImpact"].IsNull())
    {
        if (!value["AvailabilityImpact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV3Info.AvailabilityImpact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availabilityImpact = string(value["AvailabilityImpact"].GetString());
        m_availabilityImpactHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CVSSV3Info::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSS, allocator);
    }

    if (m_attackVectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackVector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackVector.c_str(), allocator).Move(), allocator);
    }

    if (m_attackComplexityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackComplexity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackComplexity.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegesRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilegesRequired.c_str(), allocator).Move(), allocator);
    }

    if (m_userInteractionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInteraction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userInteraction.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_conImpactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConImpact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conImpact.c_str(), allocator).Move(), allocator);
    }

    if (m_integrityImpactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrityImpact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrityImpact.c_str(), allocator).Move(), allocator);
    }

    if (m_availabilityImpactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailabilityImpact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availabilityImpact.c_str(), allocator).Move(), allocator);
    }

}


double CVSSV3Info::GetCVSS() const
{
    return m_cVSS;
}

void CVSSV3Info::SetCVSS(const double& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool CVSSV3Info::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string CVSSV3Info::GetAttackVector() const
{
    return m_attackVector;
}

void CVSSV3Info::SetAttackVector(const string& _attackVector)
{
    m_attackVector = _attackVector;
    m_attackVectorHasBeenSet = true;
}

bool CVSSV3Info::AttackVectorHasBeenSet() const
{
    return m_attackVectorHasBeenSet;
}

string CVSSV3Info::GetAttackComplexity() const
{
    return m_attackComplexity;
}

void CVSSV3Info::SetAttackComplexity(const string& _attackComplexity)
{
    m_attackComplexity = _attackComplexity;
    m_attackComplexityHasBeenSet = true;
}

bool CVSSV3Info::AttackComplexityHasBeenSet() const
{
    return m_attackComplexityHasBeenSet;
}

string CVSSV3Info::GetPrivilegesRequired() const
{
    return m_privilegesRequired;
}

void CVSSV3Info::SetPrivilegesRequired(const string& _privilegesRequired)
{
    m_privilegesRequired = _privilegesRequired;
    m_privilegesRequiredHasBeenSet = true;
}

bool CVSSV3Info::PrivilegesRequiredHasBeenSet() const
{
    return m_privilegesRequiredHasBeenSet;
}

string CVSSV3Info::GetUserInteraction() const
{
    return m_userInteraction;
}

void CVSSV3Info::SetUserInteraction(const string& _userInteraction)
{
    m_userInteraction = _userInteraction;
    m_userInteractionHasBeenSet = true;
}

bool CVSSV3Info::UserInteractionHasBeenSet() const
{
    return m_userInteractionHasBeenSet;
}

string CVSSV3Info::GetScope() const
{
    return m_scope;
}

void CVSSV3Info::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CVSSV3Info::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string CVSSV3Info::GetConImpact() const
{
    return m_conImpact;
}

void CVSSV3Info::SetConImpact(const string& _conImpact)
{
    m_conImpact = _conImpact;
    m_conImpactHasBeenSet = true;
}

bool CVSSV3Info::ConImpactHasBeenSet() const
{
    return m_conImpactHasBeenSet;
}

string CVSSV3Info::GetIntegrityImpact() const
{
    return m_integrityImpact;
}

void CVSSV3Info::SetIntegrityImpact(const string& _integrityImpact)
{
    m_integrityImpact = _integrityImpact;
    m_integrityImpactHasBeenSet = true;
}

bool CVSSV3Info::IntegrityImpactHasBeenSet() const
{
    return m_integrityImpactHasBeenSet;
}

string CVSSV3Info::GetAvailabilityImpact() const
{
    return m_availabilityImpact;
}

void CVSSV3Info::SetAvailabilityImpact(const string& _availabilityImpact)
{
    m_availabilityImpact = _availabilityImpact;
    m_availabilityImpactHasBeenSet = true;
}

bool CVSSV3Info::AvailabilityImpactHasBeenSet() const
{
    return m_availabilityImpactHasBeenSet;
}

