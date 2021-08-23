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

#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListAlarms.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeBasicAlarmListAlarms::DescribeBasicAlarmListAlarms() :
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_alarmStatusHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_firstOccurTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_lastOccurTimeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_objNameHasBeenSet(false),
    m_objIdHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_metricIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_notifyWayHasBeenSet(false),
    m_instanceGroupHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBasicAlarmListAlarms::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AlarmStatus") && !value["AlarmStatus"].IsNull())
    {
        if (!value["AlarmStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.AlarmStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmStatus = string(value["AlarmStatus"].GetString());
        m_alarmStatusHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("FirstOccurTime") && !value["FirstOccurTime"].IsNull())
    {
        if (!value["FirstOccurTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.FirstOccurTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstOccurTime = string(value["FirstOccurTime"].GetString());
        m_firstOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("LastOccurTime") && !value["LastOccurTime"].IsNull())
    {
        if (!value["LastOccurTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.LastOccurTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOccurTime = string(value["LastOccurTime"].GetString());
        m_lastOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ObjName") && !value["ObjName"].IsNull())
    {
        if (!value["ObjName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.ObjName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objName = string(value["ObjName"].GetString());
        m_objNameHasBeenSet = true;
    }

    if (value.HasMember("ObjId") && !value["ObjId"].IsNull())
    {
        if (!value["ObjId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.ObjId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objId = string(value["ObjId"].GetString());
        m_objIdHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("Vpc") && !value["Vpc"].IsNull())
    {
        if (!value["Vpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.Vpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpc = string(value["Vpc"].GetString());
        m_vpcHasBeenSet = true;
    }

    if (value.HasMember("MetricId") && !value["MetricId"].IsNull())
    {
        if (!value["MetricId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.MetricId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricId = value["MetricId"].GetInt64();
        m_metricIdHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.AlarmType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = value["AlarmType"].GetInt64();
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.Dimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensions = string(value["Dimensions"].GetString());
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("NotifyWay") && !value["NotifyWay"].IsNull())
    {
        if (!value["NotifyWay"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.NotifyWay` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyWay"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notifyWay.push_back((*itr).GetString());
        }
        m_notifyWayHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroup") && !value["InstanceGroup"].IsNull())
    {
        if (!value["InstanceGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBasicAlarmListAlarms.InstanceGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceGroup.push_back(item);
        }
        m_instanceGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBasicAlarmListAlarms::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstOccurTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstOccurTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_lastOccurTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOccurTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_objNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objName.c_str(), allocator).Move(), allocator);
    }

    if (m_objIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objId.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpc.c_str(), allocator).Move(), allocator);
    }

    if (m_metricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricId, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmType, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notifyWay.begin(); itr != m_notifyWay.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceGroup.begin(); itr != m_instanceGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DescribeBasicAlarmListAlarms::GetId() const
{
    return m_id;
}

void DescribeBasicAlarmListAlarms::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DescribeBasicAlarmListAlarms::GetProjectId() const
{
    return m_projectId;
}

void DescribeBasicAlarmListAlarms::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetProjectName() const
{
    return m_projectName;
}

void DescribeBasicAlarmListAlarms::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t DescribeBasicAlarmListAlarms::GetStatus() const
{
    return m_status;
}

void DescribeBasicAlarmListAlarms::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void DescribeBasicAlarmListAlarms::SetAlarmStatus(const string& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

int64_t DescribeBasicAlarmListAlarms::GetGroupId() const
{
    return m_groupId;
}

void DescribeBasicAlarmListAlarms::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetGroupName() const
{
    return m_groupName;
}

void DescribeBasicAlarmListAlarms::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetFirstOccurTime() const
{
    return m_firstOccurTime;
}

void DescribeBasicAlarmListAlarms::SetFirstOccurTime(const string& _firstOccurTime)
{
    m_firstOccurTime = _firstOccurTime;
    m_firstOccurTimeHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::FirstOccurTimeHasBeenSet() const
{
    return m_firstOccurTimeHasBeenSet;
}

int64_t DescribeBasicAlarmListAlarms::GetDuration() const
{
    return m_duration;
}

void DescribeBasicAlarmListAlarms::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetLastOccurTime() const
{
    return m_lastOccurTime;
}

void DescribeBasicAlarmListAlarms::SetLastOccurTime(const string& _lastOccurTime)
{
    m_lastOccurTime = _lastOccurTime;
    m_lastOccurTimeHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::LastOccurTimeHasBeenSet() const
{
    return m_lastOccurTimeHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetContent() const
{
    return m_content;
}

void DescribeBasicAlarmListAlarms::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetObjName() const
{
    return m_objName;
}

void DescribeBasicAlarmListAlarms::SetObjName(const string& _objName)
{
    m_objName = _objName;
    m_objNameHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::ObjNameHasBeenSet() const
{
    return m_objNameHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetObjId() const
{
    return m_objId;
}

void DescribeBasicAlarmListAlarms::SetObjId(const string& _objId)
{
    m_objId = _objId;
    m_objIdHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::ObjIdHasBeenSet() const
{
    return m_objIdHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetViewName() const
{
    return m_viewName;
}

void DescribeBasicAlarmListAlarms::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetVpc() const
{
    return m_vpc;
}

void DescribeBasicAlarmListAlarms::SetVpc(const string& _vpc)
{
    m_vpc = _vpc;
    m_vpcHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::VpcHasBeenSet() const
{
    return m_vpcHasBeenSet;
}

int64_t DescribeBasicAlarmListAlarms::GetMetricId() const
{
    return m_metricId;
}

void DescribeBasicAlarmListAlarms::SetMetricId(const int64_t& _metricId)
{
    m_metricId = _metricId;
    m_metricIdHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::MetricIdHasBeenSet() const
{
    return m_metricIdHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetMetricName() const
{
    return m_metricName;
}

void DescribeBasicAlarmListAlarms::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

int64_t DescribeBasicAlarmListAlarms::GetAlarmType() const
{
    return m_alarmType;
}

void DescribeBasicAlarmListAlarms::SetAlarmType(const int64_t& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetRegion() const
{
    return m_region;
}

void DescribeBasicAlarmListAlarms::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeBasicAlarmListAlarms::GetDimensions() const
{
    return m_dimensions;
}

void DescribeBasicAlarmListAlarms::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

vector<string> DescribeBasicAlarmListAlarms::GetNotifyWay() const
{
    return m_notifyWay;
}

void DescribeBasicAlarmListAlarms::SetNotifyWay(const vector<string>& _notifyWay)
{
    m_notifyWay = _notifyWay;
    m_notifyWayHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::NotifyWayHasBeenSet() const
{
    return m_notifyWayHasBeenSet;
}

vector<InstanceGroup> DescribeBasicAlarmListAlarms::GetInstanceGroup() const
{
    return m_instanceGroup;
}

void DescribeBasicAlarmListAlarms::SetInstanceGroup(const vector<InstanceGroup>& _instanceGroup)
{
    m_instanceGroup = _instanceGroup;
    m_instanceGroupHasBeenSet = true;
}

bool DescribeBasicAlarmListAlarms::InstanceGroupHasBeenSet() const
{
    return m_instanceGroupHasBeenSet;
}

