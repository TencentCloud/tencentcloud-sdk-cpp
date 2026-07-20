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

#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAclRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

CreateGlobalAcceleratorAclRuleRequest::CreateGlobalAcceleratorAclRuleRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_globalAcceleratorAclPolicyIdHasBeenSet(false),
    m_aclEntriesHasBeenSet(false)
{
}

string CreateGlobalAcceleratorAclRuleRequest::ToJsonString() const
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

    if (m_aclEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclEntries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aclEntries.begin(); itr != m_aclEntries.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void CreateGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool CreateGlobalAcceleratorAclRuleRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string CreateGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorAclPolicyId() const
{
    return m_globalAcceleratorAclPolicyId;
}

void CreateGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorAclPolicyId(const string& _globalAcceleratorAclPolicyId)
{
    m_globalAcceleratorAclPolicyId = _globalAcceleratorAclPolicyId;
    m_globalAcceleratorAclPolicyIdHasBeenSet = true;
}

bool CreateGlobalAcceleratorAclRuleRequest::GlobalAcceleratorAclPolicyIdHasBeenSet() const
{
    return m_globalAcceleratorAclPolicyIdHasBeenSet;
}

vector<AclEntries> CreateGlobalAcceleratorAclRuleRequest::GetAclEntries() const
{
    return m_aclEntries;
}

void CreateGlobalAcceleratorAclRuleRequest::SetAclEntries(const vector<AclEntries>& _aclEntries)
{
    m_aclEntries = _aclEntries;
    m_aclEntriesHasBeenSet = true;
}

bool CreateGlobalAcceleratorAclRuleRequest::AclEntriesHasBeenSet() const
{
    return m_aclEntriesHasBeenSet;
}


