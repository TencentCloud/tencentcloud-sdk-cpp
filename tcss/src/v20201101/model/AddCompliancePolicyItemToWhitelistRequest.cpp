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

#include <tencentcloud/tcss/v20201101/model/AddCompliancePolicyItemToWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddCompliancePolicyItemToWhitelistRequest::AddCompliancePolicyItemToWhitelistRequest() :
    m_customerPolicyItemIdSetHasBeenSet(false)
{
}

string AddCompliancePolicyItemToWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerPolicyItemIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPolicyItemIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerPolicyItemIdSet.begin(); itr != m_customerPolicyItemIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> AddCompliancePolicyItemToWhitelistRequest::GetCustomerPolicyItemIdSet() const
{
    return m_customerPolicyItemIdSet;
}

void AddCompliancePolicyItemToWhitelistRequest::SetCustomerPolicyItemIdSet(const vector<uint64_t>& _customerPolicyItemIdSet)
{
    m_customerPolicyItemIdSet = _customerPolicyItemIdSet;
    m_customerPolicyItemIdSetHasBeenSet = true;
}

bool AddCompliancePolicyItemToWhitelistRequest::CustomerPolicyItemIdSetHasBeenSet() const
{
    return m_customerPolicyItemIdSetHasBeenSet;
}


