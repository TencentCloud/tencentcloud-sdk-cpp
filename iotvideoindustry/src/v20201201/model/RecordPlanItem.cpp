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

#include <tencentcloud/iotvideoindustry/v20201201/model/RecordPlanItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

RecordPlanItem::RecordPlanItem() :
    m_planIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeTemplateIdHasBeenSet(false),
    m_timeTemplateNameHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_recordStorageTimeHasBeenSet(false)
{
}

CoreInternalOutcome RecordPlanItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanItem.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TimeTemplateId") && !value["TimeTemplateId"].IsNull())
    {
        if (!value["TimeTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanItem.TimeTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeTemplateId = string(value["TimeTemplateId"].GetString());
        m_timeTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("TimeTemplateName") && !value["TimeTemplateName"].IsNull())
    {
        if (!value["TimeTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanItem.TimeTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeTemplateName = string(value["TimeTemplateName"].GetString());
        m_timeTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanItem.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Devices") && !value["Devices"].IsNull())
    {
        if (!value["Devices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordPlanItem.Devices` is not array type"));

        const rapidjson::Value &tmpValue = value["Devices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_devices.push_back(item);
        }
        m_devicesHasBeenSet = true;
    }

    if (value.HasMember("RecordStorageTime") && !value["RecordStorageTime"].IsNull())
    {
        if (!value["RecordStorageTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanItem.RecordStorageTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStorageTime = value["RecordStorageTime"].GetInt64();
        m_recordStorageTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordPlanItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_devicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Devices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devices.begin(); itr != m_devices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recordStorageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStorageTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStorageTime, allocator);
    }

}


string RecordPlanItem::GetPlanId() const
{
    return m_planId;
}

void RecordPlanItem::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool RecordPlanItem::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string RecordPlanItem::GetName() const
{
    return m_name;
}

void RecordPlanItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RecordPlanItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecordPlanItem::GetTimeTemplateId() const
{
    return m_timeTemplateId;
}

void RecordPlanItem::SetTimeTemplateId(const string& _timeTemplateId)
{
    m_timeTemplateId = _timeTemplateId;
    m_timeTemplateIdHasBeenSet = true;
}

bool RecordPlanItem::TimeTemplateIdHasBeenSet() const
{
    return m_timeTemplateIdHasBeenSet;
}

string RecordPlanItem::GetTimeTemplateName() const
{
    return m_timeTemplateName;
}

void RecordPlanItem::SetTimeTemplateName(const string& _timeTemplateName)
{
    m_timeTemplateName = _timeTemplateName;
    m_timeTemplateNameHasBeenSet = true;
}

bool RecordPlanItem::TimeTemplateNameHasBeenSet() const
{
    return m_timeTemplateNameHasBeenSet;
}

int64_t RecordPlanItem::GetEventId() const
{
    return m_eventId;
}

void RecordPlanItem::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool RecordPlanItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<DeviceItem> RecordPlanItem::GetDevices() const
{
    return m_devices;
}

void RecordPlanItem::SetDevices(const vector<DeviceItem>& _devices)
{
    m_devices = _devices;
    m_devicesHasBeenSet = true;
}

bool RecordPlanItem::DevicesHasBeenSet() const
{
    return m_devicesHasBeenSet;
}

int64_t RecordPlanItem::GetRecordStorageTime() const
{
    return m_recordStorageTime;
}

void RecordPlanItem::SetRecordStorageTime(const int64_t& _recordStorageTime)
{
    m_recordStorageTime = _recordStorageTime;
    m_recordStorageTimeHasBeenSet = true;
}

bool RecordPlanItem::RecordStorageTimeHasBeenSet() const
{
    return m_recordStorageTimeHasBeenSet;
}

