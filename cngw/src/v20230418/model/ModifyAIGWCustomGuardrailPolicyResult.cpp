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

#include <tencentcloud/cngw/v20230418/model/ModifyAIGWCustomGuardrailPolicyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyAIGWCustomGuardrailPolicyResult::ModifyAIGWCustomGuardrailPolicyResult() :
    m_successHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_addedResourcesHasBeenSet(false),
    m_removedCountHasBeenSet(false),
    m_failedResourcesHasBeenSet(false),
    m_syncStatusHasBeenSet(false)
{
}

CoreInternalOutcome ModifyAIGWCustomGuardrailPolicyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAIGWCustomGuardrailPolicyResult.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAIGWCustomGuardrailPolicyResult.Policy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policy.Deserialize(value["Policy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyHasBeenSet = true;
    }

    if (value.HasMember("AddedResources") && !value["AddedResources"].IsNull())
    {
        if (!value["AddedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAIGWCustomGuardrailPolicyResult.AddedResources` is not array type"));

        const rapidjson::Value &tmpValue = value["AddedResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomGuardrailResourceRef item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addedResources.push_back(item);
        }
        m_addedResourcesHasBeenSet = true;
    }

    if (value.HasMember("RemovedCount") && !value["RemovedCount"].IsNull())
    {
        if (!value["RemovedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAIGWCustomGuardrailPolicyResult.RemovedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removedCount = value["RemovedCount"].GetInt64();
        m_removedCountHasBeenSet = true;
    }

    if (value.HasMember("FailedResources") && !value["FailedResources"].IsNull())
    {
        if (!value["FailedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAIGWCustomGuardrailPolicyResult.FailedResources` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomGuardrailSyncFailure item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failedResources.push_back(item);
        }
        m_failedResourcesHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAIGWCustomGuardrailPolicyResult.SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(value["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyAIGWCustomGuardrailPolicyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addedResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddedResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addedResources.begin(); itr != m_addedResources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_removedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemovedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removedCount, allocator);
    }

    if (m_failedResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failedResources.begin(); itr != m_failedResources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncStatus.c_str(), allocator).Move(), allocator);
    }

}


bool ModifyAIGWCustomGuardrailPolicyResult::GetSuccess() const
{
    return m_success;
}

void ModifyAIGWCustomGuardrailPolicyResult::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool ModifyAIGWCustomGuardrailPolicyResult::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

CustomGuardrailPolicy ModifyAIGWCustomGuardrailPolicyResult::GetPolicy() const
{
    return m_policy;
}

void ModifyAIGWCustomGuardrailPolicyResult::SetPolicy(const CustomGuardrailPolicy& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ModifyAIGWCustomGuardrailPolicyResult::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

vector<CustomGuardrailResourceRef> ModifyAIGWCustomGuardrailPolicyResult::GetAddedResources() const
{
    return m_addedResources;
}

void ModifyAIGWCustomGuardrailPolicyResult::SetAddedResources(const vector<CustomGuardrailResourceRef>& _addedResources)
{
    m_addedResources = _addedResources;
    m_addedResourcesHasBeenSet = true;
}

bool ModifyAIGWCustomGuardrailPolicyResult::AddedResourcesHasBeenSet() const
{
    return m_addedResourcesHasBeenSet;
}

int64_t ModifyAIGWCustomGuardrailPolicyResult::GetRemovedCount() const
{
    return m_removedCount;
}

void ModifyAIGWCustomGuardrailPolicyResult::SetRemovedCount(const int64_t& _removedCount)
{
    m_removedCount = _removedCount;
    m_removedCountHasBeenSet = true;
}

bool ModifyAIGWCustomGuardrailPolicyResult::RemovedCountHasBeenSet() const
{
    return m_removedCountHasBeenSet;
}

vector<CustomGuardrailSyncFailure> ModifyAIGWCustomGuardrailPolicyResult::GetFailedResources() const
{
    return m_failedResources;
}

void ModifyAIGWCustomGuardrailPolicyResult::SetFailedResources(const vector<CustomGuardrailSyncFailure>& _failedResources)
{
    m_failedResources = _failedResources;
    m_failedResourcesHasBeenSet = true;
}

bool ModifyAIGWCustomGuardrailPolicyResult::FailedResourcesHasBeenSet() const
{
    return m_failedResourcesHasBeenSet;
}

string ModifyAIGWCustomGuardrailPolicyResult::GetSyncStatus() const
{
    return m_syncStatus;
}

void ModifyAIGWCustomGuardrailPolicyResult::SetSyncStatus(const string& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool ModifyAIGWCustomGuardrailPolicyResult::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

