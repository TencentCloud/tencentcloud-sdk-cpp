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

#include <tencentcloud/domain/v20180808/model/ReservedDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ReservedDomainInfo::ReservedDomainInfo() :
    m_domainHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_renewEndTimeHasBeenSet(false),
    m_restoreEndTimeHasBeenSet(false),
    m_reservedEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReservedDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedDomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("RegTime") && !value["RegTime"].IsNull())
    {
        if (!value["RegTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedDomainInfo.RegTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regTime = string(value["RegTime"].GetString());
        m_regTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedDomainInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("RenewEndTime") && !value["RenewEndTime"].IsNull())
    {
        if (!value["RenewEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedDomainInfo.RenewEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewEndTime = string(value["RenewEndTime"].GetString());
        m_renewEndTimeHasBeenSet = true;
    }

    if (value.HasMember("RestoreEndTime") && !value["RestoreEndTime"].IsNull())
    {
        if (!value["RestoreEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedDomainInfo.RestoreEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restoreEndTime = string(value["RestoreEndTime"].GetString());
        m_restoreEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ReservedEndTime") && !value["ReservedEndTime"].IsNull())
    {
        if (!value["ReservedEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedDomainInfo.ReservedEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedEndTime = string(value["ReservedEndTime"].GetString());
        m_reservedEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_regTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_renewEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restoreEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedEndTime.c_str(), allocator).Move(), allocator);
    }

}


string ReservedDomainInfo::GetDomain() const
{
    return m_domain;
}

void ReservedDomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ReservedDomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ReservedDomainInfo::GetRegTime() const
{
    return m_regTime;
}

void ReservedDomainInfo::SetRegTime(const string& _regTime)
{
    m_regTime = _regTime;
    m_regTimeHasBeenSet = true;
}

bool ReservedDomainInfo::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string ReservedDomainInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ReservedDomainInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ReservedDomainInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ReservedDomainInfo::GetRenewEndTime() const
{
    return m_renewEndTime;
}

void ReservedDomainInfo::SetRenewEndTime(const string& _renewEndTime)
{
    m_renewEndTime = _renewEndTime;
    m_renewEndTimeHasBeenSet = true;
}

bool ReservedDomainInfo::RenewEndTimeHasBeenSet() const
{
    return m_renewEndTimeHasBeenSet;
}

string ReservedDomainInfo::GetRestoreEndTime() const
{
    return m_restoreEndTime;
}

void ReservedDomainInfo::SetRestoreEndTime(const string& _restoreEndTime)
{
    m_restoreEndTime = _restoreEndTime;
    m_restoreEndTimeHasBeenSet = true;
}

bool ReservedDomainInfo::RestoreEndTimeHasBeenSet() const
{
    return m_restoreEndTimeHasBeenSet;
}

string ReservedDomainInfo::GetReservedEndTime() const
{
    return m_reservedEndTime;
}

void ReservedDomainInfo::SetReservedEndTime(const string& _reservedEndTime)
{
    m_reservedEndTime = _reservedEndTime;
    m_reservedEndTimeHasBeenSet = true;
}

bool ReservedDomainInfo::ReservedEndTimeHasBeenSet() const
{
    return m_reservedEndTimeHasBeenSet;
}

