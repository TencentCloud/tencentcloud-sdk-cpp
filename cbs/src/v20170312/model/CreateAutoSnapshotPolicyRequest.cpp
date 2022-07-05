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

#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest() :
    m_policyHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_autoSnapshotPolicyNameHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_retentionDaysHasBeenSet(false)
{
}

string CreateAutoSnapshotPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policy.begin(); itr != m_policy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_autoSnapshotPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Policy> CreateAutoSnapshotPolicyRequest::GetPolicy() const
{
    return m_policy;
}

void CreateAutoSnapshotPolicyRequest::SetPolicy(const vector<Policy>& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

bool CreateAutoSnapshotPolicyRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateAutoSnapshotPolicyRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

bool CreateAutoSnapshotPolicyRequest::GetIsActivated() const
{
    return m_isActivated;
}

void CreateAutoSnapshotPolicyRequest::SetIsActivated(const bool& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

string CreateAutoSnapshotPolicyRequest::GetAutoSnapshotPolicyName() const
{
    return m_autoSnapshotPolicyName;
}

void CreateAutoSnapshotPolicyRequest::SetAutoSnapshotPolicyName(const string& _autoSnapshotPolicyName)
{
    m_autoSnapshotPolicyName = _autoSnapshotPolicyName;
    m_autoSnapshotPolicyNameHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::AutoSnapshotPolicyNameHasBeenSet() const
{
    return m_autoSnapshotPolicyNameHasBeenSet;
}

bool CreateAutoSnapshotPolicyRequest::GetIsPermanent() const
{
    return m_isPermanent;
}

void CreateAutoSnapshotPolicyRequest::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

uint64_t CreateAutoSnapshotPolicyRequest::GetRetentionDays() const
{
    return m_retentionDays;
}

void CreateAutoSnapshotPolicyRequest::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}


