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

#include <tencentcloud/cwp/v20180228/model/ModifyBaselinePolicyStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyBaselinePolicyStateRequest::ModifyBaselinePolicyStateRequest() :
    m_policyIdHasBeenSet(false),
    m_isEnabledHasBeenSet(false)
{
}

string ModifyBaselinePolicyStateRequest::ToJsonString() const
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

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyBaselinePolicyStateRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyBaselinePolicyStateRequest::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyBaselinePolicyStateRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t ModifyBaselinePolicyStateRequest::GetIsEnabled() const
{
    return m_isEnabled;
}

void ModifyBaselinePolicyStateRequest::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool ModifyBaselinePolicyStateRequest::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}


