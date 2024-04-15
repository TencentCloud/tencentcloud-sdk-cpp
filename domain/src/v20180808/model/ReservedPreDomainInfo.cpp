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

#include <tencentcloud/domain/v20180808/model/ReservedPreDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ReservedPreDomainInfo::ReservedPreDomainInfo() :
    m_domainHasBeenSet(false),
    m_reservedStatusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_changeOwnerTimeHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_businessIdHasBeenSet(false)
{
}

CoreInternalOutcome ReservedPreDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ReservedStatus") && !value["ReservedStatus"].IsNull())
    {
        if (!value["ReservedStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.ReservedStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedStatus = value["ReservedStatus"].GetInt64();
        m_reservedStatusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("ChangeOwnerTime") && !value["ChangeOwnerTime"].IsNull())
    {
        if (!value["ChangeOwnerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.ChangeOwnerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_changeOwnerTime = string(value["ChangeOwnerTime"].GetString());
        m_changeOwnerTimeHasBeenSet = true;
    }

    if (value.HasMember("RegTime") && !value["RegTime"].IsNull())
    {
        if (!value["RegTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.RegTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regTime = string(value["RegTime"].GetString());
        m_regTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedPreDomainInfo.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedPreDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedStatus, allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_changeOwnerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeOwnerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_changeOwnerTime.c_str(), allocator).Move(), allocator);
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

}


string ReservedPreDomainInfo::GetDomain() const
{
    return m_domain;
}

void ReservedPreDomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ReservedPreDomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t ReservedPreDomainInfo::GetReservedStatus() const
{
    return m_reservedStatus;
}

void ReservedPreDomainInfo::SetReservedStatus(const int64_t& _reservedStatus)
{
    m_reservedStatus = _reservedStatus;
    m_reservedStatusHasBeenSet = true;
}

bool ReservedPreDomainInfo::ReservedStatusHasBeenSet() const
{
    return m_reservedStatusHasBeenSet;
}

string ReservedPreDomainInfo::GetFailReason() const
{
    return m_failReason;
}

void ReservedPreDomainInfo::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool ReservedPreDomainInfo::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string ReservedPreDomainInfo::GetChangeOwnerTime() const
{
    return m_changeOwnerTime;
}

void ReservedPreDomainInfo::SetChangeOwnerTime(const string& _changeOwnerTime)
{
    m_changeOwnerTime = _changeOwnerTime;
    m_changeOwnerTimeHasBeenSet = true;
}

bool ReservedPreDomainInfo::ChangeOwnerTimeHasBeenSet() const
{
    return m_changeOwnerTimeHasBeenSet;
}

string ReservedPreDomainInfo::GetRegTime() const
{
    return m_regTime;
}

void ReservedPreDomainInfo::SetRegTime(const string& _regTime)
{
    m_regTime = _regTime;
    m_regTimeHasBeenSet = true;
}

bool ReservedPreDomainInfo::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string ReservedPreDomainInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ReservedPreDomainInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ReservedPreDomainInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ReservedPreDomainInfo::GetResourceId() const
{
    return m_resourceId;
}

void ReservedPreDomainInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ReservedPreDomainInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ReservedPreDomainInfo::GetBusinessId() const
{
    return m_businessId;
}

void ReservedPreDomainInfo::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool ReservedPreDomainInfo::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

