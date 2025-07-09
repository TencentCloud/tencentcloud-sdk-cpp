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

#include <tencentcloud/csip/v20221121/model/DescribeAbnormalCallRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAbnormalCallRecordRequest::DescribeAbnormalCallRecordRequest() :
    m_alarmRuleIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_sourceIPHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeAbnormalCallRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alarmRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmRuleID, allocator);
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

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceIP.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAbnormalCallRecordRequest::GetAlarmRuleID() const
{
    return m_alarmRuleID;
}

void DescribeAbnormalCallRecordRequest::SetAlarmRuleID(const int64_t& _alarmRuleID)
{
    m_alarmRuleID = _alarmRuleID;
    m_alarmRuleIDHasBeenSet = true;
}

bool DescribeAbnormalCallRecordRequest::AlarmRuleIDHasBeenSet() const
{
    return m_alarmRuleIDHasBeenSet;
}

vector<string> DescribeAbnormalCallRecordRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeAbnormalCallRecordRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeAbnormalCallRecordRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string DescribeAbnormalCallRecordRequest::GetAccessKey() const
{
    return m_accessKey;
}

void DescribeAbnormalCallRecordRequest::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool DescribeAbnormalCallRecordRequest::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string DescribeAbnormalCallRecordRequest::GetSourceIP() const
{
    return m_sourceIP;
}

void DescribeAbnormalCallRecordRequest::SetSourceIP(const string& _sourceIP)
{
    m_sourceIP = _sourceIP;
    m_sourceIPHasBeenSet = true;
}

bool DescribeAbnormalCallRecordRequest::SourceIPHasBeenSet() const
{
    return m_sourceIPHasBeenSet;
}

Filter DescribeAbnormalCallRecordRequest::GetFilter() const
{
    return m_filter;
}

void DescribeAbnormalCallRecordRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeAbnormalCallRecordRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


