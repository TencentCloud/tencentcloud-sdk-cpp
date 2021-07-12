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

#include <tencentcloud/dlc/v20210125/model/DetachWorkGroupPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DetachWorkGroupPolicyRequest::DetachWorkGroupPolicyRequest() :
    m_workGroupIdHasBeenSet(false),
    m_policySetHasBeenSet(false)
{
}

string DetachWorkGroupPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workGroupId, allocator);
    }

    if (m_policySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policySet.begin(); itr != m_policySet.end(); ++itr, ++i)
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


int64_t DetachWorkGroupPolicyRequest::GetWorkGroupId() const
{
    return m_workGroupId;
}

void DetachWorkGroupPolicyRequest::SetWorkGroupId(const int64_t& _workGroupId)
{
    m_workGroupId = _workGroupId;
    m_workGroupIdHasBeenSet = true;
}

bool DetachWorkGroupPolicyRequest::WorkGroupIdHasBeenSet() const
{
    return m_workGroupIdHasBeenSet;
}

vector<Policy> DetachWorkGroupPolicyRequest::GetPolicySet() const
{
    return m_policySet;
}

void DetachWorkGroupPolicyRequest::SetPolicySet(const vector<Policy>& _policySet)
{
    m_policySet = _policySet;
    m_policySetHasBeenSet = true;
}

bool DetachWorkGroupPolicyRequest::PolicySetHasBeenSet() const
{
    return m_policySetHasBeenSet;
}


