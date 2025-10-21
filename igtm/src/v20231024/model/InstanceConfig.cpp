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

#include <tencentcloud/igtm/v20231024/model/InstanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

InstanceConfig::InstanceConfig() :
    m_instanceNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_globalTtlHasBeenSet(false),
    m_accessDomainHasBeenSet(false),
    m_accessSubDomainHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("GlobalTtl") && !value["GlobalTtl"].IsNull())
    {
        if (!value["GlobalTtl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.GlobalTtl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_globalTtl = value["GlobalTtl"].GetInt64();
        m_globalTtlHasBeenSet = true;
    }

    if (value.HasMember("AccessDomain") && !value["AccessDomain"].IsNull())
    {
        if (!value["AccessDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.AccessDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessDomain = string(value["AccessDomain"].GetString());
        m_accessDomainHasBeenSet = true;
    }

    if (value.HasMember("AccessSubDomain") && !value["AccessSubDomain"].IsNull())
    {
        if (!value["AccessSubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.AccessSubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessSubDomain = string(value["AccessSubDomain"].GetString());
        m_accessSubDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_globalTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalTtl, allocator);
    }

    if (m_accessDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessSubDomain.c_str(), allocator).Move(), allocator);
    }

}


string InstanceConfig::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceConfig::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceConfig::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceConfig::GetDomain() const
{
    return m_domain;
}

void InstanceConfig::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool InstanceConfig::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string InstanceConfig::GetAccessType() const
{
    return m_accessType;
}

void InstanceConfig::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool InstanceConfig::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string InstanceConfig::GetRemark() const
{
    return m_remark;
}

void InstanceConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InstanceConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t InstanceConfig::GetGlobalTtl() const
{
    return m_globalTtl;
}

void InstanceConfig::SetGlobalTtl(const int64_t& _globalTtl)
{
    m_globalTtl = _globalTtl;
    m_globalTtlHasBeenSet = true;
}

bool InstanceConfig::GlobalTtlHasBeenSet() const
{
    return m_globalTtlHasBeenSet;
}

string InstanceConfig::GetAccessDomain() const
{
    return m_accessDomain;
}

void InstanceConfig::SetAccessDomain(const string& _accessDomain)
{
    m_accessDomain = _accessDomain;
    m_accessDomainHasBeenSet = true;
}

bool InstanceConfig::AccessDomainHasBeenSet() const
{
    return m_accessDomainHasBeenSet;
}

string InstanceConfig::GetAccessSubDomain() const
{
    return m_accessSubDomain;
}

void InstanceConfig::SetAccessSubDomain(const string& _accessSubDomain)
{
    m_accessSubDomain = _accessSubDomain;
    m_accessSubDomainHasBeenSet = true;
}

bool InstanceConfig::AccessSubDomainHasBeenSet() const
{
    return m_accessSubDomainHasBeenSet;
}

