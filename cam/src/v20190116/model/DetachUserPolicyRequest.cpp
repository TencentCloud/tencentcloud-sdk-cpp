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

#include <tencentcloud/cam/v20190116/model/DetachUserPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

DetachUserPolicyRequest::DetachUserPolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_detachUinHasBeenSet(false)
{
}

string DetachUserPolicyRequest::ToJsonString() const
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

    if (m_detachUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetachUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_detachUin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DetachUserPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void DetachUserPolicyRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DetachUserPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

uint64_t DetachUserPolicyRequest::GetDetachUin() const
{
    return m_detachUin;
}

void DetachUserPolicyRequest::SetDetachUin(const uint64_t& _detachUin)
{
    m_detachUin = _detachUin;
    m_detachUinHasBeenSet = true;
}

bool DetachUserPolicyRequest::DetachUinHasBeenSet() const
{
    return m_detachUinHasBeenSet;
}


