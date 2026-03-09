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

#include <tencentcloud/tse/v20201207/model/GovernanceLaneRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceLaneRule::GovernanceLaneRule() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_laneGroupHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_trafficLabelsHasBeenSet(false),
    m_trafficMatchModeHasBeenSet(false),
    m_laneMatchModeHasBeenSet(false),
    m_trafficGrayHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_laneLabelValueHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_enableTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceLaneRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LaneGroup") && !value["LaneGroup"].IsNull())
    {
        if (!value["LaneGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.LaneGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneGroup = string(value["LaneGroup"].GetString());
        m_laneGroupHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("TrafficLabels") && !value["TrafficLabels"].IsNull())
    {
        if (!value["TrafficLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.TrafficLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["TrafficLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Argument item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trafficLabels.push_back(item);
        }
        m_trafficLabelsHasBeenSet = true;
    }

    if (value.HasMember("TrafficMatchMode") && !value["TrafficMatchMode"].IsNull())
    {
        if (!value["TrafficMatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.TrafficMatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMatchMode = string(value["TrafficMatchMode"].GetString());
        m_trafficMatchModeHasBeenSet = true;
    }

    if (value.HasMember("LaneMatchMode") && !value["LaneMatchMode"].IsNull())
    {
        if (!value["LaneMatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.LaneMatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneMatchMode = string(value["LaneMatchMode"].GetString());
        m_laneMatchModeHasBeenSet = true;
    }

    if (value.HasMember("TrafficGray") && !value["TrafficGray"].IsNull())
    {
        if (!value["TrafficGray"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.TrafficGray` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trafficGray.Deserialize(value["TrafficGray"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trafficGrayHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LaneLabelValue") && !value["LaneLabelValue"].IsNull())
    {
        if (!value["LaneLabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.LaneLabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneLabelValue = string(value["LaneLabelValue"].GetString());
        m_laneLabelValueHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableTime") && !value["EnableTime"].IsNull())
    {
        if (!value["EnableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.EnableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableTime = string(value["EnableTime"].GetString());
        m_enableTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceLaneRule.Revision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revision = string(value["Revision"].GetString());
        m_revisionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceLaneRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_laneGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_trafficLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trafficLabels.begin(); itr != m_trafficLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_trafficMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMatchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_laneMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneMatchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficGrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficGray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trafficGray.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_laneLabelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneLabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneLabelValue.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revision.c_str(), allocator).Move(), allocator);
    }

}


string GovernanceLaneRule::GetID() const
{
    return m_iD;
}

void GovernanceLaneRule::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GovernanceLaneRule::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string GovernanceLaneRule::GetName() const
{
    return m_name;
}

void GovernanceLaneRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GovernanceLaneRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GovernanceLaneRule::GetLaneGroup() const
{
    return m_laneGroup;
}

void GovernanceLaneRule::SetLaneGroup(const string& _laneGroup)
{
    m_laneGroup = _laneGroup;
    m_laneGroupHasBeenSet = true;
}

bool GovernanceLaneRule::LaneGroupHasBeenSet() const
{
    return m_laneGroupHasBeenSet;
}

bool GovernanceLaneRule::GetEnable() const
{
    return m_enable;
}

void GovernanceLaneRule::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool GovernanceLaneRule::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<Argument> GovernanceLaneRule::GetTrafficLabels() const
{
    return m_trafficLabels;
}

void GovernanceLaneRule::SetTrafficLabels(const vector<Argument>& _trafficLabels)
{
    m_trafficLabels = _trafficLabels;
    m_trafficLabelsHasBeenSet = true;
}

bool GovernanceLaneRule::TrafficLabelsHasBeenSet() const
{
    return m_trafficLabelsHasBeenSet;
}

string GovernanceLaneRule::GetTrafficMatchMode() const
{
    return m_trafficMatchMode;
}

void GovernanceLaneRule::SetTrafficMatchMode(const string& _trafficMatchMode)
{
    m_trafficMatchMode = _trafficMatchMode;
    m_trafficMatchModeHasBeenSet = true;
}

bool GovernanceLaneRule::TrafficMatchModeHasBeenSet() const
{
    return m_trafficMatchModeHasBeenSet;
}

string GovernanceLaneRule::GetLaneMatchMode() const
{
    return m_laneMatchMode;
}

void GovernanceLaneRule::SetLaneMatchMode(const string& _laneMatchMode)
{
    m_laneMatchMode = _laneMatchMode;
    m_laneMatchModeHasBeenSet = true;
}

bool GovernanceLaneRule::LaneMatchModeHasBeenSet() const
{
    return m_laneMatchModeHasBeenSet;
}

TrafficGray GovernanceLaneRule::GetTrafficGray() const
{
    return m_trafficGray;
}

void GovernanceLaneRule::SetTrafficGray(const TrafficGray& _trafficGray)
{
    m_trafficGray = _trafficGray;
    m_trafficGrayHasBeenSet = true;
}

bool GovernanceLaneRule::TrafficGrayHasBeenSet() const
{
    return m_trafficGrayHasBeenSet;
}

string GovernanceLaneRule::GetDescription() const
{
    return m_description;
}

void GovernanceLaneRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GovernanceLaneRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GovernanceLaneRule::GetLaneLabelValue() const
{
    return m_laneLabelValue;
}

void GovernanceLaneRule::SetLaneLabelValue(const string& _laneLabelValue)
{
    m_laneLabelValue = _laneLabelValue;
    m_laneLabelValueHasBeenSet = true;
}

bool GovernanceLaneRule::LaneLabelValueHasBeenSet() const
{
    return m_laneLabelValueHasBeenSet;
}

string GovernanceLaneRule::GetCreateTime() const
{
    return m_createTime;
}

void GovernanceLaneRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GovernanceLaneRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GovernanceLaneRule::GetEnableTime() const
{
    return m_enableTime;
}

void GovernanceLaneRule::SetEnableTime(const string& _enableTime)
{
    m_enableTime = _enableTime;
    m_enableTimeHasBeenSet = true;
}

bool GovernanceLaneRule::EnableTimeHasBeenSet() const
{
    return m_enableTimeHasBeenSet;
}

string GovernanceLaneRule::GetModifyTime() const
{
    return m_modifyTime;
}

void GovernanceLaneRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool GovernanceLaneRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t GovernanceLaneRule::GetPriority() const
{
    return m_priority;
}

void GovernanceLaneRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool GovernanceLaneRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string GovernanceLaneRule::GetRevision() const
{
    return m_revision;
}

void GovernanceLaneRule::SetRevision(const string& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool GovernanceLaneRule::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

