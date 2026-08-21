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

#include <tencentcloud/csip/v20221121/model/ScanBaselinePolicyListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanBaselinePolicyListRequest::ScanBaselinePolicyListRequest() :
    m_policyTypeHasBeenSet(false),
    m_policyIDListHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ScanBaselinePolicyListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIDList.begin(); itr != m_policyIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScanBaselinePolicyListRequest::GetPolicyType() const
{
    return m_policyType;
}

void ScanBaselinePolicyListRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ScanBaselinePolicyListRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

vector<uint64_t> ScanBaselinePolicyListRequest::GetPolicyIDList() const
{
    return m_policyIDList;
}

void ScanBaselinePolicyListRequest::SetPolicyIDList(const vector<uint64_t>& _policyIDList)
{
    m_policyIDList = _policyIDList;
    m_policyIDListHasBeenSet = true;
}

bool ScanBaselinePolicyListRequest::PolicyIDListHasBeenSet() const
{
    return m_policyIDListHasBeenSet;
}

vector<string> ScanBaselinePolicyListRequest::GetMemberId() const
{
    return m_memberId;
}

void ScanBaselinePolicyListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ScanBaselinePolicyListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


