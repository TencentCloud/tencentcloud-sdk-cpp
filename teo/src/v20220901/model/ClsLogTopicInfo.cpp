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

#include <tencentcloud/teo/v20220901/model/ClsLogTopicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ClsLogTopicInfo::ClsLogTopicInfo() :
    m_taskNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_logSetRegionHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_logSetTypeHasBeenSet(false)
{
}

CoreInternalOutcome ClsLogTopicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("EntityType") && !value["EntityType"].IsNull())
    {
        if (!value["EntityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.EntityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityType = string(value["EntityType"].GetString());
        m_entityTypeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.Deleted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = string(value["Deleted"].GetString());
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("LogSetRegion") && !value["LogSetRegion"].IsNull())
    {
        if (!value["LogSetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.LogSetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetRegion = string(value["LogSetRegion"].GetString());
        m_logSetRegionHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("LogSetType") && !value["LogSetType"].IsNull())
    {
        if (!value["LogSetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogTopicInfo.LogSetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetType = string(value["LogSetType"].GetString());
        m_logSetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClsLogTopicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleted.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetType.c_str(), allocator).Move(), allocator);
    }

}


string ClsLogTopicInfo::GetTaskName() const
{
    return m_taskName;
}

void ClsLogTopicInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ClsLogTopicInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ClsLogTopicInfo::GetZoneName() const
{
    return m_zoneName;
}

void ClsLogTopicInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ClsLogTopicInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string ClsLogTopicInfo::GetLogSetId() const
{
    return m_logSetId;
}

void ClsLogTopicInfo::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool ClsLogTopicInfo::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string ClsLogTopicInfo::GetTopicId() const
{
    return m_topicId;
}

void ClsLogTopicInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ClsLogTopicInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ClsLogTopicInfo::GetEntityType() const
{
    return m_entityType;
}

void ClsLogTopicInfo::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool ClsLogTopicInfo::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

int64_t ClsLogTopicInfo::GetPeriod() const
{
    return m_period;
}

void ClsLogTopicInfo::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ClsLogTopicInfo::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

bool ClsLogTopicInfo::GetEnabled() const
{
    return m_enabled;
}

void ClsLogTopicInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ClsLogTopicInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ClsLogTopicInfo::GetDeleted() const
{
    return m_deleted;
}

void ClsLogTopicInfo::SetDeleted(const string& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool ClsLogTopicInfo::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string ClsLogTopicInfo::GetCreateTime() const
{
    return m_createTime;
}

void ClsLogTopicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClsLogTopicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClsLogTopicInfo::GetTarget() const
{
    return m_target;
}

void ClsLogTopicInfo::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ClsLogTopicInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string ClsLogTopicInfo::GetLogSetRegion() const
{
    return m_logSetRegion;
}

void ClsLogTopicInfo::SetLogSetRegion(const string& _logSetRegion)
{
    m_logSetRegion = _logSetRegion;
    m_logSetRegionHasBeenSet = true;
}

bool ClsLogTopicInfo::LogSetRegionHasBeenSet() const
{
    return m_logSetRegionHasBeenSet;
}

string ClsLogTopicInfo::GetZoneId() const
{
    return m_zoneId;
}

void ClsLogTopicInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ClsLogTopicInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ClsLogTopicInfo::GetArea() const
{
    return m_area;
}

void ClsLogTopicInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ClsLogTopicInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string ClsLogTopicInfo::GetLogSetType() const
{
    return m_logSetType;
}

void ClsLogTopicInfo::SetLogSetType(const string& _logSetType)
{
    m_logSetType = _logSetType;
    m_logSetTypeHasBeenSet = true;
}

bool ClsLogTopicInfo::LogSetTypeHasBeenSet() const
{
    return m_logSetTypeHasBeenSet;
}

