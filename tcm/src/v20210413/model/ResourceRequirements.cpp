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

#include <tencentcloud/tcm/v20210413/model/ResourceRequirements.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ResourceRequirements::ResourceRequirements() :
    m_limitsHasBeenSet(false),
    m_requestsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceRequirements::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Limits") && !value["Limits"].IsNull())
    {
        if (!value["Limits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceRequirements.Limits` is not array type"));

        const rapidjson::Value &tmpValue = value["Limits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Resource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limits.push_back(item);
        }
        m_limitsHasBeenSet = true;
    }

    if (value.HasMember("Requests") && !value["Requests"].IsNull())
    {
        if (!value["Requests"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceRequirements.Requests` is not array type"));

        const rapidjson::Value &tmpValue = value["Requests"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Resource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requests.push_back(item);
        }
        m_requestsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceRequirements::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limits.begin(); itr != m_limits.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requests";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requests.begin(); itr != m_requests.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Resource> ResourceRequirements::GetLimits() const
{
    return m_limits;
}

void ResourceRequirements::SetLimits(const vector<Resource>& _limits)
{
    m_limits = _limits;
    m_limitsHasBeenSet = true;
}

bool ResourceRequirements::LimitsHasBeenSet() const
{
    return m_limitsHasBeenSet;
}

vector<Resource> ResourceRequirements::GetRequests() const
{
    return m_requests;
}

void ResourceRequirements::SetRequests(const vector<Resource>& _requests)
{
    m_requests = _requests;
    m_requestsHasBeenSet = true;
}

bool ResourceRequirements::RequestsHasBeenSet() const
{
    return m_requestsHasBeenSet;
}

