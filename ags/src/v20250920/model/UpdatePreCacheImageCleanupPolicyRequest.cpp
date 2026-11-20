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

#include <tencentcloud/ags/v20250920/model/UpdatePreCacheImageCleanupPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

UpdatePreCacheImageCleanupPolicyRequest::UpdatePreCacheImageCleanupPolicyRequest() :
    m_cleanupPolicyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_registryHostHasBeenSet(false),
    m_repoPatternHasBeenSet(false),
    m_idleTTLHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string UpdatePreCacheImageCleanupPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cleanupPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanupPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cleanupPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_registryHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryHost.c_str(), allocator).Move(), allocator);
    }

    if (m_repoPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idleTTL.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdatePreCacheImageCleanupPolicyRequest::GetCleanupPolicyId() const
{
    return m_cleanupPolicyId;
}

void UpdatePreCacheImageCleanupPolicyRequest::SetCleanupPolicyId(const string& _cleanupPolicyId)
{
    m_cleanupPolicyId = _cleanupPolicyId;
    m_cleanupPolicyIdHasBeenSet = true;
}

bool UpdatePreCacheImageCleanupPolicyRequest::CleanupPolicyIdHasBeenSet() const
{
    return m_cleanupPolicyIdHasBeenSet;
}

string UpdatePreCacheImageCleanupPolicyRequest::GetName() const
{
    return m_name;
}

void UpdatePreCacheImageCleanupPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdatePreCacheImageCleanupPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdatePreCacheImageCleanupPolicyRequest::GetRegistryHost() const
{
    return m_registryHost;
}

void UpdatePreCacheImageCleanupPolicyRequest::SetRegistryHost(const string& _registryHost)
{
    m_registryHost = _registryHost;
    m_registryHostHasBeenSet = true;
}

bool UpdatePreCacheImageCleanupPolicyRequest::RegistryHostHasBeenSet() const
{
    return m_registryHostHasBeenSet;
}

string UpdatePreCacheImageCleanupPolicyRequest::GetRepoPattern() const
{
    return m_repoPattern;
}

void UpdatePreCacheImageCleanupPolicyRequest::SetRepoPattern(const string& _repoPattern)
{
    m_repoPattern = _repoPattern;
    m_repoPatternHasBeenSet = true;
}

bool UpdatePreCacheImageCleanupPolicyRequest::RepoPatternHasBeenSet() const
{
    return m_repoPatternHasBeenSet;
}

string UpdatePreCacheImageCleanupPolicyRequest::GetIdleTTL() const
{
    return m_idleTTL;
}

void UpdatePreCacheImageCleanupPolicyRequest::SetIdleTTL(const string& _idleTTL)
{
    m_idleTTL = _idleTTL;
    m_idleTTLHasBeenSet = true;
}

bool UpdatePreCacheImageCleanupPolicyRequest::IdleTTLHasBeenSet() const
{
    return m_idleTTLHasBeenSet;
}

bool UpdatePreCacheImageCleanupPolicyRequest::GetEnabled() const
{
    return m_enabled;
}

void UpdatePreCacheImageCleanupPolicyRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool UpdatePreCacheImageCleanupPolicyRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


