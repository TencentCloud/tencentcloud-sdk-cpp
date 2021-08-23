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

#include <tencentcloud/ecm/v20190719/model/SecurityGroupLimitSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

SecurityGroupLimitSet::SecurityGroupLimitSet() :
    m_securityGroupLimitHasBeenSet(false),
    m_securityGroupPolicyLimitHasBeenSet(false),
    m_referedSecurityGroupLimitHasBeenSet(false),
    m_securityGroupInstanceLimitHasBeenSet(false),
    m_instanceSecurityGroupLimitHasBeenSet(false),
    m_securityGroupModuleLimitHasBeenSet(false),
    m_moduleSecurityGroupLimitHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupLimitSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityGroupLimit") && !value["SecurityGroupLimit"].IsNull())
    {
        if (!value["SecurityGroupLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupLimitSet.SecurityGroupLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupLimit = value["SecurityGroupLimit"].GetInt64();
        m_securityGroupLimitHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupPolicyLimit") && !value["SecurityGroupPolicyLimit"].IsNull())
    {
        if (!value["SecurityGroupPolicyLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupLimitSet.SecurityGroupPolicyLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupPolicyLimit = value["SecurityGroupPolicyLimit"].GetInt64();
        m_securityGroupPolicyLimitHasBeenSet = true;
    }

    if (value.HasMember("ReferedSecurityGroupLimit") && !value["ReferedSecurityGroupLimit"].IsNull())
    {
        if (!value["ReferedSecurityGroupLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupLimitSet.ReferedSecurityGroupLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_referedSecurityGroupLimit = value["ReferedSecurityGroupLimit"].GetInt64();
        m_referedSecurityGroupLimitHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupInstanceLimit") && !value["SecurityGroupInstanceLimit"].IsNull())
    {
        if (!value["SecurityGroupInstanceLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupLimitSet.SecurityGroupInstanceLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupInstanceLimit = value["SecurityGroupInstanceLimit"].GetInt64();
        m_securityGroupInstanceLimitHasBeenSet = true;
    }

    if (value.HasMember("InstanceSecurityGroupLimit") && !value["InstanceSecurityGroupLimit"].IsNull())
    {
        if (!value["InstanceSecurityGroupLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupLimitSet.InstanceSecurityGroupLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceSecurityGroupLimit = value["InstanceSecurityGroupLimit"].GetInt64();
        m_instanceSecurityGroupLimitHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupModuleLimit") && !value["SecurityGroupModuleLimit"].IsNull())
    {
        if (!value["SecurityGroupModuleLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupLimitSet.SecurityGroupModuleLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupModuleLimit = value["SecurityGroupModuleLimit"].GetInt64();
        m_securityGroupModuleLimitHasBeenSet = true;
    }

    if (value.HasMember("ModuleSecurityGroupLimit") && !value["ModuleSecurityGroupLimit"].IsNull())
    {
        if (!value["ModuleSecurityGroupLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupLimitSet.ModuleSecurityGroupLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_moduleSecurityGroupLimit = value["ModuleSecurityGroupLimit"].GetInt64();
        m_moduleSecurityGroupLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupLimitSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityGroupLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupLimit, allocator);
    }

    if (m_securityGroupPolicyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupPolicyLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupPolicyLimit, allocator);
    }

    if (m_referedSecurityGroupLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferedSecurityGroupLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referedSecurityGroupLimit, allocator);
    }

    if (m_securityGroupInstanceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupInstanceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupInstanceLimit, allocator);
    }

    if (m_instanceSecurityGroupLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSecurityGroupLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceSecurityGroupLimit, allocator);
    }

    if (m_securityGroupModuleLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupModuleLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityGroupModuleLimit, allocator);
    }

    if (m_moduleSecurityGroupLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleSecurityGroupLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moduleSecurityGroupLimit, allocator);
    }

}


int64_t SecurityGroupLimitSet::GetSecurityGroupLimit() const
{
    return m_securityGroupLimit;
}

void SecurityGroupLimitSet::SetSecurityGroupLimit(const int64_t& _securityGroupLimit)
{
    m_securityGroupLimit = _securityGroupLimit;
    m_securityGroupLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::SecurityGroupLimitHasBeenSet() const
{
    return m_securityGroupLimitHasBeenSet;
}

int64_t SecurityGroupLimitSet::GetSecurityGroupPolicyLimit() const
{
    return m_securityGroupPolicyLimit;
}

void SecurityGroupLimitSet::SetSecurityGroupPolicyLimit(const int64_t& _securityGroupPolicyLimit)
{
    m_securityGroupPolicyLimit = _securityGroupPolicyLimit;
    m_securityGroupPolicyLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::SecurityGroupPolicyLimitHasBeenSet() const
{
    return m_securityGroupPolicyLimitHasBeenSet;
}

int64_t SecurityGroupLimitSet::GetReferedSecurityGroupLimit() const
{
    return m_referedSecurityGroupLimit;
}

void SecurityGroupLimitSet::SetReferedSecurityGroupLimit(const int64_t& _referedSecurityGroupLimit)
{
    m_referedSecurityGroupLimit = _referedSecurityGroupLimit;
    m_referedSecurityGroupLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::ReferedSecurityGroupLimitHasBeenSet() const
{
    return m_referedSecurityGroupLimitHasBeenSet;
}

int64_t SecurityGroupLimitSet::GetSecurityGroupInstanceLimit() const
{
    return m_securityGroupInstanceLimit;
}

void SecurityGroupLimitSet::SetSecurityGroupInstanceLimit(const int64_t& _securityGroupInstanceLimit)
{
    m_securityGroupInstanceLimit = _securityGroupInstanceLimit;
    m_securityGroupInstanceLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::SecurityGroupInstanceLimitHasBeenSet() const
{
    return m_securityGroupInstanceLimitHasBeenSet;
}

int64_t SecurityGroupLimitSet::GetInstanceSecurityGroupLimit() const
{
    return m_instanceSecurityGroupLimit;
}

void SecurityGroupLimitSet::SetInstanceSecurityGroupLimit(const int64_t& _instanceSecurityGroupLimit)
{
    m_instanceSecurityGroupLimit = _instanceSecurityGroupLimit;
    m_instanceSecurityGroupLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::InstanceSecurityGroupLimitHasBeenSet() const
{
    return m_instanceSecurityGroupLimitHasBeenSet;
}

int64_t SecurityGroupLimitSet::GetSecurityGroupModuleLimit() const
{
    return m_securityGroupModuleLimit;
}

void SecurityGroupLimitSet::SetSecurityGroupModuleLimit(const int64_t& _securityGroupModuleLimit)
{
    m_securityGroupModuleLimit = _securityGroupModuleLimit;
    m_securityGroupModuleLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::SecurityGroupModuleLimitHasBeenSet() const
{
    return m_securityGroupModuleLimitHasBeenSet;
}

int64_t SecurityGroupLimitSet::GetModuleSecurityGroupLimit() const
{
    return m_moduleSecurityGroupLimit;
}

void SecurityGroupLimitSet::SetModuleSecurityGroupLimit(const int64_t& _moduleSecurityGroupLimit)
{
    m_moduleSecurityGroupLimit = _moduleSecurityGroupLimit;
    m_moduleSecurityGroupLimitHasBeenSet = true;
}

bool SecurityGroupLimitSet::ModuleSecurityGroupLimitHasBeenSet() const
{
    return m_moduleSecurityGroupLimitHasBeenSet;
}

