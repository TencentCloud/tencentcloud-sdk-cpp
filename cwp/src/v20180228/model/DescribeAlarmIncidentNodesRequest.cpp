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

#include <tencentcloud/cwp/v20180228/model/DescribeAlarmIncidentNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeAlarmIncidentNodesRequest::DescribeAlarmIncidentNodesRequest() :
    m_uuidHasBeenSet(false),
    m_alarmVidHasBeenSet(false),
    m_alarmTimeHasBeenSet(false),
    m_tableIdHasBeenSet(false)
{
}

string DescribeAlarmIncidentNodesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmVidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmVid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmVid.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmTime, allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tableId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmIncidentNodesRequest::GetUuid() const
{
    return m_uuid;
}

void DescribeAlarmIncidentNodesRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DescribeAlarmIncidentNodesRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string DescribeAlarmIncidentNodesRequest::GetAlarmVid() const
{
    return m_alarmVid;
}

void DescribeAlarmIncidentNodesRequest::SetAlarmVid(const string& _alarmVid)
{
    m_alarmVid = _alarmVid;
    m_alarmVidHasBeenSet = true;
}

bool DescribeAlarmIncidentNodesRequest::AlarmVidHasBeenSet() const
{
    return m_alarmVidHasBeenSet;
}

int64_t DescribeAlarmIncidentNodesRequest::GetAlarmTime() const
{
    return m_alarmTime;
}

void DescribeAlarmIncidentNodesRequest::SetAlarmTime(const int64_t& _alarmTime)
{
    m_alarmTime = _alarmTime;
    m_alarmTimeHasBeenSet = true;
}

bool DescribeAlarmIncidentNodesRequest::AlarmTimeHasBeenSet() const
{
    return m_alarmTimeHasBeenSet;
}

int64_t DescribeAlarmIncidentNodesRequest::GetTableId() const
{
    return m_tableId;
}

void DescribeAlarmIncidentNodesRequest::SetTableId(const int64_t& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DescribeAlarmIncidentNodesRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}


