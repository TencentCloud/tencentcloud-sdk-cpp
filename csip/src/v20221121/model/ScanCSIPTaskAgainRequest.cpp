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

#include <tencentcloud/csip/v20221121/model/ScanCSIPTaskAgainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanCSIPTaskAgainRequest::ScanCSIPTaskAgainRequest() :
    m_taskIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_instanceIDListHasBeenSet(false),
    m_timeoutPeriodHasBeenSet(false)
{
}

string ScanCSIPTaskAgainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
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

    if (m_instanceIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDList.begin(); itr != m_instanceIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutPeriod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ScanCSIPTaskAgainRequest::GetTaskId() const
{
    return m_taskId;
}

void ScanCSIPTaskAgainRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ScanCSIPTaskAgainRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> ScanCSIPTaskAgainRequest::GetMemberId() const
{
    return m_memberId;
}

void ScanCSIPTaskAgainRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ScanCSIPTaskAgainRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> ScanCSIPTaskAgainRequest::GetInstanceIDList() const
{
    return m_instanceIDList;
}

void ScanCSIPTaskAgainRequest::SetInstanceIDList(const vector<string>& _instanceIDList)
{
    m_instanceIDList = _instanceIDList;
    m_instanceIDListHasBeenSet = true;
}

bool ScanCSIPTaskAgainRequest::InstanceIDListHasBeenSet() const
{
    return m_instanceIDListHasBeenSet;
}

uint64_t ScanCSIPTaskAgainRequest::GetTimeoutPeriod() const
{
    return m_timeoutPeriod;
}

void ScanCSIPTaskAgainRequest::SetTimeoutPeriod(const uint64_t& _timeoutPeriod)
{
    m_timeoutPeriod = _timeoutPeriod;
    m_timeoutPeriodHasBeenSet = true;
}

bool ScanCSIPTaskAgainRequest::TimeoutPeriodHasBeenSet() const
{
    return m_timeoutPeriodHasBeenSet;
}


