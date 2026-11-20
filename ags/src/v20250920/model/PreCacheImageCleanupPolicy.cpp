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

#include <tencentcloud/ags/v20250920/model/PreCacheImageCleanupPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

PreCacheImageCleanupPolicy::PreCacheImageCleanupPolicy() :
    m_cleanupPolicyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_registryHostHasBeenSet(false),
    m_repoPatternHasBeenSet(false),
    m_idleTTLHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome PreCacheImageCleanupPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CleanupPolicyId") && !value["CleanupPolicyId"].IsNull())
    {
        if (!value["CleanupPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.CleanupPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cleanupPolicyId = string(value["CleanupPolicyId"].GetString());
        m_cleanupPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("RegistryHost") && !value["RegistryHost"].IsNull())
    {
        if (!value["RegistryHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.RegistryHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryHost = string(value["RegistryHost"].GetString());
        m_registryHostHasBeenSet = true;
    }

    if (value.HasMember("RepoPattern") && !value["RepoPattern"].IsNull())
    {
        if (!value["RepoPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.RepoPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoPattern = string(value["RepoPattern"].GetString());
        m_repoPatternHasBeenSet = true;
    }

    if (value.HasMember("IdleTTL") && !value["IdleTTL"].IsNull())
    {
        if (!value["IdleTTL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.IdleTTL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idleTTL = string(value["IdleTTL"].GetString());
        m_idleTTLHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreCacheImageCleanupPolicy.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreCacheImageCleanupPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cleanupPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanupPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cleanupPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_registryHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryHost.c_str(), allocator).Move(), allocator);
    }

    if (m_repoPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idleTTL.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string PreCacheImageCleanupPolicy::GetCleanupPolicyId() const
{
    return m_cleanupPolicyId;
}

void PreCacheImageCleanupPolicy::SetCleanupPolicyId(const string& _cleanupPolicyId)
{
    m_cleanupPolicyId = _cleanupPolicyId;
    m_cleanupPolicyIdHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::CleanupPolicyIdHasBeenSet() const
{
    return m_cleanupPolicyIdHasBeenSet;
}

string PreCacheImageCleanupPolicy::GetName() const
{
    return m_name;
}

void PreCacheImageCleanupPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool PreCacheImageCleanupPolicy::GetEnabled() const
{
    return m_enabled;
}

void PreCacheImageCleanupPolicy::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string PreCacheImageCleanupPolicy::GetRegistryHost() const
{
    return m_registryHost;
}

void PreCacheImageCleanupPolicy::SetRegistryHost(const string& _registryHost)
{
    m_registryHost = _registryHost;
    m_registryHostHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::RegistryHostHasBeenSet() const
{
    return m_registryHostHasBeenSet;
}

string PreCacheImageCleanupPolicy::GetRepoPattern() const
{
    return m_repoPattern;
}

void PreCacheImageCleanupPolicy::SetRepoPattern(const string& _repoPattern)
{
    m_repoPattern = _repoPattern;
    m_repoPatternHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::RepoPatternHasBeenSet() const
{
    return m_repoPatternHasBeenSet;
}

string PreCacheImageCleanupPolicy::GetIdleTTL() const
{
    return m_idleTTL;
}

void PreCacheImageCleanupPolicy::SetIdleTTL(const string& _idleTTL)
{
    m_idleTTL = _idleTTL;
    m_idleTTLHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::IdleTTLHasBeenSet() const
{
    return m_idleTTLHasBeenSet;
}

string PreCacheImageCleanupPolicy::GetCreateTime() const
{
    return m_createTime;
}

void PreCacheImageCleanupPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PreCacheImageCleanupPolicy::GetUpdateTime() const
{
    return m_updateTime;
}

void PreCacheImageCleanupPolicy::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PreCacheImageCleanupPolicy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

