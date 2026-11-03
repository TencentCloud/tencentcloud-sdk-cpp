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

#include <tencentcloud/tse/v20201207/model/CreateAIGWCustomGuardrailPolicyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateAIGWCustomGuardrailPolicyResult::CreateAIGWCustomGuardrailPolicyResult() :
    m_successHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_addedResourcesHasBeenSet(false),
    m_failedResourcesHasBeenSet(false),
    m_syncStatusHasBeenSet(false)
{
}

CoreInternalOutcome CreateAIGWCustomGuardrailPolicyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAIGWCustomGuardrailPolicyResult.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAIGWCustomGuardrailPolicyResult.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("AddedResources") && !value["AddedResources"].IsNull())
    {
        if (!value["AddedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateAIGWCustomGuardrailPolicyResult.AddedResources` is not array type"));

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

    if (value.HasMember("FailedResources") && !value["FailedResources"].IsNull())
    {
        if (!value["FailedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateAIGWCustomGuardrailPolicyResult.FailedResources` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateAIGWCustomGuardrailPolicyResult.SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(value["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAIGWCustomGuardrailPolicyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
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


bool CreateAIGWCustomGuardrailPolicyResult::GetSuccess() const
{
    return m_success;
}

void CreateAIGWCustomGuardrailPolicyResult::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyResult::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

string CreateAIGWCustomGuardrailPolicyResult::GetPolicyId() const
{
    return m_policyId;
}

void CreateAIGWCustomGuardrailPolicyResult::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyResult::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

vector<CustomGuardrailResourceRef> CreateAIGWCustomGuardrailPolicyResult::GetAddedResources() const
{
    return m_addedResources;
}

void CreateAIGWCustomGuardrailPolicyResult::SetAddedResources(const vector<CustomGuardrailResourceRef>& _addedResources)
{
    m_addedResources = _addedResources;
    m_addedResourcesHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyResult::AddedResourcesHasBeenSet() const
{
    return m_addedResourcesHasBeenSet;
}

vector<CustomGuardrailSyncFailure> CreateAIGWCustomGuardrailPolicyResult::GetFailedResources() const
{
    return m_failedResources;
}

void CreateAIGWCustomGuardrailPolicyResult::SetFailedResources(const vector<CustomGuardrailSyncFailure>& _failedResources)
{
    m_failedResources = _failedResources;
    m_failedResourcesHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyResult::FailedResourcesHasBeenSet() const
{
    return m_failedResourcesHasBeenSet;
}

string CreateAIGWCustomGuardrailPolicyResult::GetSyncStatus() const
{
    return m_syncStatus;
}

void CreateAIGWCustomGuardrailPolicyResult::SetSyncStatus(const string& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyResult::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

