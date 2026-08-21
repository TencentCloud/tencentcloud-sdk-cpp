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

#include <tencentcloud/csip/v20221121/model/CopyBaselinePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CopyBaselinePolicyRequest::CopyBaselinePolicyRequest() :
    m_policyIDHasBeenSet(false),
    m_targetAppIDListHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string CopyBaselinePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyID, allocator);
    }

    if (m_targetAppIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetAppIDList.begin(); itr != m_targetAppIDList.end(); ++itr)
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


uint64_t CopyBaselinePolicyRequest::GetPolicyID() const
{
    return m_policyID;
}

void CopyBaselinePolicyRequest::SetPolicyID(const uint64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool CopyBaselinePolicyRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

vector<uint64_t> CopyBaselinePolicyRequest::GetTargetAppIDList() const
{
    return m_targetAppIDList;
}

void CopyBaselinePolicyRequest::SetTargetAppIDList(const vector<uint64_t>& _targetAppIDList)
{
    m_targetAppIDList = _targetAppIDList;
    m_targetAppIDListHasBeenSet = true;
}

bool CopyBaselinePolicyRequest::TargetAppIDListHasBeenSet() const
{
    return m_targetAppIDListHasBeenSet;
}

vector<string> CopyBaselinePolicyRequest::GetMemberId() const
{
    return m_memberId;
}

void CopyBaselinePolicyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CopyBaselinePolicyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


