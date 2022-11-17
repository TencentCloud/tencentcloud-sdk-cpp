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

#include <tencentcloud/tdid/v20210519/model/RegisterClaimPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

RegisterClaimPolicyRequest::RegisterClaimPolicyRequest() :
    m_cptIndexHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

string RegisterClaimPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cptIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cptIndex, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t RegisterClaimPolicyRequest::GetCptIndex() const
{
    return m_cptIndex;
}

void RegisterClaimPolicyRequest::SetCptIndex(const uint64_t& _cptIndex)
{
    m_cptIndex = _cptIndex;
    m_cptIndexHasBeenSet = true;
}

bool RegisterClaimPolicyRequest::CptIndexHasBeenSet() const
{
    return m_cptIndexHasBeenSet;
}

string RegisterClaimPolicyRequest::GetPolicy() const
{
    return m_policy;
}

void RegisterClaimPolicyRequest::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool RegisterClaimPolicyRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}


