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

#include <tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorAclRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

DeleteGlobalAcceleratorAclRuleRequest::DeleteGlobalAcceleratorAclRuleRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_globalAcceleratorAclPolicyIdHasBeenSet(false),
    m_globalAcceleratorAclRuleIdsHasBeenSet(false)
{
}

string DeleteGlobalAcceleratorAclRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorAclPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorAclPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorAclPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorAclRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorAclRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_globalAcceleratorAclRuleIds.begin(); itr != m_globalAcceleratorAclRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void DeleteGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool DeleteGlobalAcceleratorAclRuleRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string DeleteGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorAclPolicyId() const
{
    return m_globalAcceleratorAclPolicyId;
}

void DeleteGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorAclPolicyId(const string& _globalAcceleratorAclPolicyId)
{
    m_globalAcceleratorAclPolicyId = _globalAcceleratorAclPolicyId;
    m_globalAcceleratorAclPolicyIdHasBeenSet = true;
}

bool DeleteGlobalAcceleratorAclRuleRequest::GlobalAcceleratorAclPolicyIdHasBeenSet() const
{
    return m_globalAcceleratorAclPolicyIdHasBeenSet;
}

vector<string> DeleteGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorAclRuleIds() const
{
    return m_globalAcceleratorAclRuleIds;
}

void DeleteGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorAclRuleIds(const vector<string>& _globalAcceleratorAclRuleIds)
{
    m_globalAcceleratorAclRuleIds = _globalAcceleratorAclRuleIds;
    m_globalAcceleratorAclRuleIdsHasBeenSet = true;
}

bool DeleteGlobalAcceleratorAclRuleRequest::GlobalAcceleratorAclRuleIdsHasBeenSet() const
{
    return m_globalAcceleratorAclRuleIdsHasBeenSet;
}


