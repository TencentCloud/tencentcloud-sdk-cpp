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

#include <tencentcloud/cls/v20201016/model/AlertHistoryRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlertHistoryRecord::AlertHistoryRecord() :
    m_recordIdHasBeenSet(false),
    m_alarmIdHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_triggerCountHasBeenSet(false),
    m_alarmPeriodHasBeenSet(false),
    m_noticesHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupTriggerConditionHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_monitorObjectTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlertHistoryRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmName") && !value["AlarmName"].IsNull())
    {
        if (!value["AlarmName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.AlarmName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmName = string(value["AlarmName"].GetString());
        m_alarmNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Trigger") && !value["Trigger"].IsNull())
    {
        if (!value["Trigger"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.Trigger` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trigger = string(value["Trigger"].GetString());
        m_triggerHasBeenSet = true;
    }

    if (value.HasMember("TriggerCount") && !value["TriggerCount"].IsNull())
    {
        if (!value["TriggerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.TriggerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCount = value["TriggerCount"].GetInt64();
        m_triggerCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmPeriod") && !value["AlarmPeriod"].IsNull())
    {
        if (!value["AlarmPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.AlarmPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmPeriod = value["AlarmPeriod"].GetInt64();
        m_alarmPeriodHasBeenSet = true;
    }

    if (value.HasMember("Notices") && !value["Notices"].IsNull())
    {
        if (!value["Notices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.Notices` is not array type"));

        const rapidjson::Value &tmpValue = value["Notices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlertHistoryNotice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notices.push_back(item);
        }
        m_noticesHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupTriggerCondition") && !value["GroupTriggerCondition"].IsNull())
    {
        if (!value["GroupTriggerCondition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.GroupTriggerCondition` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupTriggerCondition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupTriggerConditionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupTriggerCondition.push_back(item);
        }
        m_groupTriggerConditionHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("MonitorObjectType") && !value["MonitorObjectType"].IsNull())
    {
        if (!value["MonitorObjectType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryRecord.MonitorObjectType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorObjectType = value["MonitorObjectType"].GetUint64();
        m_monitorObjectTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertHistoryRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmName.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trigger.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerCount, allocator);
    }

    if (m_alarmPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmPeriod, allocator);
    }

    if (m_noticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notices.begin(); itr != m_notices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_groupTriggerConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTriggerCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupTriggerCondition.begin(); itr != m_groupTriggerCondition.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_monitorObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorObjectType, allocator);
    }

}


string AlertHistoryRecord::GetRecordId() const
{
    return m_recordId;
}

void AlertHistoryRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool AlertHistoryRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string AlertHistoryRecord::GetAlarmId() const
{
    return m_alarmId;
}

void AlertHistoryRecord::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlertHistoryRecord::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlertHistoryRecord::GetAlarmName() const
{
    return m_alarmName;
}

void AlertHistoryRecord::SetAlarmName(const string& _alarmName)
{
    m_alarmName = _alarmName;
    m_alarmNameHasBeenSet = true;
}

bool AlertHistoryRecord::AlarmNameHasBeenSet() const
{
    return m_alarmNameHasBeenSet;
}

string AlertHistoryRecord::GetTopicId() const
{
    return m_topicId;
}

void AlertHistoryRecord::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool AlertHistoryRecord::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string AlertHistoryRecord::GetTopicName() const
{
    return m_topicName;
}

void AlertHistoryRecord::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool AlertHistoryRecord::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string AlertHistoryRecord::GetRegion() const
{
    return m_region;
}

void AlertHistoryRecord::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AlertHistoryRecord::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AlertHistoryRecord::GetTrigger() const
{
    return m_trigger;
}

void AlertHistoryRecord::SetTrigger(const string& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool AlertHistoryRecord::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

int64_t AlertHistoryRecord::GetTriggerCount() const
{
    return m_triggerCount;
}

void AlertHistoryRecord::SetTriggerCount(const int64_t& _triggerCount)
{
    m_triggerCount = _triggerCount;
    m_triggerCountHasBeenSet = true;
}

bool AlertHistoryRecord::TriggerCountHasBeenSet() const
{
    return m_triggerCountHasBeenSet;
}

int64_t AlertHistoryRecord::GetAlarmPeriod() const
{
    return m_alarmPeriod;
}

void AlertHistoryRecord::SetAlarmPeriod(const int64_t& _alarmPeriod)
{
    m_alarmPeriod = _alarmPeriod;
    m_alarmPeriodHasBeenSet = true;
}

bool AlertHistoryRecord::AlarmPeriodHasBeenSet() const
{
    return m_alarmPeriodHasBeenSet;
}

vector<AlertHistoryNotice> AlertHistoryRecord::GetNotices() const
{
    return m_notices;
}

void AlertHistoryRecord::SetNotices(const vector<AlertHistoryNotice>& _notices)
{
    m_notices = _notices;
    m_noticesHasBeenSet = true;
}

bool AlertHistoryRecord::NoticesHasBeenSet() const
{
    return m_noticesHasBeenSet;
}

int64_t AlertHistoryRecord::GetDuration() const
{
    return m_duration;
}

void AlertHistoryRecord::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AlertHistoryRecord::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t AlertHistoryRecord::GetStatus() const
{
    return m_status;
}

void AlertHistoryRecord::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlertHistoryRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AlertHistoryRecord::GetCreateTime() const
{
    return m_createTime;
}

void AlertHistoryRecord::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlertHistoryRecord::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<GroupTriggerConditionInfo> AlertHistoryRecord::GetGroupTriggerCondition() const
{
    return m_groupTriggerCondition;
}

void AlertHistoryRecord::SetGroupTriggerCondition(const vector<GroupTriggerConditionInfo>& _groupTriggerCondition)
{
    m_groupTriggerCondition = _groupTriggerCondition;
    m_groupTriggerConditionHasBeenSet = true;
}

bool AlertHistoryRecord::GroupTriggerConditionHasBeenSet() const
{
    return m_groupTriggerConditionHasBeenSet;
}

uint64_t AlertHistoryRecord::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AlertHistoryRecord::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AlertHistoryRecord::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

uint64_t AlertHistoryRecord::GetMonitorObjectType() const
{
    return m_monitorObjectType;
}

void AlertHistoryRecord::SetMonitorObjectType(const uint64_t& _monitorObjectType)
{
    m_monitorObjectType = _monitorObjectType;
    m_monitorObjectTypeHasBeenSet = true;
}

bool AlertHistoryRecord::MonitorObjectTypeHasBeenSet() const
{
    return m_monitorObjectTypeHasBeenSet;
}

