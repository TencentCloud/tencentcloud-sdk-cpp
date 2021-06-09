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

#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateRecordPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

UpdateRecordPlanRequest::UpdateRecordPlanRequest() :
    m_planIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeTemplateIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_isModifyDevicesHasBeenSet(false)
{
}

string UpdateRecordPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_isModifyDevicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModifyDevices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isModifyDevices, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRecordPlanRequest::GetPlanId() const
{
    return m_planId;
}

void UpdateRecordPlanRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool UpdateRecordPlanRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string UpdateRecordPlanRequest::GetName() const
{
    return m_name;
}

void UpdateRecordPlanRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateRecordPlanRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateRecordPlanRequest::GetTimeTemplateId() const
{
    return m_timeTemplateId;
}

void UpdateRecordPlanRequest::SetTimeTemplateId(const string& _timeTemplateId)
{
    m_timeTemplateId = _timeTemplateId;
    m_timeTemplateIdHasBeenSet = true;
}

bool UpdateRecordPlanRequest::TimeTemplateIdHasBeenSet() const
{
    return m_timeTemplateIdHasBeenSet;
}

int64_t UpdateRecordPlanRequest::GetEventId() const
{
    return m_eventId;
}

void UpdateRecordPlanRequest::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool UpdateRecordPlanRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<DeviceItem> UpdateRecordPlanRequest::GetDevices() const
{
    return m_devices;
}

void UpdateRecordPlanRequest::SetDevices(const vector<DeviceItem>& _devices)
{
    m_devices = _devices;
    m_devicesHasBeenSet = true;
}

bool UpdateRecordPlanRequest::DevicesHasBeenSet() const
{
    return m_devicesHasBeenSet;
}

int64_t UpdateRecordPlanRequest::GetIsModifyDevices() const
{
    return m_isModifyDevices;
}

void UpdateRecordPlanRequest::SetIsModifyDevices(const int64_t& _isModifyDevices)
{
    m_isModifyDevices = _isModifyDevices;
    m_isModifyDevicesHasBeenSet = true;
}

bool UpdateRecordPlanRequest::IsModifyDevicesHasBeenSet() const
{
    return m_isModifyDevicesHasBeenSet;
}


