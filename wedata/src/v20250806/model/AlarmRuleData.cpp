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

#include <tencentcloud/wedata/v20250806/model/AlarmRuleData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

AlarmRuleData::AlarmRuleData() :
    m_alarmRuleIdHasBeenSet(false),
    m_alarmRuleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_monitorObjectTypeHasBeenSet(false),
    m_monitorObjectIdsHasBeenSet(false),
    m_alarmTypesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_alarmRuleDetailHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_alarmGroupsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmRuleData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmRuleId") && !value["AlarmRuleId"].IsNull())
    {
        if (!value["AlarmRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.AlarmRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleId = string(value["AlarmRuleId"].GetString());
        m_alarmRuleIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmRuleName") && !value["AlarmRuleName"].IsNull())
    {
        if (!value["AlarmRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.AlarmRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleName = string(value["AlarmRuleName"].GetString());
        m_alarmRuleNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MonitorObjectType") && !value["MonitorObjectType"].IsNull())
    {
        if (!value["MonitorObjectType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.MonitorObjectType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorObjectType = value["MonitorObjectType"].GetInt64();
        m_monitorObjectTypeHasBeenSet = true;
    }

    if (value.HasMember("MonitorObjectIds") && !value["MonitorObjectIds"].IsNull())
    {
        if (!value["MonitorObjectIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.MonitorObjectIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MonitorObjectIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_monitorObjectIds.push_back((*itr).GetString());
        }
        m_monitorObjectIdsHasBeenSet = true;
    }

    if (value.HasMember("AlarmTypes") && !value["AlarmTypes"].IsNull())
    {
        if (!value["AlarmTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.AlarmTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmTypes.push_back((*itr).GetString());
        }
        m_alarmTypesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AlarmRuleDetail") && !value["AlarmRuleDetail"].IsNull())
    {
        if (!value["AlarmRuleDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.AlarmRuleDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alarmRuleDetail.Deserialize(value["AlarmRuleDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alarmRuleDetailHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.AlarmLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetInt64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }

    if (value.HasMember("AlarmGroups") && !value["AlarmGroups"].IsNull())
    {
        if (!value["AlarmGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmRuleData.AlarmGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmGroups.push_back(item);
        }
        m_alarmGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmRuleData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorObjectType, allocator);
    }

    if (m_monitorObjectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monitorObjectIds.begin(); itr != m_monitorObjectIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmTypes.begin(); itr != m_alarmTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_alarmRuleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarmRuleDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmGroups.begin(); itr != m_alarmGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AlarmRuleData::GetAlarmRuleId() const
{
    return m_alarmRuleId;
}

void AlarmRuleData::SetAlarmRuleId(const string& _alarmRuleId)
{
    m_alarmRuleId = _alarmRuleId;
    m_alarmRuleIdHasBeenSet = true;
}

bool AlarmRuleData::AlarmRuleIdHasBeenSet() const
{
    return m_alarmRuleIdHasBeenSet;
}

string AlarmRuleData::GetAlarmRuleName() const
{
    return m_alarmRuleName;
}

void AlarmRuleData::SetAlarmRuleName(const string& _alarmRuleName)
{
    m_alarmRuleName = _alarmRuleName;
    m_alarmRuleNameHasBeenSet = true;
}

bool AlarmRuleData::AlarmRuleNameHasBeenSet() const
{
    return m_alarmRuleNameHasBeenSet;
}

string AlarmRuleData::GetDescription() const
{
    return m_description;
}

void AlarmRuleData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AlarmRuleData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t AlarmRuleData::GetMonitorObjectType() const
{
    return m_monitorObjectType;
}

void AlarmRuleData::SetMonitorObjectType(const int64_t& _monitorObjectType)
{
    m_monitorObjectType = _monitorObjectType;
    m_monitorObjectTypeHasBeenSet = true;
}

bool AlarmRuleData::MonitorObjectTypeHasBeenSet() const
{
    return m_monitorObjectTypeHasBeenSet;
}

vector<string> AlarmRuleData::GetMonitorObjectIds() const
{
    return m_monitorObjectIds;
}

void AlarmRuleData::SetMonitorObjectIds(const vector<string>& _monitorObjectIds)
{
    m_monitorObjectIds = _monitorObjectIds;
    m_monitorObjectIdsHasBeenSet = true;
}

bool AlarmRuleData::MonitorObjectIdsHasBeenSet() const
{
    return m_monitorObjectIdsHasBeenSet;
}

vector<string> AlarmRuleData::GetAlarmTypes() const
{
    return m_alarmTypes;
}

void AlarmRuleData::SetAlarmTypes(const vector<string>& _alarmTypes)
{
    m_alarmTypes = _alarmTypes;
    m_alarmTypesHasBeenSet = true;
}

bool AlarmRuleData::AlarmTypesHasBeenSet() const
{
    return m_alarmTypesHasBeenSet;
}

int64_t AlarmRuleData::GetStatus() const
{
    return m_status;
}

void AlarmRuleData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmRuleData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

AlarmRuleDetail AlarmRuleData::GetAlarmRuleDetail() const
{
    return m_alarmRuleDetail;
}

void AlarmRuleData::SetAlarmRuleDetail(const AlarmRuleDetail& _alarmRuleDetail)
{
    m_alarmRuleDetail = _alarmRuleDetail;
    m_alarmRuleDetailHasBeenSet = true;
}

bool AlarmRuleData::AlarmRuleDetailHasBeenSet() const
{
    return m_alarmRuleDetailHasBeenSet;
}

int64_t AlarmRuleData::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void AlarmRuleData::SetAlarmLevel(const int64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool AlarmRuleData::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string AlarmRuleData::GetOwnerUin() const
{
    return m_ownerUin;
}

void AlarmRuleData::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool AlarmRuleData::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string AlarmRuleData::GetBundleId() const
{
    return m_bundleId;
}

void AlarmRuleData::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool AlarmRuleData::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string AlarmRuleData::GetBundleInfo() const
{
    return m_bundleInfo;
}

void AlarmRuleData::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool AlarmRuleData::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

vector<AlarmGroup> AlarmRuleData::GetAlarmGroups() const
{
    return m_alarmGroups;
}

void AlarmRuleData::SetAlarmGroups(const vector<AlarmGroup>& _alarmGroups)
{
    m_alarmGroups = _alarmGroups;
    m_alarmGroupsHasBeenSet = true;
}

bool AlarmRuleData::AlarmGroupsHasBeenSet() const
{
    return m_alarmGroupsHasBeenSet;
}

