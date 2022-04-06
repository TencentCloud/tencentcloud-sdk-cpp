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

#include <tencentcloud/bsca/v20210811/model/CVSSV2Info.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

CVSSV2Info::CVSSV2Info() :
    m_cVSSHasBeenSet(false),
    m_accessVectorHasBeenSet(false),
    m_accessComplexityHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_conImpactHasBeenSet(false),
    m_integrityImpactHasBeenSet(false),
    m_availabilityImpactHasBeenSet(false)
{
}

CoreInternalOutcome CVSSV2Info::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV2Info.CVSS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = value["CVSS"].GetDouble();
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("AccessVector") && !value["AccessVector"].IsNull())
    {
        if (!value["AccessVector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV2Info.AccessVector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessVector = string(value["AccessVector"].GetString());
        m_accessVectorHasBeenSet = true;
    }

    if (value.HasMember("AccessComplexity") && !value["AccessComplexity"].IsNull())
    {
        if (!value["AccessComplexity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV2Info.AccessComplexity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessComplexity = string(value["AccessComplexity"].GetString());
        m_accessComplexityHasBeenSet = true;
    }

    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV2Info.Authentication` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authentication = string(value["Authentication"].GetString());
        m_authenticationHasBeenSet = true;
    }

    if (value.HasMember("ConImpact") && !value["ConImpact"].IsNull())
    {
        if (!value["ConImpact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV2Info.ConImpact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conImpact = string(value["ConImpact"].GetString());
        m_conImpactHasBeenSet = true;
    }

    if (value.HasMember("IntegrityImpact") && !value["IntegrityImpact"].IsNull())
    {
        if (!value["IntegrityImpact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV2Info.IntegrityImpact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrityImpact = string(value["IntegrityImpact"].GetString());
        m_integrityImpactHasBeenSet = true;
    }

    if (value.HasMember("AvailabilityImpact") && !value["AvailabilityImpact"].IsNull())
    {
        if (!value["AvailabilityImpact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVSSV2Info.AvailabilityImpact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availabilityImpact = string(value["AvailabilityImpact"].GetString());
        m_availabilityImpactHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CVSSV2Info::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSS, allocator);
    }

    if (m_accessVectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessVector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessVector.c_str(), allocator).Move(), allocator);
    }

    if (m_accessComplexityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessComplexity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessComplexity.c_str(), allocator).Move(), allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authentication.c_str(), allocator).Move(), allocator);
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


double CVSSV2Info::GetCVSS() const
{
    return m_cVSS;
}

void CVSSV2Info::SetCVSS(const double& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool CVSSV2Info::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string CVSSV2Info::GetAccessVector() const
{
    return m_accessVector;
}

void CVSSV2Info::SetAccessVector(const string& _accessVector)
{
    m_accessVector = _accessVector;
    m_accessVectorHasBeenSet = true;
}

bool CVSSV2Info::AccessVectorHasBeenSet() const
{
    return m_accessVectorHasBeenSet;
}

string CVSSV2Info::GetAccessComplexity() const
{
    return m_accessComplexity;
}

void CVSSV2Info::SetAccessComplexity(const string& _accessComplexity)
{
    m_accessComplexity = _accessComplexity;
    m_accessComplexityHasBeenSet = true;
}

bool CVSSV2Info::AccessComplexityHasBeenSet() const
{
    return m_accessComplexityHasBeenSet;
}

string CVSSV2Info::GetAuthentication() const
{
    return m_authentication;
}

void CVSSV2Info::SetAuthentication(const string& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool CVSSV2Info::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

string CVSSV2Info::GetConImpact() const
{
    return m_conImpact;
}

void CVSSV2Info::SetConImpact(const string& _conImpact)
{
    m_conImpact = _conImpact;
    m_conImpactHasBeenSet = true;
}

bool CVSSV2Info::ConImpactHasBeenSet() const
{
    return m_conImpactHasBeenSet;
}

string CVSSV2Info::GetIntegrityImpact() const
{
    return m_integrityImpact;
}

void CVSSV2Info::SetIntegrityImpact(const string& _integrityImpact)
{
    m_integrityImpact = _integrityImpact;
    m_integrityImpactHasBeenSet = true;
}

bool CVSSV2Info::IntegrityImpactHasBeenSet() const
{
    return m_integrityImpactHasBeenSet;
}

string CVSSV2Info::GetAvailabilityImpact() const
{
    return m_availabilityImpact;
}

void CVSSV2Info::SetAvailabilityImpact(const string& _availabilityImpact)
{
    m_availabilityImpact = _availabilityImpact;
    m_availabilityImpactHasBeenSet = true;
}

bool CVSSV2Info::AvailabilityImpactHasBeenSet() const
{
    return m_availabilityImpactHasBeenSet;
}

