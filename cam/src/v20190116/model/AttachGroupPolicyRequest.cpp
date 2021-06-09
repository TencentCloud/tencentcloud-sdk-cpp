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

#include <tencentcloud/cam/v20190116/model/AttachGroupPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

AttachGroupPolicyRequest::AttachGroupPolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_attachGroupIdHasBeenSet(false)
{
}

string AttachGroupPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_attachGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attachGroupId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t AttachGroupPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void AttachGroupPolicyRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AttachGroupPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

uint64_t AttachGroupPolicyRequest::GetAttachGroupId() const
{
    return m_attachGroupId;
}

void AttachGroupPolicyRequest::SetAttachGroupId(const uint64_t& _attachGroupId)
{
    m_attachGroupId = _attachGroupId;
    m_attachGroupIdHasBeenSet = true;
}

bool AttachGroupPolicyRequest::AttachGroupIdHasBeenSet() const
{
    return m_attachGroupIdHasBeenSet;
}


