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

#include <tencentcloud/cfs/v20190719/model/ModifyLifecyclePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

ModifyLifecyclePolicyRequest::ModifyLifecyclePolicyRequest() :
    m_lifecyclePolicyNameHasBeenSet(false),
    m_lifecycleRulesHasBeenSet(false),
    m_lifecyclePolicyIDHasBeenSet(false)
{
}

string ModifyLifecyclePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lifecyclePolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifecycleRules.begin(); itr != m_lifecycleRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_lifecyclePolicyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLifecyclePolicyRequest::GetLifecyclePolicyName() const
{
    return m_lifecyclePolicyName;
}

void ModifyLifecyclePolicyRequest::SetLifecyclePolicyName(const string& _lifecyclePolicyName)
{
    m_lifecyclePolicyName = _lifecyclePolicyName;
    m_lifecyclePolicyNameHasBeenSet = true;
}

bool ModifyLifecyclePolicyRequest::LifecyclePolicyNameHasBeenSet() const
{
    return m_lifecyclePolicyNameHasBeenSet;
}

vector<LifecycleRule> ModifyLifecyclePolicyRequest::GetLifecycleRules() const
{
    return m_lifecycleRules;
}

void ModifyLifecyclePolicyRequest::SetLifecycleRules(const vector<LifecycleRule>& _lifecycleRules)
{
    m_lifecycleRules = _lifecycleRules;
    m_lifecycleRulesHasBeenSet = true;
}

bool ModifyLifecyclePolicyRequest::LifecycleRulesHasBeenSet() const
{
    return m_lifecycleRulesHasBeenSet;
}

string ModifyLifecyclePolicyRequest::GetLifecyclePolicyID() const
{
    return m_lifecyclePolicyID;
}

void ModifyLifecyclePolicyRequest::SetLifecyclePolicyID(const string& _lifecyclePolicyID)
{
    m_lifecyclePolicyID = _lifecyclePolicyID;
    m_lifecyclePolicyIDHasBeenSet = true;
}

bool ModifyLifecyclePolicyRequest::LifecyclePolicyIDHasBeenSet() const
{
    return m_lifecyclePolicyIDHasBeenSet;
}


