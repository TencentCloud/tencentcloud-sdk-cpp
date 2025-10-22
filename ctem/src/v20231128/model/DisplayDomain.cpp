/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ctem/v20231128/model/DisplayDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayDomain::DisplayDomain() :
    m_idHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_iCPHasBeenSet(false),
    m_registeredTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false)
{
}

CoreInternalOutcome DisplayDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayDomain.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ICP") && !value["ICP"].IsNull())
    {
        if (!value["ICP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayDomain.ICP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iCP = string(value["ICP"].GetString());
        m_iCPHasBeenSet = true;
    }

    if (value.HasMember("RegisteredTime") && !value["RegisteredTime"].IsNull())
    {
        if (!value["RegisteredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayDomain.RegisteredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registeredTime = string(value["RegisteredTime"].GetString());
        m_registeredTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayDomain.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Company") && !value["Company"].IsNull())
    {
        if (!value["Company"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayDomain.Company` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_company = string(value["Company"].GetString());
        m_companyHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayDomain.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_iCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ICP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iCP.c_str(), allocator).Move(), allocator);
    }

    if (m_registeredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registeredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_companyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Company";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_company.c_str(), allocator).Move(), allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t DisplayDomain::GetId() const
{
    return m_id;
}

void DisplayDomain::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayDomain::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DisplayDomain::GetDomain() const
{
    return m_domain;
}

void DisplayDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DisplayDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DisplayDomain::GetICP() const
{
    return m_iCP;
}

void DisplayDomain::SetICP(const string& _iCP)
{
    m_iCP = _iCP;
    m_iCPHasBeenSet = true;
}

bool DisplayDomain::ICPHasBeenSet() const
{
    return m_iCPHasBeenSet;
}

string DisplayDomain::GetRegisteredTime() const
{
    return m_registeredTime;
}

void DisplayDomain::SetRegisteredTime(const string& _registeredTime)
{
    m_registeredTime = _registeredTime;
    m_registeredTimeHasBeenSet = true;
}

bool DisplayDomain::RegisteredTimeHasBeenSet() const
{
    return m_registeredTimeHasBeenSet;
}

string DisplayDomain::GetExpiredTime() const
{
    return m_expiredTime;
}

void DisplayDomain::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool DisplayDomain::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string DisplayDomain::GetCompany() const
{
    return m_company;
}

void DisplayDomain::SetCompany(const string& _company)
{
    m_company = _company;
    m_companyHasBeenSet = true;
}

bool DisplayDomain::CompanyHasBeenSet() const
{
    return m_companyHasBeenSet;
}

DisplayToolCommon DisplayDomain::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayDomain::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayDomain::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

