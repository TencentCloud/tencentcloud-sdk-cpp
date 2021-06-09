/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/ModifyMaintainPeriodConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyMaintainPeriodConfigRequest::ModifyMaintainPeriodConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_maintainStartTimeHasBeenSet(false),
    m_maintainDurationHasBeenSet(false),
    m_maintainWeekDaysHasBeenSet(false)
{
}

string ModifyMaintainPeriodConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_maintainStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maintainStartTime, allocator);
    }

    if (m_maintainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maintainDuration, allocator);
    }

    if (m_maintainWeekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainWeekDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maintainWeekDays.begin(); itr != m_maintainWeekDays.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMaintainPeriodConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyMaintainPeriodConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyMaintainPeriodConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyMaintainPeriodConfigRequest::GetMaintainStartTime() const
{
    return m_maintainStartTime;
}

void ModifyMaintainPeriodConfigRequest::SetMaintainStartTime(const int64_t& _maintainStartTime)
{
    m_maintainStartTime = _maintainStartTime;
    m_maintainStartTimeHasBeenSet = true;
}

bool ModifyMaintainPeriodConfigRequest::MaintainStartTimeHasBeenSet() const
{
    return m_maintainStartTimeHasBeenSet;
}

int64_t ModifyMaintainPeriodConfigRequest::GetMaintainDuration() const
{
    return m_maintainDuration;
}

void ModifyMaintainPeriodConfigRequest::SetMaintainDuration(const int64_t& _maintainDuration)
{
    m_maintainDuration = _maintainDuration;
    m_maintainDurationHasBeenSet = true;
}

bool ModifyMaintainPeriodConfigRequest::MaintainDurationHasBeenSet() const
{
    return m_maintainDurationHasBeenSet;
}

vector<string> ModifyMaintainPeriodConfigRequest::GetMaintainWeekDays() const
{
    return m_maintainWeekDays;
}

void ModifyMaintainPeriodConfigRequest::SetMaintainWeekDays(const vector<string>& _maintainWeekDays)
{
    m_maintainWeekDays = _maintainWeekDays;
    m_maintainWeekDaysHasBeenSet = true;
}

bool ModifyMaintainPeriodConfigRequest::MaintainWeekDaysHasBeenSet() const
{
    return m_maintainWeekDaysHasBeenSet;
}


