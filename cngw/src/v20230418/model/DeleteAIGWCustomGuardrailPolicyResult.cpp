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

#include <tencentcloud/cngw/v20230418/model/DeleteAIGWCustomGuardrailPolicyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DeleteAIGWCustomGuardrailPolicyResult::DeleteAIGWCustomGuardrailPolicyResult() :
    m_successHasBeenSet(false),
    m_failedResourcesHasBeenSet(false)
{
}

CoreInternalOutcome DeleteAIGWCustomGuardrailPolicyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteAIGWCustomGuardrailPolicyResult.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("FailedResources") && !value["FailedResources"].IsNull())
    {
        if (!value["FailedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeleteAIGWCustomGuardrailPolicyResult.FailedResources` is not array type"));

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


    return CoreInternalOutcome(true);
}

void DeleteAIGWCustomGuardrailPolicyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
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

}


bool DeleteAIGWCustomGuardrailPolicyResult::GetSuccess() const
{
    return m_success;
}

void DeleteAIGWCustomGuardrailPolicyResult::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool DeleteAIGWCustomGuardrailPolicyResult::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

vector<CustomGuardrailSyncFailure> DeleteAIGWCustomGuardrailPolicyResult::GetFailedResources() const
{
    return m_failedResources;
}

void DeleteAIGWCustomGuardrailPolicyResult::SetFailedResources(const vector<CustomGuardrailSyncFailure>& _failedResources)
{
    m_failedResources = _failedResources;
    m_failedResourcesHasBeenSet = true;
}

bool DeleteAIGWCustomGuardrailPolicyResult::FailedResourcesHasBeenSet() const
{
    return m_failedResourcesHasBeenSet;
}

