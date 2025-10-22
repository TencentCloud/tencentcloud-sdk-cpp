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

#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyAlarmStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UpdateAccessKeyAlarmStatusRequest::UpdateAccessKeyAlarmStatusRequest() :
    m_statusHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_alarmIDListHasBeenSet(false),
    m_riskIDListHasBeenSet(false)
{
}

string UpdateAccessKeyAlarmStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
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

    if (m_alarmIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmIDList.begin(); itr != m_alarmIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_riskIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskIDList.begin(); itr != m_riskIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateAccessKeyAlarmStatusRequest::GetStatus() const
{
    return m_status;
}

void UpdateAccessKeyAlarmStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateAccessKeyAlarmStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> UpdateAccessKeyAlarmStatusRequest::GetMemberId() const
{
    return m_memberId;
}

void UpdateAccessKeyAlarmStatusRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool UpdateAccessKeyAlarmStatusRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<int64_t> UpdateAccessKeyAlarmStatusRequest::GetAlarmIDList() const
{
    return m_alarmIDList;
}

void UpdateAccessKeyAlarmStatusRequest::SetAlarmIDList(const vector<int64_t>& _alarmIDList)
{
    m_alarmIDList = _alarmIDList;
    m_alarmIDListHasBeenSet = true;
}

bool UpdateAccessKeyAlarmStatusRequest::AlarmIDListHasBeenSet() const
{
    return m_alarmIDListHasBeenSet;
}

vector<int64_t> UpdateAccessKeyAlarmStatusRequest::GetRiskIDList() const
{
    return m_riskIDList;
}

void UpdateAccessKeyAlarmStatusRequest::SetRiskIDList(const vector<int64_t>& _riskIDList)
{
    m_riskIDList = _riskIDList;
    m_riskIDListHasBeenSet = true;
}

bool UpdateAccessKeyAlarmStatusRequest::RiskIDListHasBeenSet() const
{
    return m_riskIDListHasBeenSet;
}


