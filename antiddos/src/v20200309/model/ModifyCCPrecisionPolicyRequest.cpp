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

#include <tencentcloud/antiddos/v20200309/model/ModifyCCPrecisionPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ModifyCCPrecisionPolicyRequest::ModifyCCPrecisionPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyActionHasBeenSet(false),
    m_policyListHasBeenSet(false)
{
}

string ModifyCCPrecisionPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyAction.c_str(), allocator).Move(), allocator);
    }

    if (m_policyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyList.begin(); itr != m_policyList.end(); ++itr, ++i)
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


string ModifyCCPrecisionPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyCCPrecisionPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyCCPrecisionPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyCCPrecisionPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyCCPrecisionPolicyRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyCCPrecisionPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ModifyCCPrecisionPolicyRequest::GetPolicyAction() const
{
    return m_policyAction;
}

void ModifyCCPrecisionPolicyRequest::SetPolicyAction(const string& _policyAction)
{
    m_policyAction = _policyAction;
    m_policyActionHasBeenSet = true;
}

bool ModifyCCPrecisionPolicyRequest::PolicyActionHasBeenSet() const
{
    return m_policyActionHasBeenSet;
}

vector<CCPrecisionPlyRecord> ModifyCCPrecisionPolicyRequest::GetPolicyList() const
{
    return m_policyList;
}

void ModifyCCPrecisionPolicyRequest::SetPolicyList(const vector<CCPrecisionPlyRecord>& _policyList)
{
    m_policyList = _policyList;
    m_policyListHasBeenSet = true;
}

bool ModifyCCPrecisionPolicyRequest::PolicyListHasBeenSet() const
{
    return m_policyListHasBeenSet;
}


