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

#include <tencentcloud/alb/v20251030/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DeleteSecurityPolicyRequest::DeleteSecurityPolicyRequest() :
    m_securityPolicyIdsHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string DeleteSecurityPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_securityPolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityPolicyIds.begin(); itr != m_securityPolicyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteSecurityPolicyRequest::GetSecurityPolicyIds() const
{
    return m_securityPolicyIds;
}

void DeleteSecurityPolicyRequest::SetSecurityPolicyIds(const vector<string>& _securityPolicyIds)
{
    m_securityPolicyIds = _securityPolicyIds;
    m_securityPolicyIdsHasBeenSet = true;
}

bool DeleteSecurityPolicyRequest::SecurityPolicyIdsHasBeenSet() const
{
    return m_securityPolicyIdsHasBeenSet;
}

bool DeleteSecurityPolicyRequest::GetDryRun() const
{
    return m_dryRun;
}

void DeleteSecurityPolicyRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool DeleteSecurityPolicyRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


