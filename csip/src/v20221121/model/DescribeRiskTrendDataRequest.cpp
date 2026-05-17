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

#include <tencentcloud/csip/v20221121/model/DescribeRiskTrendDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeRiskTrendDataRequest::DescribeRiskTrendDataRequest() :
    m_memberIdHasBeenSet(false),
    m_lastDaysHasBeenSet(false)
{
}

string DescribeRiskTrendDataRequest::ToJsonString() const
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

    if (m_lastDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lastDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeRiskTrendDataRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeRiskTrendDataRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeRiskTrendDataRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t DescribeRiskTrendDataRequest::GetLastDays() const
{
    return m_lastDays;
}

void DescribeRiskTrendDataRequest::SetLastDays(const int64_t& _lastDays)
{
    m_lastDays = _lastDays;
    m_lastDaysHasBeenSet = true;
}

bool DescribeRiskTrendDataRequest::LastDaysHasBeenSet() const
{
    return m_lastDaysHasBeenSet;
}


