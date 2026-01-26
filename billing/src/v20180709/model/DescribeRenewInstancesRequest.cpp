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

#include <tencentcloud/billing/v20180709/model/DescribeRenewInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeRenewInstancesRequest::DescribeRenewInstancesRequest() :
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_reverseHasBeenSet(false),
    m_renewFlagListHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_expireTimeStartHasBeenSet(false),
    m_expireTimeEndHasBeenSet(false)
{
}

string DescribeRenewInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_reverseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reverse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reverse, allocator);
    }

    if (m_renewFlagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_renewFlagList.begin(); itr != m_renewFlagList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTimeEnd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRenewInstancesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeRenewInstancesRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeRenewInstancesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeRenewInstancesRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeRenewInstancesRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeRenewInstancesRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

bool DescribeRenewInstancesRequest::GetReverse() const
{
    return m_reverse;
}

void DescribeRenewInstancesRequest::SetReverse(const bool& _reverse)
{
    m_reverse = _reverse;
    m_reverseHasBeenSet = true;
}

bool DescribeRenewInstancesRequest::ReverseHasBeenSet() const
{
    return m_reverseHasBeenSet;
}

vector<string> DescribeRenewInstancesRequest::GetRenewFlagList() const
{
    return m_renewFlagList;
}

void DescribeRenewInstancesRequest::SetRenewFlagList(const vector<string>& _renewFlagList)
{
    m_renewFlagList = _renewFlagList;
    m_renewFlagListHasBeenSet = true;
}

bool DescribeRenewInstancesRequest::RenewFlagListHasBeenSet() const
{
    return m_renewFlagListHasBeenSet;
}

vector<string> DescribeRenewInstancesRequest::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void DescribeRenewInstancesRequest::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool DescribeRenewInstancesRequest::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

string DescribeRenewInstancesRequest::GetExpireTimeStart() const
{
    return m_expireTimeStart;
}

void DescribeRenewInstancesRequest::SetExpireTimeStart(const string& _expireTimeStart)
{
    m_expireTimeStart = _expireTimeStart;
    m_expireTimeStartHasBeenSet = true;
}

bool DescribeRenewInstancesRequest::ExpireTimeStartHasBeenSet() const
{
    return m_expireTimeStartHasBeenSet;
}

string DescribeRenewInstancesRequest::GetExpireTimeEnd() const
{
    return m_expireTimeEnd;
}

void DescribeRenewInstancesRequest::SetExpireTimeEnd(const string& _expireTimeEnd)
{
    m_expireTimeEnd = _expireTimeEnd;
    m_expireTimeEndHasBeenSet = true;
}

bool DescribeRenewInstancesRequest::ExpireTimeEndHasBeenSet() const
{
    return m_expireTimeEndHasBeenSet;
}


