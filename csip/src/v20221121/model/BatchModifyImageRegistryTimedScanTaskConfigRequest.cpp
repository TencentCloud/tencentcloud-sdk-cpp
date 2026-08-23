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

#include <tencentcloud/csip/v20221121/model/BatchModifyImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BatchModifyImageRegistryTimedScanTaskConfigRequest::BatchModifyImageRegistryTimedScanTaskConfigRequest() :
    m_memberIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

string BatchModifyImageRegistryTimedScanTaskConfigRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchModifyImageRegistryTimedScanTaskConfigRequest::GetMemberId() const
{
    return m_memberId;
}

void BatchModifyImageRegistryTimedScanTaskConfigRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool BatchModifyImageRegistryTimedScanTaskConfigRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<uint64_t> BatchModifyImageRegistryTimedScanTaskConfigRequest::GetId() const
{
    return m_id;
}

void BatchModifyImageRegistryTimedScanTaskConfigRequest::SetId(const vector<uint64_t>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BatchModifyImageRegistryTimedScanTaskConfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool BatchModifyImageRegistryTimedScanTaskConfigRequest::GetEnable() const
{
    return m_enable;
}

void BatchModifyImageRegistryTimedScanTaskConfigRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool BatchModifyImageRegistryTimedScanTaskConfigRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<string> BatchModifyImageRegistryTimedScanTaskConfigRequest::GetScanType() const
{
    return m_scanType;
}

void BatchModifyImageRegistryTimedScanTaskConfigRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool BatchModifyImageRegistryTimedScanTaskConfigRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

ImageScanScheduleConfig BatchModifyImageRegistryTimedScanTaskConfigRequest::GetSchedule() const
{
    return m_schedule;
}

void BatchModifyImageRegistryTimedScanTaskConfigRequest::SetSchedule(const ImageScanScheduleConfig& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool BatchModifyImageRegistryTimedScanTaskConfigRequest::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

uint64_t BatchModifyImageRegistryTimedScanTaskConfigRequest::GetTimeout() const
{
    return m_timeout;
}

void BatchModifyImageRegistryTimedScanTaskConfigRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool BatchModifyImageRegistryTimedScanTaskConfigRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}


