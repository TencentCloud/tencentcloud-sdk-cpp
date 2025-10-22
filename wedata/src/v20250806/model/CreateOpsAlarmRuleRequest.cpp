/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/CreateOpsAlarmRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateOpsAlarmRuleRequest::CreateOpsAlarmRuleRequest() :
    m_projectIdHasBeenSet(false),
    m_alarmRuleNameHasBeenSet(false),
    m_monitorObjectIdsHasBeenSet(false),
    m_alarmTypesHasBeenSet(false),
    m_alarmGroupsHasBeenSet(false),
    m_monitorObjectTypeHasBeenSet(false),
    m_alarmRuleDetailHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateOpsAlarmRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorObjectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monitorObjectIds.begin(); itr != m_monitorObjectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmTypes.begin(); itr != m_alarmTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmGroups.begin(); itr != m_alarmGroups.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_monitorObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorObjectType, allocator);
    }

    if (m_alarmRuleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarmRuleDetail.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOpsAlarmRuleRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateOpsAlarmRuleRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateOpsAlarmRuleRequest::GetAlarmRuleName() const
{
    return m_alarmRuleName;
}

void CreateOpsAlarmRuleRequest::SetAlarmRuleName(const string& _alarmRuleName)
{
    m_alarmRuleName = _alarmRuleName;
    m_alarmRuleNameHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::AlarmRuleNameHasBeenSet() const
{
    return m_alarmRuleNameHasBeenSet;
}

vector<string> CreateOpsAlarmRuleRequest::GetMonitorObjectIds() const
{
    return m_monitorObjectIds;
}

void CreateOpsAlarmRuleRequest::SetMonitorObjectIds(const vector<string>& _monitorObjectIds)
{
    m_monitorObjectIds = _monitorObjectIds;
    m_monitorObjectIdsHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::MonitorObjectIdsHasBeenSet() const
{
    return m_monitorObjectIdsHasBeenSet;
}

vector<string> CreateOpsAlarmRuleRequest::GetAlarmTypes() const
{
    return m_alarmTypes;
}

void CreateOpsAlarmRuleRequest::SetAlarmTypes(const vector<string>& _alarmTypes)
{
    m_alarmTypes = _alarmTypes;
    m_alarmTypesHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::AlarmTypesHasBeenSet() const
{
    return m_alarmTypesHasBeenSet;
}

vector<AlarmGroup> CreateOpsAlarmRuleRequest::GetAlarmGroups() const
{
    return m_alarmGroups;
}

void CreateOpsAlarmRuleRequest::SetAlarmGroups(const vector<AlarmGroup>& _alarmGroups)
{
    m_alarmGroups = _alarmGroups;
    m_alarmGroupsHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::AlarmGroupsHasBeenSet() const
{
    return m_alarmGroupsHasBeenSet;
}

uint64_t CreateOpsAlarmRuleRequest::GetMonitorObjectType() const
{
    return m_monitorObjectType;
}

void CreateOpsAlarmRuleRequest::SetMonitorObjectType(const uint64_t& _monitorObjectType)
{
    m_monitorObjectType = _monitorObjectType;
    m_monitorObjectTypeHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::MonitorObjectTypeHasBeenSet() const
{
    return m_monitorObjectTypeHasBeenSet;
}

AlarmRuleDetail CreateOpsAlarmRuleRequest::GetAlarmRuleDetail() const
{
    return m_alarmRuleDetail;
}

void CreateOpsAlarmRuleRequest::SetAlarmRuleDetail(const AlarmRuleDetail& _alarmRuleDetail)
{
    m_alarmRuleDetail = _alarmRuleDetail;
    m_alarmRuleDetailHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::AlarmRuleDetailHasBeenSet() const
{
    return m_alarmRuleDetailHasBeenSet;
}

int64_t CreateOpsAlarmRuleRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void CreateOpsAlarmRuleRequest::SetAlarmLevel(const int64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string CreateOpsAlarmRuleRequest::GetDescription() const
{
    return m_description;
}

void CreateOpsAlarmRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateOpsAlarmRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


