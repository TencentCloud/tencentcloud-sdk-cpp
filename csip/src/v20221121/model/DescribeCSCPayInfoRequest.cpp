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

#include <tencentcloud/csip/v20221121/model/DescribeCSCPayInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCSCPayInfoRequest::DescribeCSCPayInfoRequest() :
    m_memberIdHasBeenSet(false),
    m_needQuotaUsedHasBeenSet(false)
{
}

string DescribeCSCPayInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_needQuotaUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedQuotaUsed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needQuotaUsed, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeCSCPayInfoRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeCSCPayInfoRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeCSCPayInfoRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

bool DescribeCSCPayInfoRequest::GetNeedQuotaUsed() const
{
    return m_needQuotaUsed;
}

void DescribeCSCPayInfoRequest::SetNeedQuotaUsed(const bool& _needQuotaUsed)
{
    m_needQuotaUsed = _needQuotaUsed;
    m_needQuotaUsedHasBeenSet = true;
}

bool DescribeCSCPayInfoRequest::NeedQuotaUsedHasBeenSet() const
{
    return m_needQuotaUsedHasBeenSet;
}


