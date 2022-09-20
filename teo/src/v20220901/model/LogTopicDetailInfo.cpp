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

#include <tencentcloud/teo/v20220901/model/LogTopicDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

LogTopicDetailInfo::LogTopicDetailInfo() :
    m_taskNameHasBeenSet(false),
    m_logSetRegionHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_entityListHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_logSetNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_deletedHasBeenSet(false)
{
}

CoreInternalOutcome LogTopicDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("LogSetRegion") && !value["LogSetRegion"].IsNull())
    {
        if (!value["LogSetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.LogSetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetRegion = string(value["LogSetRegion"].GetString());
        m_logSetRegionHasBeenSet = true;
    }

    if (value.HasMember("EntityType") && !value["EntityType"].IsNull())
    {
        if (!value["EntityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.EntityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityType = string(value["EntityType"].GetString());
        m_entityTypeHasBeenSet = true;
    }

    if (value.HasMember("EntityList") && !value["EntityList"].IsNull())
    {
        if (!value["EntityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.EntityList` is not array type"));

        const rapidjson::Value &tmpValue = value["EntityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_entityList.push_back((*itr).GetString());
        }
        m_entityListHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("LogSetName") && !value["LogSetName"].IsNull())
    {
        if (!value["LogSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.LogSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetName = string(value["LogSetName"].GetString());
        m_logSetNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogTopicDetailInfo.Deleted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = string(value["Deleted"].GetString());
        m_deletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogTopicDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_entityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_entityList.begin(); itr != m_entityList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleted.c_str(), allocator).Move(), allocator);
    }

}


string LogTopicDetailInfo::GetTaskName() const
{
    return m_taskName;
}

void LogTopicDetailInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool LogTopicDetailInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string LogTopicDetailInfo::GetLogSetRegion() const
{
    return m_logSetRegion;
}

void LogTopicDetailInfo::SetLogSetRegion(const string& _logSetRegion)
{
    m_logSetRegion = _logSetRegion;
    m_logSetRegionHasBeenSet = true;
}

bool LogTopicDetailInfo::LogSetRegionHasBeenSet() const
{
    return m_logSetRegionHasBeenSet;
}

string LogTopicDetailInfo::GetEntityType() const
{
    return m_entityType;
}

void LogTopicDetailInfo::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool LogTopicDetailInfo::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

vector<string> LogTopicDetailInfo::GetEntityList() const
{
    return m_entityList;
}

void LogTopicDetailInfo::SetEntityList(const vector<string>& _entityList)
{
    m_entityList = _entityList;
    m_entityListHasBeenSet = true;
}

bool LogTopicDetailInfo::EntityListHasBeenSet() const
{
    return m_entityListHasBeenSet;
}

string LogTopicDetailInfo::GetLogSetId() const
{
    return m_logSetId;
}

void LogTopicDetailInfo::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool LogTopicDetailInfo::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string LogTopicDetailInfo::GetLogSetName() const
{
    return m_logSetName;
}

void LogTopicDetailInfo::SetLogSetName(const string& _logSetName)
{
    m_logSetName = _logSetName;
    m_logSetNameHasBeenSet = true;
}

bool LogTopicDetailInfo::LogSetNameHasBeenSet() const
{
    return m_logSetNameHasBeenSet;
}

string LogTopicDetailInfo::GetTopicId() const
{
    return m_topicId;
}

void LogTopicDetailInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogTopicDetailInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogTopicDetailInfo::GetTopicName() const
{
    return m_topicName;
}

void LogTopicDetailInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool LogTopicDetailInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t LogTopicDetailInfo::GetPeriod() const
{
    return m_period;
}

void LogTopicDetailInfo::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool LogTopicDetailInfo::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

bool LogTopicDetailInfo::GetEnabled() const
{
    return m_enabled;
}

void LogTopicDetailInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool LogTopicDetailInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string LogTopicDetailInfo::GetCreateTime() const
{
    return m_createTime;
}

void LogTopicDetailInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LogTopicDetailInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LogTopicDetailInfo::GetArea() const
{
    return m_area;
}

void LogTopicDetailInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool LogTopicDetailInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string LogTopicDetailInfo::GetZoneId() const
{
    return m_zoneId;
}

void LogTopicDetailInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool LogTopicDetailInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string LogTopicDetailInfo::GetZoneName() const
{
    return m_zoneName;
}

void LogTopicDetailInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool LogTopicDetailInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string LogTopicDetailInfo::GetDeleted() const
{
    return m_deleted;
}

void LogTopicDetailInfo::SetDeleted(const string& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool LogTopicDetailInfo::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

