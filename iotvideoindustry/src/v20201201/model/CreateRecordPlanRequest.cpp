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

#include <tencentcloud/iotvideoindustry/v20201201/model/CreateRecordPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

CreateRecordPlanRequest::CreateRecordPlanRequest() :
    m_nameHasBeenSet(false),
    m_timeTemplateIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_recordStorageTimeHasBeenSet(false)
{
}

string CreateRecordPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventId, allocator);
    }

    if (m_devicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Devices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devices.begin(); itr != m_devices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_recordStorageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStorageTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordStorageTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRecordPlanRequest::GetName() const
{
    return m_name;
}

void CreateRecordPlanRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRecordPlanRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRecordPlanRequest::GetTimeTemplateId() const
{
    return m_timeTemplateId;
}

void CreateRecordPlanRequest::SetTimeTemplateId(const string& _timeTemplateId)
{
    m_timeTemplateId = _timeTemplateId;
    m_timeTemplateIdHasBeenSet = true;
}

bool CreateRecordPlanRequest::TimeTemplateIdHasBeenSet() const
{
    return m_timeTemplateIdHasBeenSet;
}

int64_t CreateRecordPlanRequest::GetEventId() const
{
    return m_eventId;
}

void CreateRecordPlanRequest::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CreateRecordPlanRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<DeviceItem> CreateRecordPlanRequest::GetDevices() const
{
    return m_devices;
}

void CreateRecordPlanRequest::SetDevices(const vector<DeviceItem>& _devices)
{
    m_devices = _devices;
    m_devicesHasBeenSet = true;
}

bool CreateRecordPlanRequest::DevicesHasBeenSet() const
{
    return m_devicesHasBeenSet;
}

int64_t CreateRecordPlanRequest::GetRecordStorageTime() const
{
    return m_recordStorageTime;
}

void CreateRecordPlanRequest::SetRecordStorageTime(const int64_t& _recordStorageTime)
{
    m_recordStorageTime = _recordStorageTime;
    m_recordStorageTimeHasBeenSet = true;
}

bool CreateRecordPlanRequest::RecordStorageTimeHasBeenSet() const
{
    return m_recordStorageTimeHasBeenSet;
}


