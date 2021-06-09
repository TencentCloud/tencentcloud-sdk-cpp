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

#include <tencentcloud/sqlserver/v20180328/model/ModifyMaintenanceSpanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyMaintenanceSpanRequest::ModifyMaintenanceSpanRequest() :
    m_instanceIdHasBeenSet(false),
    m_weeklyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_spanHasBeenSet(false)
{
}

string ModifyMaintenanceSpanRequest::ToJsonString() const
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

    if (m_weeklyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekly.begin(); itr != m_weekly.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_spanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Span";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_span, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMaintenanceSpanRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyMaintenanceSpanRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyMaintenanceSpanRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<int64_t> ModifyMaintenanceSpanRequest::GetWeekly() const
{
    return m_weekly;
}

void ModifyMaintenanceSpanRequest::SetWeekly(const vector<int64_t>& _weekly)
{
    m_weekly = _weekly;
    m_weeklyHasBeenSet = true;
}

bool ModifyMaintenanceSpanRequest::WeeklyHasBeenSet() const
{
    return m_weeklyHasBeenSet;
}

string ModifyMaintenanceSpanRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyMaintenanceSpanRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyMaintenanceSpanRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t ModifyMaintenanceSpanRequest::GetSpan() const
{
    return m_span;
}

void ModifyMaintenanceSpanRequest::SetSpan(const uint64_t& _span)
{
    m_span = _span;
    m_spanHasBeenSet = true;
}

bool ModifyMaintenanceSpanRequest::SpanHasBeenSet() const
{
    return m_spanHasBeenSet;
}


