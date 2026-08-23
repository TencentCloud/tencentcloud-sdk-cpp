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

#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyImageRegistryTimedScanTaskConfigRequest::ModifyImageRegistryTimedScanTaskConfigRequest() :
    m_memberIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

string ModifyImageRegistryTimedScanTaskConfigRequest::ToJsonString() const
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
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
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


vector<string> ModifyImageRegistryTimedScanTaskConfigRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t ModifyImageRegistryTimedScanTaskConfigRequest::GetId() const
{
    return m_id;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyImageRegistryTimedScanTaskConfigRequest::GetName() const
{
    return m_name;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::GetEnable() const
{
    return m_enable;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<string> ModifyImageRegistryTimedScanTaskConfigRequest::GetScanType() const
{
    return m_scanType;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

ImageScanScheduleConfig ModifyImageRegistryTimedScanTaskConfigRequest::GetSchedule() const
{
    return m_schedule;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetSchedule(const ImageScanScheduleConfig& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

ImageScanAssetTarget ModifyImageRegistryTimedScanTaskConfigRequest::GetTarget() const
{
    return m_target;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetTarget(const ImageScanAssetTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

ImageScanRegistryFilter ModifyImageRegistryTimedScanTaskConfigRequest::GetFilter() const
{
    return m_filter;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetFilter(const ImageScanRegistryFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

uint64_t ModifyImageRegistryTimedScanTaskConfigRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyImageRegistryTimedScanTaskConfigRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyImageRegistryTimedScanTaskConfigRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}


