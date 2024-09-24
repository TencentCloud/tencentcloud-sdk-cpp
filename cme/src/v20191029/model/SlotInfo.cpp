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

#include <tencentcloud/cme/v20191029/model/SlotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

SlotInfo::SlotInfo() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultMaterialIdHasBeenSet(false),
    m_defaultTextSlotInfoHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome SlotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DefaultMaterialId") && !value["DefaultMaterialId"].IsNull())
    {
        if (!value["DefaultMaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.DefaultMaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultMaterialId = string(value["DefaultMaterialId"].GetString());
        m_defaultMaterialIdHasBeenSet = true;
    }

    if (value.HasMember("DefaultTextSlotInfo") && !value["DefaultTextSlotInfo"].IsNull())
    {
        if (!value["DefaultTextSlotInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.DefaultTextSlotInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultTextSlotInfo.Deserialize(value["DefaultTextSlotInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultTextSlotInfoHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultMaterialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultMaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultMaterialId.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultTextSlotInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTextSlotInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultTextSlotInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

}


int64_t SlotInfo::GetId() const
{
    return m_id;
}

void SlotInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SlotInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SlotInfo::GetType() const
{
    return m_type;
}

void SlotInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SlotInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SlotInfo::GetDefaultMaterialId() const
{
    return m_defaultMaterialId;
}

void SlotInfo::SetDefaultMaterialId(const string& _defaultMaterialId)
{
    m_defaultMaterialId = _defaultMaterialId;
    m_defaultMaterialIdHasBeenSet = true;
}

bool SlotInfo::DefaultMaterialIdHasBeenSet() const
{
    return m_defaultMaterialIdHasBeenSet;
}

TextSlotInfo SlotInfo::GetDefaultTextSlotInfo() const
{
    return m_defaultTextSlotInfo;
}

void SlotInfo::SetDefaultTextSlotInfo(const TextSlotInfo& _defaultTextSlotInfo)
{
    m_defaultTextSlotInfo = _defaultTextSlotInfo;
    m_defaultTextSlotInfoHasBeenSet = true;
}

bool SlotInfo::DefaultTextSlotInfoHasBeenSet() const
{
    return m_defaultTextSlotInfoHasBeenSet;
}

double SlotInfo::GetDuration() const
{
    return m_duration;
}

void SlotInfo::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SlotInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double SlotInfo::GetStartTime() const
{
    return m_startTime;
}

void SlotInfo::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SlotInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

